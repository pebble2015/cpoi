// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java
#include <org/apache/poi/sl/draw/DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawPaint_SimpleSolidPaint.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1(DrawPaint_SimpleSolidPaint *DrawPaint_SimpleSolidPaint_this, ::java::awt::Color* color)
    : super(*static_cast< ::default_init_tag* >(0))
    , DrawPaint_SimpleSolidPaint_this(DrawPaint_SimpleSolidPaint_this)
    , color(color)
{
    clinit();
    ctor();
}

java::awt::Color* poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getColor()
{
    return new ::java::awt::Color(npc(color)->getRed(), npc(color)->getGreen(), npc(color)->getBlue());
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getAlpha()
{
    return static_cast< int32_t >(::java::lang::Math::round(npc(color)->getAlpha() * 100000.0 / 255.0));
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getHueOff()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getHueMod()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getSatOff()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getSatMod()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getLumOff()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getLumMod()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getShade()
{
    return -int32_t(1);
}

int32_t poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getTint()
{
    return -int32_t(1);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::sl::draw::DrawPaint_SimpleSolidPaint_SimpleSolidPaint_1::getClass0()
{
    return class_();
}

