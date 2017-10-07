// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartData.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

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

struct org::apache::poi::ss::usermodel::charts::ChartData
    : public virtual ::java::lang::Object
{
    virtual void fillChart(::org::apache::poi::ss::usermodel::Chart* chart, ChartAxisArray*/*...*/ axis) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
