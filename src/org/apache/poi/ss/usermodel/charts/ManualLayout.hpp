// Generated from /POI/java/org/apache/poi/ss/usermodel/charts/ManualLayout.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/charts/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::charts::ManualLayout
    : public virtual ::java::lang::Object
{
    virtual void setTarget(LayoutTarget* target) = 0;
    virtual LayoutTarget* getTarget() = 0;
    virtual void setXMode(LayoutMode* mode) = 0;
    virtual LayoutMode* getXMode() = 0;
    virtual void setYMode(LayoutMode* mode) = 0;
    virtual LayoutMode* getYMode() = 0;
    virtual double getX() = 0;
    virtual void setX(double x) = 0;
    virtual double getY() = 0;
    virtual void setY(double y) = 0;
    virtual void setWidthMode(LayoutMode* mode) = 0;
    virtual LayoutMode* getWidthMode() = 0;
    virtual void setHeightMode(LayoutMode* mode) = 0;
    virtual LayoutMode* getHeightMode() = 0;
    virtual void setWidthRatio(double ratio) = 0;
    virtual double getWidthRatio() = 0;
    virtual void setHeightRatio(double ratio) = 0;
    virtual double getHeightRatio() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
