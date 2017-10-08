// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextFragment.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>

struct default_init_tag;

class poi::sl::draw::DrawTextFragment
    : public virtual ::java::lang::Object
    , public virtual Drawable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::awt::font::TextLayout* layout {  };
    ::java::text::AttributedString* str {  };
    double x {  }, y {  };
protected:
    void ctor(::java::awt::font::TextLayout* layout, ::java::text::AttributedString* str);

public:
    virtual void setPosition(double x, double y);
    void draw(::java::awt::Graphics2D* graphics) override;
    void applyTransform(::java::awt::Graphics2D* graphics) override;
    void drawContent(::java::awt::Graphics2D* graphics) override;
    virtual ::java::awt::font::TextLayout* getLayout();
    virtual ::java::text::AttributedString* getAttributedString();
    virtual float getHeight();
    virtual float getLeading();
    virtual float getWidth();
    virtual ::java::lang::String* getString();
    ::java::lang::String* toString() override;

    // Generated
    DrawTextFragment(::java::awt::font::TextLayout* layout, ::java::text::AttributedString* str);
protected:
    DrawTextFragment(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
