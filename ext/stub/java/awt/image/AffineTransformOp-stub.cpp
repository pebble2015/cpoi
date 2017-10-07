// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/image/AffineTransformOp.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::image::AffineTransformOp::AffineTransformOp(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::image::AffineTransformOp::AffineTransformOp(::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints)
    : AffineTransformOp(*static_cast< ::default_init_tag* >(0))
{
    ctor(xform, hints);
}

java::awt::image::AffineTransformOp::AffineTransformOp(::java::awt::geom::AffineTransform* xform, int32_t interpolationType)
    : AffineTransformOp(*static_cast< ::default_init_tag* >(0))
{
    ctor(xform, interpolationType);
}

constexpr int32_t java::awt::image::AffineTransformOp::TYPE_BICUBIC;
constexpr int32_t java::awt::image::AffineTransformOp::TYPE_BILINEAR;
constexpr int32_t java::awt::image::AffineTransformOp::TYPE_NEAREST_NEIGHBOR;

void ::java::awt::image::AffineTransformOp::ctor(::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::AffineTransformOp::ctor(::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints)");
}

void ::java::awt::image::AffineTransformOp::ctor(::java::awt::geom::AffineTransform* xform, int32_t interpolationType)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::AffineTransformOp::ctor(::java::awt::geom::AffineTransform* xform, int32_t interpolationType)");
}

java::awt::image::BufferedImage* java::awt::image::AffineTransformOp::createCompatibleDestImage(BufferedImage* src, ColorModel* destCM)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::image::AffineTransformOp::createCompatibleDestImage(BufferedImage* src, ColorModel* destCM)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::AffineTransformOp::createCompatibleDestRaster(Raster* src)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::AffineTransformOp::createCompatibleDestRaster(Raster* src)");
    return 0;
}

java::awt::image::BufferedImage* java::awt::image::AffineTransformOp::filter(BufferedImage* src, BufferedImage* dst)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::image::AffineTransformOp::filter(BufferedImage* src, BufferedImage* dst)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::AffineTransformOp::filter(Raster* src, WritableRaster* dst)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::AffineTransformOp::filter(Raster* src, WritableRaster* dst)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::image::AffineTransformOp::getBounds2D(BufferedImage* src)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::image::AffineTransformOp::getBounds2D(BufferedImage* src)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::image::AffineTransformOp::getBounds2D(Raster* src)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::image::AffineTransformOp::getBounds2D(Raster* src)");
    return 0;
}

int32_t java::awt::image::AffineTransformOp::getInterpolationType()
{ /* stub */
return interpolationType ; /* getter */
}

java::awt::geom::Point2D* java::awt::image::AffineTransformOp::getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt)
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::image::AffineTransformOp::getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt)");
    return 0;
}

java::awt::RenderingHints* java::awt::image::AffineTransformOp::getRenderingHints()
{ /* stub */
    unimplemented_(u"java::awt::RenderingHints* java::awt::image::AffineTransformOp::getRenderingHints()");
    return 0;
}

java::awt::geom::AffineTransform* java::awt::image::AffineTransformOp::getTransform()
{ /* stub */
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::image::AffineTransformOp::getTransform()");
    return 0;
}

void java::awt::image::AffineTransformOp::validateTransform(::java::awt::geom::AffineTransform* xform)
{ /* stub */
    unimplemented_(u"void java::awt::image::AffineTransformOp::validateTransform(::java::awt::geom::AffineTransform* xform)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::image::AffineTransformOp::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.image.AffineTransformOp", 32);
    return c;
}

java::lang::Class* java::awt::image::AffineTransformOp::getClass0()
{
    return class_();
}

