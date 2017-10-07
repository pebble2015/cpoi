// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <javax/xml/stream/events/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::xml::stream::EventFilter
    : public virtual ::java::lang::Object
{

    virtual bool accept(::javax::xml::stream::events::XMLEvent* event) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
