// Generated from /POI/java/org/apache/poi/sl/draw/DrawFactory.java

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::DrawFactory
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static ::java::lang::ThreadLocal* defaultFactory_;

public:
    static void setDefaultFactory(DrawFactory* factory);
    static DrawFactory* getInstance(::java::awt::Graphics2D* graphics);
    virtual Drawable* getDrawable(::poi::sl::usermodel::Shape* shape);
    virtual DrawSlide* getDrawable(::poi::sl::usermodel::Slide* sheet);
    virtual DrawSheet* getDrawable(::poi::sl::usermodel::Sheet* sheet);
    virtual DrawMasterSheet* getDrawable(::poi::sl::usermodel::MasterSheet* sheet);
    virtual DrawTextBox* getDrawable(::poi::sl::usermodel::TextBox* shape);
    virtual DrawFreeformShape* getDrawable(::poi::sl::usermodel::FreeformShape* shape);
    virtual DrawConnectorShape* getDrawable(::poi::sl::usermodel::ConnectorShape* shape);
    virtual DrawTableShape* getDrawable(::poi::sl::usermodel::TableShape* shape);
    virtual DrawTextShape* getDrawable(::poi::sl::usermodel::TextShape* shape);
    virtual DrawGroupShape* getDrawable(::poi::sl::usermodel::GroupShape* shape);
    virtual DrawPictureShape* getDrawable(::poi::sl::usermodel::PictureShape* shape);
    virtual DrawGraphicalFrame* getDrawable(::poi::sl::usermodel::GraphicalFrame* shape);
    virtual DrawTextParagraph* getDrawable(::poi::sl::usermodel::TextParagraph* paragraph);
    virtual DrawBackground* getDrawable(::poi::sl::usermodel::Background* shape);
    virtual DrawTextFragment* getTextFragment(::java::awt::font::TextLayout* layout, ::java::text::AttributedString* str);
    virtual DrawPaint* getPaint(::poi::sl::usermodel::PlaceableShape* shape);
    virtual void drawShape(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::Shape* shape, ::java::awt::geom::Rectangle2D* bounds);
    virtual void fixFonts(::java::awt::Graphics2D* graphics);
    virtual DrawFontManager* getFontManager(::java::awt::Graphics2D* graphics);

    // Generated
    DrawFactory();
protected:
    DrawFactory(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

public: /* protected */
    static ::java::lang::ThreadLocal*& defaultFactory();

private:
    virtual ::java::lang::Class* getClass0();
};
