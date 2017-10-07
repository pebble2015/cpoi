// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/channels/Channels.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::channels::Channels::Channels(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::nio::channels::Channels::ctor() */
/* private: void java::nio::channels::Channels::checkNotNull(::java::lang::Object* o, ::java::lang::String* name) */
java::nio::channels::ReadableByteChannel* java::nio::channels::Channels::newChannel(::java::io::InputStream* in)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::channels::ReadableByteChannel* java::nio::channels::Channels::newChannel(::java::io::InputStream* in)");
    return 0;
}

java::nio::channels::WritableByteChannel* java::nio::channels::Channels::newChannel(::java::io::OutputStream* out)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::channels::WritableByteChannel* java::nio::channels::Channels::newChannel(::java::io::OutputStream* out)");
    return 0;
}

java::io::InputStream* java::nio::channels::Channels::newInputStream(ReadableByteChannel* ch)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::InputStream* java::nio::channels::Channels::newInputStream(ReadableByteChannel* ch)");
    return 0;
}

java::io::InputStream* java::nio::channels::Channels::newInputStream(AsynchronousByteChannel* ch)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::InputStream* java::nio::channels::Channels::newInputStream(AsynchronousByteChannel* ch)");
    return 0;
}

java::io::OutputStream* java::nio::channels::Channels::newOutputStream(WritableByteChannel* ch)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::OutputStream* java::nio::channels::Channels::newOutputStream(WritableByteChannel* ch)");
    return 0;
}

java::io::OutputStream* java::nio::channels::Channels::newOutputStream(AsynchronousByteChannel* ch)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::OutputStream* java::nio::channels::Channels::newOutputStream(AsynchronousByteChannel* ch)");
    return 0;
}

java::io::Reader* java::nio::channels::Channels::newReader(ReadableByteChannel* ch, ::java::lang::String* csName)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::Reader* java::nio::channels::Channels::newReader(ReadableByteChannel* ch, ::java::lang::String* csName)");
    return 0;
}

java::io::Reader* java::nio::channels::Channels::newReader(ReadableByteChannel* ch, ::java::nio::charset::CharsetDecoder* dec, int32_t minBufferCap)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::Reader* java::nio::channels::Channels::newReader(ReadableByteChannel* ch, ::java::nio::charset::CharsetDecoder* dec, int32_t minBufferCap)");
    return 0;
}

java::io::Writer* java::nio::channels::Channels::newWriter(WritableByteChannel* ch, ::java::lang::String* csName)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::Writer* java::nio::channels::Channels::newWriter(WritableByteChannel* ch, ::java::lang::String* csName)");
    return 0;
}

java::io::Writer* java::nio::channels::Channels::newWriter(WritableByteChannel* ch, ::java::nio::charset::CharsetEncoder* enc, int32_t minBufferCap)
{ /* stub */
    clinit();
    unimplemented_(u"java::io::Writer* java::nio::channels::Channels::newWriter(WritableByteChannel* ch, ::java::nio::charset::CharsetEncoder* enc, int32_t minBufferCap)");
    return 0;
}

/* private: void java::nio::channels::Channels::writeFully(WritableByteChannel* ch, ::java::nio::ByteBuffer* bb) */
/* private: void java::nio::channels::Channels::writeFullyImpl(WritableByteChannel* ch, ::java::nio::ByteBuffer* bb) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::Channels::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.Channels", 26);
    return c;
}

java::lang::Class* java::nio::channels::Channels::getClass0()
{
    return class_();
}

