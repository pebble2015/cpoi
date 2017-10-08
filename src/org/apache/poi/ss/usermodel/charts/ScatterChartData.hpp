// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ScatterChartData.java

#pragma once

#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ChartData.hpp>

struct poi::ss::usermodel::charts::ScatterChartData
    : public virtual ChartData
{
    virtual ScatterChartSeries* addSerie(ChartDataSource* xs, ChartDataSource* ys) = 0;
    virtual ::java::util::List* getSeries() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
