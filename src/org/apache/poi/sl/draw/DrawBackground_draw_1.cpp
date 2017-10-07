// Generated from /POI/java/org/apache/poi/sl/draw/DrawBackground.java
#include <org/apache/poi/sl/draw/DrawBackground_draw_1.hpp>

#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/DrawBackground.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::DrawBackground_draw_1::DrawBackground_draw_1(DrawBackground *DrawBackground_this, ::java::awt::geom::Rectangle2D* anchor)
    : super(*static_cast< ::default_init_tag* >(0))
    , DrawBackground_this(DrawBackground_this)
    , anchor(anchor)
{
    clinit();
    ctor();
}

org::apache::poi::sl::usermodel::ShapeContainer* org::apache::poi::sl::draw::DrawBackground_draw_1::getParent()
{
    return nullptr;
}

java::awt::geom::Rectangle2D* org::apache::poi::sl::draw::DrawBackground_draw_1::getAnchor()
{
    return anchor;
}

void org::apache::poi::sl::draw::DrawBackground_draw_1::setAnchor(::java::awt::geom::Rectangle2D* newAnchor)
{
}

double org::apache::poi::sl::draw::DrawBackground_draw_1::getRotation()
{
    return 0;
}

void org::apache::poi::sl::draw::DrawBackground_draw_1::setRotation(double theta)
{
}

void org::apache::poi::sl::draw::DrawBackground_draw_1::setFlipHorizontal(bool flip)
{
}

void org::apache::poi::sl::draw::DrawBackground_draw_1::setFlipVertical(bool flip)
{
}

bool org::apache::poi::sl::draw::DrawBackground_draw_1::getFlipHorizontal()
{
    return false;
}

bool org::apache::poi::sl::draw::DrawBackground_draw_1::getFlipVertical()
{
    return false;
}

org::apache::poi::sl::usermodel::Sheet* org::apache::poi::sl::draw::DrawBackground_draw_1::getSheet()
{
    return npc(DrawBackground_this->shape)->getSheet();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawBackground_draw_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawBackground_draw_1::getClass0()
{
    return class_();
}

