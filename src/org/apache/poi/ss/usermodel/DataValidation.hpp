// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidation.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::DataValidation
    : public virtual ::java::lang::Object
{
    virtual DataValidationConstraint* getValidationConstraint() = 0;
    virtual void setErrorStyle(int32_t error_style) = 0;
    virtual int32_t getErrorStyle() = 0;
    virtual void setEmptyCellAllowed(bool allowed) = 0;
    virtual bool getEmptyCellAllowed() = 0;
    virtual void setSuppressDropDownArrow(bool suppress) = 0;
    virtual bool getSuppressDropDownArrow() = 0;
    virtual void setShowPromptBox(bool show) = 0;
    virtual bool getShowPromptBox() = 0;
    virtual void setShowErrorBox(bool show) = 0;
    virtual bool getShowErrorBox() = 0;
    virtual void createPromptBox(::java::lang::String* title, ::java::lang::String* text) = 0;
    virtual ::java::lang::String* getPromptBoxTitle() = 0;
    virtual ::java::lang::String* getPromptBoxText() = 0;
    virtual void createErrorBox(::java::lang::String* title, ::java::lang::String* text) = 0;
    virtual ::java::lang::String* getErrorBoxTitle() = 0;
    virtual ::java::lang::String* getErrorBoxText() = 0;
    virtual ::org::apache::poi::ss::util::CellRangeAddressList* getRegions() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
