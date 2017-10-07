// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::MenuContainer
    : public virtual ::java::lang::Object
{

    virtual Font* getFont() = 0;
    virtual bool postEvent(Event* evt) = 0;
    virtual void remove(MenuComponent* comp) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
