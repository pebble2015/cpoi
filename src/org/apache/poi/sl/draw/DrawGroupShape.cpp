// Generated from /POI/java/org/apache/poi/sl/draw/DrawGroupShape.java
#include <org/apache/poi/sl/draw/DrawGroupShape.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/GroupShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>

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

org::apache::poi::sl::draw::DrawGroupShape::DrawGroupShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::DrawGroupShape::DrawGroupShape(::org::apache::poi::sl::usermodel::GroupShape* shape) 
    : DrawGroupShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void org::apache::poi::sl::draw::DrawGroupShape::ctor(::org::apache::poi::sl::usermodel::GroupShape* shape)
{
    super::ctor(shape);
}

void org::apache::poi::sl::draw::DrawGroupShape::draw(::java::awt::Graphics2D* graphics)
{
    auto interior = npc(getShape())->getInteriorAnchor();
    auto exterior = npc(getShape())->getAnchor();
    auto tx = java_cast< ::java::awt::geom::AffineTransform* >(npc(graphics)->getRenderingHint(Drawable::GROUP_TRANSFORM()));
    auto tx0 = new ::java::awt::geom::AffineTransform(tx);
    auto scaleX = npc(interior)->getWidth() == 0.0 ? 1.0 : npc(exterior)->getWidth() / npc(interior)->getWidth();
    auto scaleY = npc(interior)->getHeight() == 0.0 ? 1.0 : npc(exterior)->getHeight() / npc(interior)->getHeight();
    npc(tx)->translate(npc(exterior)->getX(), npc(exterior)->getY());
    npc(tx)->scale(scaleX, scaleY);
    npc(tx)->translate(-npc(interior)->getX(), -npc(interior)->getY());
    auto drawFact = DrawFactory::getInstance(graphics);
    auto at2 = npc(graphics)->getTransform();
    for (auto _i = npc(getShape())->iterator(); _i->hasNext(); ) {
        ::org::apache::poi::sl::usermodel::Shape* child = java_cast< ::org::apache::poi::sl::usermodel::Shape* >(_i->next());
        {
            auto at = npc(graphics)->getTransform();
            npc(graphics)->setRenderingHint(Drawable::GSAVE(), ::java::lang::Boolean::valueOf(true));
            auto draw = npc(drawFact)->getDrawable(static_cast< ::org::apache::poi::sl::usermodel::Shape* >(child));
            npc(draw)->applyTransform(graphics);
            npc(draw)->draw(graphics);
            npc(graphics)->setTransform(at);
            npc(graphics)->setRenderingHint(Drawable::GRESTORE(), ::java::lang::Boolean::valueOf(true));
        }
    }
    npc(graphics)->setTransform(at2);
    npc(graphics)->setRenderingHint(Drawable::GROUP_TRANSFORM(), tx0);
}

org::apache::poi::sl::usermodel::GroupShape* org::apache::poi::sl::draw::DrawGroupShape::getShape()
{
    return java_cast< ::org::apache::poi::sl::usermodel::GroupShape* >(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::DrawGroupShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawGroupShape", 37);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::DrawGroupShape::getClass0()
{
    return class_();
}

