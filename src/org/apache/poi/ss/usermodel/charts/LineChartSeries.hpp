// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LineChartSeries.java

#pragma once

#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartSeries.hpp>

struct poi::ss::usermodel::charts::LineChartSeries
    : public virtual ChartSeries
{
    virtual ChartDataSource* getCategoryAxisData() = 0;
    virtual ChartDataSource* getValues() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
