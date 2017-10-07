// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Dimension.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Dimension::Dimension(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Dimension::Dimension()
    : Dimension(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::awt::Dimension::Dimension(Dimension* d)
    : Dimension(*static_cast< ::default_init_tag* >(0))
{
    ctor(d);
}

java::awt::Dimension::Dimension(int32_t width, int32_t height)
    : Dimension(*static_cast< ::default_init_tag* >(0))
{
    ctor(width, height);
}

constexpr int64_t java::awt::Dimension::serialVersionUID;

void ::java::awt::Dimension::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Dimension::ctor()");
}

void ::java::awt::Dimension::ctor(Dimension* d)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Dimension::ctor(Dimension* d)");
}

void ::java::awt::Dimension::ctor(int32_t width, int32_t height)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Dimension::ctor(int32_t width, int32_t height)");
}

bool java::awt::Dimension::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::Dimension::equals(::java::lang::Object* obj)");
    return 0;
}

double java::awt::Dimension::getHeight()
{ /* stub */
}

java::awt::Dimension* java::awt::Dimension::getSize()
{ /* stub */
    unimplemented_(u"java::awt::Dimension* java::awt::Dimension::getSize()");
    return 0;
}

double java::awt::Dimension::getWidth()
{ /* stub */
}

int32_t java::awt::Dimension::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Dimension::hashCode()");
    return 0;
}

void java::awt::Dimension::setSize(Dimension* d)
{ /* stub */
    unimplemented_(u"void java::awt::Dimension::setSize(Dimension* d)");
}

void java::awt::Dimension::setSize(double width, double height)
{ /* stub */
    unimplemented_(u"void java::awt::Dimension::setSize(double width, double height)");
}

void java::awt::Dimension::setSize(int32_t width, int32_t height)
{ /* stub */
    unimplemented_(u"void java::awt::Dimension::setSize(int32_t width, int32_t height)");
}

java::lang::String* java::awt::Dimension::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Dimension::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Dimension::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Dimension", 18);
    return c;
}

void java::awt::Dimension::setSize(::java::awt::geom::Dimension2D* d)
{
    super::setSize(d);
}

java::lang::Class* java::awt::Dimension::getClass0()
{
    return class_();
}

