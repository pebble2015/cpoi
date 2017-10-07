// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ScatterChartSeries.java

#pragma once

#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartSeries.hpp>

struct org::apache::poi::ss::usermodel::charts::ScatterChartSeries
    : public virtual ChartSeries
{
    virtual ChartDataSource* getXValues() = 0;
    virtual ChartDataSource* getYValues() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
