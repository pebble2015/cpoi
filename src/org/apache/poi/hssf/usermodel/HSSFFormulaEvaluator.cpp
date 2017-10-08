// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFFormulaEvaluator.java
#include <org/apache/poi/hssf/usermodel/HSSFFormulaEvaluator.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationCell.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/formula/BaseFormulaEvaluator.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluatorProvider.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumericValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellValue.hpp>
#include <org/apache/poi/ss/usermodel/FormulaEvaluator.hpp>
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

namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::FormulaEvaluator, ::java::lang::ObjectArray > FormulaEvaluatorArray;
        } // usermodel

        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::WorkbookEvaluatorProvider, ::java::lang::ObjectArray > WorkbookEvaluatorProviderArray;
typedef ::SubArray< ::poi::ss::formula::BaseFormulaEvaluator, ::java::lang::ObjectArray, ::poi::ss::usermodel::FormulaEvaluatorArray, WorkbookEvaluatorProviderArray > BaseFormulaEvaluatorArray;
        } // formula
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFFormulaEvaluator, ::poi::ss::formula::BaseFormulaEvaluatorArray > HSSFFormulaEvaluatorArray;
        } // usermodel
    } // hssf
} // poi

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

poi::hssf::usermodel::HSSFFormulaEvaluator::HSSFFormulaEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFFormulaEvaluator::HSSFFormulaEvaluator(HSSFWorkbook* workbook) 
    : HSSFFormulaEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook);
}

poi::hssf::usermodel::HSSFFormulaEvaluator::HSSFFormulaEvaluator(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier) 
    : HSSFFormulaEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook,stabilityClassifier);
}

poi::hssf::usermodel::HSSFFormulaEvaluator::HSSFFormulaEvaluator(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder) 
    : HSSFFormulaEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(workbook,stabilityClassifier,udfFinder);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::ctor(HSSFWorkbook* workbook)
{
    ctor(workbook, nullptr);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::ctor(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier)
{
    ctor(workbook, stabilityClassifier, nullptr);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::ctor(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder)
{
    super::ctor(new ::poi::ss::formula::WorkbookEvaluator(HSSFEvaluationWorkbook::create(workbook), stabilityClassifier, udfFinder));
    _book = workbook;
}

poi::hssf::usermodel::HSSFFormulaEvaluator* poi::hssf::usermodel::HSSFFormulaEvaluator::create(HSSFWorkbook* workbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder)
{
    clinit();
    return new HSSFFormulaEvaluator(workbook, stabilityClassifier, udfFinder);
}

poi::ss::usermodel::RichTextString* poi::hssf::usermodel::HSSFFormulaEvaluator::createRichTextString(::java::lang::String* str)
{
    return new HSSFRichTextString(str);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::setupEnvironment(::java::lang::StringArray* workbookNames, HSSFFormulaEvaluatorArray* evaluators)
{
    clinit();
    ::poi::ss::formula::BaseFormulaEvaluator::setupEnvironment(workbookNames, evaluators);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::setupReferencedWorkbooks(::java::util::Map* evaluators)
{
    ::poi::ss::formula::CollaboratingWorkbooksEnvironment::setupFormulaEvaluator(evaluators);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::notifyUpdateCell(HSSFCell* cell)
{
    npc(_bookEvaluator)->notifyUpdateCell(new HSSFEvaluationCell(cell));
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::notifyUpdateCell(::poi::ss::usermodel::Cell* cell)
{
    npc(_bookEvaluator)->notifyUpdateCell(new HSSFEvaluationCell(java_cast< HSSFCell* >(cell)));
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::notifyDeleteCell(HSSFCell* cell)
{
    npc(_bookEvaluator)->notifyDeleteCell(new HSSFEvaluationCell(cell));
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::notifyDeleteCell(::poi::ss::usermodel::Cell* cell)
{
    npc(_bookEvaluator)->notifyDeleteCell(new HSSFEvaluationCell(java_cast< HSSFCell* >(cell)));
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::notifySetFormula(::poi::ss::usermodel::Cell* cell)
{
    npc(_bookEvaluator)->notifyUpdateCell(new HSSFEvaluationCell(java_cast< HSSFCell* >(cell)));
}

poi::ss::usermodel::Cell* poi::hssf::usermodel::HSSFFormulaEvaluator::evaluateInCell(::poi::ss::usermodel::Cell* cell)
{
    return java_cast< HSSFCell* >(super::evaluateInCell(cell));
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::evaluateAllFormulaCells(HSSFWorkbook* wb)
{
    clinit();
    evaluateAllFormulaCells(wb, new HSSFFormulaEvaluator(wb));
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::evaluateAllFormulaCells(::poi::ss::usermodel::Workbook* wb)
{
    clinit();
    ::poi::ss::formula::BaseFormulaEvaluator::evaluateAllFormulaCells(wb);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::evaluateAll()
{
    evaluateAllFormulaCells(_book, this);
}

poi::ss::usermodel::CellValue* poi::hssf::usermodel::HSSFFormulaEvaluator::evaluateFormulaCellValue(::poi::ss::usermodel::Cell* cell)
{
    auto eval = npc(_bookEvaluator)->evaluate(new HSSFEvaluationCell(java_cast< HSSFCell* >(cell)));
    if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(eval) != nullptr) {
        auto be = java_cast< ::poi::ss::formula::eval::BoolEval* >(eval);
        return ::poi::ss::usermodel::CellValue::valueOf(npc(be)->getBooleanValue());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumericValueEval* >(eval) != nullptr) {
        auto ne = java_cast< ::poi::ss::formula::eval::NumericValueEval* >(eval);
        return new ::poi::ss::usermodel::CellValue(npc(ne)->getNumberValue());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::StringValueEval* >(eval) != nullptr) {
        auto ne = java_cast< ::poi::ss::formula::eval::StringValueEval* >(eval);
        return new ::poi::ss::usermodel::CellValue(npc(ne)->getStringValue());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(eval) != nullptr) {
        return ::poi::ss::usermodel::CellValue::getError(npc((java_cast< ::poi::ss::formula::eval::ErrorEval* >(eval)))->getErrorCode());
    }
    throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected eval class ("_j)->append(npc(npc(eval)->getClass())->getName())
        ->append(u")"_j)->toString());
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::setIgnoreMissingWorkbooks(bool ignore)
{
    npc(_bookEvaluator)->setIgnoreMissingWorkbooks(ignore);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::setDebugEvaluationOutputForNextEval(bool value)
{
    npc(_bookEvaluator)->setDebugEvaluationOutputForNextEval(value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFFormulaEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFFormulaEvaluator", 50);
    return c;
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::evaluateAllFormulaCells(::poi::ss::usermodel::Workbook* wb, ::poi::ss::usermodel::FormulaEvaluator* evaluator)
{
    super::evaluateAllFormulaCells(wb, evaluator);
}

void poi::hssf::usermodel::HSSFFormulaEvaluator::setupEnvironment(::java::lang::StringArray* workbookNames, ::poi::ss::formula::BaseFormulaEvaluatorArray* evaluators)
{
    super::setupEnvironment(workbookNames, evaluators);
}

java::lang::Class* poi::hssf::usermodel::HSSFFormulaEvaluator::getClass0()
{
    return class_();
}

