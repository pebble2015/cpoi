// Generated from /POI/java/org/apache/poi/ss/formula/BaseFormulaEvaluator.java
#include <org/apache/poi/ss/formula/BaseFormulaEvaluator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluatorProvider.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/CellValue.hpp>
#include <org/apache/poi/ss/usermodel/CreationHelper.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>
#include <org/apache/poi/ss/usermodel/RichTextString.hpp>
#include <org/apache/poi/ss/usermodel/Row.hpp>
#include <org/apache/poi/ss/usermodel/Sheet.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::FormulaEvaluator, ::java::lang::ObjectArray > FormulaEvaluatorArray;
                } // usermodel

                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::WorkbookEvaluatorProvider, ::java::lang::ObjectArray > WorkbookEvaluatorProviderArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::BaseFormulaEvaluator, ::java::lang::ObjectArray, ::org::apache::poi::ss::usermodel::FormulaEvaluatorArray, WorkbookEvaluatorProviderArray > BaseFormulaEvaluatorArray;
typedef ::SubArray< ::org::apache::poi::ss::formula::WorkbookEvaluator, ::java::lang::ObjectArray > WorkbookEvaluatorArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::formula::BaseFormulaEvaluator::BaseFormulaEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::BaseFormulaEvaluator::BaseFormulaEvaluator(WorkbookEvaluator* bookEvaluator) 
    : BaseFormulaEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(bookEvaluator);
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::ctor(WorkbookEvaluator* bookEvaluator)
{
    super::ctor();
    this->_bookEvaluator = bookEvaluator;
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::setupEnvironment(::java::lang::StringArray* workbookNames, BaseFormulaEvaluatorArray* evaluators)
{
    clinit();
    auto wbEvals = new WorkbookEvaluatorArray(npc(evaluators)->length);
    for (auto i = int32_t(0); i < npc(wbEvals)->length; i++) {
        wbEvals->set(i, npc((*evaluators)[i])->_bookEvaluator);
    }
    CollaboratingWorkbooksEnvironment::setup(workbookNames, wbEvals);
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::setupReferencedWorkbooks(::java::util::Map* evaluators)
{
    CollaboratingWorkbooksEnvironment::setupFormulaEvaluator(evaluators);
}

org::apache::poi::ss::formula::WorkbookEvaluator* org::apache::poi::ss::formula::BaseFormulaEvaluator::_getWorkbookEvaluator()
{
    return _bookEvaluator;
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::clearAllCachedResultValues()
{
    npc(_bookEvaluator)->clearAllCachedResultValues();
}

org::apache::poi::ss::usermodel::CellValue* org::apache::poi::ss::formula::BaseFormulaEvaluator::evaluate(::org::apache::poi::ss::usermodel::Cell* cell)
{
    if(cell == nullptr) {
        return nullptr;
    }
    {
        auto v = npc(cell)->getCellTypeEnum();
        if((v == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
            return ::org::apache::poi::ss::usermodel::CellValue::valueOf(npc(cell)->getBooleanCellValue());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::ERROR)) {
            return ::org::apache::poi::ss::usermodel::CellValue::getError(npc(cell)->getErrorCellValue());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::FORMULA)) {
            return evaluateFormulaCellValue(cell);
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
            return new ::org::apache::poi::ss::usermodel::CellValue(npc(cell)->getNumericCellValue());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
            return new ::org::apache::poi::ss::usermodel::CellValue(npc(npc(cell)->getRichStringCellValue())->getString());
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::BLANK)) {
            return nullptr;
        }
        if((((v != ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::org::apache::poi::ss::usermodel::CellType::ERROR) && (v != ::org::apache::poi::ss::usermodel::CellType::FORMULA) && (v != ::org::apache::poi::ss::usermodel::CellType::NUMERIC) && (v != ::org::apache::poi::ss::usermodel::CellType::STRING) && (v != ::org::apache::poi::ss::usermodel::CellType::BLANK)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Bad cell type ("_j)->append(static_cast< ::java::lang::Object* >(npc(cell)->getCellTypeEnum()))
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

org::apache::poi::ss::usermodel::Cell* org::apache::poi::ss::formula::BaseFormulaEvaluator::evaluateInCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
    if(cell == nullptr) {
        return nullptr;
    }
    auto result = cell;
    if(npc(cell)->getCellTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::FORMULA) {
        auto cv = evaluateFormulaCellValue(cell);
        setCellValue(cell, cv);
        setCellType(cell, cv);
    }
    return result;
}

int32_t org::apache::poi::ss::formula::BaseFormulaEvaluator::evaluateFormulaCell(::org::apache::poi::ss::usermodel::Cell* cell)
{
    return npc(evaluateFormulaCellEnum(cell))->getCode();
}

org::apache::poi::ss::usermodel::CellType* org::apache::poi::ss::formula::BaseFormulaEvaluator::evaluateFormulaCellEnum(::org::apache::poi::ss::usermodel::Cell* cell)
{
    if(cell == nullptr || npc(cell)->getCellTypeEnum() != ::org::apache::poi::ss::usermodel::CellType::FORMULA) {
        return ::org::apache::poi::ss::usermodel::CellType::_NONE;
    }
    auto cv = evaluateFormulaCellValue(cell);
    setCellValue(cell, cv);
    return npc(cv)->getCellTypeEnum();
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::setCellType(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::CellValue* cv)
{
    clinit();
    auto cellType = npc(cv)->getCellTypeEnum();
    {
        auto v = cellType;
        if((v == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) || (v == ::org::apache::poi::ss::usermodel::CellType::ERROR) || (v == ::org::apache::poi::ss::usermodel::CellType::NUMERIC) || (v == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
            npc(cell)->setCellType(cellType);
            return;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::BLANK)) {
            throw new ::java::lang::IllegalArgumentException(u"This should never happen. Blanks eventually get translated to zero."_j);
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::BLANK) || (v == ::org::apache::poi::ss::usermodel::CellType::FORMULA)) {
            throw new ::java::lang::IllegalArgumentException(u"This should never happen. Formulas should have already been evaluated."_j);
        }
        if(((v == ::org::apache::poi::ss::usermodel::CellType::BLANK) || (v == ::org::apache::poi::ss::usermodel::CellType::FORMULA) || ((v != ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::org::apache::poi::ss::usermodel::CellType::ERROR) && (v != ::org::apache::poi::ss::usermodel::CellType::NUMERIC) && (v != ::org::apache::poi::ss::usermodel::CellType::STRING) && (v != ::org::apache::poi::ss::usermodel::CellType::BLANK) && (v != ::org::apache::poi::ss::usermodel::CellType::FORMULA)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected cell value type ("_j)->append(static_cast< ::java::lang::Object* >(cellType))
                ->append(u")"_j)->toString());
        }
end_switch1:;
    }

}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::setCellValue(::org::apache::poi::ss::usermodel::Cell* cell, ::org::apache::poi::ss::usermodel::CellValue* cv)
{
    auto cellType = npc(cv)->getCellTypeEnum();
    {
        auto v = cellType;
        if((v == ::org::apache::poi::ss::usermodel::CellType::BOOLEAN)) {
            npc(cell)->setCellValue(npc(cv)->getBooleanValue());
            goto end_switch2;;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::ERROR)) {
            npc(cell)->setCellErrorValue(npc(cv)->getErrorValue());
            goto end_switch2;;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::NUMERIC)) {
            npc(cell)->setCellValue(npc(cv)->getNumberValue());
            goto end_switch2;;
        }
        if((v == ::org::apache::poi::ss::usermodel::CellType::STRING)) {
            npc(cell)->setCellValue(createRichTextString(npc(cv)->getStringValue()));
            goto end_switch2;;
        }
        if(((v == ::org::apache::poi::ss::usermodel::CellType::BLANK) || (v == ::org::apache::poi::ss::usermodel::CellType::FORMULA) || ((v != ::org::apache::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::org::apache::poi::ss::usermodel::CellType::ERROR) && (v != ::org::apache::poi::ss::usermodel::CellType::NUMERIC) && (v != ::org::apache::poi::ss::usermodel::CellType::STRING) && (v != ::org::apache::poi::ss::usermodel::CellType::BLANK) && (v != ::org::apache::poi::ss::usermodel::CellType::FORMULA)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Unexpected cell value type ("_j)->append(static_cast< ::java::lang::Object* >(cellType))
                ->append(u")"_j)->toString());
        }
end_switch2:;
    }

}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::evaluateAllFormulaCells(::org::apache::poi::ss::usermodel::Workbook* wb)
{
    clinit();
    auto evaluator = npc(npc(wb)->getCreationHelper())->createFormulaEvaluator();
    evaluateAllFormulaCells(wb, evaluator);
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::evaluateAllFormulaCells(::org::apache::poi::ss::usermodel::Workbook* wb, ::org::apache::poi::ss::usermodel::FormulaEvaluator* evaluator)
{
    clinit();
    for (auto i = int32_t(0); i < npc(wb)->getNumberOfSheets(); i++) {
        auto sheet = npc(wb)->getSheetAt(i);
        for (auto _i = npc(sheet)->iterator(); _i->hasNext(); ) {
            ::org::apache::poi::ss::usermodel::Row* r = java_cast< ::org::apache::poi::ss::usermodel::Row* >(_i->next());
            {
                for (auto _i = npc(r)->iterator(); _i->hasNext(); ) {
                    ::org::apache::poi::ss::usermodel::Cell* c = java_cast< ::org::apache::poi::ss::usermodel::Cell* >(_i->next());
                    {
                        if(npc(c)->getCellTypeEnum() == ::org::apache::poi::ss::usermodel::CellType::FORMULA) {
                            npc(evaluator)->evaluateFormulaCellEnum(c);
                        }
                    }
                }
            }
        }
    }
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::setIgnoreMissingWorkbooks(bool ignore)
{
    npc(_bookEvaluator)->setIgnoreMissingWorkbooks(ignore);
}

void org::apache::poi::ss::formula::BaseFormulaEvaluator::setDebugEvaluationOutputForNextEval(bool value)
{
    npc(_bookEvaluator)->setDebugEvaluationOutputForNextEval(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::BaseFormulaEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.BaseFormulaEvaluator", 46);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::BaseFormulaEvaluator::getClass0()
{
    return class_();
}

