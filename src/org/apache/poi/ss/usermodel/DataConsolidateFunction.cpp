// Generated from /POI/java/org/apache/poi/ss/usermodel/DataConsolidateFunction.java
#include <org/apache/poi/ss/usermodel/DataConsolidateFunction.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
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
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::DataConsolidateFunction, ::java::lang::EnumArray > DataConsolidateFunctionArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::DataConsolidateFunction::DataConsolidateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataConsolidateFunction::DataConsolidateFunction(::java::lang::String* name, int ordinal, int32_t value, ::java::lang::String* name1) 
    : DataConsolidateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, value,name1);
}

poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::AVERAGE = new ::poi::ss::usermodel::DataConsolidateFunction(u"AVERAGE"_j, 0, int32_t(1), u"Average"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::COUNT = new ::poi::ss::usermodel::DataConsolidateFunction(u"COUNT"_j, 1, int32_t(2), u"Count"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::COUNT_NUMS = new ::poi::ss::usermodel::DataConsolidateFunction(u"COUNT_NUMS"_j, 2, int32_t(3), u"Count"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::MAX = new ::poi::ss::usermodel::DataConsolidateFunction(u"MAX"_j, 3, int32_t(4), u"Max"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::MIN = new ::poi::ss::usermodel::DataConsolidateFunction(u"MIN"_j, 4, int32_t(5), u"Min"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::PRODUCT = new ::poi::ss::usermodel::DataConsolidateFunction(u"PRODUCT"_j, 5, int32_t(6), u"Product"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::STD_DEV = new ::poi::ss::usermodel::DataConsolidateFunction(u"STD_DEV"_j, 6, int32_t(7), u"StdDev"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::STD_DEVP = new ::poi::ss::usermodel::DataConsolidateFunction(u"STD_DEVP"_j, 7, int32_t(8), u"StdDevp"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::SUM = new ::poi::ss::usermodel::DataConsolidateFunction(u"SUM"_j, 8, int32_t(9), u"Sum"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::VAR = new ::poi::ss::usermodel::DataConsolidateFunction(u"VAR"_j, 9, int32_t(10), u"Var"_j);
poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::VARP = new ::poi::ss::usermodel::DataConsolidateFunction(u"VARP"_j, 10, int32_t(11), u"Varp"_j);
void poi::ss::usermodel::DataConsolidateFunction::ctor(::java::lang::String* name, int ordinal, int32_t value, ::java::lang::String* name1)
{
    super::ctor(name, ordinal);
    this->value = value;
    this->name_ = name;
}

java::lang::String* poi::ss::usermodel::DataConsolidateFunction::getName()
{
    return this->name_;
}

int32_t poi::ss::usermodel::DataConsolidateFunction::getValue()
{
    return this->value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataConsolidateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataConsolidateFunction", 51);
    return c;
}

poi::ss::usermodel::DataConsolidateFunction* poi::ss::usermodel::DataConsolidateFunction::valueOf(::java::lang::String* a0)
{
    if(AVERAGE->toString()->equals(a0))
        return AVERAGE;
    if(COUNT->toString()->equals(a0))
        return COUNT;
    if(COUNT_NUMS->toString()->equals(a0))
        return COUNT_NUMS;
    if(MAX->toString()->equals(a0))
        return MAX;
    if(MIN->toString()->equals(a0))
        return MIN;
    if(PRODUCT->toString()->equals(a0))
        return PRODUCT;
    if(STD_DEV->toString()->equals(a0))
        return STD_DEV;
    if(STD_DEVP->toString()->equals(a0))
        return STD_DEVP;
    if(SUM->toString()->equals(a0))
        return SUM;
    if(VAR->toString()->equals(a0))
        return VAR;
    if(VARP->toString()->equals(a0))
        return VARP;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::DataConsolidateFunctionArray* poi::ss::usermodel::DataConsolidateFunction::values()
{
    return new poi::ss::usermodel::DataConsolidateFunctionArray({
        AVERAGE,
        COUNT,
        COUNT_NUMS,
        MAX,
        MIN,
        PRODUCT,
        STD_DEV,
        STD_DEVP,
        SUM,
        VAR,
        VARP,
    });
}

java::lang::Class* poi::ss::usermodel::DataConsolidateFunction::getClass0()
{
    return class_();
}

