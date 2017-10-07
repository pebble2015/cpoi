// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Ellipse2D_Float.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Ellipse2D_Float::Ellipse2D_Float(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Ellipse2D_Float::Ellipse2D_Float()
    : Ellipse2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Ellipse2D_Float::Ellipse2D_Float(float x, float y, float w, float h)
    : Ellipse2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y, w, h);
}

constexpr int64_t java::awt::geom::Ellipse2D_Float::serialVersionUID;

void ::java::awt::geom::Ellipse2D_Float::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Ellipse2D_Float::ctor()");
}

void ::java::awt::geom::Ellipse2D_Float::ctor(float x, float y, float w, float h)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Ellipse2D_Float::ctor(float x, float y, float w, float h)");
}

java::awt::geom::Rectangle2D* java::awt::geom::Ellipse2D_Float::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Ellipse2D_Float::getBounds2D()");
    return 0;
}

double java::awt::geom::Ellipse2D_Float::getHeight()
{ /* stub */
}

double java::awt::geom::Ellipse2D_Float::getWidth()
{ /* stub */
}

double java::awt::geom::Ellipse2D_Float::getX()
{ /* stub */
}

double java::awt::geom::Ellipse2D_Float::getY()
{ /* stub */
}

bool java::awt::geom::Ellipse2D_Float::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Ellipse2D_Float::isEmpty()");
    return 0;
}

void java::awt::geom::Ellipse2D_Float::setFrame(float x, float y, float w, float h)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Ellipse2D_Float::setFrame(float x, float y, float w, float h)");
}

void java::awt::geom::Ellipse2D_Float::setFrame(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Ellipse2D_Float::setFrame(double x, double y, double w, double h)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Ellipse2D_Float::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Ellipse2D.Float", 29);
    return c;
}

void java::awt::geom::Ellipse2D_Float::setFrame(Rectangle2D* r)
{
    super::setFrame(r);
}

void java::awt::geom::Ellipse2D_Float::setFrame(Point2D* loc, Dimension2D* size)
{
    super::setFrame(loc, size);
}

java::lang::Class* java::awt::geom::Ellipse2D_Float::getClass0()
{
    return class_();
}

