// Generated from /POI/java/org/apache/poi/util/ReplacingInputStream.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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
    namespace util
    {
typedef ::SubArray< ::poi::util::ReplacingInputStream_State, ::java::lang::EnumArray > ReplacingInputStream_StateArray;
    } // util
} // poi

struct default_init_tag;

class poi::util::ReplacingInputStream_State final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static ReplacingInputStream_State *NOT_MATCHED;
    static ReplacingInputStream_State *MATCHING;
    static ReplacingInputStream_State *REPLACING;
    static ReplacingInputStream_State *UNBUFFER;

    // Generated

public:
    ReplacingInputStream_State(::java::lang::String* name, int ordinal);
protected:
    ReplacingInputStream_State(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ReplacingInputStream_State* valueOf(::java::lang::String* a0);
    static ReplacingInputStream_StateArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ReplacingInputStream;
};
