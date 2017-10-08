// Generated from /POI/java/org/apache/poi/sl/draw/PathGradientPaint.java
#include <org/apache/poi/sl/draw/PathGradientPaint_PathGradientContext.hpp>

#include <java/awt/AlphaComposite.hpp>
#include <java/awt/BasicStroke.hpp>
#include <java/awt/Color.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/LinearGradientPaint.hpp>
#include <java/awt/MultipleGradientPaint_ColorSpaceType.hpp>
#include <java/awt/MultipleGradientPaint_CycleMethod.hpp>
#include <java/awt/PaintContext.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/awt/RenderingHints.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Area.hpp>
#include <java/awt/geom/IllegalPathStateException.hpp>
#include <java/awt/geom/Point2D_Double.hpp>
#include <java/awt/geom/Rectangle2D_Double.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/awt/image/ColorModel.hpp>
#include <java/awt/image/Raster.hpp>
#include <java/awt/image/WritableRaster.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Hashtable.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/draw/PathGradientPaint.hpp>
#include <Array.hpp>

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

poi::sl::draw::PathGradientPaint_PathGradientContext::PathGradientPaint_PathGradientContext(PathGradientPaint *PathGradientPaint_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , PathGradientPaint_this(PathGradientPaint_this)
{
    clinit();
}

poi::sl::draw::PathGradientPaint_PathGradientContext::PathGradientPaint_PathGradientContext(PathGradientPaint *PathGradientPaint_this, ::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints) 
    : PathGradientPaint_PathGradientContext(PathGradientPaint_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(cm,deviceBounds,userBounds,xform,hints);
}

void poi::sl::draw::PathGradientPaint_PathGradientContext::ctor(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints)
{
    super::ctor();
    shape = java_cast< ::java::awt::Shape* >(npc(hints)->get(static_cast< ::java::lang::Object* >(Drawable::GRADIENT_SHAPE())));
    if(shape == nullptr) {
        throw new ::java::awt::geom::IllegalPathStateException(u"PathGradientPaint needs a shape to be set via the rendering hint Drawable.GRADIANT_SHAPE."_j);
    }
    this->deviceBounds = deviceBounds;
    this->userBounds = userBounds;
    this->xform = xform;
    this->hints = hints;
    gradientSteps = getGradientSteps(shape);
    ::java::awt::geom::Point2D* start = new ::java::awt::geom::Point2D_Double(int32_t(0), int32_t(0));
    ::java::awt::geom::Point2D* end = new ::java::awt::geom::Point2D_Double(gradientSteps, int32_t(0));
    auto gradientPaint = new ::java::awt::LinearGradientPaint(start, end, PathGradientPaint_this->fractions, PathGradientPaint_this->colors, ::java::awt::MultipleGradientPaint_CycleMethod::NO_CYCLE, ::java::awt::MultipleGradientPaint_ColorSpaceType::SRGB, new ::java::awt::geom::AffineTransform());
    auto bounds = new ::java::awt::Rectangle(int32_t(0), int32_t(0), gradientSteps, int32_t(1));
    pCtx = npc(gradientPaint)->createContext(cm, bounds, static_cast< ::java::awt::geom::Rectangle2D* >(bounds), new ::java::awt::geom::AffineTransform(), hints);
}

void poi::sl::draw::PathGradientPaint_PathGradientContext::dispose()
{
}

java::awt::image::ColorModel* poi::sl::draw::PathGradientPaint_PathGradientContext::getColorModel()
{
    return npc(pCtx)->getColorModel();
}

java::awt::image::Raster* poi::sl::draw::PathGradientPaint_PathGradientContext::getRaster(int32_t xOffset, int32_t yOffset, int32_t w, int32_t h)
{
    auto cm = getColorModel();
    if(raster == nullptr)
        createRaster();

    auto childRaster = npc(cm)->createCompatibleWritableRaster(w, h);
    ::java::awt::geom::Rectangle2D* childRect = new ::java::awt::geom::Rectangle2D_Double(xOffset, yOffset, w, h);
    if(!npc(childRect)->intersects(static_cast< ::java::awt::geom::Rectangle2D* >(deviceBounds))) {
        return childRaster;
    }
    ::java::awt::geom::Rectangle2D* destRect = new ::java::awt::geom::Rectangle2D_Double();
    ::java::awt::geom::Rectangle2D::intersect(childRect, deviceBounds, destRect);
    auto dx = static_cast< int32_t >((npc(destRect)->getX() - npc(deviceBounds)->getX()));
    auto dy = static_cast< int32_t >((npc(destRect)->getY() - npc(deviceBounds)->getY()));
    auto dw = static_cast< int32_t >(npc(destRect)->getWidth());
    auto dh = static_cast< int32_t >(npc(destRect)->getHeight());
    auto data = npc(raster)->getDataElements(dx, dy, dw, dh, nullptr);
    dx = static_cast< int32_t >((npc(destRect)->getX() - npc(childRect)->getX()));
    dy = static_cast< int32_t >((npc(destRect)->getY() - npc(childRect)->getY()));
    npc(childRaster)->setDataElements(dx, dy, dw, dh, data);
    return childRaster;
}

int32_t poi::sl::draw::PathGradientPaint_PathGradientContext::getGradientSteps(::java::awt::Shape* gradientShape)
{
    auto rect = npc(gradientShape)->getBounds();
    auto lower = int32_t(1);
    auto upper = static_cast< int32_t >((::java::lang::Math::max(npc(rect)->getWidth(), npc(rect)->getHeight()) / 2.0));
    while (lower < upper - int32_t(1)) {
        auto mid = lower + (upper - lower) / int32_t(2);
        auto bs = new ::java::awt::BasicStroke(mid, PathGradientPaint_this->capStyle, PathGradientPaint_this->joinStyle);
        auto area = new ::java::awt::geom::Area(npc(bs)->createStrokedShape(gradientShape));
        if(npc(area)->isSingular()) {
            upper = mid;
        } else {
            lower = mid;
        }
    }
    return upper;
}

void poi::sl::draw::PathGradientPaint_PathGradientContext::createRaster()
{
    auto cm = getColorModel();
    raster = npc(cm)->createCompatibleWritableRaster(static_cast< int32_t >(npc(deviceBounds)->getWidth()), static_cast< int32_t >(npc(deviceBounds)->getHeight()));
    auto img = new ::java::awt::image::BufferedImage(cm, raster, false, static_cast< ::java::util::Hashtable* >(nullptr));
    auto graphics = npc(img)->createGraphics();
    npc(graphics)->setRenderingHints(hints);
    npc(graphics)->translate(-npc(deviceBounds)->getX(), -npc(deviceBounds)->getY());
    npc(graphics)->transform(xform);
    auto img2 = npc(pCtx)->getRaster(0, 0, gradientSteps, 1);
    auto rgb = new ::int32_tArray(npc(cm)->getNumComponents());
    for (auto i = gradientSteps - int32_t(1); i >= 0; i--) {
        npc(img2)->getPixel(i, int32_t(0), rgb);
        auto c = new ::java::awt::Color((*rgb)[int32_t(0)], (*rgb)[int32_t(1)], (*rgb)[int32_t(2)]);
        if(npc(rgb)->length == 4) {
            npc(graphics)->setComposite(::java::awt::AlphaComposite::getInstance(::java::awt::AlphaComposite::SRC, (*rgb)[int32_t(3)] / 255.0f));
        }
        npc(graphics)->setStroke(new ::java::awt::BasicStroke(i + int32_t(1), PathGradientPaint_this->capStyle, PathGradientPaint_this->joinStyle));
        npc(graphics)->setColor(c);
        npc(graphics)->draw(shape);
    }
    npc(graphics)->dispose();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::PathGradientPaint_PathGradientContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.PathGradientPaint.PathGradientContext", 60);
    return c;
}

java::lang::Class* poi::sl::draw::PathGradientPaint_PathGradientContext::getClass0()
{
    return class_();
}

