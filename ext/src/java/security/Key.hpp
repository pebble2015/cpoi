// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/security/fwd-POI.hpp>
#include <java/io/Serializable.hpp>

struct java::security::Key
    : public virtual ::java::io::Serializable
{
    static constexpr int64_t serialVersionUID { int64_t(6603384152749567654LL) };

    virtual ::java::lang::String* getAlgorithm() = 0;
    virtual ::int8_tArray* getEncoded() = 0;
    virtual ::java::lang::String* getFormat() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
