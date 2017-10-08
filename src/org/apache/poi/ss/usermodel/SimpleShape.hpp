// Generated from /POI/java/org/apache/poi/ss/usermodel/SimpleShape.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/Shape.hpp>

struct poi::ss::usermodel::SimpleShape
    : public virtual Shape
{
    virtual int32_t getShapeId() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
