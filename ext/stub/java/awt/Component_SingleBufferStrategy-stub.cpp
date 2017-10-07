// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_SingleBufferStrategy.hpp>

#include <java/awt/Component.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_SingleBufferStrategy::Component_SingleBufferStrategy(Component *Component_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Component_this(Component_this)
{
    clinit();
}

java::awt::Component_SingleBufferStrategy::Component_SingleBufferStrategy(Component *Component_this, BufferCapabilities* caps)
    : Component_SingleBufferStrategy(Component_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(caps);
}


void ::java::awt::Component_SingleBufferStrategy::ctor(BufferCapabilities* caps)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Component_SingleBufferStrategy::ctor(BufferCapabilities* caps)");
}

bool java::awt::Component_SingleBufferStrategy::contentsLost()
{ /* stub */
    unimplemented_(u"bool java::awt::Component_SingleBufferStrategy::contentsLost()");
    return 0;
}

bool java::awt::Component_SingleBufferStrategy::contentsRestored()
{ /* stub */
    unimplemented_(u"bool java::awt::Component_SingleBufferStrategy::contentsRestored()");
    return 0;
}

java::awt::BufferCapabilities* java::awt::Component_SingleBufferStrategy::getCapabilities()
{ /* stub */
    unimplemented_(u"java::awt::BufferCapabilities* java::awt::Component_SingleBufferStrategy::getCapabilities()");
    return 0;
}

java::awt::Graphics* java::awt::Component_SingleBufferStrategy::getDrawGraphics()
{ /* stub */
    unimplemented_(u"java::awt::Graphics* java::awt::Component_SingleBufferStrategy::getDrawGraphics()");
    return 0;
}

void java::awt::Component_SingleBufferStrategy::show()
{ /* stub */
    unimplemented_(u"void java::awt::Component_SingleBufferStrategy::show()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_SingleBufferStrategy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.SingleBufferStrategy", 39);
    return c;
}

java::lang::Class* java::awt::Component_SingleBufferStrategy::getClass0()
{
    return class_();
}

