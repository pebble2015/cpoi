// Generated from /POI/java/org/apache/poi/sl/usermodel/PaintStyle.java

#pragma once

#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle.hpp>

struct poi::sl::usermodel::PaintStyle_SolidPaint
    : public virtual PaintStyle
{
    virtual ColorStyle* getSolidColor() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
