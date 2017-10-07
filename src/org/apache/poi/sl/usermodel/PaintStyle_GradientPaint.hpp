// Generated from /POI/java/org/apache/poi/sl/usermodel/PaintStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace sl
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::sl::usermodel::ColorStyle, ::java::lang::ObjectArray > ColorStyleArray;
                } // usermodel
            } // sl
        } // poi
    } // apache
} // org

struct org::apache::poi::sl::usermodel::PaintStyle_GradientPaint
    : public virtual PaintStyle
{
    virtual double getGradientAngle() = 0;
    virtual ColorStyleArray* getGradientColors() = 0;
    virtual ::floatArray* getGradientFractions() = 0;
    virtual bool isRotatedWithShape() = 0;
    virtual PaintStyle_GradientPaint_GradientType* getGradientType() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
