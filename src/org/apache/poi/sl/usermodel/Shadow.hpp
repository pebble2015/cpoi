// Generated from /POI/java/org/apache/poi/sl/usermodel/Shadow.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::usermodel::Shadow
    : public virtual ::java::lang::Object
{
    virtual SimpleShape* getShadowParent() = 0;
    virtual double getDistance() = 0;
    virtual double getAngle() = 0;
    virtual double getBlur() = 0;
    virtual PaintStyle_SolidPaint* getFillStyle() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
