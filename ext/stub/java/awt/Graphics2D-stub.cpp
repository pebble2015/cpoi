// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Graphics2D.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Graphics2D::Graphics2D(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Graphics2D::Graphics2D()
    : Graphics2D(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::awt::Graphics2D::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Graphics2D::ctor()");
}

void java::awt::Graphics2D::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics2D::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)");
}

void java::awt::Graphics2D::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)
{ /* stub */
    unimplemented_(u"void java::awt::Graphics2D::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Graphics2D::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Graphics2D", 19);
    return c;
}

java::lang::Class* java::awt::Graphics2D::getClass0()
{
    return class_();
}

