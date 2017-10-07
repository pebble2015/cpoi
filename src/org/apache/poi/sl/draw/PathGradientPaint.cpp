// Generated from /POI/java/org/apache/poi/sl/draw/PathGradientPaint.java
#include <org/apache/poi/sl/draw/PathGradientPaint.hpp>

#include <java/awt/BasicStroke.hpp>
#include <java/awt/Color.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/Transparency.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/sl/draw/PathGradientPaint_PathGradientContext.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::Transparency, ::java::lang::ObjectArray > TransparencyArray;
typedef ::SubArray< ::java::awt::Paint, ::java::lang::ObjectArray, TransparencyArray > PaintArray;
    } // awt

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace awt
    {
typedef ::SubArray< ::java::awt::Color, ::java::lang::ObjectArray, PaintArray, ::java::io::SerializableArray > ColorArray;
    } // awt
} // java

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::PathGradientPaint::PathGradientPaint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::PathGradientPaint::PathGradientPaint(::java::awt::ColorArray* colors, ::floatArray* fractions) 
    : PathGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(colors,fractions);
}

org::apache::poi::sl::draw::PathGradientPaint::PathGradientPaint(::java::awt::ColorArray* colors, ::floatArray* fractions, int32_t capStyle, int32_t joinStyle) 
    : PathGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(colors,fractions,capStyle,joinStyle);
}

void org::apache::poi::sl::draw::PathGradientPaint::ctor(::java::awt::ColorArray* colors, ::floatArray* fractions)
{
    ctor(colors, fractions, ::java::awt::BasicStroke::CAP_ROUND, ::java::awt::BasicStroke::JOIN_ROUND);
}

void org::apache::poi::sl::draw::PathGradientPaint::ctor(::java::awt::ColorArray* colors, ::floatArray* fractions, int32_t capStyle, int32_t joinStyle)
{
    super::ctor();
    this->colors = npc(colors)->clone();
    this->fractions = npc(fractions)->clone();
    this->capStyle = capStyle;
    this->joinStyle = joinStyle;
    auto opaque = true;
    for(auto c : *npc(colors)) {
        if(c != nullptr) {
            opaque = opaque && (npc(c)->getAlpha() == 255);
        }
    }
    this->transparency = opaque ? OPAQUE : TRANSLUCENT;
}

java::awt::PaintContext* org::apache::poi::sl::draw::PathGradientPaint::createContext(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, ::java::awt::RenderingHints* hints)
{
    return new PathGradientPaint_PathGradientContext(this, cm, deviceBounds, userBounds, transform, hints);
}

int32_t org::apache::poi::sl::draw::PathGradientPaint::getTransparency()
{
    return transparency;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::PathGradientPaint::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.PathGradientPaint", 40);
    return c;
}

java::lang::Class* org::apache::poi::sl::draw::PathGradientPaint::getClass0()
{
    return class_();
}

