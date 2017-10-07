// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::io::DataOutput
    : public virtual ::java::lang::Object
{

    virtual void write(int32_t b) = 0;
    virtual void write(::int8_tArray* b) = 0;
    virtual void write(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual void writeBoolean(bool v) = 0;
    virtual void writeByte(int32_t v) = 0;
    virtual void writeBytes(::java::lang::String* s) = 0;
    virtual void writeChar(int32_t v) = 0;
    virtual void writeChars(::java::lang::String* s) = 0;
    virtual void writeDouble(double v) = 0;
    virtual void writeFloat(float v) = 0;
    virtual void writeInt(int32_t v) = 0;
    virtual void writeLong(int64_t v) = 0;
    virtual void writeShort(int32_t v) = 0;
    virtual void writeUTF(::java::lang::String* s) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
