// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Line2D_Float.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Line2D_Float::Line2D_Float(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Line2D_Float::Line2D_Float()
    : Line2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Line2D_Float::Line2D_Float(Point2D* p1, Point2D* p2)
    : Line2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(p1, p2);
}

java::awt::geom::Line2D_Float::Line2D_Float(float x1, float y1, float x2, float y2)
    : Line2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(x1, y1, x2, y2);
}

constexpr int64_t java::awt::geom::Line2D_Float::serialVersionUID;

void ::java::awt::geom::Line2D_Float::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Line2D_Float::ctor()");
}

void ::java::awt::geom::Line2D_Float::ctor(Point2D* p1, Point2D* p2)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Line2D_Float::ctor(Point2D* p1, Point2D* p2)");
}

void ::java::awt::geom::Line2D_Float::ctor(float x1, float y1, float x2, float y2)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Line2D_Float::ctor(float x1, float y1, float x2, float y2)");
}

java::awt::geom::Rectangle2D* java::awt::geom::Line2D_Float::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Line2D_Float::getBounds2D()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::Line2D_Float::getP1()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::Line2D_Float::getP1()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::Line2D_Float::getP2()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::Line2D_Float::getP2()");
    return 0;
}

double java::awt::geom::Line2D_Float::getX1()
{ /* stub */
}

double java::awt::geom::Line2D_Float::getX2()
{ /* stub */
}

double java::awt::geom::Line2D_Float::getY1()
{ /* stub */
}

double java::awt::geom::Line2D_Float::getY2()
{ /* stub */
}

void java::awt::geom::Line2D_Float::setLine(double x1, double y1, double x2, double y2)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Line2D_Float::setLine(double x1, double y1, double x2, double y2)");
}

void java::awt::geom::Line2D_Float::setLine(float x1, float y1, float x2, float y2)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Line2D_Float::setLine(float x1, float y1, float x2, float y2)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Line2D_Float::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Line2D.Float", 26);
    return c;
}

void java::awt::geom::Line2D_Float::setLine(Line2D* l)
{
    super::setLine(l);
}

void java::awt::geom::Line2D_Float::setLine(Point2D* p1, Point2D* p2)
{
    super::setLine(p1, p2);
}

java::lang::Class* java::awt::geom::Line2D_Float::getClass0()
{
    return class_();
}

