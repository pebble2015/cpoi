// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/parsers/fwd-POI.hpp>
#include <javax/xml/validation/fwd-POI.hpp>
#include <org/w3c/dom/fwd-POI.hpp>
#include <org/xml/sax/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::parsers::DocumentBuilder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual ::org::w3c::dom::DOMImplementation* getDOMImplementation() = 0;
    virtual ::javax::xml::validation::Schema* getSchema();
    virtual bool isNamespaceAware() = 0;
    virtual bool isValidating() = 0;
    virtual bool isXIncludeAware();
    virtual ::org::w3c::dom::Document* newDocument() = 0;
    virtual ::org::w3c::dom::Document* parse(::java::io::InputStream* is);
    virtual ::org::w3c::dom::Document* parse(::java::lang::String* uri);
    virtual ::org::w3c::dom::Document* parse(::java::io::File* f);
    virtual ::org::w3c::dom::Document* parse(::org::xml::sax::InputSource* is) = 0;
    virtual ::org::w3c::dom::Document* parse(::java::io::InputStream* is, ::java::lang::String* systemId);
    virtual void reset();
    virtual void setEntityResolver(::org::xml::sax::EntityResolver* er) = 0;
    virtual void setErrorHandler(::org::xml::sax::ErrorHandler* eh) = 0;

    // Generated

public: /* protected */
    DocumentBuilder();
protected:
    DocumentBuilder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
