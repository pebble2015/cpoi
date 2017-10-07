// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/zip/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::zip::Checksum
    : public virtual ::java::lang::Object
{

    virtual int64_t getValue() = 0;
    virtual void reset() = 0;
    virtual void update(int32_t b) = 0;
    virtual void update(::int8_tArray* b, int32_t off, int32_t len) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
