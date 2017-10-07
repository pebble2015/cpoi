// Generated from /POI/java/org/apache/poi/sl/draw/Drawable.java
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

org::apache::poi::sl::draw::Drawable_DrawableHint::Drawable_DrawableHint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::Drawable_DrawableHint::Drawable_DrawableHint(int32_t id) 
    : Drawable_DrawableHint(*static_cast< ::default_init_tag* >(0))
{
    ctor(id);
}

void org::apache::poi::sl::draw::Drawable_DrawableHint::ctor(int32_t id)
{
    super::ctor(id);
}

bool org::apache::poi::sl::draw::Drawable_DrawableHint::isCompatibleValue(::java::lang::Object* val)
{
    return true;
}

java::lang::String* org::apache::poi::sl::draw::Drawable_DrawableHint::toString()
{
    switch (intKey()) {
    case int32_t(1):
        return u"DRAW_FACTORY"_j;
    case int32_t(2):
        return u"GROUP_TRANSFORM"_j;
    case int32_t(3):
        return u"IMAGE_RENDERER"_j;
    case int32_t(4):
        return u"TEXT_RENDERING_MODE"_j;
    case int32_t(5):
        return u"GRADIENT_SHAPE"_j;
    case int32_t(6):
        return u"PRESET_GEOMETRY_CACHE"_j;
    case int32_t(7):
        return u"FONT_HANDLER"_j;
    case int32_t(8):
        return u"FONT_FALLBACK"_j;
    case int32_t(9):
        return u"FONT_MAP"_j;
    case int32_t(10):
        return u"GSAVE"_j;
    case int32_t(11):
        return u"GRESTORE"_j;
    default:
        return ::java::lang::StringBuilder().append(u"UNKNOWN_ID "_j)->append(intKey())->toString();
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::Drawable_DrawableHint::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.Drawable.DrawableHint", 44);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::Drawable_DrawableHint::getClass0()
{
    return class_();
}

