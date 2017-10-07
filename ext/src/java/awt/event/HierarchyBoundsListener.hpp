// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/event/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::awt::event::HierarchyBoundsListener
    : public virtual ::java::util::EventListener
{

    virtual void ancestorMoved(HierarchyEvent* e) = 0;
    virtual void ancestorResized(HierarchyEvent* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
