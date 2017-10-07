// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/beans/fwd-POI.hpp>
#include <java/util/EventListener.hpp>

struct java::beans::PropertyChangeListener
    : public virtual ::java::util::EventListener
{

    virtual void propertyChange(PropertyChangeEvent* evt) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
