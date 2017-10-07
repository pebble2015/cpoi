// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/LinearGradientPaint.hpp>

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

extern void unimplemented_(const char16_t* name);
java::awt::LinearGradientPaint::LinearGradientPaint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::LinearGradientPaint::LinearGradientPaint(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors)
    : LinearGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(start, end, fractions, colors);
}

java::awt::LinearGradientPaint::LinearGradientPaint(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod)
    : LinearGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(start, end, fractions, colors, cycleMethod);
}

java::awt::LinearGradientPaint::LinearGradientPaint(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors)
    : LinearGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(startX, startY, endX, endY, fractions, colors);
}

java::awt::LinearGradientPaint::LinearGradientPaint(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod)
    : LinearGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(startX, startY, endX, endY, fractions, colors, cycleMethod);
}

java::awt::LinearGradientPaint::LinearGradientPaint(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform)
    : LinearGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(start, end, fractions, colors, cycleMethod, colorSpace, gradientTransform);
}


void ::java::awt::LinearGradientPaint::ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::LinearGradientPaint::ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors)");
}

void ::java::awt::LinearGradientPaint::ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::LinearGradientPaint::ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod)");
}

void ::java::awt::LinearGradientPaint::ctor(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::LinearGradientPaint::ctor(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors)");
}

void ::java::awt::LinearGradientPaint::ctor(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::LinearGradientPaint::ctor(float startX, float startY, float endX, float endY, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod)");
}

void ::java::awt::LinearGradientPaint::ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::LinearGradientPaint::ctor(::java::awt::geom::Point2D* start, ::java::awt::geom::Point2D* end, ::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform)");
}

java::awt::PaintContext* java::awt::LinearGradientPaint::createContext(::java::awt::image::ColorModel* cm, Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, RenderingHints* hints)
{ /* stub */
    unimplemented_(u"java::awt::PaintContext* java::awt::LinearGradientPaint::createContext(::java::awt::image::ColorModel* cm, Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* transform, RenderingHints* hints)");
    return 0;
}

java::awt::geom::Point2D* java::awt::LinearGradientPaint::getEndPoint()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::LinearGradientPaint::getEndPoint()");
    return 0;
}

java::awt::geom::Point2D* java::awt::LinearGradientPaint::getStartPoint()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::LinearGradientPaint::getStartPoint()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::LinearGradientPaint::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.LinearGradientPaint", 28);
    return c;
}

java::lang::Class* java::awt::LinearGradientPaint::getClass0()
{
    return class_();
}

