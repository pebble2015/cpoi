// Generated from /POI/java/org/apache/poi/sl/draw/DrawFontManagerDefault.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/sl/draw/DrawFontManager.hpp>

struct default_init_tag;

class poi::sl::draw::DrawFontManagerDefault
    : public virtual ::java::lang::Object
    , public virtual DrawFontManager
{

public:
    typedef ::java::lang::Object super;
    ::poi::common::usermodel::fonts::FontInfo* getMappedFont(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo) override;
    ::poi::common::usermodel::fonts::FontInfo* getFallbackFont(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo) override;
    ::java::lang::String* mapFontCharset(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo, ::java::lang::String* text) override;
    ::java::awt::Font* createAWTFont(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo, double fontSize, bool bold, bool italic) override;

private:
    ::poi::common::usermodel::fonts::FontInfo* getFontWithFallback(::java::awt::Graphics2D* graphics, Drawable_DrawableHint* hint, ::poi::common::usermodel::fonts::FontInfo* fontInfo);

    // Generated

public:
    DrawFontManagerDefault();
protected:
    DrawFontManagerDefault(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
