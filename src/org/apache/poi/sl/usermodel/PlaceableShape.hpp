// Generated from /POI/java/org/apache/poi/sl/usermodel/PlaceableShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::usermodel::PlaceableShape
    : public virtual ::java::lang::Object
{
    virtual ShapeContainer* getParent() = 0;
    virtual Sheet* getSheet() = 0;
    virtual ::java::awt::geom::Rectangle2D* getAnchor() = 0;
    virtual void setAnchor(::java::awt::geom::Rectangle2D* anchor) = 0;
    virtual double getRotation() = 0;
    virtual void setRotation(double theta) = 0;
    virtual void setFlipHorizontal(bool flip) = 0;
    virtual void setFlipVertical(bool flip) = 0;
    virtual bool getFlipHorizontal() = 0;
    virtual bool getFlipVertical() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
