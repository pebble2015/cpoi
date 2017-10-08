// Generated from /POI/java/org/apache/poi/sl/usermodel/TextRun.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::usermodel::TextRun
    : public virtual ::java::lang::Object
{
    virtual ::java::lang::String* getRawText() = 0;
    virtual void setText(::java::lang::String* text) = 0;
    virtual TextRun_TextCap* getTextCap() = 0;
    virtual PaintStyle* getFontColor() = 0;
    virtual void setFontColor(::java::awt::Color* color) = 0;
    virtual void setFontColor(PaintStyle* color) = 0;
    virtual ::java::lang::Double* getFontSize() = 0;
    virtual void setFontSize(::java::lang::Double* fontSize) = 0;
    virtual ::java::lang::String* getFontFamily() = 0;
    virtual ::java::lang::String* getFontFamily(::poi::common::usermodel::fonts::FontGroup* fontGroup) = 0;
    virtual void setFontFamily(::java::lang::String* typeface) = 0;
    virtual void setFontFamily(::java::lang::String* typeface, ::poi::common::usermodel::fonts::FontGroup* fontGroup) = 0;
    virtual ::poi::common::usermodel::fonts::FontInfo* getFontInfo(::poi::common::usermodel::fonts::FontGroup* fontGroup) = 0;
    virtual void setFontInfo(::poi::common::usermodel::fonts::FontInfo* fontInfo, ::poi::common::usermodel::fonts::FontGroup* fontGroup) = 0;
    virtual bool isBold() = 0;
    virtual void setBold(bool bold) = 0;
    virtual bool isItalic() = 0;
    virtual void setItalic(bool italic) = 0;
    virtual bool isUnderlined() = 0;
    virtual void setUnderlined(bool underlined) = 0;
    virtual bool isStrikethrough() = 0;
    virtual void setStrikethrough(bool stroked) = 0;
    virtual bool isSubscript() = 0;
    virtual bool isSuperscript() = 0;
    virtual int8_t getPitchAndFamily() = 0;
    virtual Hyperlink* getHyperlink() = 0;
    virtual Hyperlink* createHyperlink() = 0;
    virtual TextRun_FieldType* getFieldType() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
