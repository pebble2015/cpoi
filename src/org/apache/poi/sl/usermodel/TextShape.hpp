// Generated from /POI/java/org/apache/poi/sl/usermodel/TextShape.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/SimpleShape.hpp>
#include <java/lang/Iterable.hpp>

struct poi::sl::usermodel::TextShape
    : public virtual SimpleShape
    , public virtual ::java::lang::Iterable
{
    virtual ::java::lang::String* getText() = 0;
    virtual TextRun* setText(::java::lang::String* text) = 0;
    virtual TextRun* appendText(::java::lang::String* text, bool newParagraph) = 0;
    virtual ::java::util::List* getTextParagraphs() = 0;
    virtual Insets2D* getInsets() = 0;
    virtual void setInsets(Insets2D* insets) = 0;
    virtual double getTextHeight() = 0;
    virtual double getTextHeight(::java::awt::Graphics2D* graphics) = 0;
    virtual VerticalAlignment* getVerticalAlignment() = 0;
    virtual void setVerticalAlignment(VerticalAlignment* vAlign) = 0;
    virtual bool isHorizontalCentered() = 0;
    virtual void setHorizontalCentered(::java::lang::Boolean* isCentered) = 0;
    virtual bool getWordWrap() = 0;
    virtual void setWordWrap(bool wrap) = 0;
    virtual TextShape_TextDirection* getTextDirection() = 0;
    virtual void setTextDirection(TextShape_TextDirection* orientation) = 0;
    virtual ::java::lang::Double* getTextRotation() = 0;
    virtual void setTextRotation(::java::lang::Double* rotation) = 0;
    virtual void setTextPlaceholder(TextShape_TextPlaceholder* placeholder) = 0;
    virtual TextShape_TextPlaceholder* getTextPlaceholder() = 0;
    virtual ::java::awt::geom::Rectangle2D* resizeToFitText() = 0;
    virtual ::java::awt::geom::Rectangle2D* resizeToFitText(::java::awt::Graphics2D* graphics) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
