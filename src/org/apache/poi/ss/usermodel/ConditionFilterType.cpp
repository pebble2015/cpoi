// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionFilterType.java
#include <org/apache/poi/ss/usermodel/ConditionFilterType.hpp>

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
typedef ::SubArray< ::poi::ss::usermodel::ConditionFilterType, ::java::lang::EnumArray > ConditionFilterTypeArray;
        } // usermodel
    } // ss
} // poi

poi::ss::usermodel::ConditionFilterType::ConditionFilterType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::ConditionFilterType::ConditionFilterType(::java::lang::String* name, int ordinal)
    : ConditionFilterType(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal);
}

poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::FILTER = new ::poi::ss::usermodel::ConditionFilterType(u"FILTER"_j, 0);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::TOP_10 = new ::poi::ss::usermodel::ConditionFilterType(u"TOP_10"_j, 1);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::UNIQUE_VALUES = new ::poi::ss::usermodel::ConditionFilterType(u"UNIQUE_VALUES"_j, 2);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::DUPLICATE_VALUES = new ::poi::ss::usermodel::ConditionFilterType(u"DUPLICATE_VALUES"_j, 3);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::CONTAINS_TEXT = new ::poi::ss::usermodel::ConditionFilterType(u"CONTAINS_TEXT"_j, 4);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_TEXT = new ::poi::ss::usermodel::ConditionFilterType(u"NOT_CONTAINS_TEXT"_j, 5);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::BEGINS_WITH = new ::poi::ss::usermodel::ConditionFilterType(u"BEGINS_WITH"_j, 6);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::ENDS_WITH = new ::poi::ss::usermodel::ConditionFilterType(u"ENDS_WITH"_j, 7);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::CONTAINS_BLANKS = new ::poi::ss::usermodel::ConditionFilterType(u"CONTAINS_BLANKS"_j, 8);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_BLANKS = new ::poi::ss::usermodel::ConditionFilterType(u"NOT_CONTAINS_BLANKS"_j, 9);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::CONTAINS_ERRORS = new ::poi::ss::usermodel::ConditionFilterType(u"CONTAINS_ERRORS"_j, 10);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::NOT_CONTAINS_ERRORS = new ::poi::ss::usermodel::ConditionFilterType(u"NOT_CONTAINS_ERRORS"_j, 11);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::TIME_PERIOD = new ::poi::ss::usermodel::ConditionFilterType(u"TIME_PERIOD"_j, 12);
poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::ABOVE_AVERAGE = new ::poi::ss::usermodel::ConditionFilterType(u"ABOVE_AVERAGE"_j, 13);
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::ConditionFilterType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ConditionFilterType", 47);
    return c;
}

poi::ss::usermodel::ConditionFilterType* poi::ss::usermodel::ConditionFilterType::valueOf(::java::lang::String* a0)
{
    if(ABOVE_AVERAGE->toString()->equals(a0))
        return ABOVE_AVERAGE;
    if(BEGINS_WITH->toString()->equals(a0))
        return BEGINS_WITH;
    if(CONTAINS_BLANKS->toString()->equals(a0))
        return CONTAINS_BLANKS;
    if(CONTAINS_ERRORS->toString()->equals(a0))
        return CONTAINS_ERRORS;
    if(CONTAINS_TEXT->toString()->equals(a0))
        return CONTAINS_TEXT;
    if(DUPLICATE_VALUES->toString()->equals(a0))
        return DUPLICATE_VALUES;
    if(ENDS_WITH->toString()->equals(a0))
        return ENDS_WITH;
    if(FILTER->toString()->equals(a0))
        return FILTER;
    if(NOT_CONTAINS_BLANKS->toString()->equals(a0))
        return NOT_CONTAINS_BLANKS;
    if(NOT_CONTAINS_ERRORS->toString()->equals(a0))
        return NOT_CONTAINS_ERRORS;
    if(NOT_CONTAINS_TEXT->toString()->equals(a0))
        return NOT_CONTAINS_TEXT;
    if(TIME_PERIOD->toString()->equals(a0))
        return TIME_PERIOD;
    if(TOP_10->toString()->equals(a0))
        return TOP_10;
    if(UNIQUE_VALUES->toString()->equals(a0))
        return UNIQUE_VALUES;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::ss::usermodel::ConditionFilterTypeArray* poi::ss::usermodel::ConditionFilterType::values()
{
    return new poi::ss::usermodel::ConditionFilterTypeArray({
        ABOVE_AVERAGE,
        BEGINS_WITH,
        CONTAINS_BLANKS,
        CONTAINS_ERRORS,
        CONTAINS_TEXT,
        DUPLICATE_VALUES,
        ENDS_WITH,
        FILTER,
        NOT_CONTAINS_BLANKS,
        NOT_CONTAINS_ERRORS,
        NOT_CONTAINS_TEXT,
        TIME_PERIOD,
        TOP_10,
        UNIQUE_VALUES,
    });
}

java::lang::Class* poi::ss::usermodel::ConditionFilterType::getClass0()
{
    return class_();
}

