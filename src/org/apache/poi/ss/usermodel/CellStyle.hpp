// Generated from /POI/java/org/apache/poi/ss/usermodel/CellStyle.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::ss::usermodel::CellStyle
    : public virtual ::java::lang::Object
{
    virtual int16_t getIndex() = 0;
    virtual void setDataFormat(int16_t fmt) = 0;
    virtual int16_t getDataFormat() = 0;
    virtual ::java::lang::String* getDataFormatString() = 0;
    virtual void setFont(Font* font) = 0;
    virtual int16_t getFontIndex() = 0;
    virtual void setHidden(bool hidden) = 0;
    virtual bool getHidden() = 0;
    virtual void setLocked(bool locked) = 0;
    virtual bool getLocked() = 0;
    virtual void setQuotePrefixed(bool quotePrefix) = 0;
    virtual bool getQuotePrefixed() = 0;
    virtual void setAlignment(HorizontalAlignment* align) = 0;
    virtual int16_t getAlignment() = 0;
    virtual HorizontalAlignment* getAlignmentEnum() = 0;
    virtual void setWrapText(bool wrapped) = 0;
    virtual bool getWrapText() = 0;
    virtual void setVerticalAlignment(VerticalAlignment* align) = 0;
    virtual int16_t getVerticalAlignment() = 0;
    virtual VerticalAlignment* getVerticalAlignmentEnum() = 0;
    virtual void setRotation(int16_t rotation) = 0;
    virtual int16_t getRotation() = 0;
    virtual void setIndention(int16_t indent) = 0;
    virtual int16_t getIndention() = 0;
    virtual void setBorderLeft(BorderStyle* border) = 0;
    virtual int16_t getBorderLeft() = 0;
    virtual BorderStyle* getBorderLeftEnum() = 0;
    virtual void setBorderRight(BorderStyle* border) = 0;
    virtual int16_t getBorderRight() = 0;
    virtual BorderStyle* getBorderRightEnum() = 0;
    virtual void setBorderTop(BorderStyle* border) = 0;
    virtual int16_t getBorderTop() = 0;
    virtual BorderStyle* getBorderTopEnum() = 0;
    virtual void setBorderBottom(BorderStyle* border) = 0;
    virtual int16_t getBorderBottom() = 0;
    virtual BorderStyle* getBorderBottomEnum() = 0;
    virtual void setLeftBorderColor(int16_t color) = 0;
    virtual int16_t getLeftBorderColor() = 0;
    virtual void setRightBorderColor(int16_t color) = 0;
    virtual int16_t getRightBorderColor() = 0;
    virtual void setTopBorderColor(int16_t color) = 0;
    virtual int16_t getTopBorderColor() = 0;
    virtual void setBottomBorderColor(int16_t color) = 0;
    virtual int16_t getBottomBorderColor() = 0;
    virtual void setFillPattern(FillPatternType* fp) = 0;
    virtual int16_t getFillPattern() = 0;
    virtual FillPatternType* getFillPatternEnum() = 0;
    virtual void setFillBackgroundColor(int16_t bg) = 0;
    virtual int16_t getFillBackgroundColor() = 0;
    virtual Color* getFillBackgroundColorColor() = 0;
    virtual void setFillForegroundColor(int16_t bg) = 0;
    virtual int16_t getFillForegroundColor() = 0;
    virtual Color* getFillForegroundColorColor() = 0;
    virtual void cloneStyleFrom(CellStyle* source) = 0;
    virtual void setShrinkToFit(bool shrinkToFit) = 0;
    virtual bool getShrinkToFit() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
