// Generated from /POI/java/org/apache/poi/sl/usermodel/SimpleShape.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/draw/geom/IAdjustableShape.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <org/apache/poi/sl/usermodel/ShapeContainer.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

struct org::apache::poi::sl::usermodel::SimpleShape
    : public virtual Shape
    , public virtual ::org::apache::poi::sl::draw::geom::IAdjustableShape
    , public virtual PlaceableShape
{
    virtual FillStyle* getFillStyle() = 0;
    virtual LineDecoration* getLineDecoration() = 0;
    virtual StrokeStyle* getStrokeStyle() = 0;
    virtual void setStrokeStyle(::java::lang::ObjectArray*/*...*/ styles) = 0;
    virtual ::org::apache::poi::sl::draw::geom::CustomGeometry* getGeometry() = 0;
    virtual ShapeType* getShapeType() = 0;
    virtual void setShapeType(ShapeType* type) = 0;
    virtual Placeholder* getPlaceholder() = 0;
    virtual void setPlaceholder(Placeholder* placeholder) = 0;
    virtual Shadow* getShadow() = 0;
    virtual ::java::awt::Color* getFillColor() = 0;
    virtual void setFillColor(::java::awt::Color* color) = 0;
    virtual Hyperlink* getHyperlink() = 0;
    virtual Hyperlink* createHyperlink() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ::java::awt::geom::Rectangle2D* getAnchor() = 0;
    virtual ShapeContainer* getParent() = 0;
    virtual Sheet* getSheet() = 0;
};
