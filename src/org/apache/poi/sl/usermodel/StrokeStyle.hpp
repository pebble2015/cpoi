// Generated from /POI/java/org/apache/poi/sl/usermodel/StrokeStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::usermodel::StrokeStyle
    : public virtual ::java::lang::Object
{
    virtual PaintStyle* getPaint() = 0;
    virtual StrokeStyle_LineCap* getLineCap() = 0;
    virtual StrokeStyle_LineDash* getLineDash() = 0;
    virtual StrokeStyle_LineCompound* getLineCompound() = 0;
    virtual double getLineWidth() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
