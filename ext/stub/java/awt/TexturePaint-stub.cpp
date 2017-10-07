// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/TexturePaint.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::TexturePaint::TexturePaint(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::TexturePaint::TexturePaint(::java::awt::image::BufferedImage* txtr, ::java::awt::geom::Rectangle2D* anchor)
    : TexturePaint(*static_cast< ::default_init_tag* >(0))
{
    ctor(txtr, anchor);
}


void ::java::awt::TexturePaint::ctor(::java::awt::image::BufferedImage* txtr, ::java::awt::geom::Rectangle2D* anchor)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::TexturePaint::ctor(::java::awt::image::BufferedImage* txtr, ::java::awt::geom::Rectangle2D* anchor)");
}

java::awt::PaintContext* java::awt::TexturePaint::createContext(::java::awt::image::ColorModel* cm, Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, RenderingHints* hints)
{ /* stub */
    unimplemented_(u"java::awt::PaintContext* java::awt::TexturePaint::createContext(::java::awt::image::ColorModel* cm, Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, RenderingHints* hints)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::TexturePaint::getAnchorRect()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::TexturePaint::getAnchorRect()");
    return 0;
}

java::awt::image::BufferedImage* java::awt::TexturePaint::getImage()
{ /* stub */
    unimplemented_(u"java::awt::image::BufferedImage* java::awt::TexturePaint::getImage()");
    return 0;
}

int32_t java::awt::TexturePaint::getTransparency()
{ /* stub */
    unimplemented_(u"int32_t java::awt::TexturePaint::getTransparency()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::TexturePaint::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.TexturePaint", 21);
    return c;
}

java::lang::Class* java::awt::TexturePaint::getClass0()
{
    return class_();
}

