// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/io/Closeable.hpp>

struct java::nio::channels::Channel
    : public virtual ::java::io::Closeable
{

    /*void close(); (already declared) */
    virtual bool isOpen() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
