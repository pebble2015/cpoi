// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::channels::spi::AbstractInterruptibleChannel::AbstractInterruptibleChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::spi::AbstractInterruptibleChannel::AbstractInterruptibleChannel()
    : AbstractInterruptibleChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::nio::channels::spi::AbstractInterruptibleChannel::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::channels::spi::AbstractInterruptibleChannel::ctor()");
}

void java::nio::channels::spi::AbstractInterruptibleChannel::begin()
{ /* stub */
    unimplemented_(u"void java::nio::channels::spi::AbstractInterruptibleChannel::begin()");
}

void java::nio::channels::spi::AbstractInterruptibleChannel::blockedOn(::sun::nio::ch::Interruptible* intr)
{ /* stub */
    clinit();
    unimplemented_(u"void java::nio::channels::spi::AbstractInterruptibleChannel::blockedOn(::sun::nio::ch::Interruptible* intr)");
}

void java::nio::channels::spi::AbstractInterruptibleChannel::close()
{ /* stub */
    unimplemented_(u"void java::nio::channels::spi::AbstractInterruptibleChannel::close()");
}

void java::nio::channels::spi::AbstractInterruptibleChannel::end(bool completed)
{ /* stub */
    unimplemented_(u"void java::nio::channels::spi::AbstractInterruptibleChannel::end(bool completed)");
}

bool java::nio::channels::spi::AbstractInterruptibleChannel::isOpen()
{ /* stub */
    unimplemented_(u"bool java::nio::channels::spi::AbstractInterruptibleChannel::isOpen()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::spi::AbstractInterruptibleChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.spi.AbstractInterruptibleChannel", 50);
    return c;
}

java::lang::Class* java::nio::channels::spi::AbstractInterruptibleChannel::getClass0()
{
    return class_();
}

