// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/geom/Point2D_Float.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::geom::Point2D_Float::Point2D_Float(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::geom::Point2D_Float::Point2D_Float()
    : Point2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::geom::Point2D_Float::Point2D_Float(float x, float y)
    : Point2D_Float(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y);
}

constexpr int64_t java::awt::geom::Point2D_Float::serialVersionUID;

void ::java::awt::geom::Point2D_Float::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Point2D_Float::ctor()");
}

void ::java::awt::geom::Point2D_Float::ctor(float x, float y)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::geom::Point2D_Float::ctor(float x, float y)");
}

double java::awt::geom::Point2D_Float::getX()
{ /* stub */
}

double java::awt::geom::Point2D_Float::getY()
{ /* stub */
}

void java::awt::geom::Point2D_Float::setLocation(double x, double y)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Point2D_Float::setLocation(double x, double y)");
}

void java::awt::geom::Point2D_Float::setLocation(float x, float y)
{ /* stub */
    unimplemented_(u"void java::awt::geom::Point2D_Float::setLocation(float x, float y)");
}

java::lang::String* java::awt::geom::Point2D_Float::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::geom::Point2D_Float::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::geom::Point2D_Float::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.geom.Point2D.Float", 27);
    return c;
}

void java::awt::geom::Point2D_Float::setLocation(Point2D* p)
{
    super::setLocation(p);
}

java::lang::Class* java::awt::geom::Point2D_Float::getClass0()
{
    return class_();
}

