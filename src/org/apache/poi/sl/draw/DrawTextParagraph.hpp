// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>

struct default_init_tag;

class poi::sl::draw::DrawTextParagraph
    : public virtual ::java::lang::Object
    , public virtual Drawable
{

public:
    typedef ::java::lang::Object super;

private:
    static ::poi::util::POILogger* LOG_;
    static DrawTextParagraph_XlinkAttribute* HYPERLINK_HREF_;
    static DrawTextParagraph_XlinkAttribute* HYPERLINK_LABEL_;

public: /* protected */
    ::poi::sl::usermodel::TextParagraph* paragraph {  };

public: /* package */
    double x {  }, y {  };

public: /* protected */
    ::java::util::List* lines {  };
    ::java::lang::String* rawText {  };
    DrawTextFragment* bullet {  };
    int32_t autoNbrIdx {  };
    double maxLineHeight {  };
protected:
    void ctor(::poi::sl::usermodel::TextParagraph* paragraph);

public:
    virtual void setPosition(double x, double y);
    virtual double getY();
    virtual void setAutoNumberingIdx(int32_t index);
    void draw(::java::awt::Graphics2D* graphics) override;
    virtual float getFirstLineLeading();
    virtual float getFirstLineHeight();
    virtual float getLastLineHeight();
    virtual bool isEmptyParagraph();
    void applyTransform(::java::awt::Graphics2D* graphics) override;
    void drawContent(::java::awt::Graphics2D* graphics) override;

public: /* protected */
    virtual void breakText(::java::awt::Graphics2D* graphics);
    virtual DrawTextFragment* getBullet(::java::awt::Graphics2D* graphics, ::java::text::AttributedCharacterIterator* firstLineAttr);
    virtual ::java::lang::String* getRenderableText(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::TextRun* tr);

private:
    ::java::lang::String* tab2space(::poi::sl::usermodel::TextRun* tr);

public: /* protected */
    virtual double getWrappingWidth(bool firstLine, ::java::awt::Graphics2D* graphics);

private:
    ::poi::sl::usermodel::PlaceableShape* getParagraphShape();

public: /* protected */
    virtual ::java::text::AttributedString* getAttributedString(::java::awt::Graphics2D* graphics, ::java::lang::StringBuilder* text);

private:
    void processGlyphs(::java::awt::Graphics2D* graphics, DrawFontManager* dfm, ::java::util::List* attList, int32_t beginIndex, ::poi::sl::usermodel::TextRun* run, ::java::lang::String* runText);
    static int32_t nextPart(::java::awt::Font* fontMapped, ::java::lang::String* runText, int32_t beginPart, int32_t endPart, bool isDisplayed);

public: /* protected */
    virtual bool isHSLF();

    // Generated

public:
    DrawTextParagraph(::poi::sl::usermodel::TextParagraph* paragraph);
protected:
    DrawTextParagraph(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();
    static ::poi::util::POILogger*& LOG();

public:
    static DrawTextParagraph_XlinkAttribute*& HYPERLINK_HREF();
    static DrawTextParagraph_XlinkAttribute*& HYPERLINK_LABEL();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawTextParagraph_XlinkAttribute;
    friend class DrawTextParagraph_AttributedStringData;
    friend class DrawTextParagraph_getParagraphShape_1;
};
