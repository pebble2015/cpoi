// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <javax/xml/bind/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class javax::xml::bind::Unmarshaller_Listener
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual void afterUnmarshal(::java::lang::Object* target, ::java::lang::Object* parent);
    virtual void beforeUnmarshal(::java::lang::Object* target, ::java::lang::Object* parent);

    // Generated
    Unmarshaller_Listener();
protected:
    Unmarshaller_Listener(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
