// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Point.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Point::Point(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Point::Point()
    : Point(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::Point::Point(Point* p)
    : Point(*static_cast< ::default_init_tag* >(0))
{
    ctor(p);
}

java::awt::Point::Point(int32_t x, int32_t y)
    : Point(*static_cast< ::default_init_tag* >(0))
{
    ctor(x, y);
}

constexpr int64_t java::awt::Point::serialVersionUID;

void ::java::awt::Point::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Point::ctor()");
}

void ::java::awt::Point::ctor(Point* p)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Point::ctor(Point* p)");
}

void ::java::awt::Point::ctor(int32_t x, int32_t y)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Point::ctor(int32_t x, int32_t y)");
}

bool java::awt::Point::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::Point::equals(::java::lang::Object* obj)");
    return 0;
}

java::awt::Point* java::awt::Point::getLocation()
{ /* stub */
    unimplemented_(u"java::awt::Point* java::awt::Point::getLocation()");
    return 0;
}

double java::awt::Point::getX()
{ /* stub */
}

double java::awt::Point::getY()
{ /* stub */
}

void java::awt::Point::move(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Point::move(int32_t x, int32_t y)");
}

void java::awt::Point::setLocation(Point* p)
{ /* stub */
    unimplemented_(u"void java::awt::Point::setLocation(Point* p)");
}

void java::awt::Point::setLocation(int32_t x, int32_t y)
{ /* stub */
    unimplemented_(u"void java::awt::Point::setLocation(int32_t x, int32_t y)");
}

void java::awt::Point::setLocation(double x, double y)
{ /* stub */
    unimplemented_(u"void java::awt::Point::setLocation(double x, double y)");
}

java::lang::String* java::awt::Point::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Point::toString()");
    return 0;
}

void java::awt::Point::translate(int32_t dx, int32_t dy)
{ /* stub */
    unimplemented_(u"void java::awt::Point::translate(int32_t dx, int32_t dy)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Point::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Point", 14);
    return c;
}

void java::awt::Point::setLocation(::java::awt::geom::Point2D* p)
{
    super::setLocation(p);
}

java::lang::Class* java::awt::Point::getClass0()
{
    return class_();
}

