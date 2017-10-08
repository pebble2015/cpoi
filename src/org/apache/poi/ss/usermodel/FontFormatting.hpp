// Generated from /POI/java/org/apache/poi/ss/usermodel/FontFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::FontFormatting
    : public virtual ::java::lang::Object
{
    static constexpr int16_t SS_NONE { int16_t(0) };
    static constexpr int16_t SS_SUPER { int16_t(1) };
    static constexpr int16_t SS_SUB { int16_t(2) };
    static constexpr int8_t U_NONE { int8_t(0) };
    static constexpr int8_t U_SINGLE { int8_t(1) };
    static constexpr int8_t U_DOUBLE { int8_t(2) };
    static constexpr int8_t U_SINGLE_ACCOUNTING { int8_t(33) };
    static constexpr int8_t U_DOUBLE_ACCOUNTING { int8_t(34) };
    virtual int16_t getEscapementType() = 0;
    virtual void setEscapementType(int16_t escapementType) = 0;
    virtual int16_t getFontColorIndex() = 0;
    virtual void setFontColorIndex(int16_t color) = 0;
    virtual Color* getFontColor() = 0;
    virtual void setFontColor(Color* color) = 0;
    virtual int32_t getFontHeight() = 0;
    virtual void setFontHeight(int32_t height) = 0;
    virtual int16_t getUnderlineType() = 0;
    virtual void setUnderlineType(int16_t underlineType) = 0;
    virtual bool isBold() = 0;
    virtual bool isItalic() = 0;
    virtual bool isStruckout() = 0;
    virtual void setFontStyle(bool italic, bool bold) = 0;
    virtual void resetFontStyle() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
