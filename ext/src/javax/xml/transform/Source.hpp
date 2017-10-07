// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <javax/xml/transform/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::xml::transform::Source
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::String* getSystemId() = 0;
    virtual void setSystemId(::java::lang::String* systemId) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
