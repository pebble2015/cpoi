// Generated from /POI/java/org/apache/poi/sl/usermodel/LineDecoration.java

#pragma once

#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::usermodel::LineDecoration
    : public virtual ::java::lang::Object
{
    virtual LineDecoration_DecorationShape* getHeadShape() = 0;
    virtual LineDecoration_DecorationSize* getHeadWidth() = 0;
    virtual LineDecoration_DecorationSize* getHeadLength() = 0;
    virtual LineDecoration_DecorationShape* getTailShape() = 0;
    virtual LineDecoration_DecorationSize* getTailWidth() = 0;
    virtual LineDecoration_DecorationSize* getTailLength() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
