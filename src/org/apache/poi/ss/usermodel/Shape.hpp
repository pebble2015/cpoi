// Generated from /POI/java/org/apache/poi/ss/usermodel/Shape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::Shape
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getShapeName() = 0;
    virtual Shape* getParent() = 0;
    virtual ChildAnchor* getAnchor() = 0;
    virtual bool isNoFill() = 0;
    virtual void setNoFill(bool noFill) = 0;
    virtual void setFillColor(int32_t red, int32_t green, int32_t blue) = 0;
    virtual void setLineStyleColor(int32_t red, int32_t green, int32_t blue) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
