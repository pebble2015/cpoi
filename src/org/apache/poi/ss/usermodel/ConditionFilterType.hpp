// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionFilterType.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Enum.hpp>

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

struct default_init_tag;

class poi::ss::usermodel::ConditionFilterType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ConditionFilterType *FILTER;
    static ConditionFilterType *TOP_10;
    static ConditionFilterType *UNIQUE_VALUES;
    static ConditionFilterType *DUPLICATE_VALUES;
    static ConditionFilterType *CONTAINS_TEXT;
    static ConditionFilterType *NOT_CONTAINS_TEXT;
    static ConditionFilterType *BEGINS_WITH;
    static ConditionFilterType *ENDS_WITH;
    static ConditionFilterType *CONTAINS_BLANKS;
    static ConditionFilterType *NOT_CONTAINS_BLANKS;
    static ConditionFilterType *CONTAINS_ERRORS;
    static ConditionFilterType *NOT_CONTAINS_ERRORS;
    static ConditionFilterType *TIME_PERIOD;
    static ConditionFilterType *ABOVE_AVERAGE;

    // Generated

public:
    ConditionFilterType(::java::lang::String* name, int ordinal);
protected:
    ConditionFilterType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ConditionFilterType* valueOf(::java::lang::String* a0);
    static ConditionFilterTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
};
