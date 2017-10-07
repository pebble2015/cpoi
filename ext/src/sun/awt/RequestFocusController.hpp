// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct sun::awt::RequestFocusController
    : public virtual ::java::lang::Object
{

    virtual bool acceptRequestFocus(::java::awt::Component* arg0, ::java::awt::Component* arg1, bool arg2, bool arg3, CausedFocusEvent_Cause* arg4) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
