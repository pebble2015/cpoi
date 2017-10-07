// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Rectangle2D_Double.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Rectangle2D_Double::Rectangle2D_Double(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Rectangle2D_Double::Rectangle2D_Double()
    : Rectangle2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Rectangle2D_Double::Rectangle2D_Double(double x, double y, double w, double h)
    : Rectangle2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y, w, h);
}

constexpr int64_t java::awt::geom::Rectangle2D_Double::serialVersionUID;

void ::java::awt::geom::Rectangle2D_Double::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Rectangle2D_Double::ctor()");
}

void ::java::awt::geom::Rectangle2D_Double::ctor(double x, double y, double w, double h)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Rectangle2D_Double::ctor(double x, double y, double w, double h)");
}

java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D_Double::createIntersection(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D_Double::createIntersection(Rectangle2D* r)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D_Double::createUnion(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D_Double::createUnion(Rectangle2D* r)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D_Double::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D_Double::getBounds2D()");
    return 0;
}

double java::awt::geom::Rectangle2D_Double::getHeight()
{ /* stub */
return height ; /* getter */
}

double java::awt::geom::Rectangle2D_Double::getWidth()
{ /* stub */
return width ; /* getter */
}

double java::awt::geom::Rectangle2D_Double::getX()
{ /* stub */
return x ; /* getter */
}

double java::awt::geom::Rectangle2D_Double::getY()
{ /* stub */
return y ; /* getter */
}

bool java::awt::geom::Rectangle2D_Double::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D_Double::isEmpty()");
    return 0;
}

int32_t java::awt::geom::Rectangle2D_Double::outcode(double x, double y)
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Rectangle2D_Double::outcode(double x, double y)");
    return 0;
}

void java::awt::geom::Rectangle2D_Double::setRect(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D_Double::setRect(Rectangle2D* r)");
}

void java::awt::geom::Rectangle2D_Double::setRect(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D_Double::setRect(double x, double y, double w, double h)");
}

java::lang::String* java::awt::geom::Rectangle2D_Double::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::geom::Rectangle2D_Double::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Rectangle2D_Double::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Rectangle2D.Double", 32);
    return c;
}

int32_t java::awt::geom::Rectangle2D_Double::outcode(Point2D* p)
{
    return super::outcode(p);
}

java::lang::Class* java::awt::geom::Rectangle2D_Double::getClass0()
{
    return class_();
}

