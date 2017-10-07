// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::security::PrivilegedAction
    : public virtual ::java::lang::Object
{

    virtual ::java::lang::Object* run() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
