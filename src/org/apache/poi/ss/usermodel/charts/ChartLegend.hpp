// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartLegend.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ManuallyPositionable.hpp>

struct org::apache::poi::ss::usermodel::charts::ChartLegend
    : public virtual ManuallyPositionable
{
    virtual LegendPosition* getPosition() = 0;
    virtual void setPosition(LegendPosition* position) = 0;
    virtual bool isOverlay() = 0;
    virtual void setOverlay(bool value) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
