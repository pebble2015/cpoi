// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/event/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::awt::event::MouseListener
    : public virtual ::java::util::EventListener
{

    virtual void mouseClicked(MouseEvent* e) = 0;
    virtual void mouseEntered(MouseEvent* e) = 0;
    virtual void mouseExited(MouseEvent* e) = 0;
    virtual void mousePressed(MouseEvent* e) = 0;
    virtual void mouseReleased(MouseEvent* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
