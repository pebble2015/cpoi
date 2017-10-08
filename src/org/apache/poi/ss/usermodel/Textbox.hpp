// Generated from /POI/java/org/apache/poi/ss/usermodel/Textbox.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::Textbox
    : public virtual ::java::lang::Object
{
    static constexpr int16_t OBJECT_TYPE_TEXT { int16_t(6) };
    virtual RichTextString* getString() = 0;
    virtual void setString(RichTextString* string) = 0;
    virtual int32_t getMarginLeft() = 0;
    virtual void setMarginLeft(int32_t marginLeft) = 0;
    virtual int32_t getMarginRight() = 0;
    virtual void setMarginRight(int32_t marginRight) = 0;
    virtual int32_t getMarginTop() = 0;
    virtual void setMarginTop(int32_t marginTop) = 0;
    virtual int32_t getMarginBottom() = 0;
    virtual void setMarginBottom(int32_t marginBottom) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
