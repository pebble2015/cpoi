// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartDataFactory.java

#pragma once

#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::charts::ChartDataFactory
    : public virtual ::java::lang::Object
{
    virtual ScatterChartData* createScatterChartData() = 0;
    virtual LineChartData* createLineChartData() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
