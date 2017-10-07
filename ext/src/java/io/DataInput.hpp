// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::io::DataInput
    : public virtual ::java::lang::Object
{

    virtual bool readBoolean() = 0;
    virtual int8_t readByte() = 0;
    virtual char16_t readChar() = 0;
    virtual double readDouble() = 0;
    virtual float readFloat() = 0;
    virtual void readFully(::int8_tArray* b) = 0;
    virtual void readFully(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual int32_t readInt() = 0;
    virtual ::java::lang::String* readLine() = 0;
    virtual int64_t readLong() = 0;
    virtual int16_t readShort() = 0;
    virtual ::java::lang::String* readUTF() = 0;
    virtual int32_t readUnsignedByte() = 0;
    virtual int32_t readUnsignedShort() = 0;
    virtual int32_t skipBytes(int32_t n) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
