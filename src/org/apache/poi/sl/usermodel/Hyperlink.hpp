// Generated from /POI/java/org/apache/poi/sl/usermodel/Hyperlink.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/Hyperlink.hpp>

struct org::apache::poi::sl::usermodel::Hyperlink
    : public virtual ::org::apache::poi::common::usermodel::Hyperlink
{
    virtual void linkToEmail(::java::lang::String* emailAddress) = 0;
    virtual void linkToUrl(::java::lang::String* url) = 0;
    virtual void linkToSlide(Slide* slide) = 0;
    virtual void linkToNextSlide() = 0;
    virtual void linkToPreviousSlide() = 0;
    virtual void linkToFirstSlide() = 0;
    virtual void linkToLastSlide() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
