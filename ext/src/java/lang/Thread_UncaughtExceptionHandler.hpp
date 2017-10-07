// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::lang::Thread_UncaughtExceptionHandler
    : public virtual Object
{

    virtual void uncaughtException(Thread* t, Throwable* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
