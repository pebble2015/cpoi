// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartSeries.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::charts::ChartSeries
    : public virtual ::java::lang::Object
{
    virtual void setTitle(::java::lang::String* title) = 0;
    virtual void setTitle(::org::apache::poi::ss::util::CellReference* titleReference) = 0;
    virtual ::java::lang::String* getTitleString() = 0;
    virtual ::org::apache::poi::ss::util::CellReference* getTitleCellReference() = 0;
    virtual TitleType* getTitleType() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
