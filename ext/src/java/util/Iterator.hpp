// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::Iterator
    : public virtual ::java::lang::Object
{

    virtual void forEachRemaining(::java::util::function::Consumer* action);
    virtual bool hasNext() = 0;
    virtual ::java::lang::Object* next() = 0;
    virtual void remove();

    // Generated
    static ::java::lang::Class *class_();
};
