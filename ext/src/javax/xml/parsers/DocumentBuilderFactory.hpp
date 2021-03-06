// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/parsers/fwd-POI.hpp>
#include <javax/xml/validation/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::parsers::DocumentBuilderFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    bool coalescing {  };
    bool expandEntityRef {  };
    bool ignoreComments {  };
    bool namespaceAware {  };
    bool validating {  };
    bool whitespace {  };

protected:
    void ctor();

public:
    virtual ::java::lang::Object* getAttribute(::java::lang::String* name) = 0;
    virtual bool getFeature(::java::lang::String* name) = 0;
    virtual ::javax::xml::validation::Schema* getSchema();
    virtual bool isCoalescing();
    virtual bool isExpandEntityReferences();
    virtual bool isIgnoringComments();
    virtual bool isIgnoringElementContentWhitespace();
    virtual bool isNamespaceAware();
    virtual bool isValidating();
    virtual bool isXIncludeAware();
    virtual DocumentBuilder* newDocumentBuilder() = 0;
    static DocumentBuilderFactory* newInstance();
    static DocumentBuilderFactory* newInstance(::java::lang::String* factoryClassName, ::java::lang::ClassLoader* classLoader);
    virtual void setAttribute(::java::lang::String* name, ::java::lang::Object* value) = 0;
    virtual void setCoalescing(bool coalescing);
    virtual void setExpandEntityReferences(bool expandEntityRef);
    virtual void setFeature(::java::lang::String* name, bool value) = 0;
    virtual void setIgnoringComments(bool ignoreComments);
    virtual void setIgnoringElementContentWhitespace(bool whitespace);
    virtual void setNamespaceAware(bool awareness);
    virtual void setSchema(::javax::xml::validation::Schema* schema);
    virtual void setValidating(bool validating);
    virtual void setXIncludeAware(bool state);

    // Generated

public: /* protected */
    DocumentBuilderFactory();
protected:
    DocumentBuilderFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
