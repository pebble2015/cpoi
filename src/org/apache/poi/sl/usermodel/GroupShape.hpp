// Generated from /POI/java/org/apache/poi/sl/usermodel/GroupShape.java

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/ShapeContainer.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

struct org::apache::poi::sl::usermodel::GroupShape
    : public virtual Shape
    , public virtual ShapeContainer
    , public virtual PlaceableShape
{
    virtual ::java::awt::geom::Rectangle2D* getInteriorAnchor() = 0;
    virtual void setInteriorAnchor(::java::awt::geom::Rectangle2D* anchor) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ::java::awt::geom::Rectangle2D* getAnchor() = 0;
    virtual ShapeContainer* getParent() = 0;
    virtual Sheet* getSheet() = 0;
};
