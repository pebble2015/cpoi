// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Area.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Area::Area(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Area::Area()
    : Area(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Area::Area(::java::awt::Shape* s)
    : Area(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::util::Vector*& java::awt::geom::Area::EmptyCurves()
{
    clinit();
    return EmptyCurves_;
}
java::util::Vector* java::awt::geom::Area::EmptyCurves_;

void ::java::awt::geom::Area::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Area::ctor()");
}

void ::java::awt::geom::Area::ctor(::java::awt::Shape* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Area::ctor(::java::awt::Shape* s)");
}

void java::awt::geom::Area::add(Area* rhs)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Area::add(Area* rhs)");
}

java::lang::Object* java::awt::geom::Area::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::geom::Area::clone()");
    return 0;
}

bool java::awt::geom::Area::contains(Point2D* p)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::contains(Point2D* p)");
    return 0;
}

bool java::awt::geom::Area::contains(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::contains(Rectangle2D* r)");
    return 0;
}

bool java::awt::geom::Area::contains(double x, double y)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::contains(double x, double y)");
    return 0;
}

bool java::awt::geom::Area::contains(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::contains(double x, double y, double w, double h)");
    return 0;
}

java::awt::geom::Area* java::awt::geom::Area::createTransformedArea(AffineTransform* t)
{ /* stub */
    unimplemented_(u"java::awt::geom::Area* java::awt::geom::Area::createTransformedArea(AffineTransform* t)");
    return 0;
}

bool java::awt::geom::Area::equals(Area* other)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::equals(Area* other)");
    return 0;
}

void java::awt::geom::Area::exclusiveOr(Area* rhs)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Area::exclusiveOr(Area* rhs)");
}

java::awt::Rectangle* java::awt::geom::Area::getBounds()
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::geom::Area::getBounds()");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Area::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Area::getBounds2D()");
    return 0;
}

/* private: java::awt::geom::Rectangle2D* java::awt::geom::Area::getCachedBounds() */
java::awt::geom::PathIterator* java::awt::geom::Area::getPathIterator(AffineTransform* at)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::Area::getPathIterator(AffineTransform* at)");
    return 0;
}

java::awt::geom::PathIterator* java::awt::geom::Area::getPathIterator(AffineTransform* at, double flatness)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::Area::getPathIterator(AffineTransform* at, double flatness)");
    return 0;
}

void java::awt::geom::Area::intersect(Area* rhs)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Area::intersect(Area* rhs)");
}

bool java::awt::geom::Area::intersects(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::intersects(Rectangle2D* r)");
    return 0;
}

bool java::awt::geom::Area::intersects(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::intersects(double x, double y, double w, double h)");
    return 0;
}

/* private: void java::awt::geom::Area::invalidateBounds() */
bool java::awt::geom::Area::isEmpty()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::isEmpty()");
    return 0;
}

bool java::awt::geom::Area::isPolygonal()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::isPolygonal()");
    return 0;
}

bool java::awt::geom::Area::isRectangular()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::isRectangular()");
    return 0;
}

bool java::awt::geom::Area::isSingular()
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Area::isSingular()");
    return 0;
}

/* private: java::util::Vector* java::awt::geom::Area::pathToCurves(PathIterator* pi) */
void java::awt::geom::Area::reset()
{ /* stub */
    unimplemented_(u"void java::awt::geom::Area::reset()");
}

void java::awt::geom::Area::subtract(Area* rhs)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Area::subtract(Area* rhs)");
}

void java::awt::geom::Area::transform(AffineTransform* t)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Area::transform(AffineTransform* t)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Area::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Area", 18);
    return c;
}

java::lang::Class* java::awt::geom::Area::getClass0()
{
    return class_();
}

