// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Point2D_Double.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Point2D_Double::Point2D_Double(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Point2D_Double::Point2D_Double()
    : Point2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Point2D_Double::Point2D_Double(double x, double y)
    : Point2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y);
}

constexpr int64_t java::awt::geom::Point2D_Double::serialVersionUID;

void ::java::awt::geom::Point2D_Double::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Point2D_Double::ctor()");
}

void ::java::awt::geom::Point2D_Double::ctor(double x, double y)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Point2D_Double::ctor(double x, double y)");
}

double java::awt::geom::Point2D_Double::getX()
{ /* stub */
return x ; /* getter */
}

double java::awt::geom::Point2D_Double::getY()
{ /* stub */
return y ; /* getter */
}

void java::awt::geom::Point2D_Double::setLocation(double x, double y)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Point2D_Double::setLocation(double x, double y)");
}

java::lang::String* java::awt::geom::Point2D_Double::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::geom::Point2D_Double::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Point2D_Double::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Point2D.Double", 28);
    return c;
}

void java::awt::geom::Point2D_Double::setLocation(Point2D* p)
{
    super::setLocation(p);
}

java::lang::Class* java::awt::geom::Point2D_Double::getClass0()
{
    return class_();
}

