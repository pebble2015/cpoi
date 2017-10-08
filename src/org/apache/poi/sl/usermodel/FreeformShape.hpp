// Generated from /POI/java/org/apache/poi/sl/usermodel/FreeformShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/AutoShape.hpp>

struct poi::sl::usermodel::FreeformShape
    : public virtual AutoShape
{
    virtual ::java::awt::geom::Path2D_Double* getPath() = 0;
    virtual int32_t setPath(::java::awt::geom::Path2D_Double* path) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
