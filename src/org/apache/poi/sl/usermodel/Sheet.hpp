// Generated from /POI/java/org/apache/poi/sl/usermodel/Sheet.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/ShapeContainer.hpp>

struct poi::sl::usermodel::Sheet
    : public virtual ShapeContainer
{
    virtual SlideShow* getSlideShow() = 0;
    virtual bool getFollowMasterGraphics() = 0;
    virtual MasterSheet* getMasterSheet() = 0;
    virtual Background* getBackground() = 0;
    virtual void draw(::java::awt::Graphics2D* graphics) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
