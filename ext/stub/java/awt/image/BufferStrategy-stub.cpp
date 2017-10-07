// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/image/BufferStrategy.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::image::BufferStrategy::BufferStrategy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::image::BufferStrategy::BufferStrategy()
    : BufferStrategy(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::awt::image::BufferStrategy::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::image::BufferStrategy::ctor()");
}

void java::awt::image::BufferStrategy::dispose()
{ /* stub */
    unimplemented_(u"void java::awt::image::BufferStrategy::dispose()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::image::BufferStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.image.BufferStrategy", 29);
    return c;
}

java::lang::Class* java::awt::image::BufferStrategy::getClass0()
{
    return class_();
}

