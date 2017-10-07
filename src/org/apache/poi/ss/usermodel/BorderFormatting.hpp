// Generated from /POI/java/org/apache/poi/ss/usermodel/BorderFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct org::apache::poi::ss::usermodel::BorderFormatting
    : public virtual ::java::lang::Object
{
    virtual int16_t getBorderBottom() = 0;
    virtual BorderStyle* getBorderBottomEnum() = 0;
    virtual int16_t getBorderDiagonal() = 0;
    virtual BorderStyle* getBorderDiagonalEnum() = 0;
    virtual int16_t getBorderLeft() = 0;
    virtual BorderStyle* getBorderLeftEnum() = 0;
    virtual int16_t getBorderRight() = 0;
    virtual BorderStyle* getBorderRightEnum() = 0;
    virtual int16_t getBorderTop() = 0;
    virtual BorderStyle* getBorderTopEnum() = 0;
    virtual BorderStyle* getBorderVerticalEnum() = 0;
    virtual BorderStyle* getBorderHorizontalEnum() = 0;
    virtual int16_t getBottomBorderColor() = 0;
    virtual Color* getBottomBorderColorColor() = 0;
    virtual int16_t getDiagonalBorderColor() = 0;
    virtual Color* getDiagonalBorderColorColor() = 0;
    virtual int16_t getLeftBorderColor() = 0;
    virtual Color* getLeftBorderColorColor() = 0;
    virtual int16_t getRightBorderColor() = 0;
    virtual Color* getRightBorderColorColor() = 0;
    virtual int16_t getTopBorderColor() = 0;
    virtual Color* getTopBorderColorColor() = 0;
    virtual int16_t getVerticalBorderColor() = 0;
    virtual Color* getVerticalBorderColorColor() = 0;
    virtual int16_t getHorizontalBorderColor() = 0;
    virtual Color* getHorizontalBorderColorColor() = 0;
    virtual void setBorderBottom(int16_t border) = 0;
    virtual void setBorderBottom(BorderStyle* border) = 0;
    virtual void setBorderDiagonal(int16_t border) = 0;
    virtual void setBorderDiagonal(BorderStyle* border) = 0;
    virtual void setBorderLeft(int16_t border) = 0;
    virtual void setBorderLeft(BorderStyle* border) = 0;
    virtual void setBorderRight(int16_t border) = 0;
    virtual void setBorderRight(BorderStyle* border) = 0;
    virtual void setBorderTop(int16_t border) = 0;
    virtual void setBorderTop(BorderStyle* border) = 0;
    virtual void setBorderHorizontal(BorderStyle* border) = 0;
    virtual void setBorderVertical(BorderStyle* border) = 0;
    virtual void setBottomBorderColor(int16_t color) = 0;
    virtual void setBottomBorderColor(Color* color) = 0;
    virtual void setDiagonalBorderColor(int16_t color) = 0;
    virtual void setDiagonalBorderColor(Color* color) = 0;
    virtual void setLeftBorderColor(int16_t color) = 0;
    virtual void setLeftBorderColor(Color* color) = 0;
    virtual void setRightBorderColor(int16_t color) = 0;
    virtual void setRightBorderColor(Color* color) = 0;
    virtual void setTopBorderColor(int16_t color) = 0;
    virtual void setTopBorderColor(Color* color) = 0;
    virtual void setHorizontalBorderColor(int16_t color) = 0;
    virtual void setHorizontalBorderColor(Color* color) = 0;
    virtual void setVerticalBorderColor(int16_t color) = 0;
    virtual void setVerticalBorderColor(Color* color) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
