// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct sun::awt::SubRegionShowable
    : public virtual ::java::lang::Object
{

    virtual void show(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) = 0;
    virtual bool showIfNotLost(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
