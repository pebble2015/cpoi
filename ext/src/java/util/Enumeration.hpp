// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::Enumeration
    : public virtual ::java::lang::Object
{

    virtual bool hasMoreElements() = 0;
    virtual ::java::lang::Object* nextElement() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
