// Generated from /POI/java/org/apache/poi/ss/usermodel/DataBarFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::DataBarFormatting
    : public virtual ::java::lang::Object
{
    virtual bool isLeftToRight() = 0;
    virtual void setLeftToRight(bool ltr) = 0;
    virtual bool isIconOnly() = 0;
    virtual void setIconOnly(bool only) = 0;
    virtual int32_t getWidthMin() = 0;
    virtual void setWidthMin(int32_t width) = 0;
    virtual int32_t getWidthMax() = 0;
    virtual void setWidthMax(int32_t width) = 0;
    virtual Color* getColor() = 0;
    virtual void setColor(Color* color) = 0;
    virtual ConditionalFormattingThreshold* getMinThreshold() = 0;
    virtual ConditionalFormattingThreshold* getMaxThreshold() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
