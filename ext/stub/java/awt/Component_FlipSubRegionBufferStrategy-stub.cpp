// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_FlipSubRegionBufferStrategy.hpp>

#include <java/awt/Component.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_FlipSubRegionBufferStrategy::Component_FlipSubRegionBufferStrategy(Component *Component_this, const ::default_init_tag&)
    : super(Component_this, *static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Component_FlipSubRegionBufferStrategy::Component_FlipSubRegionBufferStrategy(Component *Component_this, int32_t numBuffers, BufferCapabilities* caps)
    : Component_FlipSubRegionBufferStrategy(Component_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(numBuffers, caps);
}


void ::java::awt::Component_FlipSubRegionBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Component_FlipSubRegionBufferStrategy::ctor(int32_t numBuffers, BufferCapabilities* caps)");
}

void java::awt::Component_FlipSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{ /* stub */
    unimplemented_(u"void java::awt::Component_FlipSubRegionBufferStrategy::show(int32_t x1, int32_t y1, int32_t x2, int32_t y2)");
}

bool java::awt::Component_FlipSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{ /* stub */
    unimplemented_(u"bool java::awt::Component_FlipSubRegionBufferStrategy::showIfNotLost(int32_t x1, int32_t y1, int32_t x2, int32_t y2)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_FlipSubRegionBufferStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.FlipSubRegionBufferStrategy", 46);
    return c;
}

void java::awt::Component_FlipSubRegionBufferStrategy::show()
{
    super::show();
}

java::lang::Class* java::awt::Component_FlipSubRegionBufferStrategy::getClass0()
{
    return class_();
}

