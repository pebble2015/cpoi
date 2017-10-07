// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Arc2D_Double.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Arc2D_Double::Arc2D_Double(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Arc2D_Double::Arc2D_Double()
    : Arc2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Arc2D_Double::Arc2D_Double(int32_t type)
    : Arc2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

java::awt::geom::Arc2D_Double::Arc2D_Double(Rectangle2D* ellipseBounds, double start, double extent, int32_t type)
    : Arc2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(ellipseBounds, start, extent, type);
}

java::awt::geom::Arc2D_Double::Arc2D_Double(double x, double y, double w, double h, double start, double extent, int32_t type)
    : Arc2D_Double(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y, w, h, start, extent, type);
}

constexpr int64_t java::awt::geom::Arc2D_Double::serialVersionUID;

void ::java::awt::geom::Arc2D_Double::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Double::ctor()");
}

void ::java::awt::geom::Arc2D_Double::ctor(int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Double::ctor(int32_t type)");
}

void ::java::awt::geom::Arc2D_Double::ctor(Rectangle2D* ellipseBounds, double start, double extent, int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Double::ctor(Rectangle2D* ellipseBounds, double start, double extent, int32_t type)");
}

void ::java::awt::geom::Arc2D_Double::ctor(double x, double y, double w, double h, double start, double extent, int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Double::ctor(double x, double y, double w, double h, double start, double extent, int32_t type)");
}

double java::awt::geom::Arc2D_Double::getAngleExtent()
{ /* stub */
    unimplemented_(u"double java::awt::geom::Arc2D_Double::getAngleExtent()");
    return 0;
}

double java::awt::geom::Arc2D_Double::getAngleStart()
{ /* stub */
    unimplemented_(u"double java::awt::geom::Arc2D_Double::getAngleStart()");
    return 0;
}

double java::awt::geom::Arc2D_Double::getHeight()
{ /* stub */
return height ; /* getter */
}

double java::awt::geom::Arc2D_Double::getWidth()
{ /* stub */
return width ; /* getter */
}

double java::awt::geom::Arc2D_Double::getX()
{ /* stub */
return x ; /* getter */
}

double java::awt::geom::Arc2D_Double::getY()
{ /* stub */
return y ; /* getter */
}

bool java::awt::geom::Arc2D_Double::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D_Double::isEmpty()");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Arc2D_Double::makeBounds(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Arc2D_Double::makeBounds(double x, double y, double w, double h)");
    return 0;
}

/* private: void java::awt::geom::Arc2D_Double::readObject(::java::io::ObjectInputStream* s) */
void java::awt::geom::Arc2D_Double::setAngleExtent(double angExt)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D_Double::setAngleExtent(double angExt)");
}

void java::awt::geom::Arc2D_Double::setAngleStart(double angSt)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D_Double::setAngleStart(double angSt)");
}

void java::awt::geom::Arc2D_Double::setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D_Double::setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure)");
}

/* private: void java::awt::geom::Arc2D_Double::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Arc2D_Double::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Arc2D.Double", 26);
    return c;
}

void java::awt::geom::Arc2D_Double::setAngleStart(Point2D* p)
{
    super::setAngleStart(p);
}

void java::awt::geom::Arc2D_Double::setArc(Arc2D* a)
{
    super::setArc(a);
}

void java::awt::geom::Arc2D_Double::setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure)
{
    super::setArc(rect, angSt, angExt, closure);
}

void java::awt::geom::Arc2D_Double::setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure)
{
    super::setArc(loc, size, angSt, angExt, closure);
}

java::lang::Class* java::awt::geom::Arc2D_Double::getClass0()
{
    return class_();
}

