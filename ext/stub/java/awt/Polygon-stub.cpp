// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Polygon.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Polygon::Polygon(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Polygon::Polygon()
    : Polygon(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::Polygon::Polygon(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints)
    : Polygon(*static_cast< ::default_init_tag* >(0))
{
    ctor(xpoints, ypoints, npoints);
}

constexpr int32_t java::awt::Polygon::MIN_LENGTH;
constexpr int64_t java::awt::Polygon::serialVersionUID;

void ::java::awt::Polygon::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Polygon::ctor()");
}

void ::java::awt::Polygon::ctor(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Polygon::ctor(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints)");
}

void java::awt::Polygon::addPoint(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Polygon::addPoint(int32_t x, int32_t y)");
}

void java::awt::Polygon::calculateBounds(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints)
{ /* stub */
    unimplemented_(u"void java::awt::Polygon::calculateBounds(::int32_tArray* xpoints, ::int32_tArray* ypoints, int32_t npoints)");
}

bool java::awt::Polygon::contains(Point* p)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::contains(Point* p)");
    return 0;
}

bool java::awt::Polygon::contains(::java::awt::geom::Point2D* p)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::contains(::java::awt::geom::Point2D* p)");
    return 0;
}

bool java::awt::Polygon::contains(::java::awt::geom::Rectangle2D* r)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::contains(::java::awt::geom::Rectangle2D* r)");
    return 0;
}

bool java::awt::Polygon::contains(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::contains(int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Polygon::contains(double x, double y)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::contains(double x, double y)");
    return 0;
}

bool java::awt::Polygon::contains(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::contains(double x, double y, double w, double h)");
    return 0;
}

java::awt::Rectangle* java::awt::Polygon::getBoundingBox()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::Polygon::getBoundingBox()");
    return 0;
}

java::awt::Rectangle* java::awt::Polygon::getBounds()
{ /* stub */
return bounds ; /* getter */
}

java::awt::geom::Rectangle2D* java::awt::Polygon::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::Polygon::getBounds2D()");
    return 0;
}

/* private: sun::awt::geom::Crossings* java::awt::Polygon::getCrossings(double xlo, double ylo, double xhi, double yhi) */
java::awt::geom::PathIterator* java::awt::Polygon::getPathIterator(::java::awt::geom::AffineTransform* at)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::Polygon::getPathIterator(::java::awt::geom::AffineTransform* at)");
    return 0;
}

java::awt::geom::PathIterator* java::awt::Polygon::getPathIterator(::java::awt::geom::AffineTransform* at, double flatness)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::Polygon::getPathIterator(::java::awt::geom::AffineTransform* at, double flatness)");
    return 0;
}

bool java::awt::Polygon::inside(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::inside(int32_t x, int32_t y)");
    return 0;
}

bool java::awt::Polygon::intersects(::java::awt::geom::Rectangle2D* r)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::intersects(::java::awt::geom::Rectangle2D* r)");
    return 0;
}

bool java::awt::Polygon::intersects(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::Polygon::intersects(double x, double y, double w, double h)");
    return 0;
}

void java::awt::Polygon::invalidate()
{ /* stub */
    unimplemented_(u"void java::awt::Polygon::invalidate()");
}

void java::awt::Polygon::reset()
{ /* stub */
    unimplemented_(u"void java::awt::Polygon::reset()");
}

void java::awt::Polygon::translate(int32_t deltaX, int32_t deltaY)
{ /* stub */
    unimplemented_(u"void java::awt::Polygon::translate(int32_t deltaX, int32_t deltaY)");
}

void java::awt::Polygon::updateBounds(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Polygon::updateBounds(int32_t x, int32_t y)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Polygon::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Polygon", 16);
    return c;
}

java::lang::Class* java::awt::Polygon::getClass0()
{
    return class_();
}

