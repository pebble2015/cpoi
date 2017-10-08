// Generated from /POI/java/org/apache/poi/ss/usermodel/ColorScaleFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::Color, ::java::lang::ObjectArray > ColorArray;
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingThreshold, ::java::lang::ObjectArray > ConditionalFormattingThresholdArray;
        } // usermodel
    } // ss
} // poi

struct poi::ss::usermodel::ColorScaleFormatting
    : public virtual ::java::lang::Object
{
    virtual int32_t getNumControlPoints() = 0;
    virtual void setNumControlPoints(int32_t num) = 0;
    virtual ColorArray* getColors() = 0;
    virtual void setColors(ColorArray* colors) = 0;
    virtual ConditionalFormattingThresholdArray* getThresholds() = 0;
    virtual void setThresholds(ConditionalFormattingThresholdArray* thresholds) = 0;
    virtual ConditionalFormattingThreshold* createThreshold() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
