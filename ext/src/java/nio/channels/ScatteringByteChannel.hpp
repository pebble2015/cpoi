// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace nio
    {
typedef ::SubArray< ::java::nio::Buffer, ::java::lang::ObjectArray > BufferArray;
typedef ::SubArray< ::java::nio::ByteBuffer, BufferArray, ::java::lang::ComparableArray > ByteBufferArray;
    } // nio
} // java

struct java::nio::channels::ScatteringByteChannel
    : public virtual ReadableByteChannel
{

    virtual int64_t read(::java::nio::ByteBufferArray* dsts) = 0;
    virtual int64_t read(::java::nio::ByteBufferArray* dsts, int32_t offset, int32_t length) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual int32_t read(::java::nio::ByteBuffer* dst) = 0;
};
