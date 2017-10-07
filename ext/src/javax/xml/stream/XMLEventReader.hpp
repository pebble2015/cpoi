// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <javax/xml/stream/events/fwd-POI.hpp>
#include <java/util/Iterator.hpp>

struct javax::xml::stream::XMLEventReader
    : public virtual ::java::util::Iterator
{

    virtual void close() = 0;
    virtual ::java::lang::String* getElementText() = 0;
    virtual ::java::lang::Object* getProperty(::java::lang::String* name) = 0;
    /*bool hasNext(); (already declared) */
    virtual ::javax::xml::stream::events::XMLEvent* nextEvent() = 0;
    virtual ::javax::xml::stream::events::XMLEvent* nextTag() = 0;
    virtual ::javax::xml::stream::events::XMLEvent* peek() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
