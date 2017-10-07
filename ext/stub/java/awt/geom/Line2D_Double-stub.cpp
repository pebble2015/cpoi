// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Line2D_Double.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Line2D_Double::Line2D_Double(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Line2D_Double::Line2D_Double()
    : Line2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Line2D_Double::Line2D_Double(Point2D* p1, Point2D* p2)
    : Line2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(p1, p2);
}

java::awt::geom::Line2D_Double::Line2D_Double(double x1, double y1, double x2, double y2)
    : Line2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(x1, y1, x2, y2);
}

constexpr int64_t java::awt::geom::Line2D_Double::serialVersionUID;

void ::java::awt::geom::Line2D_Double::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Line2D_Double::ctor()");
}

void ::java::awt::geom::Line2D_Double::ctor(Point2D* p1, Point2D* p2)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Line2D_Double::ctor(Point2D* p1, Point2D* p2)");
}

void ::java::awt::geom::Line2D_Double::ctor(double x1, double y1, double x2, double y2)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Line2D_Double::ctor(double x1, double y1, double x2, double y2)");
}

java::awt::geom::Rectangle2D* java::awt::geom::Line2D_Double::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Line2D_Double::getBounds2D()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::Line2D_Double::getP1()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::Line2D_Double::getP1()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::Line2D_Double::getP2()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::Line2D_Double::getP2()");
    return 0;
}

double java::awt::geom::Line2D_Double::getX1()
{ /* stub */
return x1 ; /* getter */
}

double java::awt::geom::Line2D_Double::getX2()
{ /* stub */
return x2 ; /* getter */
}

double java::awt::geom::Line2D_Double::getY1()
{ /* stub */
return y1 ; /* getter */
}

double java::awt::geom::Line2D_Double::getY2()
{ /* stub */
return y2 ; /* getter */
}

void java::awt::geom::Line2D_Double::setLine(double x1, double y1, double x2, double y2)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Line2D_Double::setLine(double x1, double y1, double x2, double y2)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Line2D_Double::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Line2D.Double", 27);
    return c;
}

void java::awt::geom::Line2D_Double::setLine(Line2D* l)
{
    super::setLine(l);
}

void java::awt::geom::Line2D_Double::setLine(Point2D* p1, Point2D* p2)
{
    super::setLine(p1, p2);
}

java::lang::Class* java::awt::geom::Line2D_Double::getClass0()
{
    return class_();
}

