// Generated from /POI/java/org/apache/poi/poifs/property/Child.java

#pragma once

#include <org/apache/poi/poifs/property/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::poifs::property::Child
    : public virtual ::java::lang::Object
{
    virtual Child* getNextChild() = 0;
    virtual Child* getPreviousChild() = 0;
    virtual void setNextChild(Child* child) = 0;
    virtual void setPreviousChild(Child* child) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
