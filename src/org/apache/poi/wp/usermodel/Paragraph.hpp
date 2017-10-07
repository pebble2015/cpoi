// Generated from /POI/java/org/apache/poi/wp/usermodel/Paragraph.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/wp/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::wp::usermodel::Paragraph
    : public virtual ::java::lang::Object
{
    virtual int32_t getIndentFromRight() = 0;
    virtual void setIndentFromRight(int32_t dxaRight) = 0;
    virtual int32_t getIndentFromLeft() = 0;
    virtual void setIndentFromLeft(int32_t dxaLeft) = 0;
    virtual int32_t getFirstLineIndent() = 0;
    virtual void setFirstLineIndent(int32_t first) = 0;
    virtual int32_t getFontAlignment() = 0;
    virtual void setFontAlignment(int32_t align) = 0;
    virtual bool isWordWrapped() = 0;
    virtual void setWordWrapped(bool wrap) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
