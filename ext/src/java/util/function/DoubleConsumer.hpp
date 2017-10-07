// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/util/function/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::function::DoubleConsumer
    : public virtual ::java::lang::Object
{

    virtual void accept(double value) = 0;
    virtual DoubleConsumer* andThen(DoubleConsumer* after);

    // Generated
    static ::java::lang::Class *class_();
};
