// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/xml/namespace_/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <javax/xml/stream/events/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::stream::XMLEventFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* DEFAULIMPL_;
    static ::java::lang::String* JAXPFACTORYID_;

protected:
    void ctor();

public:
    virtual ::javax::xml::stream::events::Attribute* createAttribute(::java::lang::String* localName, ::java::lang::String* value) = 0;
    virtual ::javax::xml::stream::events::Attribute* createAttribute(::javax::xml::namespace_::QName* name, ::java::lang::String* value) = 0;
    virtual ::javax::xml::stream::events::Attribute* createAttribute(::java::lang::String* prefix, ::java::lang::String* namespaceURI, ::java::lang::String* localName, ::java::lang::String* value) = 0;
    virtual ::javax::xml::stream::events::Characters* createCData(::java::lang::String* content) = 0;
    virtual ::javax::xml::stream::events::Characters* createCharacters(::java::lang::String* content) = 0;
    virtual ::javax::xml::stream::events::Comment* createComment(::java::lang::String* text) = 0;
    virtual ::javax::xml::stream::events::DTD* createDTD(::java::lang::String* dtd) = 0;
    virtual ::javax::xml::stream::events::EndDocument* createEndDocument() = 0;
    virtual ::javax::xml::stream::events::EndElement* createEndElement(::javax::xml::namespace_::QName* name, ::java::util::Iterator* namespaces) = 0;
    virtual ::javax::xml::stream::events::EndElement* createEndElement(::java::lang::String* prefix, ::java::lang::String* namespaceUri, ::java::lang::String* localName) = 0;
    virtual ::javax::xml::stream::events::EndElement* createEndElement(::java::lang::String* prefix, ::java::lang::String* namespaceUri, ::java::lang::String* localName, ::java::util::Iterator* namespaces) = 0;
    virtual ::javax::xml::stream::events::EntityReference* createEntityReference(::java::lang::String* name, ::javax::xml::stream::events::EntityDeclaration* declaration) = 0;
    virtual ::javax::xml::stream::events::Characters* createIgnorableSpace(::java::lang::String* content) = 0;
    virtual ::javax::xml::stream::events::Namespace* createNamespace(::java::lang::String* namespaceURI) = 0;
    virtual ::javax::xml::stream::events::Namespace* createNamespace(::java::lang::String* prefix, ::java::lang::String* namespaceUri) = 0;
    virtual ::javax::xml::stream::events::ProcessingInstruction* createProcessingInstruction(::java::lang::String* target, ::java::lang::String* data) = 0;
    virtual ::javax::xml::stream::events::Characters* createSpace(::java::lang::String* content) = 0;
    virtual ::javax::xml::stream::events::StartDocument* createStartDocument() = 0;
    virtual ::javax::xml::stream::events::StartDocument* createStartDocument(::java::lang::String* encoding) = 0;
    virtual ::javax::xml::stream::events::StartDocument* createStartDocument(::java::lang::String* encoding, ::java::lang::String* version) = 0;
    virtual ::javax::xml::stream::events::StartDocument* createStartDocument(::java::lang::String* encoding, ::java::lang::String* version, bool standalone) = 0;
    virtual ::javax::xml::stream::events::StartElement* createStartElement(::javax::xml::namespace_::QName* name, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces) = 0;
    virtual ::javax::xml::stream::events::StartElement* createStartElement(::java::lang::String* prefix, ::java::lang::String* namespaceUri, ::java::lang::String* localName) = 0;
    virtual ::javax::xml::stream::events::StartElement* createStartElement(::java::lang::String* prefix, ::java::lang::String* namespaceUri, ::java::lang::String* localName, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces) = 0;
    virtual ::javax::xml::stream::events::StartElement* createStartElement(::java::lang::String* prefix, ::java::lang::String* namespaceUri, ::java::lang::String* localName, ::java::util::Iterator* attributes, ::java::util::Iterator* namespaces, ::javax::xml::namespace_::NamespaceContext* context) = 0;
    static XMLEventFactory* newFactory();
    static XMLEventFactory* newFactory(::java::lang::String* factoryId, ::java::lang::ClassLoader* classLoader);
    static XMLEventFactory* newInstance();
    static XMLEventFactory* newInstance(::java::lang::String* factoryId, ::java::lang::ClassLoader* classLoader);
    virtual void setLocation(Location* location) = 0;

    // Generated

public: /* protected */
    XMLEventFactory();
protected:
    XMLEventFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::lang::String*& DEFAULIMPL();
    static ::java::lang::String*& JAXPFACTORYID();

private:
    virtual ::java::lang::Class* getClass0();
};
