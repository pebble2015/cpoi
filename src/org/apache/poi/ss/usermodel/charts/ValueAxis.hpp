// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ValueAxis.java

#pragma once

#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartAxis.hpp>

struct org::apache::poi::ss::usermodel::charts::ValueAxis
    : public virtual ChartAxis
{
    virtual AxisCrossBetween* getCrossBetween() = 0;
    virtual void setCrossBetween(AxisCrossBetween* crossBetween) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
