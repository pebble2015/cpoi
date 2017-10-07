// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/channels/Channels_ReadableByteChannelImpl.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::channels::Channels_ReadableByteChannelImpl::Channels_ReadableByteChannelImpl(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::Channels_ReadableByteChannelImpl::Channels_ReadableByteChannelImpl(::java::io::InputStream* in)
    : Channels_ReadableByteChannelImpl(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t java::nio::channels::Channels_ReadableByteChannelImpl::TRANSFER_SIZE;

void ::java::nio::channels::Channels_ReadableByteChannelImpl::ctor(::java::io::InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::channels::Channels_ReadableByteChannelImpl::ctor(::java::io::InputStream* in)");
}

void java::nio::channels::Channels_ReadableByteChannelImpl::implCloseChannel()
{ /* stub */
    unimplemented_(u"void java::nio::channels::Channels_ReadableByteChannelImpl::implCloseChannel()");
}

int32_t java::nio::channels::Channels_ReadableByteChannelImpl::read(::java::nio::ByteBuffer* dst)
{ /* stub */
    unimplemented_(u"int32_t java::nio::channels::Channels_ReadableByteChannelImpl::read(::java::nio::ByteBuffer* dst)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels_ReadableByteChannelImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels.ReadableByteChannelImpl", 50);
    return c;
}

void java::nio::channels::Channels_ReadableByteChannelImpl::close()
{
    AbstractInterruptibleChannel::close();
}

bool java::nio::channels::Channels_ReadableByteChannelImpl::isOpen()
{
    return AbstractInterruptibleChannel::isOpen();
}

java::lang::Class* java::nio::channels::Channels_ReadableByteChannelImpl::getClass0()
{
    return class_();
}

