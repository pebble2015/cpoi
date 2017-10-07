// Generated from /POI/java/org/apache/poi/ddf/EscherDump.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ddf/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class org::apache::poi::ddf::EscherDump final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    void dump(::int8_tArray* data, int32_t offset, int32_t size, ::java::io::PrintStream* out);
    void dumpOld(int64_t maxLength, ::java::io::InputStream* in, ::java::io::PrintStream* out) /* throws(IOException, LittleEndian.BufferUnderrunException) */;

private:
    ::java::lang::String* propName(int16_t propertyId);
    static ::java::lang::String* getBlipType(int8_t b);
    ::java::lang::String* dec1616(int32_t n32);
    void outHex(int32_t bytes, ::java::io::InputStream* in, ::java::io::PrintStream* out) /* throws(IOException, LittleEndian.BufferUnderrunException) */;

public:
    static void main(::java::lang::StringArray* args);
    static void main(::java::lang::StringArray* args, ::java::io::PrintStream* out);
    void dump(int32_t recordSize, ::int8_tArray* data, ::java::io::PrintStream* out);

    // Generated
    EscherDump();
protected:
    EscherDump(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class EscherDump_propName_PropName_1;
};
