// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_1.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_2.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_3.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_4.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_5.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_6.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_7.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_8.hpp>
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
        } // formula
    } // ss
} // poi

poi::ss::formula::DataValidationEvaluator_OperatorEnum::DataValidationEvaluator_OperatorEnum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::DataValidationEvaluator_OperatorEnum::DataValidationEvaluator_OperatorEnum(::java::lang::String* name, int ordinal)
    : DataValidationEvaluator_OperatorEnum(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::BETWEEN = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_1(u"BETWEEN"_j, 0);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::NOT_BETWEEN = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_2(u"NOT_BETWEEN"_j, 1);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::EQUAL = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_3(u"EQUAL"_j, 2);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::NOT_EQUAL = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_4(u"NOT_EQUAL"_j, 3);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::GREATER_THAN = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_5(u"GREATER_THAN"_j, 4);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::LESS_THAN = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_6(u"LESS_THAN"_j, 5);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::GREATER_OR_EQUAL = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_7(u"GREATER_OR_EQUAL"_j, 6);
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::LESS_OR_EQUAL = new ::poi::ss::formula::DataValidationEvaluator_OperatorEnum_8(u"LESS_OR_EQUAL"_j, 7);
poi::ss::formula::DataValidationEvaluator_OperatorEnum*& poi::ss::formula::DataValidationEvaluator_OperatorEnum::IGNORED()
{
    clinit();
    return IGNORED_;
}
poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::IGNORED_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator_OperatorEnum::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.DataValidationEvaluator.OperatorEnum", 62);
    return c;
}

void poi::ss::formula::DataValidationEvaluator_OperatorEnum::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        IGNORED_ = DataValidationEvaluator_OperatorEnum::BETWEEN;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::DataValidationEvaluator_OperatorEnum* poi::ss::formula::DataValidationEvaluator_OperatorEnum::valueOf(::java::lang::String* a0)
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
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::formula::DataValidationEvaluator_OperatorEnumArray* poi::ss::formula::DataValidationEvaluator_OperatorEnum::values()
{
    return new poi::ss::formula::DataValidationEvaluator_OperatorEnumArray({
        BETWEEN,
        EQUAL,
        GREATER_OR_EQUAL,
        GREATER_THAN,
        LESS_OR_EQUAL,
        LESS_THAN,
        NOT_BETWEEN,
        NOT_EQUAL,
    });
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator_OperatorEnum::getClass0()
{
    return class_();
}

