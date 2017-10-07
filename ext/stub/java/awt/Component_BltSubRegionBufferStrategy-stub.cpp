// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_BltSubRegionBufferStrategy.hpp>

#include <java/awt/Component.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_BltSubRegionBufferStrategy::Component_BltSubRegionBufferStrategy(Component *Component_this, const ::default_init_tag&)
    : super(Component_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Component_BltSubRegionBufferStrategy::Component_BltSubRegionBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps)
    : Component_BltSubRegionBufferStrategy(Component_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(numBuffers, caps);
}


void ::java::awt::Component_BltSubRegionBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Component_BltSubRegionBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)");
}

void java::awt::Component_BltSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{ /* stub */
    unimplemented_(u"void java::awt::Component_BltSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2)");
}

bool java::awt::Component_BltSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{ /* stub */
    unimplemented_(u"bool java::awt::Component_BltSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_BltSubRegionBufferStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.BltSubRegionBufferStrategy", 45);
    return c;
}

void java::awt::Component_BltSubRegionBufferStrategy::show()
{
    super::show();
}

java::lang::Class* java::awt::Component_BltSubRegionBufferStrategy::getClass0()
{
    return class_();
}

