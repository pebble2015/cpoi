// Generated from /POI/java/org/apache/poi/sl/usermodel/GraphicalFrame.java

#pragma once

#include <java/awt/geom/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <org/apache/poi/sl/usermodel/ShapeContainer.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

struct org::apache::poi::sl::usermodel::GraphicalFrame
    : public virtual Shape
    , public virtual PlaceableShape
{
    virtual PictureShape* getFallbackPicture() = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual ::java::awt::geom::Rectangle2D* getAnchor() = 0;
    virtual ShapeContainer* getParent() = 0;
    virtual Sheet* getSheet() = 0;
};
