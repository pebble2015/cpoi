// Generated from /POI/java/org/apache/poi/util/HexDump.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
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

class poi::util::HexDump
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* EOL_;
    static ::java::nio::charset::Charset* UTF8_;
protected:
    void ctor();

public:
    static void dump(::int8_tArray* data, int64_t offset, ::java::io::OutputStream* stream, int32_t index, int32_t length) /* throws(IOException, ArrayIndexOutOfBoundsException, IllegalArgumentException) */;
    static void dump(::int8_tArray* data, int64_t offset, ::java::io::OutputStream* stream, int32_t index) /* throws(IOException, ArrayIndexOutOfBoundsException, IllegalArgumentException) */;
    static ::java::lang::String* dump(::int8_tArray* data, int64_t offset, int32_t index);
    static ::java::lang::String* dump(::int8_tArray* data, int64_t offset, int32_t index, int32_t length);
    static char16_t toAscii(int32_t dataB);
    static ::java::lang::String* toHex(::int8_tArray* value);
    static ::java::lang::String* toHex(::int16_tArray* value);
    static ::java::lang::String* toHex(::int8_tArray* value, int32_t bytesPerLine);
    static ::java::lang::String* toHex(int16_t value);
    static ::java::lang::String* toHex(int8_t value);
    static ::java::lang::String* toHex(int32_t value);
    static ::java::lang::String* toHex(int64_t value);
    static ::java::lang::String* toHex(::java::lang::String* value);
    static void dump(::java::io::InputStream* in, ::java::io::PrintStream* out, int32_t start, int32_t bytesToDump) /* throws(IOException) */;
    static ::java::lang::String* longToHex(int64_t value);
    static ::java::lang::String* intToHex(int32_t value);
    static ::java::lang::String* shortToHex(int32_t value);
    static ::java::lang::String* byteToHex(int32_t value);

private:
    static void writeHex(::java::lang::StringBuilder* sb, int64_t value, int32_t nDigits, ::java::lang::String* prefix);

public:
    static void main(::java::lang::StringArray* args) /* throws(IOException) */;

    // Generated

private:
    HexDump();
protected:
    HexDump(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::lang::String*& EOL();
    static ::java::nio::charset::Charset*& UTF8();

private:
    virtual ::java::lang::Class* getClass0();
};
