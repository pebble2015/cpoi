// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/reflect/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::lang::reflect::Member
    : public virtual ::java::lang::Object
{
    static constexpr int32_t DECLARED { int32_t(1) };
    static constexpr int32_t PUBLIC { int32_t(0) };

    virtual ::java::lang::Class* getDeclaringClass() = 0;
    virtual int32_t getModifiers() = 0;
    virtual ::java::lang::String* getName() = 0;
    virtual bool isSynthetic() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
