// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::accessibility::AccessibleKeyBinding
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::Object* getAccessibleKeyBinding(int32_t i) = 0;
    virtual int32_t getAccessibleKeyBindingCount() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
