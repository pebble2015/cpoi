// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::awt::event::AWTEventListener
    : public virtual ::java::util::EventListener
{

    virtual void eventDispatched(::java::awt::AWTEvent* event) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
