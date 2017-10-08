// Generated from /POI/java/org/apache/poi/sl/usermodel/Slide.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

struct poi::sl::usermodel::Slide
    : public virtual Sheet
{
    virtual Notes* getNotes() = 0;
    virtual void setNotes(Notes* notes) = 0;
    virtual bool getFollowMasterBackground() = 0;
    virtual void setFollowMasterBackground(bool follow) = 0;
    virtual bool getFollowMasterColourScheme() = 0;
    virtual void setFollowMasterColourScheme(bool follow) = 0;
    virtual bool getFollowMasterObjects() = 0;
    virtual void setFollowMasterObjects(bool follow) = 0;
    virtual int32_t getSlideNumber() = 0;
    virtual ::java::lang::String* getTitle() = 0;
    virtual bool getDisplayPlaceholder(Placeholder* placeholder) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
