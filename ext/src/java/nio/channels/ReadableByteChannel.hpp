// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/channels/Channel.hpp>

struct java::nio::channels::ReadableByteChannel
    : public virtual Channel
{

    virtual int32_t read(::java::nio::ByteBuffer* dst) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
