// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/RoundRectangle2D.hpp>

#include <java/awt/geom/PathIterator.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::RoundRectangle2D::RoundRectangle2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::RoundRectangle2D::RoundRectangle2D()
    : RoundRectangle2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::awt::geom::RoundRectangle2D::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::RoundRectangle2D::ctor()");
}

/* private: int32_t java::awt::geom::RoundRectangle2D::classify(double coord, double left, double right, double arcsize) */
bool java::awt::geom::RoundRectangle2D::contains(double x, double y)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::RoundRectangle2D::contains(double x, double y)");
    return 0;
}

bool java::awt::geom::RoundRectangle2D::contains(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::RoundRectangle2D::contains(double x, double y, double w, double h)");
    return 0;
}

bool java::awt::geom::RoundRectangle2D::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::RoundRectangle2D::equals(::java::lang::Object* obj)");
    return 0;
}

java::awt::geom::PathIterator* java::awt::geom::RoundRectangle2D::getPathIterator(AffineTransform* at)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::RoundRectangle2D::getPathIterator(AffineTransform* at)");
    return 0;
}

int32_t java::awt::geom::RoundRectangle2D::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::RoundRectangle2D::hashCode()");
    return 0;
}

bool java::awt::geom::RoundRectangle2D::intersects(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::RoundRectangle2D::intersects(double x, double y, double w, double h)");
    return 0;
}

void java::awt::geom::RoundRectangle2D::setFrame(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"void java::awt::geom::RoundRectangle2D::setFrame(double x, double y, double w, double h)");
}

void java::awt::geom::RoundRectangle2D::setRoundRect(RoundRectangle2D* rr)
{ /* stub */
    unimplemented_(u"void java::awt::geom::RoundRectangle2D::setRoundRect(RoundRectangle2D* rr)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::RoundRectangle2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.RoundRectangle2D", 30);
    return c;
}

bool java::awt::geom::RoundRectangle2D::contains(Point2D* p)
{
    return super::contains(p);
}

bool java::awt::geom::RoundRectangle2D::contains(Rectangle2D* r)
{
    return super::contains(r);
}

java::awt::geom::PathIterator* java::awt::geom::RoundRectangle2D::getPathIterator(AffineTransform* at, double flatness)
{
    return super::getPathIterator(at, flatness);
}

bool java::awt::geom::RoundRectangle2D::intersects(Rectangle2D* r)
{
    return super::intersects(r);
}

void java::awt::geom::RoundRectangle2D::setFrame(Rectangle2D* r)
{
    super::setFrame(r);
}

void java::awt::geom::RoundRectangle2D::setFrame(Point2D* loc, Dimension2D* size)
{
    super::setFrame(loc, size);
}

java::lang::Class* java::awt::geom::RoundRectangle2D::getClass0()
{
    return class_();
}

