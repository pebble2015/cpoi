// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <javax/xml/namespace_/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <javax/xml/stream/events/fwd-POI.hpp>
#include <javax/xml/stream/XMLStreamConstants.hpp>

struct javax::xml::stream::events::XMLEvent
    : public virtual ::javax::xml::stream::XMLStreamConstants
{

    virtual Characters* asCharacters() = 0;
    virtual EndElement* asEndElement() = 0;
    virtual StartElement* asStartElement() = 0;
    virtual int32_t getEventType() = 0;
    virtual ::javax::xml::stream::Location* getLocation() = 0;
    virtual ::javax::xml::namespace_::QName* getSchemaType() = 0;
    virtual bool isAttribute() = 0;
    virtual bool isCharacters() = 0;
    virtual bool isEndDocument() = 0;
    virtual bool isEndElement() = 0;
    virtual bool isEntityReference() = 0;
    virtual bool isNamespace() = 0;
    virtual bool isProcessingInstruction() = 0;
    virtual bool isStartDocument() = 0;
    virtual bool isStartElement() = 0;
    virtual void writeAsEncodedUnicode(::java::io::Writer* writer) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
