// Generated from /POI/java/org/apache/poi/ss/formula/eval/forked/ForkedEvaluator.java
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluator.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Method.hpp>
#include <java/lang/reflect/Type.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFEvaluationWorkbook.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/ss/formula/CollaboratingWorkbooksEnvironment.hpp>
#include <org/apache/poi/ss/formula/EvaluationCell.hpp>
#include <org/apache/poi/ss/formula/EvaluationWorkbook.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationCell.hpp>
#include <org/apache/poi/ss/formula/eval/forked/ForkedEvaluationWorkbook.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

        namespace reflect
        {
typedef ::SubArray< ::java::lang::reflect::AnnotatedElement, ::java::lang::ObjectArray > AnnotatedElementArray;
typedef ::SubArray< ::java::lang::reflect::GenericDeclaration, ::java::lang::ObjectArray, AnnotatedElementArray > GenericDeclarationArray;
typedef ::SubArray< ::java::lang::reflect::Type, ::java::lang::ObjectArray > TypeArray;
        } // reflect
typedef ::SubArray< ::java::lang::Class, ObjectArray, ::java::io::SerializableArray, ::java::lang::reflect::GenericDeclarationArray, ::java::lang::reflect::TypeArray, ::java::lang::reflect::AnnotatedElementArray > ClassArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::WorkbookEvaluator, ::java::lang::ObjectArray > WorkbookEvaluatorArray;

            namespace eval
            {
                namespace forked
                {
typedef ::SubArray< ::poi::ss::formula::eval::forked::ForkedEvaluator, ::java::lang::ObjectArray > ForkedEvaluatorArray;
                } // forked
            } // eval
        } // formula
    } // ss
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

poi::ss::formula::eval::forked::ForkedEvaluator::ForkedEvaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::forked::ForkedEvaluator::ForkedEvaluator(::poi::ss::formula::EvaluationWorkbook* masterWorkbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder) 
    : ForkedEvaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(masterWorkbook,stabilityClassifier,udfFinder);
}

void poi::ss::formula::eval::forked::ForkedEvaluator::ctor(::poi::ss::formula::EvaluationWorkbook* masterWorkbook, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder)
{
    super::ctor();
    _sewb = new ForkedEvaluationWorkbook(masterWorkbook);
    _evaluator = new ::poi::ss::formula::WorkbookEvaluator(_sewb, stabilityClassifier, udfFinder);
}

poi::ss::formula::EvaluationWorkbook* poi::ss::formula::eval::forked::ForkedEvaluator::createEvaluationWorkbook(::poi::ss::usermodel::Workbook* wb)
{
    clinit();
    if(dynamic_cast< ::poi::hssf::usermodel::HSSFWorkbook* >(wb) != nullptr) {
        return ::poi::hssf::usermodel::HSSFEvaluationWorkbook::create(java_cast< ::poi::hssf::usermodel::HSSFWorkbook* >(wb));
    } else {
        try {
            auto evalWB = ::java::lang::Class::forName(u"org.apache.poi.xssf.usermodel.XSSFEvaluationWorkbook"_j);
            auto xssfWB = ::java::lang::Class::forName(u"org.apache.poi.xssf.usermodel.XSSFWorkbook"_j);
            auto createM = npc(evalWB)->getDeclaredMethod(u"create"_j, new ::java::lang::ClassArray({static_cast< ::java::lang::Class* >(xssfWB)}));
            return java_cast< ::poi::ss::formula::EvaluationWorkbook* >(npc(createM)->invoke(nullptr, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(wb)})));
        } catch (::java::lang::Exception* e) {
            throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Unexpected workbook type ("_j)->append(npc(npc(wb)->getClass())->getName())
                ->append(u") - check for poi-ooxml and poi-ooxml schemas jar in the classpath"_j)->toString(), e);
        }
    }
}

poi::ss::formula::eval::forked::ForkedEvaluator* poi::ss::formula::eval::forked::ForkedEvaluator::create(::poi::ss::usermodel::Workbook* wb, ::poi::ss::formula::IStabilityClassifier* stabilityClassifier, ::poi::ss::formula::udf::UDFFinder* udfFinder)
{
    clinit();
    return new ForkedEvaluator(createEvaluationWorkbook(wb), stabilityClassifier, udfFinder);
}

void poi::ss::formula::eval::forked::ForkedEvaluator::updateCell(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex, ::poi::ss::formula::eval::ValueEval* value)
{
    auto cell = npc(_sewb)->getOrCreateUpdatableCell(sheetName, rowIndex, columnIndex);
    npc(cell)->setValue(value);
    npc(_evaluator)->notifyUpdateCell(cell);
}

void poi::ss::formula::eval::forked::ForkedEvaluator::copyUpdatedCells(::poi::ss::usermodel::Workbook* workbook)
{
    npc(_sewb)->copyUpdatedCells(workbook);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::forked::ForkedEvaluator::evaluate(::java::lang::String* sheetName, int32_t rowIndex, int32_t columnIndex)
{
    auto cell = npc(_sewb)->getEvaluationCell(sheetName, rowIndex, columnIndex);
    {
        auto v = npc(cell)->getCellTypeEnum();
        if((v == ::poi::ss::usermodel::CellType::BOOLEAN)) {
            return ::poi::ss::formula::eval::BoolEval::valueOf(npc(cell)->getBooleanCellValue());
        }
        if((v == ::poi::ss::usermodel::CellType::ERROR)) {
            return ::poi::ss::formula::eval::ErrorEval::valueOf(npc(cell)->getErrorCellValue());
        }
        if((v == ::poi::ss::usermodel::CellType::FORMULA)) {
            return npc(_evaluator)->evaluate(cell);
        }
        if((v == ::poi::ss::usermodel::CellType::NUMERIC)) {
            return new ::poi::ss::formula::eval::NumberEval(npc(cell)->getNumericCellValue());
        }
        if((v == ::poi::ss::usermodel::CellType::STRING)) {
            return new ::poi::ss::formula::eval::StringEval(npc(cell)->getStringCellValue());
        }
        if((v == ::poi::ss::usermodel::CellType::BLANK)) {
            return nullptr;
        }
        if((((v != ::poi::ss::usermodel::CellType::BOOLEAN) && (v != ::poi::ss::usermodel::CellType::ERROR) && (v != ::poi::ss::usermodel::CellType::FORMULA) && (v != ::poi::ss::usermodel::CellType::NUMERIC) && (v != ::poi::ss::usermodel::CellType::STRING) && (v != ::poi::ss::usermodel::CellType::BLANK)))) {
            throw new ::java::lang::IllegalStateException(::java::lang::StringBuilder().append(u"Bad cell type ("_j)->append(static_cast< ::java::lang::Object* >(npc(cell)->getCellTypeEnum()))
                ->append(u")"_j)->toString());
        }
end_switch0:;
    }

}

void poi::ss::formula::eval::forked::ForkedEvaluator::setupEnvironment(::java::lang::StringArray* workbookNames, ForkedEvaluatorArray* evaluators)
{
    clinit();
    auto wbEvals = new ::poi::ss::formula::WorkbookEvaluatorArray(npc(evaluators)->length);
    for (auto i = int32_t(0); i < npc(wbEvals)->length; i++) {
        wbEvals->set(i, npc((*evaluators)[i])->_evaluator);
    }
    ::poi::ss::formula::CollaboratingWorkbooksEnvironment::setup(workbookNames, wbEvals);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::forked::ForkedEvaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.forked.ForkedEvaluator", 53);
    return c;
}

java::lang::Class* poi::ss::formula::eval::forked::ForkedEvaluator::getClass0()
{
    return class_();
}

