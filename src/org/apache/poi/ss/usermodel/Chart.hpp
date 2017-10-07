// Generated from /POI/java/org/apache/poi/ss/usermodel/Chart.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/ManuallyPositionable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
                    namespace charts
                    {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::charts::ChartAxis, ::java::lang::ObjectArray > ChartAxisArray;
                    } // charts
                } // usermodel
            } // ss
        } // poi
    } // apache
} // org

struct org::apache::poi::ss::usermodel::Chart
    : public virtual ::org::apache::poi::ss::usermodel::charts::ManuallyPositionable
{
    virtual ::org::apache::poi::ss::usermodel::charts::ChartDataFactory* getChartDataFactory() = 0;
    virtual ::org::apache::poi::ss::usermodel::charts::ChartAxisFactory* getChartAxisFactory() = 0;
    virtual ::org::apache::poi::ss::usermodel::charts::ChartLegend* getOrCreateLegend() = 0;
    virtual void deleteLegend() = 0;
    virtual ::java::util::List* getAxis() = 0;
    virtual void plot(::org::apache::poi::ss::usermodel::charts::ChartData* data, ::org::apache::poi::ss::usermodel::charts::ChartAxisArray*/*...*/ axis) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
