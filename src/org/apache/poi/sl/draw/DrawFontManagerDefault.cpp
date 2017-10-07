// Generated from /POI/java/org/apache/poi/sl/draw/DrawFontManagerDefault.java
#include <org/apache/poi/sl/draw/DrawFontManagerDefault.hpp>

#include <java/awt/Font.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontInfo.hpp>
#include <org/apache/poi/sl/draw/DrawFontInfo.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::DrawFontManagerDefault::DrawFontManagerDefault(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawFontManagerDefault::DrawFontManagerDefault()
    : DrawFontManagerDefault(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::common::usermodel::fonts::FontInfo* org::apache::poi::sl::draw::DrawFontManagerDefault::getMappedFont(::java::awt::Graphics2D* graphics, ::org::apache::poi::common::usermodel::fonts::FontInfo* fontInfo)
{
    return getFontWithFallback(graphics, Drawable::FONT_MAP(), fontInfo);
}

org::apache::poi::common::usermodel::fonts::FontInfo* org::apache::poi::sl::draw::DrawFontManagerDefault::getFallbackFont(::java::awt::Graphics2D* graphics, ::org::apache::poi::common::usermodel::fonts::FontInfo* fontInfo)
{
    auto fi = getFontWithFallback(graphics, Drawable::FONT_FALLBACK(), fontInfo);
    if(fi == nullptr) {
        fi = new DrawFontInfo(::java::awt::Font::SANS_SERIF());
    }
    return fi;
}

java::lang::String* org::apache::poi::sl::draw::DrawFontManagerDefault::mapFontCharset(::java::awt::Graphics2D* graphics, ::org::apache::poi::common::usermodel::fonts::FontInfo* fontInfo, ::java::lang::String* text)
{
    auto attStr = text;
    if(fontInfo != nullptr && npc(u"Wingdings"_j)->equalsIgnoreCase(npc(fontInfo)->getTypeface())) {
        auto changed = false;
        auto chrs = npc(attStr)->toCharArray_();
        for (auto i = int32_t(0); i < npc(chrs)->length; i++) {
            if((32 <= (*chrs)[i] && (*chrs)[i] <= 127) || (160 <= (*chrs)[i] && (*chrs)[i] <= 255)) {
                (*chrs)[i] |= 61440;
                changed = true;
            }
        }
        if(changed) {
            attStr = new ::java::lang::String(chrs);
        }
    }
    return attStr;
}

java::awt::Font* org::apache::poi::sl::draw::DrawFontManagerDefault::createAWTFont(::java::awt::Graphics2D* graphics, ::org::apache::poi::common::usermodel::fonts::FontInfo* fontInfo, double fontSize, bool bold, bool italic)
{
    auto style = (bold ? ::java::awt::Font::BOLD : int32_t(0)) | (italic ? ::java::awt::Font::ITALIC : int32_t(0));
    auto font = new ::java::awt::Font(npc(fontInfo)->getTypeface(), style, int32_t(12));
    if(npc(::java::awt::Font::DIALOG())->equals(static_cast< ::java::lang::Object* >(npc(font)->getFamily()))) {
        font = new ::java::awt::Font(::java::awt::Font::SANS_SERIF(), style, int32_t(12));
    }
    return npc(font)->deriveFont(static_cast< float >(fontSize));
}

org::apache::poi::common::usermodel::fonts::FontInfo* org::apache::poi::sl::draw::DrawFontManagerDefault::getFontWithFallback(::java::awt::Graphics2D* graphics, Drawable_DrawableHint* hint, ::org::apache::poi::common::usermodel::fonts::FontInfo* fontInfo)
{
    auto fontMap = java_cast< ::java::util::Map* >(npc(graphics)->getRenderingHint(hint));
    if(fontMap == nullptr) {
        return fontInfo;
    }
    auto f = (fontInfo != nullptr) ? npc(fontInfo)->getTypeface() : static_cast< ::java::lang::String* >(nullptr);
    ::java::lang::String* mappedTypeface = nullptr;
    if(npc(fontMap)->containsKey(f)) {
        mappedTypeface = java_cast< ::java::lang::String* >(npc(fontMap)->get(f));
    } else if(npc(fontMap)->containsKey(u"*"_j)) {
        mappedTypeface = java_cast< ::java::lang::String* >(npc(fontMap)->get(u"*"_j));
    }
    return (mappedTypeface != nullptr) ? static_cast< ::org::apache::poi::common::usermodel::fonts::FontInfo* >(new DrawFontInfo(mappedTypeface)) : fontInfo;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawFontManagerDefault::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawFontManagerDefault", 45);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawFontManagerDefault::getClass0()
{
    return class_();
}

