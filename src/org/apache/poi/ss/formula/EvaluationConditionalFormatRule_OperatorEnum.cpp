// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_1.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_2.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_3.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_4.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_5.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_6.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_7.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_8.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_9.hpp>
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

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
typedef ::SubArray< ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum, ::java::lang::EnumArray > EvaluationConditionalFormatRule_OperatorEnumArray;
                } // formula
            } // ss
        } // poi
    } // apache
} // org

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::EvaluationConditionalFormatRule_OperatorEnum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::EvaluationConditionalFormatRule_OperatorEnum(::java::lang::String* name, int ordinal)
    : EvaluationConditionalFormatRule_OperatorEnum(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::NO_COMPARISON = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_1(u"NO_COMPARISON"_j, 0);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::BETWEEN = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_2(u"BETWEEN"_j, 1);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::NOT_BETWEEN = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_3(u"NOT_BETWEEN"_j, 2);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::EQUAL = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_4(u"EQUAL"_j, 3);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::NOT_EQUAL = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_5(u"NOT_EQUAL"_j, 4);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::GREATER_THAN = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_6(u"GREATER_THAN"_j, 5);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::LESS_THAN = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_7(u"LESS_THAN"_j, 6);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::GREATER_OR_EQUAL = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_8(u"GREATER_OR_EQUAL"_j, 7);
org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::LESS_OR_EQUAL = new ::org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_9(u"LESS_OR_EQUAL"_j, 8);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.EvaluationConditionalFormatRule.OperatorEnum", 70);
    return c;
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::valueOf(::java::lang::String* a0)
{
    if(BETWEEN->toString()->equals(a0))
        return BETWEEN;
    if(EQUAL->toString()->equals(a0))
        return EQUAL;
    if(GREATER_OR_EQUAL->toString()->equals(a0))
        return GREATER_OR_EQUAL;
    if(GREATER_THAN->toString()->equals(a0))
        return GREATER_THAN;
    if(LESS_OR_EQUAL->toString()->equals(a0))
        return LESS_OR_EQUAL;
    if(LESS_THAN->toString()->equals(a0))
        return LESS_THAN;
    if(NOT_BETWEEN->toString()->equals(a0))
        return NOT_BETWEEN;
    if(NOT_EQUAL->toString()->equals(a0))
        return NOT_EQUAL;
    if(NO_COMPARISON->toString()->equals(a0))
        return NO_COMPARISON;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnumArray* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::values()
{
    return new org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnumArray({
        BETWEEN,
        EQUAL,
        GREATER_OR_EQUAL,
        GREATER_THAN,
        LESS_OR_EQUAL,
        LESS_THAN,
        NOT_BETWEEN,
        NOT_EQUAL,
        NO_COMPARISON,
    });
}

java::lang::Class* org::apache::poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum::getClass0()
{
    return class_();
}

