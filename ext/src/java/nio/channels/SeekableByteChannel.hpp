// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/channels/ByteChannel.hpp>

struct java::nio::channels::SeekableByteChannel
    : public virtual ByteChannel
{

    virtual int64_t position() = 0;
    virtual SeekableByteChannel* position(int64_t newPosition) = 0;
    /*int32_t read(::java::nio::ByteBuffer* dst); (already declared) */
    virtual int64_t size() = 0;
    virtual SeekableByteChannel* truncate(int64_t size) = 0;
    /*int32_t write(::java::nio::ByteBuffer* src); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
