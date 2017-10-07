// Generated from /POI/java/org/apache/poi/util/Internal.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/annotation/Annotation.hpp>

struct org::apache::poi::util::Internal
    : public virtual ::java::lang::annotation::Annotation
{
    virtual ::java::lang::String* value() = 0;
    virtual ::java::lang::String* since() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
