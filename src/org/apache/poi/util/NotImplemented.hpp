// Generated from /POI/java/org/apache/poi/util/NotImplemented.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/annotation/Annotation.hpp>

struct poi::util::NotImplemented
    : public virtual ::java::lang::annotation::Annotation
{
    virtual ::java::lang::String* value() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
