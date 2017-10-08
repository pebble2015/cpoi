// Generated from /POI/java/org/apache/poi/ss/usermodel/ChildAnchor.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::ChildAnchor
    : public virtual ::java::lang::Object
{
    virtual int32_t getDx1() = 0;
    virtual void setDx1(int32_t dx1) = 0;
    virtual int32_t getDy1() = 0;
    virtual void setDy1(int32_t dy1) = 0;
    virtual int32_t getDy2() = 0;
    virtual void setDy2(int32_t dy2) = 0;
    virtual int32_t getDx2() = 0;
    virtual void setDx2(int32_t dx2) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
