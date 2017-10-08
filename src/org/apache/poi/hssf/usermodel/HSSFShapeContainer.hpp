// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFShapeContainer.java

#pragma once

#include <fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/ShapeContainer.hpp>

struct poi::hssf::usermodel::HSSFShapeContainer
    : public virtual ::poi::ss::usermodel::ShapeContainer
{
    virtual ::java::util::List* getChildren() = 0;
    virtual void addShape(HSSFShape* shape) = 0;
    virtual void setCoordinates(int32_t x1, int32_t y1, int32_t x2, int32_t y2) = 0;
    virtual void clear() = 0;
    virtual int32_t getX1() = 0;
    virtual int32_t getY1() = 0;
    virtual int32_t getX2() = 0;
    virtual int32_t getY2() = 0;
    virtual bool removeShape(HSSFShape* shape) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
