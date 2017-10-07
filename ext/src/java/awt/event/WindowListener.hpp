// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/event/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::awt::event::WindowListener
    : public virtual ::java::util::EventListener
{

    virtual void windowActivated(WindowEvent* e) = 0;
    virtual void windowClosed(WindowEvent* e) = 0;
    virtual void windowClosing(WindowEvent* e) = 0;
    virtual void windowDeactivated(WindowEvent* e) = 0;
    virtual void windowDeiconified(WindowEvent* e) = 0;
    virtual void windowIconified(WindowEvent* e) = 0;
    virtual void windowOpened(WindowEvent* e) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
