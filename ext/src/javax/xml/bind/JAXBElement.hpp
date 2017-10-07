// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/xml/bind/fwd-POI.hpp>
#include <javax/xml/namespace_/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

struct default_init_tag;

class javax::xml::bind::JAXBElement
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::lang::Class* declaredType {  };
    ::javax::xml::namespace_::QName* name {  };
    bool nil {  };
    ::java::lang::Class* scope {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(1LL) };

public: /* protected */
    ::java::lang::Object* value {  };

protected:
    void ctor(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Object* value);
    void ctor(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Class* scope, ::java::lang::Object* value);

public:
    virtual ::java::lang::Class* getDeclaredType();
    virtual ::javax::xml::namespace_::QName* getName();
    virtual ::java::lang::Class* getScope();
    virtual ::java::lang::Object* getValue();
    virtual bool isGlobalScope();
    virtual bool isNil();
    virtual bool isTypeSubstituted();
    virtual void setNil(bool value);
    virtual void setValue(::java::lang::Object* t);

    // Generated
    JAXBElement(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Object* value);
    JAXBElement(::javax::xml::namespace_::QName* name, ::java::lang::Class* declaredType, ::java::lang::Class* scope, ::java::lang::Object* value);
protected:
    JAXBElement(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
