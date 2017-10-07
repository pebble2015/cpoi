// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Rectangle2D.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Rectangle2D::Rectangle2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Rectangle2D::Rectangle2D()
    : Rectangle2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::awt::geom::Rectangle2D::OUT_BOTTOM;
constexpr int32_t java::awt::geom::Rectangle2D::OUT_LEFT;
constexpr int32_t java::awt::geom::Rectangle2D::OUT_RIGHT;
constexpr int32_t java::awt::geom::Rectangle2D::OUT_TOP;

void ::java::awt::geom::Rectangle2D::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Rectangle2D::ctor()");
}

void java::awt::geom::Rectangle2D::add(Point2D* pt)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D::add(Point2D* pt)");
}

void java::awt::geom::Rectangle2D::add(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D::add(Rectangle2D* r)");
}

void java::awt::geom::Rectangle2D::add(double newx, double newy)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D::add(double newx, double newy)");
}

bool java::awt::geom::Rectangle2D::contains(double x, double y)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D::contains(double x, double y)");
    return 0;
}

bool java::awt::geom::Rectangle2D::contains(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D::contains(double x, double y, double w, double h)");
    return 0;
}

bool java::awt::geom::Rectangle2D::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D::equals(::java::lang::Object* obj)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D::getBounds2D()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::geom::Rectangle2D::getBounds2D()");
    return 0;
}

java::awt::geom::PathIterator* java::awt::geom::Rectangle2D::getPathIterator(AffineTransform* at)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::Rectangle2D::getPathIterator(AffineTransform* at)");
    return 0;
}

java::awt::geom::PathIterator* java::awt::geom::Rectangle2D::getPathIterator(AffineTransform* at, double flatness)
{ /* stub */
    unimplemented_(u"java::awt::geom::PathIterator* java::awt::geom::Rectangle2D::getPathIterator(AffineTransform* at, double flatness)");
    return 0;
}

int32_t java::awt::geom::Rectangle2D::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Rectangle2D::hashCode()");
    return 0;
}

void java::awt::geom::Rectangle2D::intersect(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest)
{ /* stub */
    clinit();
    unimplemented_(u"void java::awt::geom::Rectangle2D::intersect(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest)");
}

bool java::awt::geom::Rectangle2D::intersects(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D::intersects(double x, double y, double w, double h)");
    return 0;
}

bool java::awt::geom::Rectangle2D::intersectsLine(Line2D* l)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D::intersectsLine(Line2D* l)");
    return 0;
}

bool java::awt::geom::Rectangle2D::intersectsLine(double x1, double y1, double x2, double y2)
{ /* stub */
    unimplemented_(u"bool java::awt::geom::Rectangle2D::intersectsLine(double x1, double y1, double x2, double y2)");
    return 0;
}

int32_t java::awt::geom::Rectangle2D::outcode(Point2D* p)
{ /* stub */
    unimplemented_(u"int32_t java::awt::geom::Rectangle2D::outcode(Point2D* p)");
    return 0;
}

void java::awt::geom::Rectangle2D::setFrame(double x, double y, double w, double h)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D::setFrame(double x, double y, double w, double h)");
}

void java::awt::geom::Rectangle2D::setRect(Rectangle2D* r)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Rectangle2D::setRect(Rectangle2D* r)");
}

void java::awt::geom::Rectangle2D::union_(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest)
{ /* stub */
    clinit();
    unimplemented_(u"void java::awt::geom::Rectangle2D::union_(Rectangle2D* src1, Rectangle2D* src2, Rectangle2D* dest)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Rectangle2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Rectangle2D", 25);
    return c;
}

bool java::awt::geom::Rectangle2D::contains(Point2D* p)
{
    return super::contains(p);
}

bool java::awt::geom::Rectangle2D::contains(Rectangle2D* r)
{
    return super::contains(r);
}

bool java::awt::geom::Rectangle2D::intersects(Rectangle2D* r)
{
    return super::intersects(r);
}

void java::awt::geom::Rectangle2D::setFrame(Rectangle2D* r)
{
    super::setFrame(r);
}

void java::awt::geom::Rectangle2D::setFrame(Point2D* loc, Dimension2D* size)
{
    super::setFrame(loc, size);
}

java::lang::Class* java::awt::geom::Rectangle2D::getClass0()
{
    return class_();
}

