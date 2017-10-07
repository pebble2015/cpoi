// Generated from /POI/java/org/apache/poi/sl/usermodel/Shape.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::sl::usermodel::Shape
    : public virtual ::java::lang::Object
{
    virtual ShapeContainer* getParent() = 0;
    virtual Sheet* getSheet() = 0;
    virtual ::java::awt::geom::Rectangle2D* getAnchor() = 0;
    virtual void draw(::java::awt::Graphics2D* graphics, ::java::awt::geom::Rectangle2D* bounds) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
