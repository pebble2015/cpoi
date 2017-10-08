// Generated from /POI/java/org/apache/poi/util/LittleEndianInput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::util::LittleEndianInput
    : public virtual ::java::lang::Object
{
    virtual int32_t available() = 0;
    virtual int8_t readByte() = 0;
    virtual int32_t readUByte() = 0;
    virtual int16_t readShort() = 0;
    virtual int32_t readUShort() = 0;
    virtual int32_t readInt() = 0;
    virtual int64_t readLong() = 0;
    virtual double readDouble() = 0;
    virtual void readFully(::int8_tArray* buf) = 0;
    virtual void readFully(::int8_tArray* buf, int32_t off, int32_t len) = 0;
    virtual void readPlain(::int8_tArray* buf, int32_t off, int32_t len) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
