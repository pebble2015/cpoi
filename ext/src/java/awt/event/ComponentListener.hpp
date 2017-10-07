// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/event/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::awt::event::ComponentListener
    : public virtual ::java::util::EventListener
{

    virtual void componentHidden(ComponentEvent* e) = 0;
    virtual void componentMoved(ComponentEvent* e) = 0;
    virtual void componentResized(ComponentEvent* e) = 0;
    virtual void componentShown(ComponentEvent* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
