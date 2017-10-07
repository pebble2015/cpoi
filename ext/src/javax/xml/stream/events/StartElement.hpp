// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/xml/namespace_/fwd-POI.hpp>
#include <javax/xml/stream/events/fwd-POI.hpp>
#include <javax/xml/stream/events/XMLEvent.hpp>

struct javax::xml::stream::events::StartElement
    : public virtual XMLEvent
{

    virtual Attribute* getAttributeByName(::javax::xml::namespace_::QName* name) = 0;
    virtual ::java::util::Iterator* getAttributes() = 0;
    virtual ::javax::xml::namespace_::QName* getName() = 0;
    virtual ::javax::xml::namespace_::NamespaceContext* getNamespaceContext() = 0;
    virtual ::java::lang::String* getNamespaceURI(::java::lang::String* prefix) = 0;
    virtual ::java::util::Iterator* getNamespaces() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
