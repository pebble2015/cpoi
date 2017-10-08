// Generated from /POI/java/org/apache/poi/sl/usermodel/Background.java

#pragma once

#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>

struct poi::sl::usermodel::Background
    : public virtual Shape
{
    virtual FillStyle* getFillStyle() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
