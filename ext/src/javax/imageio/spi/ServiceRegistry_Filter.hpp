// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/imageio/spi/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::imageio::spi::ServiceRegistry_Filter
    : public virtual ::java::lang::Object
{

    virtual bool filter(::java::lang::Object* provider) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
