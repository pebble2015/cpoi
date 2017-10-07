// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/stream/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::stream::XMLOutputFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::String* DEFAULIMPL_;
    static ::java::lang::String* IS_REPAIRING_NAMESPACES_;

protected:
    void ctor();

public:
    virtual XMLEventWriter* createXMLEventWriter(::javax::xml::transform::Result* result) = 0;
    virtual XMLEventWriter* createXMLEventWriter(::java::io::OutputStream* stream) = 0;
    virtual XMLEventWriter* createXMLEventWriter(::java::io::Writer* stream) = 0;
    virtual XMLEventWriter* createXMLEventWriter(::java::io::OutputStream* stream, ::java::lang::String* encoding) = 0;
    virtual XMLStreamWriter* createXMLStreamWriter(::java::io::Writer* stream) = 0;
    virtual XMLStreamWriter* createXMLStreamWriter(::java::io::OutputStream* stream) = 0;
    virtual XMLStreamWriter* createXMLStreamWriter(::javax::xml::transform::Result* result) = 0;
    virtual XMLStreamWriter* createXMLStreamWriter(::java::io::OutputStream* stream, ::java::lang::String* encoding) = 0;
    virtual ::java::lang::Object* getProperty(::java::lang::String* name) = 0;
    virtual bool isPropertySupported(::java::lang::String* name) = 0;
    static XMLOutputFactory* newFactory();
    static XMLOutputFactory* newFactory(::java::lang::String* factoryId, ::java::lang::ClassLoader* classLoader);
    static XMLOutputFactory* newInstance();
    static XMLInputFactory* newInstance(::java::lang::String* factoryId, ::java::lang::ClassLoader* classLoader);
    virtual void setProperty(::java::lang::String* name, ::java::lang::Object* value) = 0;

    // Generated

public: /* protected */
    XMLOutputFactory();
protected:
    XMLOutputFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::lang::String*& DEFAULIMPL();

public:
    static ::java::lang::String*& IS_REPAIRING_NAMESPACES();

private:
    virtual ::java::lang::Class* getClass0();
};
