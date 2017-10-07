// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Readable
    : public virtual Object
{

    virtual int32_t read(::java::nio::CharBuffer* cb) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
