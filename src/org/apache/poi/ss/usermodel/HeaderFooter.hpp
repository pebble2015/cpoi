// Generated from /POI/java/org/apache/poi/ss/usermodel/HeaderFooter.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::HeaderFooter
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getLeft() = 0;
    virtual void setLeft(::java::lang::String* newLeft) = 0;
    virtual ::java::lang::String* getCenter() = 0;
    virtual void setCenter(::java::lang::String* newCenter) = 0;
    virtual ::java::lang::String* getRight() = 0;
    virtual void setRight(::java::lang::String* newRight) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
