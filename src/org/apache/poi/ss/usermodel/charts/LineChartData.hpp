// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/LineChartData.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartData.hpp>

struct org::apache::poi::ss::usermodel::charts::LineChartData
    : public virtual ChartData
{
    virtual LineChartSeries* addSeries(ChartDataSource* categories, ChartDataSource* values) = 0;
    virtual ::java::util::List* getSeries() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
