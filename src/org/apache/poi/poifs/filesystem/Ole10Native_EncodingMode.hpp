// Generated from /POI/java/org/apache/poi/poifs/filesystem/Ole10Native.java

#pragma once

#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/poifs/filesystem/fwd-POI.hpp>
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
    namespace poifs
    {
        namespace filesystem
        {
typedef ::SubArray< ::poi::poifs::filesystem::Ole10Native_EncodingMode, ::java::lang::EnumArray > Ole10Native_EncodingModeArray;
        } // filesystem
    } // poifs
} // poi

struct default_init_tag;

class poi::poifs::filesystem::Ole10Native_EncodingMode final
    : public ::java::lang::Enum
{

public:
    typedef ::java::lang::Enum super;

public: /* package */
    static Ole10Native_EncodingMode *parsed;
    static Ole10Native_EncodingMode *unparsed;
    static Ole10Native_EncodingMode *compact;

    // Generated

public:
    Ole10Native_EncodingMode(::java::lang::String* name, int ordinal);
protected:
    Ole10Native_EncodingMode(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static Ole10Native_EncodingMode* valueOf(::java::lang::String* a0);
    static Ole10Native_EncodingModeArray* values();

private:
    virtual ::java::lang::Class* getClass0();
    friend class Ole10Native;
};
