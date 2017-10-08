// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartAxisFactory.java

#pragma once

#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::charts::ChartAxisFactory
    : public virtual ::java::lang::Object
{
    virtual ValueAxis* createValueAxis(AxisPosition* pos) = 0;
    virtual ChartAxis* createCategoryAxis(AxisPosition* pos) = 0;
    virtual ChartAxis* createDateAxis(AxisPosition* pos) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
