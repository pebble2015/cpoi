// Generated from /POI/java/org/apache/poi/sl/usermodel/TableCell.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>

struct poi::sl::usermodel::TableCell
    : public virtual TextShape
{
    virtual StrokeStyle* getBorderStyle(TableCell_BorderEdge* edge) = 0;
    virtual void setBorderStyle(TableCell_BorderEdge* edge, StrokeStyle* style) = 0;
    virtual void setBorderWidth(TableCell_BorderEdge* edge, double width) = 0;
    virtual void setBorderColor(TableCell_BorderEdge* edge, ::java::awt::Color* color) = 0;
    virtual void setBorderCompound(TableCell_BorderEdge* edge, StrokeStyle_LineCompound* compound) = 0;
    virtual void setBorderDash(TableCell_BorderEdge* edge, StrokeStyle_LineDash* dash) = 0;
    virtual void removeBorder(TableCell_BorderEdge* edge) = 0;
    virtual int32_t getGridSpan() = 0;
    virtual int32_t getRowSpan() = 0;
    virtual bool isMerged() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
