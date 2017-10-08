// Generated from /POI/java/org/apache/poi/ss/usermodel/DifferentialStyleProvider.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::DifferentialStyleProvider
    : public virtual ::java::lang::Object
{
    virtual BorderFormatting* getBorderFormatting() = 0;
    virtual FontFormatting* getFontFormatting() = 0;
    virtual ExcelNumberFormat* getNumberFormat() = 0;
    virtual PatternFormatting* getPatternFormatting() = 0;
    virtual int32_t getStripeSize() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
