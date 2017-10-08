// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationCache.java
#include <org/apache/poi/ss/formula/EvaluationCache.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/EvaluationCache_updateAnyBlankReferencingFormulas_1.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCache.hpp>
#include <org/apache/poi/ss/formula/FormulaCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/FormulaUsedBlankCellSet_BookSheetKey.hpp>
#include <org/apache/poi/ss/formula/IEvaluationListener.hpp>
#include <org/apache/poi/ss/formula/PlainCellCache_Loc.hpp>
#include <org/apache/poi/ss/formula/PlainCellCache.hpp>
#include <org/apache/poi/ss/formula/PlainValueCellCacheEntry.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::EvaluationCache::EvaluationCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::EvaluationCache::EvaluationCache(IEvaluationListener* evaluationListener) 
    : EvaluationCache(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluationListener);
}

void poi::ss::formula::EvaluationCache::ctor(IEvaluationListener* evaluationListener)
{
    super::ctor();
    _evaluationListener = evaluationListener;
    _plainCellCache = new PlainCellCache();
    _formulaCellCache = new FormulaCellCache();
}

void poi::ss::formula::EvaluationCache::notifyUpdateCell(int32_t bookIndex, int32_t sheetIndex, EvaluationCell* cell)
{
    auto fcce = npc(_formulaCellCache)->get(cell);
    auto rowIndex = npc(cell)->getRowIndex();
    auto columnIndex = npc(cell)->getColumnIndex();
    auto loc = new PlainCellCache_Loc(bookIndex, sheetIndex, rowIndex, columnIndex);
    auto pcce = npc(_plainCellCache)->get(loc);
    if(npc(cell)->getCellTypeEnum() == ::poi::ss::usermodel::CellType::FORMULA) {
        if(fcce == nullptr) {
            fcce = new FormulaCellCacheEntry();
            if(pcce == nullptr) {
                if(_evaluationListener != nullptr) {
                    npc(_evaluationListener)->onChangeFromBlankValue(sheetIndex, rowIndex, columnIndex, cell, fcce);
                }
                updateAnyBlankReferencingFormulas(bookIndex, sheetIndex, rowIndex, columnIndex);
            }
            npc(_formulaCellCache)->put(cell, fcce);
        } else {
            npc(fcce)->recurseClearCachedFormulaResults(_evaluationListener);
            npc(fcce)->clearFormulaEntry();
        }
        if(pcce == nullptr) {
        } else {
            npc(pcce)->recurseClearCachedFormulaResults(_evaluationListener);
            npc(_plainCellCache)->remove(loc);
        }
    } else {
        auto value = WorkbookEvaluator::getValueFromNonFormulaCell(cell);
        if(pcce == nullptr) {
            if(value != static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
                pcce = new PlainValueCellCacheEntry(value);
                if(fcce == nullptr) {
                    if(_evaluationListener != nullptr) {
                        npc(_evaluationListener)->onChangeFromBlankValue(sheetIndex, rowIndex, columnIndex, cell, pcce);
                    }
                    updateAnyBlankReferencingFormulas(bookIndex, sheetIndex, rowIndex, columnIndex);
                }
                npc(_plainCellCache)->put(loc, pcce);
            }
        } else {
            if(npc(pcce)->updateValue(value)) {
                npc(pcce)->recurseClearCachedFormulaResults(_evaluationListener);
            }
            if(value == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
                npc(_plainCellCache)->remove(loc);
            }
        }
        if(fcce == nullptr) {
        } else {
            npc(_formulaCellCache)->remove(cell);
            npc(fcce)->setSensitiveInputCells(nullptr);
            npc(fcce)->recurseClearCachedFormulaResults(_evaluationListener);
        }
    }
}

void poi::ss::formula::EvaluationCache::updateAnyBlankReferencingFormulas(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex)
{
    auto const bsk = new FormulaUsedBlankCellSet_BookSheetKey(bookIndex, sheetIndex);
    npc(_formulaCellCache)->applyOperation(new EvaluationCache_updateAnyBlankReferencingFormulas_1(this, bsk, rowIndex, columnIndex));
}

poi::ss::formula::PlainValueCellCacheEntry* poi::ss::formula::EvaluationCache::getPlainValueEntry(int32_t bookIndex, int32_t sheetIndex, int32_t rowIndex, int32_t columnIndex, ::poi::ss::formula::eval::ValueEval* value)
{
    auto loc = new PlainCellCache_Loc(bookIndex, sheetIndex, rowIndex, columnIndex);
    auto result = npc(_plainCellCache)->get(loc);
    if(result == nullptr) {
        result = new PlainValueCellCacheEntry(value);
        npc(_plainCellCache)->put(loc, result);
        if(_evaluationListener != nullptr) {
            npc(_evaluationListener)->onReadPlainValue(sheetIndex, rowIndex, columnIndex, result);
        }
    } else {
        if(!areValuesEqual(npc(result)->getValue(), value)) {
            throw new ::java::lang::IllegalStateException(u"value changed"_j);
        }
        if(_evaluationListener != nullptr) {
            npc(_evaluationListener)->onCacheHit(sheetIndex, rowIndex, columnIndex, value);
        }
    }
    return result;
}

bool poi::ss::formula::EvaluationCache::areValuesEqual(::poi::ss::formula::eval::ValueEval* a, ::poi::ss::formula::eval::ValueEval* b)
{
    if(a == nullptr) {
        return false;
    }
    auto cls = npc(a)->getClass();
    if(static_cast< ::java::lang::Object* >(cls) != static_cast< ::java::lang::Object* >(npc(b)->getClass())) {
        return false;
    }
    if(a == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
        return b == a;
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::NumberEval::class_())) {
        return npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(a)))->getNumberValue() == npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(b)))->getNumberValue();
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::StringEval::class_())) {
        return npc(npc((java_cast< ::poi::ss::formula::eval::StringEval* >(a)))->getStringValue())->equals(static_cast< ::java::lang::Object* >(npc((java_cast< ::poi::ss::formula::eval::StringEval* >(b)))->getStringValue()));
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::BoolEval::class_())) {
        return npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(a)))->getBooleanValue() == npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(b)))->getBooleanValue();
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::poi::ss::formula::eval::ErrorEval::class_())) {
        return npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(a)))->getErrorCode() == npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(b)))->getErrorCode();
    }
    throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected value class ("_j)->append(npc(cls)->getName())
        ->append(u")"_j)->toString());
}

poi::ss::formula::FormulaCellCacheEntry* poi::ss::formula::EvaluationCache::getOrCreateFormulaCellEntry(EvaluationCell* cell)
{
    auto result = npc(_formulaCellCache)->get(cell);
    if(result == nullptr) {
        result = new FormulaCellCacheEntry();
        npc(_formulaCellCache)->put(cell, result);
    }
    return result;
}

void poi::ss::formula::EvaluationCache::clear()
{
    if(_evaluationListener != nullptr) {
        npc(_evaluationListener)->onClearWholeCache();
    }
    npc(_plainCellCache)->clear();
    npc(_formulaCellCache)->clear();
}

void poi::ss::formula::EvaluationCache::notifyDeleteCell(int32_t bookIndex, int32_t sheetIndex, EvaluationCell* cell)
{
    if(npc(cell)->getCellTypeEnum() == ::poi::ss::usermodel::CellType::FORMULA) {
        auto fcce = npc(_formulaCellCache)->remove(cell);
        if(fcce == nullptr) {
        } else {
            npc(fcce)->setSensitiveInputCells(nullptr);
            npc(fcce)->recurseClearCachedFormulaResults(_evaluationListener);
        }
    } else {
        auto loc = new PlainCellCache_Loc(bookIndex, sheetIndex, npc(cell)->getRowIndex(), npc(cell)->getColumnIndex());
        auto pcce = npc(_plainCellCache)->get(loc);
        if(pcce == nullptr) {
        } else {
            npc(pcce)->recurseClearCachedFormulaResults(_evaluationListener);
        }
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationCache", 41);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationCache::getClass0()
{
    return class_();
}

