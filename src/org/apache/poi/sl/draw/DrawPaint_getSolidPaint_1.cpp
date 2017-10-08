// Generated from /POI/java/org/apache/poi/sl/draw/DrawPaint.java
#include <org/apache/poi/sl/draw/DrawPaint_getSolidPaint_1.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/usermodel/ColorStyle.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_PaintModifier.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::sl::draw::DrawPaint_getSolidPaint_1::DrawPaint_getSolidPaint_1(DrawPaint *DrawPaint_this, ::poi::sl::usermodel::ColorStyle* orig, ::poi::sl::usermodel::PaintStyle_PaintModifier* modifier)
    : super(*static_cast< ::default_init_tag* >(0))
    , DrawPaint_this(DrawPaint_this)
    , orig(orig)
    , modifier(modifier)
{
    clinit();
    ctor();
}

java::awt::Color* poi::sl::draw::DrawPaint_getSolidPaint_1::getColor()
{
    return npc(orig)->getColor();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getAlpha()
{
    return npc(orig)->getAlpha();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getHueOff()
{
    return npc(orig)->getHueOff();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getHueMod()
{
    return npc(orig)->getHueMod();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getSatOff()
{
    return npc(orig)->getSatOff();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getSatMod()
{
    return npc(orig)->getSatMod();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getLumOff()
{
    return npc(orig)->getLumOff();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getLumMod()
{
    return npc(orig)->getLumMod();
}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getShade()
{
    auto shade = npc(orig)->getShade();
    {
        auto v = modifier;
        if((v == ::poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN)) {
            return ::java::lang::Math::min(int32_t(100000), ::java::lang::Math::max(int32_t(0), shade) + int32_t(40000));
        }
        if((v == ::poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN_LESS)) {
            return ::java::lang::Math::min(int32_t(100000), ::java::lang::Math::max(int32_t(0), shade) + int32_t(20000));
        }
        if((((v != ::poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN) && (v != ::poi::sl::usermodel::PaintStyle_PaintModifier::DARKEN_LESS)))) {
            return shade;
        }
end_switch0:;
    }

}

int32_t poi::sl::draw::DrawPaint_getSolidPaint_1::getTint()
{
    auto tint = npc(orig)->getTint();
    {
        auto v = modifier;
        if((v == ::poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN)) {
            return ::java::lang::Math::min(int32_t(100000), ::java::lang::Math::max(int32_t(0), tint) + int32_t(40000));
        }
        if((v == ::poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN_LESS)) {
            return ::java::lang::Math::min(int32_t(100000), ::java::lang::Math::max(int32_t(0), tint) + int32_t(20000));
        }
        if((((v != ::poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN) && (v != ::poi::sl::usermodel::PaintStyle_PaintModifier::LIGHTEN_LESS)))) {
            return tint;
        }
end_switch1:;
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawPaint_getSolidPaint_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::sl::draw::DrawPaint_getSolidPaint_1::getClass0()
{
    return class_();
}

