// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::transform::TransformerFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual Source* getAssociatedStylesheet(Source* source, ::java::lang::String* media, ::java::lang::String* title, ::java::lang::String* charset) = 0;
    virtual ::java::lang::Object* getAttribute(::java::lang::String* name) = 0;
    virtual ErrorListener* getErrorListener() = 0;
    virtual bool getFeature(::java::lang::String* name) = 0;
    virtual URIResolver* getURIResolver() = 0;
    static TransformerFactory* newInstance();
    static TransformerFactory* newInstance(::java::lang::String* factoryClassName, ::java::lang::ClassLoader* classLoader);
    virtual Templates* newTemplates(Source* source) = 0;
    virtual Transformer* newTransformer() = 0;
    virtual Transformer* newTransformer(Source* source) = 0;
    virtual void setAttribute(::java::lang::String* name, ::java::lang::Object* value) = 0;
    virtual void setErrorListener(ErrorListener* listener) = 0;
    virtual void setFeature(::java::lang::String* name, bool value) = 0;
    virtual void setURIResolver(URIResolver* resolver) = 0;

    // Generated

public: /* protected */
    TransformerFactory();
protected:
    TransformerFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
