// Generated from /POI/java/org/apache/poi/ss/usermodel/Chart.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ManuallyPositionable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
            namespace charts
            {
typedef ::SubArray< ::poi::ss::usermodel::charts::ChartAxis, ::java::lang::ObjectArray > ChartAxisArray;
            } // charts
        } // usermodel
    } // ss
} // poi

struct poi::ss::usermodel::Chart
    : public virtual ::poi::ss::usermodel::charts::ManuallyPositionable
{
    virtual ::poi::ss::usermodel::charts::ChartDataFactory* getChartDataFactory() = 0;
    virtual ::poi::ss::usermodel::charts::ChartAxisFactory* getChartAxisFactory() = 0;
    virtual ::poi::ss::usermodel::charts::ChartLegend* getOrCreateLegend() = 0;
    virtual void deleteLegend() = 0;
    virtual ::java::util::List* getAxis() = 0;
    virtual void plot(::poi::ss::usermodel::charts::ChartData* data, ::poi::ss::usermodel::charts::ChartAxisArray*/*...*/ axis) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
