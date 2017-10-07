// Generated from /POI/java/org/apache/poi/sl/draw/geom/IAdjustableShape.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::draw::geom::IAdjustableShape
    : public virtual ::java::lang::Object
{
    virtual Guide* getAdjustValue(::java::lang::String* name) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
