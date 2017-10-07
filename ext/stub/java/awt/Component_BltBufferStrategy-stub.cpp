// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_BltBufferStrategy.hpp>

#include <java/awt/Component.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_BltBufferStrategy::Component_BltBufferStrategy(Component *Component_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Component_this(Component_this)
{
    clinit();
}

java::awt::Component_BltBufferStrategy::Component_BltBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps)
    : Component_BltBufferStrategy(Component_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(numBuffers, caps);
}


void ::java::awt::Component_BltBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Component_BltBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)");
}

bool java::awt::Component_BltBufferStrategy::contentsLost()
{ /* stub */
    unimplemented_(u"bool java::awt::Component_BltBufferStrategy::contentsLost()");
    return 0;
}

bool java::awt::Component_BltBufferStrategy::contentsRestored()
{ /* stub */
    unimplemented_(u"bool java::awt::Component_BltBufferStrategy::contentsRestored()");
    return 0;
}

void java::awt::Component_BltBufferStrategy::createBackBuffers(int32_t numBuffers)
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltBufferStrategy::createBackBuffers(int32_t numBuffers)");
}

void java::awt::Component_BltBufferStrategy::dispose()
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltBufferStrategy::dispose()");
}

java::awt::Image* java::awt::Component_BltBufferStrategy::getBackBuffer()
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Component_BltBufferStrategy::getBackBuffer()");
    return 0;
}

java::awt::BufferCapabilities* java::awt::Component_BltBufferStrategy::getCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::BufferCapabilities* java::awt::Component_BltBufferStrategy::getCapabilities()");
    return 0;
}

java::awt::Graphics* java::awt::Component_BltBufferStrategy::getDrawGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::Component_BltBufferStrategy::getDrawGraphics()");
    return 0;
}

void java::awt::Component_BltBufferStrategy::revalidate()
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltBufferStrategy::revalidate()");
}

void java::awt::Component_BltBufferStrategy::revalidate(bool checkSize)
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltBufferStrategy::revalidate(bool checkSize)");
}

void java::awt::Component_BltBufferStrategy::show()
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltBufferStrategy::show()");
}

void java::awt::Component_BltBufferStrategy::showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltBufferStrategy::showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_BltBufferStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.BltBufferStrategy", 36);
    return c;
}

java::lang::Class* java::awt::Component_BltBufferStrategy::getClass0()
{
    return class_();
}

