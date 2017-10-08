// Generated from /POI/java/org/apache/poi/ss/usermodel/Picture.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/Shape.hpp>

struct poi::ss::usermodel::Picture
    : public virtual Shape
{
    virtual void resize() = 0;
    virtual void resize(double scale) = 0;
    virtual void resize(double scaleX, double scaleY) = 0;
    virtual ClientAnchor* getPreferredSize() = 0;
    virtual ClientAnchor* getPreferredSize(double scaleX, double scaleY) = 0;
    virtual ::java::awt::Dimension* getImageDimension() = 0;
    virtual PictureData* getPictureData() = 0;
    virtual ClientAnchor* getClientAnchor() = 0;
    virtual Sheet* getSheet() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
