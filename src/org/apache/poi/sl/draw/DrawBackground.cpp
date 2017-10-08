// Generated from /POI/java/org/apache/poi/sl/draw/DrawBackground.java
#include <org/apache/poi/sl/draw/DrawBackground.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/geom/Rectangle2D_Double.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawBackground_draw_1.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/Background.hpp>
#include <org/apache/poi/sl/usermodel/FillStyle.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>
#include <org/apache/poi/sl/usermodel/SlideShow.hpp>

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

poi::sl::draw::DrawBackground::DrawBackground(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawBackground::DrawBackground(::poi::sl::usermodel::Background* shape) 
    : DrawBackground(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void poi::sl::draw::DrawBackground::ctor(::poi::sl::usermodel::Background* shape)
{
    super::ctor(shape);
}

void poi::sl::draw::DrawBackground::draw(::java::awt::Graphics2D* graphics)
{
    auto pg = npc(npc(npc(shape)->getSheet())->getSlideShow())->getPageSize();
    ::java::awt::geom::Rectangle2D* const anchor = new ::java::awt::geom::Rectangle2D_Double(int32_t(0), int32_t(0), npc(pg)->getWidth(), npc(pg)->getHeight());
    ::poi::sl::usermodel::PlaceableShape* ps = new DrawBackground_draw_1(this, anchor);
    auto drawFact = DrawFactory::getInstance(graphics);
    auto dp = npc(drawFact)->getPaint(ps);
    auto fill = npc(dp)->getPaint(graphics, npc(npc(getShape())->getFillStyle())->getPaint());
    auto anchor2 = getAnchor(graphics, anchor);
    if(fill != nullptr) {
        npc(graphics)->setRenderingHint(Drawable::GRADIENT_SHAPE(), anchor);
        npc(graphics)->setPaint(fill);
        npc(graphics)->fill(anchor2);
    }
}

poi::sl::usermodel::Background* poi::sl::draw::DrawBackground::getShape()
{
    return java_cast< ::poi::sl::usermodel::Background* >(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawBackground::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawBackground", 37);
    return c;
}

java::lang::Class* poi::sl::draw::DrawBackground::getClass0()
{
    return class_();
}

