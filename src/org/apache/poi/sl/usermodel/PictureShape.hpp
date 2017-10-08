// Generated from /POI/java/org/apache/poi/sl/usermodel/PictureShape.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/SimpleShape.hpp>

struct poi::sl::usermodel::PictureShape
    : public virtual SimpleShape
{
    virtual PictureData* getPictureData() = 0;
    virtual ::java::awt::Insets* getClipping() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
