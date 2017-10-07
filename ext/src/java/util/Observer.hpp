// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::Observer
    : public virtual ::java::lang::Object
{

    virtual void update(Observable* o, ::java::lang::Object* arg) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
