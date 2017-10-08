// Generated from /POI/java/org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.java

#pragma once

#include <fwd-POI.hpp>
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
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingThreshold_RangeType, ::java::lang::EnumArray > ConditionalFormattingThreshold_RangeTypeArray;
        } // usermodel
    } // ss
} // poi

struct default_init_tag;

class poi::ss::usermodel::ConditionalFormattingThreshold_RangeType final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ConditionalFormattingThreshold_RangeType *NUMBER;
    static ConditionalFormattingThreshold_RangeType *MIN;
    static ConditionalFormattingThreshold_RangeType *MAX;
    static ConditionalFormattingThreshold_RangeType *PERCENT;
    static ConditionalFormattingThreshold_RangeType *PERCENTILE;
    static ConditionalFormattingThreshold_RangeType *UNALLOCATED;
    static ConditionalFormattingThreshold_RangeType *FORMULA;

public:
    int32_t id {  };
    ::java::lang::String* name_ {  };
    ::java::lang::String* toString() override;
    static ConditionalFormattingThreshold_RangeType* byId(int32_t id);
    static ConditionalFormattingThreshold_RangeType* byName(::java::lang::String* name);
protected:
    void ctor(::java::lang::String* name, int ordinal, int32_t id, ::java::lang::String* name1);

    // Generated

private:
    ConditionalFormattingThreshold_RangeType(::java::lang::String* name, int ordinal, int32_t id, ::java::lang::String* name1);
protected:
    ConditionalFormattingThreshold_RangeType(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ConditionalFormattingThreshold_RangeType* valueOf(::java::lang::String* a0);
    static ConditionalFormattingThreshold_RangeTypeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ConditionalFormattingThreshold;
};
