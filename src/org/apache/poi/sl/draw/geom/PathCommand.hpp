// Generated from /POI/java/org/apache/poi/sl/draw/geom/PathCommand.java

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::draw::geom::PathCommand
    : public virtual ::java::lang::Object
{
    virtual void execute(::java::awt::geom::Path2D_Double* path, Context* ctx) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
