// Generated from /POI/java/org/apache/poi/ss/usermodel/RichTextString.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::RichTextString
    : public virtual ::java::lang::Object
{
    virtual void applyFont(int32_t startIndex, int32_t endIndex, int16_t fontIndex) = 0;
    virtual void applyFont(int32_t startIndex, int32_t endIndex, Font* font) = 0;
    virtual void applyFont(Font* font) = 0;
    virtual void clearFormatting() = 0;
    virtual ::java::lang::String* getString() = 0;
    virtual int32_t length() = 0;
    virtual int32_t numFormattingRuns() = 0;
    virtual int32_t getIndexOfFormattingRun(int32_t index) = 0;
    virtual void applyFont(int16_t fontIndex) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
