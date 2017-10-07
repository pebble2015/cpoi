// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::util::Formatter_FormatString
    : public virtual ::java::lang::Object
{

    virtual int32_t index() = 0;
    virtual void print(::java::lang::Object* arg, Locale* l) = 0;
    /*virtual ::java::lang::String* toString(); (already declared) */

    // Generated
    static ::java::lang::Class *class_();
};
