// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::Transparency
    : public virtual ::java::lang::Object
{
    static constexpr int32_t BITMASK { int32_t(2) };
    static constexpr int32_t OPAQUE { int32_t(1) };
    static constexpr int32_t TRANSLUCENT { int32_t(3) };

    virtual int32_t getTransparency() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
