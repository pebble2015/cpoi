// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Arc2D.hpp>

#include <java/awt/geom/PathIterator.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Arc2D::Arc2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Arc2D::Arc2D()
    : Arc2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Arc2D::Arc2D(int32_t type)
    : Arc2D(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

constexpr int32_t java::awt::geom::Arc2D::CHORD;
constexpr int32_t java::awt::geom::Arc2D::OPEN;
constexpr int32_t java::awt::geom::Arc2D::PIE;

void ::java::awt::geom::Arc2D::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D::ctor()");
}

void ::java::awt::geom::Arc2D::ctor(int32_t type)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Arc2D::ctor(int32_t type)");
}

bool java::awt::geom::Arc2D::contains(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D::contains(Rectangle2D* r)");
    return 0;
}

bool java::awt::geom::Arc2D::contains(double x, double y)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D::contains(double x, double y)");
    return 0;
}

bool java::awt::geom::Arc2D::contains(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D::contains(double x, double y, double w, double h)");
    return 0;
}

/* private: bool java::awt::geom::Arc2D::contains(double x, double y, double w, double h, Rectangle2D* origrect) */
bool java::awt::geom::Arc2D::containsAngle(double angle)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D::containsAngle(double angle)");
    return 0;
}

bool java::awt::geom::Arc2D::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D::equals(::java::lang::Object* obj)");
    return 0;
}

int32_t java::awt::geom::Arc2D::getArcType()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Arc2D::getArcType()");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Arc2D::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Arc2D::getBounds2D()");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::Arc2D::getEndPoint()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::Arc2D::getEndPoint()");
    return 0;
}

java::awt::geom::PathIterator* java::awt::geom::Arc2D::getPathIterator(AffineTransform* at)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::Arc2D::getPathIterator(AffineTransform* at)");
    return 0;
}

java::awt::geom::Point2D* java::awt::geom::Arc2D::getStartPoint()
{ /* stub */
    unimplemented_(u"java::awt::geom::Point2D* java::awt::geom::Arc2D::getStartPoint()");
    return 0;
}

int32_t java::awt::geom::Arc2D::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Arc2D::hashCode()");
    return 0;
}

bool java::awt::geom::Arc2D::intersects(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Arc2D::intersects(double x, double y, double w, double h)");
    return 0;
}

double java::awt::geom::Arc2D::normalizeDegrees(double angle)
{ /* stub */
    clinit();
    unimplemented_(u"double java::awt::geom::Arc2D::normalizeDegrees(double angle)");
    return 0;
}

void java::awt::geom::Arc2D::setAngleStart(Point2D* p)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setAngleStart(Point2D* p)");
}

void java::awt::geom::Arc2D::setAngles(Point2D* p1, Point2D* p2)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setAngles(Point2D* p1, Point2D* p2)");
}

void java::awt::geom::Arc2D::setAngles(double x1, double y1, double x2, double y2)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setAngles(double x1, double y1, double x2, double y2)");
}

void java::awt::geom::Arc2D::setArc(Arc2D* a)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setArc(Arc2D* a)");
}

void java::awt::geom::Arc2D::setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setArc(Rectangle2D* rect, double angSt, double angExt, int32_t closure)");
}

void java::awt::geom::Arc2D::setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setArc(Point2D* loc, Dimension2D* size, double angSt, double angExt, int32_t closure)");
}

void java::awt::geom::Arc2D::setArcByCenter(double x, double y, double radius, double angSt, double angExt, int32_t closure)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setArcByCenter(double x, double y, double radius, double angSt, double angExt, int32_t closure)");
}

void java::awt::geom::Arc2D::setArcByTangent(Point2D* p1, Point2D* p2, Point2D* p3, double radius)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setArcByTangent(Point2D* p1, Point2D* p2, Point2D* p3, double radius)");
}

void java::awt::geom::Arc2D::setArcType(int32_t type)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setArcType(int32_t type)");
}

void java::awt::geom::Arc2D::setFrame(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Arc2D::setFrame(double x, double y, double w, double h)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Arc2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Arc2D", 19);
    return c;
}

bool java::awt::geom::Arc2D::contains(Point2D* p)
{
    return super::contains(p);
}

java::awt::geom::PathIterator* java::awt::geom::Arc2D::getPathIterator(AffineTransform* at, double flatness)
{
    return super::getPathIterator(at, flatness);
}

bool java::awt::geom::Arc2D::intersects(Rectangle2D* r)
{
    return super::intersects(r);
}

void java::awt::geom::Arc2D::setFrame(Rectangle2D* r)
{
    super::setFrame(r);
}

void java::awt::geom::Arc2D::setFrame(Point2D* loc, Dimension2D* size)
{
    super::setFrame(loc, size);
}

java::lang::Class* java::awt::geom::Arc2D::getClass0()
{
    return class_();
}

