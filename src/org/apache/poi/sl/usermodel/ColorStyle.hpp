// Generated from /POI/java/org/apache/poi/sl/usermodel/ColorStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::usermodel::ColorStyle
    : public virtual ::java::lang::Object
{
    virtual ::java::awt::Color* getColor() = 0;
    virtual int32_t getAlpha() = 0;
    virtual int32_t getHueOff() = 0;
    virtual int32_t getHueMod() = 0;
    virtual int32_t getSatOff() = 0;
    virtual int32_t getSatMod() = 0;
    virtual int32_t getLumOff() = 0;
    virtual int32_t getLumMod() = 0;
    virtual int32_t getShade() = 0;
    virtual int32_t getTint() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
