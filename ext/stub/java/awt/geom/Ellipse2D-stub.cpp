// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Ellipse2D.hpp>

#include <java/awt/geom/PathIterator.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Ellipse2D::Ellipse2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Ellipse2D::Ellipse2D()
    : Ellipse2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::awt::geom::Ellipse2D::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Ellipse2D::ctor()");
}

bool java::awt::geom::Ellipse2D::contains(double x, double y)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Ellipse2D::contains(double x, double y)");
    return 0;
}

bool java::awt::geom::Ellipse2D::contains(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Ellipse2D::contains(double x, double y, double w, double h)");
    return 0;
}

bool java::awt::geom::Ellipse2D::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Ellipse2D::equals(::java::lang::Object* obj)");
    return 0;
}

java::awt::geom::PathIterator* java::awt::geom::Ellipse2D::getPathIterator(AffineTransform* at)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::Ellipse2D::getPathIterator(AffineTransform* at)");
    return 0;
}

int32_t java::awt::geom::Ellipse2D::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Ellipse2D::hashCode()");
    return 0;
}

bool java::awt::geom::Ellipse2D::intersects(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Ellipse2D::intersects(double x, double y, double w, double h)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Ellipse2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Ellipse2D", 23);
    return c;
}

bool java::awt::geom::Ellipse2D::contains(Point2D* p)
{
    return super::contains(p);
}

bool java::awt::geom::Ellipse2D::contains(Rectangle2D* r)
{
    return super::contains(r);
}

java::awt::geom::PathIterator* java::awt::geom::Ellipse2D::getPathIterator(AffineTransform* at, double flatness)
{
    return super::getPathIterator(at, flatness);
}

bool java::awt::geom::Ellipse2D::intersects(Rectangle2D* r)
{
    return super::intersects(r);
}

java::lang::Class* java::awt::geom::Ellipse2D::getClass0()
{
    return class_();
}

