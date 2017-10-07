// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/stream/MemoryCacheImageInputStream.hpp>

extern void unimplemented_(const char16_t* name);
javax::imageio::stream::MemoryCacheImageInputStream::MemoryCacheImageInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::stream::MemoryCacheImageInputStream::MemoryCacheImageInputStream(::java::io::InputStream* stream)
    : MemoryCacheImageInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}


void ::javax::imageio::stream::MemoryCacheImageInputStream::ctor(::java::io::InputStream* stream)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::imageio::stream::MemoryCacheImageInputStream::ctor(::java::io::InputStream* stream)");
}

void javax::imageio::stream::MemoryCacheImageInputStream::close()
{ /* stub */
    unimplemented_(u"void javax::imageio::stream::MemoryCacheImageInputStream::close()");
}

void javax::imageio::stream::MemoryCacheImageInputStream::finalize()
{ /* stub */
    unimplemented_(u"void javax::imageio::stream::MemoryCacheImageInputStream::finalize()");
}

void javax::imageio::stream::MemoryCacheImageInputStream::flushBefore(int64_t pos)
{ /* stub */
    unimplemented_(u"void javax::imageio::stream::MemoryCacheImageInputStream::flushBefore(int64_t pos)");
}

bool javax::imageio::stream::MemoryCacheImageInputStream::isCached()
{ /* stub */
    unimplemented_(u"bool javax::imageio::stream::MemoryCacheImageInputStream::isCached()");
    return 0;
}

bool javax::imageio::stream::MemoryCacheImageInputStream::isCachedFile()
{ /* stub */
    unimplemented_(u"bool javax::imageio::stream::MemoryCacheImageInputStream::isCachedFile()");
    return 0;
}

bool javax::imageio::stream::MemoryCacheImageInputStream::isCachedMemory()
{ /* stub */
    unimplemented_(u"bool javax::imageio::stream::MemoryCacheImageInputStream::isCachedMemory()");
    return 0;
}

int32_t javax::imageio::stream::MemoryCacheImageInputStream::read()
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::stream::MemoryCacheImageInputStream::read()");
    return 0;
}

int32_t javax::imageio::stream::MemoryCacheImageInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t javax::imageio::stream::MemoryCacheImageInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::stream::MemoryCacheImageInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.stream.MemoryCacheImageInputStream", 48);
    return c;
}

int32_t javax::imageio::stream::MemoryCacheImageInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* javax::imageio::stream::MemoryCacheImageInputStream::getClass0()
{
    return class_();
}

