// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextFragment.java
#include <org/apache/poi/sl/draw/DrawTextFragment.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/awt/font/TextLayout.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/AttributedString.hpp>
#include <java/text/CharacterIterator.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>

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

poi::sl::draw::DrawTextFragment::DrawTextFragment(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawTextFragment::DrawTextFragment(::java::awt::font::TextLayout* layout, ::java::text::AttributedString* str) 
    : DrawTextFragment(*static_cast< ::default_init_tag* >(0))
{
    ctor(layout,str);
}

void poi::sl::draw::DrawTextFragment::ctor(::java::awt::font::TextLayout* layout, ::java::text::AttributedString* str)
{
    super::ctor();
    this->layout = layout;
    this->str = str;
}

void poi::sl::draw::DrawTextFragment::setPosition(double x, double y)
{
    this->x = x;
    this->y = y;
}

void poi::sl::draw::DrawTextFragment::draw(::java::awt::Graphics2D* graphics)
{
    if(str == nullptr) {
        return;
    }
    auto yBaseline = y + npc(layout)->getAscent();
    auto textMode = java_cast< ::java::lang::Integer* >(npc(graphics)->getRenderingHint(Drawable::TEXT_RENDERING_MODE()));
    if(textMode != nullptr && (npc(textMode))->intValue() == Drawable::TEXT_AS_SHAPES) {
        npc(layout)->draw(graphics, static_cast< float >(x), static_cast< float >(yBaseline));
    } else {
        npc(graphics)->drawString(npc(str)->getIterator(), static_cast< float >(x), static_cast< float >(yBaseline));
    }
}

void poi::sl::draw::DrawTextFragment::applyTransform(::java::awt::Graphics2D* graphics)
{
}

void poi::sl::draw::DrawTextFragment::drawContent(::java::awt::Graphics2D* graphics)
{
}

java::awt::font::TextLayout* poi::sl::draw::DrawTextFragment::getLayout()
{
    return layout;
}

java::text::AttributedString* poi::sl::draw::DrawTextFragment::getAttributedString()
{
    return str;
}

float poi::sl::draw::DrawTextFragment::getHeight()
{
    double h = npc(layout)->getAscent() + npc(layout)->getDescent() + getLeading();
    return static_cast< float >(h);
}

float poi::sl::draw::DrawTextFragment::getLeading()
{
    double l = npc(layout)->getLeading();
    if(l == 0) {
        l = (npc(layout)->getAscent() + npc(layout)->getDescent()) * 0.15;
    }
    return static_cast< float >(l);
}

float poi::sl::draw::DrawTextFragment::getWidth()
{
    return npc(layout)->getAdvance();
}

java::lang::String* poi::sl::draw::DrawTextFragment::getString()
{
    if(str == nullptr)
        return u""_j;

    auto it = npc(str)->getIterator();
    auto buf = new ::java::lang::StringBuilder();
    for (auto c = npc(it)->first(); c != ::java::text::CharacterIterator::DONE; c = npc(it)->next()) {
        npc(buf)->append(c);
    }
    return npc(buf)->toString();
}

java::lang::String* poi::sl::draw::DrawTextFragment::toString()
{
    return ::java::lang::StringBuilder().append(u"["_j)->append(npc(getClass())->getSimpleName())
        ->append(u"] "_j)
        ->append(getString())->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawTextFragment::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTextFragment", 39);
    return c;
}

java::lang::Class* poi::sl::draw::DrawTextFragment::getClass0()
{
    return class_();
}

