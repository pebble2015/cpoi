// Generated from /POI/java/org/apache/poi/util/LittleEndianOutput.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::util::LittleEndianOutput
    : public virtual ::java::lang::Object
{
    virtual void writeByte(int32_t v) = 0;
    virtual void writeShort(int32_t v) = 0;
    virtual void writeInt(int32_t v) = 0;
    virtual void writeLong(int64_t v) = 0;
    virtual void writeDouble(double v) = 0;
    virtual void write(::int8_tArray* b) = 0;
    virtual void write(::int8_tArray* b, int32_t offset, int32_t len) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
