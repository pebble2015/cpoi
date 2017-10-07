// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::function::Consumer
    : public virtual ::java::lang::Object
{

    virtual void accept(::java::lang::Object* t) = 0;
    virtual Consumer* andThen(Consumer* after);

    // Generated
    static ::java::lang::Class *class_();
};
