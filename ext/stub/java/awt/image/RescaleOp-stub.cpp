// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/image/RescaleOp.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::image::RescaleOp::RescaleOp(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::image::RescaleOp::RescaleOp(::floatArray* scaleFactors, ::floatArray* offsets, ::java::awt::RenderingHints* hints)
    : RescaleOp(*static_cast< ::default_init_tag* >(0))
{
    ctor(scaleFactors, offsets, hints);
}

java::awt::image::RescaleOp::RescaleOp(float scaleFactor, float offset, ::java::awt::RenderingHints* hints)
    : RescaleOp(*static_cast< ::default_init_tag* >(0))
{
    ctor(scaleFactor, offset, hints);
}


void ::java::awt::image::RescaleOp::ctor(::floatArray* scaleFactors, ::floatArray* offsets, ::java::awt::RenderingHints* hints)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::RescaleOp::ctor(::floatArray* scaleFactors, ::floatArray* offsets, ::java::awt::RenderingHints* hints)");
}

void ::java::awt::image::RescaleOp::ctor(float scaleFactor, float offset, ::java::awt::RenderingHints* hints)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::RescaleOp::ctor(float scaleFactor, float offset, ::java::awt::RenderingHints* hints)");
}

/* private: bool java::awt::image::RescaleOp::canUseLookup(Raster* src, Raster* dst) */
/* private: java::awt::image::ByteLookupTable* java::awt::image::RescaleOp::createByteLut(::floatArray* scale, ::floatArray* off, int32_t nBands, int32_t nElems) */
java::awt::image::BufferedImage* java::awt::image::RescaleOp::createCompatibleDestImage(BufferedImage* src, ColorModel* destCM)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::image::RescaleOp::createCompatibleDestImage(BufferedImage* src, ColorModel* destCM)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::RescaleOp::createCompatibleDestRaster(Raster* src)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::RescaleOp::createCompatibleDestRaster(Raster* src)");
    return 0;
}

/* private: java::awt::image::ShortLookupTable* java::awt::image::RescaleOp::createShortLut(::floatArray* scale, ::floatArray* off, int32_t nBands, int32_t nElems) */
java::awt::image::BufferedImage* java::awt::image::RescaleOp::filter(BufferedImage* src, BufferedImage* dst)
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::image::RescaleOp::filter(BufferedImage* src, BufferedImage* dst)");
    return 0;
}

java::awt::image::WritableRaster* java::awt::image::RescaleOp::filter(Raster* src, WritableRaster* dst)
{ /* stub */
    unimplemented_(u"java::awt::image::WritableRaster* java::awt::image::RescaleOp::filter(Raster* src, WritableRaster* dst)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::image::RescaleOp::getBounds2D(BufferedImage* src)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::image::RescaleOp::getBounds2D(BufferedImage* src)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::image::RescaleOp::getBounds2D(Raster* src)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::image::RescaleOp::getBounds2D(Raster* src)");
    return 0;
}

int32_t java::awt::image::RescaleOp::getNumFactors()
{ /* stub */
    unimplemented_(u"int32_t java::awt::image::RescaleOp::getNumFactors()");
    return 0;
}

floatArray* java::awt::image::RescaleOp::getOffsets(::floatArray* offsets)
{ /* stub */
return offsets ; /* getter */
}

java::awt::geom::Point2D* java::awt::image::RescaleOp::getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt)
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::image::RescaleOp::getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt)");
    return 0;
}

java::awt::RenderingHints* java::awt::image::RescaleOp::getRenderingHints()
{ /* stub */
    unimplemented_(u"java::awt::RenderingHints* java::awt::image::RescaleOp::getRenderingHints()");
    return 0;
}

floatArray* java::awt::image::RescaleOp::getScaleFactors(::floatArray* scaleFactors)
{ /* stub */
return scaleFactors ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::image::RescaleOp::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.image.RescaleOp", 24);
    return c;
}

java::lang::Class* java::awt::image::RescaleOp::getClass0()
{
    return class_();
}

