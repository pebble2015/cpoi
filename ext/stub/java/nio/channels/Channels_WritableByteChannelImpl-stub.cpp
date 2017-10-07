// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/channels/Channels_WritableByteChannelImpl.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::channels::Channels_WritableByteChannelImpl::Channels_WritableByteChannelImpl(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels_WritableByteChannelImpl::Channels_WritableByteChannelImpl(::java::io::OutputStream* out)
    : Channels_WritableByteChannelImpl(*static_cast< ::default_init_tag* >(0))
{
    ctor(out);
}

constexpr int32_t java::nio::channels::Channels_WritableByteChannelImpl::TRANSFER_SIZE;

void ::java::nio::channels::Channels_WritableByteChannelImpl::ctor(::java::io::OutputStream* out)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::channels::Channels_WritableByteChannelImpl::ctor(::java::io::OutputStream* out)");
}

void java::nio::channels::Channels_WritableByteChannelImpl::implCloseChannel()
{ /* stub */
    unimplemented_(u"void java::nio::channels::Channels_WritableByteChannelImpl::implCloseChannel()");
}

int32_t java::nio::channels::Channels_WritableByteChannelImpl::write(::java::nio::ByteBuffer* src)
{ /* stub */
    unimplemented_(u"int32_t java::nio::channels::Channels_WritableByteChannelImpl::write(::java::nio::ByteBuffer* src)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels_WritableByteChannelImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels.WritableByteChannelImpl", 50);
    return c;
}

void java::nio::channels::Channels_WritableByteChannelImpl::close()
{
    AbstractInterruptibleChannel::close();
}

bool java::nio::channels::Channels_WritableByteChannelImpl::isOpen()
{
    return AbstractInterruptibleChannel::isOpen();
}

java::lang::Class* java::nio::channels::Channels_WritableByteChannelImpl::getClass0()
{
    return class_();
}

