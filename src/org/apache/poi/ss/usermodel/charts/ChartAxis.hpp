// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ChartAxis.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::charts::ChartAxis
    : public virtual ::java::lang::Object
{
    virtual int64_t getId() = 0;
    virtual AxisPosition* getPosition() = 0;
    virtual void setPosition(AxisPosition* position) = 0;
    virtual ::java::lang::String* getNumberFormat() = 0;
    virtual void setNumberFormat(::java::lang::String* format) = 0;
    virtual bool isSetLogBase() = 0;
    virtual void setLogBase(double logBase) = 0;
    virtual double getLogBase() = 0;
    virtual bool isSetMinimum() = 0;
    virtual double getMinimum() = 0;
    virtual void setMinimum(double min) = 0;
    virtual bool isSetMaximum() = 0;
    virtual double getMaximum() = 0;
    virtual void setMaximum(double max) = 0;
    virtual AxisOrientation* getOrientation() = 0;
    virtual void setOrientation(AxisOrientation* orientation) = 0;
    virtual void setCrosses(AxisCrosses* crosses) = 0;
    virtual AxisCrosses* getCrosses() = 0;
    virtual void crossAxis(ChartAxis* axis) = 0;
    virtual bool isVisible() = 0;
    virtual void setVisible(bool value) = 0;
    virtual AxisTickMark* getMajorTickMark() = 0;
    virtual void setMajorTickMark(AxisTickMark* tickMark) = 0;
    virtual AxisTickMark* getMinorTickMark() = 0;
    virtual void setMinorTickMark(AxisTickMark* tickMark) = 0;
    virtual bool hasNumberFormat() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
