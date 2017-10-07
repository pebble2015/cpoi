// Generated from /POI/java/org/apache/poi/sl/usermodel/TableShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <org/apache/poi/sl/usermodel/ShapeContainer.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

struct org::apache::poi::sl::usermodel::TableShape
    : public virtual Shape
    , public virtual PlaceableShape
{
    virtual int32_t getNumberOfColumns() = 0;
    virtual int32_t getNumberOfRows() = 0;
    virtual TableCell* getCell(int32_t row, int32_t col) = 0;
    virtual double getColumnWidth(int32_t idx) = 0;
    virtual void setColumnWidth(int32_t idx, double width) = 0;
    virtual double getRowHeight(int32_t row) = 0;
    virtual void setRowHeight(int32_t row, double height) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ::java::awt::geom::Rectangle2D* getAnchor() = 0;
    virtual ShapeContainer* getParent() = 0;
    virtual Sheet* getSheet() = 0;
};
