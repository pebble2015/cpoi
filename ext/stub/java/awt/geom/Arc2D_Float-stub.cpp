// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Arc2D_Float.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Arc2D_Float::Arc2D_Float(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Arc2D_Float::Arc2D_Float()
    : Arc2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Arc2D_Float::Arc2D_Float(int32_t type)
    : Arc2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

java::awt::geom::Arc2D_Float::Arc2D_Float(Rectangle2D* ellipseBounds, float start, float extent, int32_t type)
    : Arc2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(ellipseBounds, start, extent, type);
}

java::awt::geom::Arc2D_Float::Arc2D_Float(float x, float y, float w, float h, float start, float extent, int32_t type)
    : Arc2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y, w, h, start, extent, type);
}

constexpr int64_t java::awt::geom::Arc2D_Float::serialVersionUID;

void ::java::awt::geom::Arc2D_Float::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Float::ctor()");
}

void ::java::awt::geom::Arc2D_Float::ctor(int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Float::ctor(int32_t type)");
}

void ::java::awt::geom::Arc2D_Float::ctor(Rectangle2D* ellipseBounds, float start, float extent, int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Float::ctor(Rectangle2D* ellipseBounds, float start, float extent, int32_t type)");
}

void ::java::awt::geom::Arc2D_Float::ctor(float x, float y, float w, float h, float start, float extent, int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D_Float::ctor(float x, float y, float w, float h, float start, float extent, int32_t type)");
}

double java::awt::geom::Arc2D_Float::getAngleExtent()
{ /* stub */
    unimplemented_(u"double java::awt::geom::Arc2D_Float::getAngleExtent()");
    return 0;
}

double java::awt::geom::Arc2D_Float::getAngleStart()
{ /* stub */
    unimplemented_(u"double java::awt::geom::Arc2D_Float::getAngleStart()");
    return 0;
}

double java::awt::geom::Arc2D_Float::getHeight()
{ /* stub */
}

double java::awt::geom::Arc2D_Float::getWidth()
{ /* stub */
}

double java::awt::geom::Arc2D_Float::getX()
{ /* stub */
}

double java::awt::geom::Arc2D_Float::getY()
{ /* stub */
}

bool java::awt::geom::Arc2D_Float::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D_Float::isEmpty()");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Arc2D_Float::makeBounds(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Arc2D_Float::makeBounds(double x, double y, double w, double h)");
    return 0;
}

/* private: void java::awt::geom::Arc2D_Float::readObject(::java::io::ObjectInputStream* s) */
void java::awt::geom::Arc2D_Float::setAngleExtent(double angExt)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D_Float::setAngleExtent(double angExt)");
}

void java::awt::geom::Arc2D_Float::setAngleStart(double angSt)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D_Float::setAngleStart(double angSt)");
}

void java::awt::geom::Arc2D_Float::setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D_Float::setArc(double x, double y, double w, double h, double angSt, double angExt, int32_t closure)");
}

/* private: void java::awt::geom::Arc2D_Float::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Arc2D_Float::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Arc2D.Float", 25);
    return c;
}

void java::awt::geom::Arc2D_Float::setAngleStart(Point2D* p)
{
    super::setAngleStart(p);
}

void java::awt::geom::Arc2D_Float::setArc(Arc2D* a)
{
    super::setArc(a);
}

void java::awt::geom::Arc2D_Float::setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure)
{
    super::setArc(rect, angSt, angExt, closure);
}

void java::awt::geom::Arc2D_Float::setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure)
{
    super::setArc(loc, size, angSt, angExt, closure);
}

java::lang::Class* java::awt::geom::Arc2D_Float::getClass0()
{
    return class_();
}

