// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/RuntimeException.hpp>

struct default_init_tag;

class java::awt::geom::IllegalPathStateException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;

protected:
    void ctor();
    void ctor(::java::lang::String* s);

    // Generated

public:
    IllegalPathStateException();
    IllegalPathStateException(::java::lang::String* s);
protected:
    IllegalPathStateException(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
