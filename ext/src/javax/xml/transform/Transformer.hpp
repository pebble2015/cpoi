// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::transform::Transformer
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual void clearParameters() = 0;
    virtual ErrorListener* getErrorListener() = 0;
    virtual ::java::util::Properties* getOutputProperties() = 0;
    virtual ::java::lang::String* getOutputProperty(::java::lang::String* name) = 0;
    virtual ::java::lang::Object* getParameter(::java::lang::String* name) = 0;
    virtual URIResolver* getURIResolver() = 0;
    virtual void reset();
    virtual void setErrorListener(ErrorListener* listener) = 0;
    virtual void setOutputProperties(::java::util::Properties* oformat) = 0;
    virtual void setOutputProperty(::java::lang::String* name, ::java::lang::String* value) = 0;
    virtual void setParameter(::java::lang::String* name, ::java::lang::Object* value) = 0;
    virtual void setURIResolver(URIResolver* resolver) = 0;
    virtual void transform(Source* xmlSource, Result* outputTarget) = 0;

    // Generated

public: /* protected */
    Transformer();
protected:
    Transformer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
