// Generated from /POI/java/org/apache/poi/ss/usermodel/Font.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::Font
    : public virtual ::java::lang::Object
{
    static constexpr int16_t COLOR_NORMAL { int16_t(32767) };
    static constexpr int16_t COLOR_RED { int16_t(10) };
    static constexpr int16_t SS_NONE { int16_t(0) };
    static constexpr int16_t SS_SUPER { int16_t(1) };
    static constexpr int16_t SS_SUB { int16_t(2) };
    static constexpr int8_t U_NONE { int8_t(0) };
    static constexpr int8_t U_SINGLE { int8_t(1) };
    static constexpr int8_t U_DOUBLE { int8_t(2) };
    static constexpr int8_t U_SINGLE_ACCOUNTING { int8_t(33) };
    static constexpr int8_t U_DOUBLE_ACCOUNTING { int8_t(34) };
    static constexpr int8_t ANSI_CHARSET { int8_t(0) };
    static constexpr int8_t DEFAULT_CHARSET { int8_t(1) };
    static constexpr int8_t SYMBOL_CHARSET { int8_t(2) };
    virtual void setFontName(::java::lang::String* name) = 0;
    virtual ::java::lang::String* getFontName() = 0;
    virtual void setFontHeight(int16_t height) = 0;
    virtual void setFontHeightInPoints(int16_t height) = 0;
    virtual int16_t getFontHeight() = 0;
    virtual int16_t getFontHeightInPoints() = 0;
    virtual void setItalic(bool italic) = 0;
    virtual bool getItalic() = 0;
    virtual void setStrikeout(bool strikeout) = 0;
    virtual bool getStrikeout() = 0;
    virtual void setColor(int16_t color) = 0;
    virtual int16_t getColor() = 0;
    virtual void setTypeOffset(int16_t offset) = 0;
    virtual int16_t getTypeOffset() = 0;
    virtual void setUnderline(int8_t underline) = 0;
    virtual int8_t getUnderline() = 0;
    virtual int32_t getCharSet() = 0;
    virtual void setCharSet(int8_t charset) = 0;
    virtual void setCharSet(int32_t charset) = 0;
    virtual int16_t getIndex() = 0;
    virtual void setBold(bool bold) = 0;
    virtual bool getBold() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
