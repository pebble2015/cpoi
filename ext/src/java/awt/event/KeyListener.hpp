// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/event/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::awt::event::KeyListener
    : public virtual ::java::util::EventListener
{

    virtual void keyPressed(KeyEvent* e) = 0;
    virtual void keyReleased(KeyEvent* e) = 0;
    virtual void keyTyped(KeyEvent* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
