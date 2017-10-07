// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <javax/accessibility/AccessibleComponent.hpp>

struct javax::accessibility::AccessibleExtendedComponent
    : public virtual AccessibleComponent
{

    virtual AccessibleKeyBinding* getAccessibleKeyBinding() = 0;
    virtual ::java::lang::String* getTitledBorderText() = 0;
    virtual ::java::lang::String* getToolTipText() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
