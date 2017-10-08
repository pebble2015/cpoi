// Generated from /POI/java/org/apache/poi/sl/draw/DrawFontManager.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/common/usermodel/fonts/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct poi::sl::draw::DrawFontManager
    : public virtual ::java::lang::Object
{
    virtual ::poi::common::usermodel::fonts::FontInfo* getMappedFont(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo) = 0;
    virtual ::poi::common::usermodel::fonts::FontInfo* getFallbackFont(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo) = 0;
    virtual ::java::lang::String* mapFontCharset(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo, ::java::lang::String* text) = 0;
    virtual ::java::awt::Font* createAWTFont(::java::awt::Graphics2D* graphics, ::poi::common::usermodel::fonts::FontInfo* fontInfo, double size, bool bold, bool italic) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
