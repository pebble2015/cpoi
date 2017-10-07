// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/net/fwd-POI.hpp>
#include <javax/xml/bind/fwd-POI.hpp>
#include <javax/xml/bind/annotation/adapters/fwd-POI.hpp>
#include <javax/xml/bind/attachment/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <javax/xml/validation/fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <org/xml/sax/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::xml::bind::Unmarshaller
    : public virtual ::java::lang::Object
{

    virtual ::javax::xml::bind::annotation::adapters::XmlAdapter* getAdapter(::java::lang::Class* type) = 0;
    virtual ::javax::xml::bind::attachment::AttachmentUnmarshaller* getAttachmentUnmarshaller() = 0;
    virtual ValidationEventHandler* getEventHandler() = 0;
    virtual Unmarshaller_Listener* getListener() = 0;
    virtual ::java::lang::Object* getProperty(::java::lang::String* name) = 0;
    virtual ::javax::xml::validation::Schema* getSchema() = 0;
    virtual UnmarshallerHandler* getUnmarshallerHandler() = 0;
    virtual bool isValidating() = 0;
    virtual void setAdapter(::javax::xml::bind::annotation::adapters::XmlAdapter* adapter) = 0;
    virtual void setAdapter(::java::lang::Class* type, ::javax::xml::bind::annotation::adapters::XmlAdapter* adapter) = 0;
    virtual void setAttachmentUnmarshaller(::javax::xml::bind::attachment::AttachmentUnmarshaller* au) = 0;
    virtual void setEventHandler(ValidationEventHandler* handler) = 0;
    virtual void setListener(Unmarshaller_Listener* listener) = 0;
    virtual void setProperty(::java::lang::String* name, ::java::lang::Object* value) = 0;
    virtual void setSchema(::javax::xml::validation::Schema* schema) = 0;
    virtual void setValidating(bool validating) = 0;
    virtual ::java::lang::Object* unmarshal(::java::io::File* f) = 0;
    virtual ::java::lang::Object* unmarshal(::java::io::InputStream* is) = 0;
    virtual ::java::lang::Object* unmarshal(::java::io::Reader* reader) = 0;
    virtual ::java::lang::Object* unmarshal(::java::net::URL* url) = 0;
    virtual ::java::lang::Object* unmarshal(::org::xml::sax::InputSource* source) = 0;
    virtual ::java::lang::Object* unmarshal(::org::w3c::dom::Node* node) = 0;
    virtual ::java::lang::Object* unmarshal(::javax::xml::transform::Source* source) = 0;
    virtual ::java::lang::Object* unmarshal(::javax::xml::stream::XMLStreamReader* reader) = 0;
    virtual ::java::lang::Object* unmarshal(::javax::xml::stream::XMLEventReader* reader) = 0;
    virtual JAXBElement* unmarshal(::org::w3c::dom::Node* node, ::java::lang::Class* declaredType) = 0;
    virtual JAXBElement* unmarshal(::javax::xml::transform::Source* source, ::java::lang::Class* declaredType) = 0;
    virtual JAXBElement* unmarshal(::javax::xml::stream::XMLStreamReader* reader, ::java::lang::Class* declaredType) = 0;
    virtual JAXBElement* unmarshal(::javax::xml::stream::XMLEventReader* reader, ::java::lang::Class* declaredType) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
