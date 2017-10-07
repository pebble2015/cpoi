// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluationCell.java
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationCell.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationSheet.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationSheet.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
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

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::ForkedEvaluationCell(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::ForkedEvaluationCell(ForkedEvaluationSheet* sheet, ::org::apache::poi::ss::formula::EvaluationCell* masterCell) 
    : ForkedEvaluationCell(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet,masterCell);
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::ctor(ForkedEvaluationSheet* sheet, ::org::apache::poi::ss::formula::EvaluationCell* masterCell)
{
    super::ctor();
    _sheet = sheet;
    _masterCell = masterCell;
    setValue(::org::apache::poi::ss::formula::eval::BlankEval::instance());
}

java::lang::Object* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getIdentityKey()
{
    return npc(_masterCell)->getIdentityKey();
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::setValue(::org::apache::poi::ss::formula::eval::ValueEval* value)
{
    auto cls = npc(value)->getClass();
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::eval::NumberEval::class_())) {
        _cellType = ::org::apache::poi::ss::usermodel::CellType::NUMERIC;
        _numberValue = npc((java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(value)))->getNumberValue();
        return;
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::eval::StringEval::class_())) {
        _cellType = ::org::apache::poi::ss::usermodel::CellType::STRING;
        _stringValue = npc((java_cast< ::org::apache::poi::ss::formula::eval::StringEval* >(value)))->getStringValue();
        return;
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::eval::BoolEval::class_())) {
        _cellType = ::org::apache::poi::ss::usermodel::CellType::BOOLEAN;
        _booleanValue = npc((java_cast< ::org::apache::poi::ss::formula::eval::BoolEval* >(value)))->getBooleanValue();
        return;
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::eval::ErrorEval::class_())) {
        _cellType = ::org::apache::poi::ss::usermodel::CellType::ERROR;
        _errorValue = npc((java_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(value)))->getErrorCode();
        return;
    }
    if(static_cast< ::java::lang::Object* >(cls) == static_cast< ::java::lang::Object* >(::org::apache::poi::ss::formula::eval::BlankEval::class_())) {
        _cellType = ::org::apache::poi::ss::usermodel::CellType::BLANK;
        return;
    }
    throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected value class ("_j)->append(npc(cls)->getName())
        ->append(u")"_j)->toString());
}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::copyValue(::org::apache::poi::ss::usermodel::Cell* destCell)
{
    {
        auto v = _cellType;
        if((v == ::org::apache::poi::ss::usermodel::CellType::BLANK)) {
            npc(destCell)->setCellType(::org::apache::poi::ss::usermodel::CellType::BLANK);
            return;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
            npc(destCell)->setCellValue(_numberValue);
            return;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
            npc(destCell)->setCellValue(_booleanValue);
            return;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
            npc(destCell)->setCellValue(_stringValue);
            return;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::ERROR)) {
            npc(destCell)->setCellErrorValue(static_cast< int8_t >(_errorValue));
            return;
        }
        if((((v != ::org::apache::poi::ss::usermodel::CellType::BLANK) && (v != ::org::apache::poi::ss::usermodel::CellType::NUMERIC) && (v != ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::org::apache::poi::ss::usermodel::CellType::STRING) && (v != ::org::apache::poi::ss::usermodel::CellType::ERROR)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected data type ("_j)->append(static_cast< ::java::lang::Object* >(_cellType))
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

void org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::checkCellType(::org::apache::poi::ss::usermodel::CellType* expectedCellType)
{
    if(_cellType != expectedCellType) {
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Wrong data type ("_j)->append(static_cast< ::java::lang::Object* >(_cellType))
            ->append(u")"_j)->toString());
    }
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getCellType()
{
    return npc(_cellType)->getCode();
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getCellTypeEnum()
{
    return _cellType;
}

bool org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getBooleanCellValue()
{
    checkCellType(::org::apache::poi::ss::usermodel::CellType::BOOLEAN);
    return _booleanValue;
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getErrorCellValue()
{
    checkCellType(::org::apache::poi::ss::usermodel::CellType::ERROR);
    return _errorValue;
}

double org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getNumericCellValue()
{
    checkCellType(::org::apache::poi::ss::usermodel::CellType::NUMERIC);
    return _numberValue;
}

java::lang::String* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getStringCellValue()
{
    checkCellType(::org::apache::poi::ss::usermodel::CellType::STRING);
    return _stringValue;
}

org::apache::poi::ss::formula::EvaluationSheet* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getSheet()
{
    return _sheet;
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getRowIndex()
{
    return npc(_masterCell)->getRowIndex();
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getColumnIndex()
{
    return npc(_masterCell)->getColumnIndex();
}

int32_t org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getCachedFormulaResultType()
{
    return npc(_masterCell)->getCachedFormulaResultType();
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getCachedFormulaResultTypeEnum()
{
    return npc(_masterCell)->getCachedFormulaResultTypeEnum();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.forked.ForkedEvaluationCell", 58);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::eval::forked::ForkedEvaluationCell::getClass0()
{
    return class_();
}

