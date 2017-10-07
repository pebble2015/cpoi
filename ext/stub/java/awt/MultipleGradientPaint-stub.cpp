// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/MultipleGradientPaint.hpp>

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
java::awt::MultipleGradientPaint::MultipleGradientPaint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::MultipleGradientPaint::MultipleGradientPaint(::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform)
    : MultipleGradientPaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(fractions, colors, cycleMethod, colorSpace, gradientTransform);
}


void ::java::awt::MultipleGradientPaint::ctor(::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::MultipleGradientPaint::ctor(::floatArray* fractions, ColorArray* colors, MultipleGradientPaint_CycleMethod* cycleMethod, MultipleGradientPaint_ColorSpaceType* colorSpace, ::java::awt::geom::AffineTransform* gradientTransform)");
}

java::awt::MultipleGradientPaint_ColorSpaceType* java::awt::MultipleGradientPaint::getColorSpace()
{ /* stub */
return colorSpace ; /* getter */
}

java::awt::ColorArray* java::awt::MultipleGradientPaint::getColors()
{ /* stub */
return colors ; /* getter */
}

java::awt::MultipleGradientPaint_CycleMethod* java::awt::MultipleGradientPaint::getCycleMethod()
{ /* stub */
return cycleMethod ; /* getter */
}

floatArray* java::awt::MultipleGradientPaint::getFractions()
{ /* stub */
return fractions ; /* getter */
}

java::awt::geom::AffineTransform* java::awt::MultipleGradientPaint::getTransform()
{ /* stub */
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::MultipleGradientPaint::getTransform()");
    return 0;
}

int32_t java::awt::MultipleGradientPaint::getTransparency()
{ /* stub */
return transparency ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::MultipleGradientPaint::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.MultipleGradientPaint", 30);
    return c;
}

java::lang::Class* java::awt::MultipleGradientPaint::getClass0()
{
    return class_();
}

