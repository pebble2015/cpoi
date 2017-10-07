// Generated from /POI/java/org/apache/poi/sl/usermodel/TextParagraph.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Iterable.hpp>

struct org::apache::poi::sl::usermodel::TextParagraph
    : public virtual ::java::lang::Iterable
{
    virtual ::java::lang::Double* getSpaceBefore() = 0;
    virtual void setSpaceBefore(::java::lang::Double* spaceBefore) = 0;
    virtual ::java::lang::Double* getSpaceAfter() = 0;
    virtual void setSpaceAfter(::java::lang::Double* spaceAfter) = 0;
    virtual ::java::lang::Double* getLeftMargin() = 0;
    virtual void setLeftMargin(::java::lang::Double* leftMargin) = 0;
    virtual ::java::lang::Double* getRightMargin() = 0;
    virtual void setRightMargin(::java::lang::Double* rightMargin) = 0;
    virtual ::java::lang::Double* getIndent() = 0;
    virtual void setIndent(::java::lang::Double* indent) = 0;
    virtual int32_t getIndentLevel() = 0;
    virtual void setIndentLevel(int32_t level) = 0;
    virtual ::java::lang::Double* getLineSpacing() = 0;
    virtual void setLineSpacing(::java::lang::Double* lineSpacing) = 0;
    virtual ::java::lang::String* getDefaultFontFamily() = 0;
    virtual ::java::lang::Double* getDefaultFontSize() = 0;
    virtual TextParagraph_TextAlign* getTextAlign() = 0;
    virtual void setTextAlign(TextParagraph_TextAlign* align) = 0;
    virtual TextParagraph_FontAlign* getFontAlign() = 0;
    virtual TextParagraph_BulletStyle* getBulletStyle() = 0;
    virtual void setBulletStyle(::java::lang::ObjectArray*/*...*/ styles) = 0;
    virtual ::java::lang::Double* getDefaultTabSize() = 0;
    virtual TextShape* getParentShape() = 0;
    virtual ::java::util::List* getTextRuns() = 0;
    virtual bool isHeaderOrFooter() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
