// Generated from /POI/java/org/apache/poi/hssf/record/Margin.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::hssf::record::Margin
    : public virtual ::java::lang::Object
{
    virtual double getMargin() = 0;
    virtual void setMargin(double field_1_margin) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
