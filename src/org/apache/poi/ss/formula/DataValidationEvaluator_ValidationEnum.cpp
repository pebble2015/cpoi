// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_1.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_2.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_3.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_4.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_5.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_DataValidationContext.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidation.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_OperatorType.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace poi
{
    namespace ss
    {
        namespace formula
        {
typedef ::SubArray< ::poi::ss::formula::DataValidationEvaluator_OperatorEnum, ::java::lang::EnumArray > DataValidationEvaluator_OperatorEnumArray;
typedef ::SubArray< ::poi::ss::formula::DataValidationEvaluator_ValidationEnum, ::java::lang::EnumArray > DataValidationEvaluator_ValidationEnumArray;
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

poi::ss::formula::DataValidationEvaluator_ValidationEnum::DataValidationEvaluator_ValidationEnum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::DataValidationEvaluator_ValidationEnum::DataValidationEvaluator_ValidationEnum(::java::lang::String* name, int ordinal)
    : DataValidationEvaluator_ValidationEnum(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::ANY = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum_1(u"ANY"_j, 0);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::INTEGER = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum_2(u"INTEGER"_j, 1);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::DECIMAL = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum(u"DECIMAL"_j, 2);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::LIST = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum_3(u"LIST"_j, 3);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::DATE = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum(u"DATE"_j, 4);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::TIME = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum(u"TIME"_j, 5);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::TEXT_LENGTH = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum_4(u"TEXT_LENGTH"_j, 6);
poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::FORMULA = new ::poi::ss::formula::DataValidationEvaluator_ValidationEnum_5(u"FORMULA"_j, 7);
bool poi::ss::formula::DataValidationEvaluator_ValidationEnum::isValidValue(::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    return isValidNumericCell(cell, context);
}

bool poi::ss::formula::DataValidationEvaluator_ValidationEnum::isValidNumericCell(::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    if(!DataValidationEvaluator::isType(cell, ::poi::ss::usermodel::CellType::NUMERIC))
        return false;

    auto value = ::java::lang::Double::valueOf(npc(cell)->getNumericCellValue());
    return isValidNumericValue(value, context);
}

bool poi::ss::formula::DataValidationEvaluator_ValidationEnum::isValidNumericValue(::java::lang::Double* value, DataValidationEvaluator_DataValidationContext* context)
{
    try {
        auto t1 = evalOrConstant(npc(context)->getFormula1(), context);
        if(t1 == nullptr)
            return true;

        ::java::lang::Double* t2 = nullptr;
        if(npc(context)->getOperator() == ::poi::ss::usermodel::DataValidationConstraint_OperatorType::BETWEEN || npc(context)->getOperator() == ::poi::ss::usermodel::DataValidationConstraint_OperatorType::NOT_BETWEEN) {
            t2 = evalOrConstant(npc(context)->getFormula2(), context);
            if(t2 == nullptr)
                return true;

        }
        return npc((*DataValidationEvaluator_OperatorEnum::values())[npc(context)->getOperator()])->isValid(value, t1, t2);
    } catch (::java::lang::NumberFormatException* e) {
        return false;
    }
}

java::lang::Double* poi::ss::formula::DataValidationEvaluator_ValidationEnum::evalOrConstant(::java::lang::String* formula, DataValidationEvaluator_DataValidationContext* context) /* throws(NumberFormatException) */
{
    if(formula == nullptr || npc(npc(formula)->trim())->isEmpty())
        return nullptr;

    try {
        return ::java::lang::Double::valueOf(formula);
    } catch (::java::lang::NumberFormatException* e) {
    }
    auto eval = npc(npc(npc(context)->getEvaluator())->getWorkbookEvaluator())->evaluate(formula, npc(context)->getTarget(), npc(context)->getRegion());
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(eval) != nullptr) {
        eval = npc((java_cast< ::poi::ss::formula::eval::RefEval* >(eval)))->getInnerValueEval(npc((java_cast< ::poi::ss::formula::eval::RefEval* >(eval)))->getFirstSheetIndex());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(eval) != nullptr)
        return nullptr;

    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(eval) != nullptr)
        return ::java::lang::Double::valueOf(npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(eval)))->getNumberValue());

    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(eval) != nullptr) {
        auto const value = npc((java_cast< ::poi::ss::formula::eval::StringEval* >(eval)))->getStringValue();
        if(value == nullptr || npc(npc(value)->trim())->isEmpty())
            return nullptr;

        return ::java::lang::Double::valueOf(value);
    }
    throw new ::java::lang::NumberFormatException(::java::lang::StringBuilder().append(u"Formula '"_j)->append(formula)
        ->append(u"' evaluates to something other than a number"_j)->toString());
}

bool poi::ss::formula::DataValidationEvaluator_ValidationEnum::isValid(::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    clinit();
    return npc((*values())[npc(npc(npc(context)->getValidation())->getValidationConstraint())->getValidationType()])->isValidValue(cell, context);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator_ValidationEnum::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.DataValidationEvaluator.ValidationEnum", 64);
    return c;
}

poi::ss::formula::DataValidationEvaluator_ValidationEnum* poi::ss::formula::DataValidationEvaluator_ValidationEnum::valueOf(::java::lang::String* a0)
{
    if(ANY->toString()->equals(a0))
        return ANY;
    if(DATE->toString()->equals(a0))
        return DATE;
    if(DECIMAL->toString()->equals(a0))
        return DECIMAL;
    if(FORMULA->toString()->equals(a0))
        return FORMULA;
    if(INTEGER->toString()->equals(a0))
        return INTEGER;
    if(LIST->toString()->equals(a0))
        return LIST;
    if(TEXT_LENGTH->toString()->equals(a0))
        return TEXT_LENGTH;
    if(TIME->toString()->equals(a0))
        return TIME;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::formula::DataValidationEvaluator_ValidationEnumArray* poi::ss::formula::DataValidationEvaluator_ValidationEnum::values()
{
    return new poi::ss::formula::DataValidationEvaluator_ValidationEnumArray({
        ANY,
        DATE,
        DECIMAL,
        FORMULA,
        INTEGER,
        LIST,
        TEXT_LENGTH,
        TIME,
    });
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator_ValidationEnum::getClass0()
{
    return class_();
}

