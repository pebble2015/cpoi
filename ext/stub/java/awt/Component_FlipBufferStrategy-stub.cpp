// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_FlipBufferStrategy.hpp>

#include <java/awt/Component.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_FlipBufferStrategy::Component_FlipBufferStrategy(Component *Component_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Component_this(Component_this)
{
    clinit();
}

java::awt::Component_FlipBufferStrategy::Component_FlipBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps)
    : Component_FlipBufferStrategy(Component_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(numBuffers, caps);
}


void ::java::awt::Component_FlipBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Component_FlipBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)");
}

bool java::awt::Component_FlipBufferStrategy::contentsLost()
{ /* stub */
    unimplemented_(u"bool java::awt::Component_FlipBufferStrategy::contentsLost()");
    return 0;
}

bool java::awt::Component_FlipBufferStrategy::contentsRestored()
{ /* stub */
    unimplemented_(u"bool java::awt::Component_FlipBufferStrategy::contentsRestored()");
    return 0;
}

void java::awt::Component_FlipBufferStrategy::createBuffers(int32_t numBuffers, BufferCapabilities* caps)
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::createBuffers(int32_t numBuffers, BufferCapabilities* caps)");
}

void java::awt::Component_FlipBufferStrategy::destroyBuffers()
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::destroyBuffers()");
}

void java::awt::Component_FlipBufferStrategy::dispose()
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::dispose()");
}

void java::awt::Component_FlipBufferStrategy::flip(BufferCapabilities_FlipContents* flipAction)
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::flip(BufferCapabilities_FlipContents* flipAction)");
}

void java::awt::Component_FlipBufferStrategy::flipSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2, BufferCapabilities_FlipContents* flipAction)
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::flipSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2, BufferCapabilities_FlipContents* flipAction)");
}

java::awt::Image* java::awt::Component_FlipBufferStrategy::getBackBuffer()
{ /* stub */
    unimplemented_(u"java::awt::Image* java::awt::Component_FlipBufferStrategy::getBackBuffer()");
    return 0;
}

java::awt::BufferCapabilities* java::awt::Component_FlipBufferStrategy::getCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::BufferCapabilities* java::awt::Component_FlipBufferStrategy::getCapabilities()");
    return 0;
}

java::awt::Graphics* java::awt::Component_FlipBufferStrategy::getDrawGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::Component_FlipBufferStrategy::getDrawGraphics()");
    return 0;
}

void java::awt::Component_FlipBufferStrategy::revalidate()
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::revalidate()");
}

void java::awt::Component_FlipBufferStrategy::revalidate(bool checkSize)
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::revalidate(bool checkSize)");
}

void java::awt::Component_FlipBufferStrategy::show()
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::show()");
}

void java::awt::Component_FlipBufferStrategy::showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipBufferStrategy::showSubRegion(int32_t x1, int32_t y1, int32_t x2, int32_t y2)");
}

/* private: void java::awt::Component_FlipBufferStrategy::updateInternalBuffers() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_FlipBufferStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.FlipBufferStrategy", 37);
    return c;
}

java::lang::Class* java::awt::Component_FlipBufferStrategy::getClass0()
{
    return class_();
}

