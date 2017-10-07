// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/io/PushbackInputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::io::PushbackInputStream::PushbackInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::PushbackInputStream::PushbackInputStream(InputStream* in)
    : PushbackInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::io::PushbackInputStream::PushbackInputStream(InputStream* in, int32_t size)
    : PushbackInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, size);
}


void ::java::io::PushbackInputStream::ctor(InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::PushbackInputStream::ctor(InputStream* in)");
}

void ::java::io::PushbackInputStream::ctor(InputStream* in, int32_t size)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::PushbackInputStream::ctor(InputStream* in, int32_t size)");
}

int32_t java::io::PushbackInputStream::available()
{ /* stub */
    unimplemented_(u"int32_t java::io::PushbackInputStream::available()");
    return 0;
}

void java::io::PushbackInputStream::close()
{ /* stub */
    unimplemented_(u"void java::io::PushbackInputStream::close()");
}

/* private: void java::io::PushbackInputStream::ensureOpen() */
void java::io::PushbackInputStream::mark(int32_t readlimit)
{ /* stub */
    unimplemented_(u"void java::io::PushbackInputStream::mark(int32_t readlimit)");
}

bool java::io::PushbackInputStream::markSupported()
{ /* stub */
    unimplemented_(u"bool java::io::PushbackInputStream::markSupported()");
    return 0;
}

int32_t java::io::PushbackInputStream::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::PushbackInputStream::read()");
    return 0;
}

int32_t java::io::PushbackInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::PushbackInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

void java::io::PushbackInputStream::reset()
{ /* stub */
    unimplemented_(u"void java::io::PushbackInputStream::reset()");
}

int64_t java::io::PushbackInputStream::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::io::PushbackInputStream::skip(int64_t n)");
    return 0;
}

void java::io::PushbackInputStream::unread(int32_t b)
{ /* stub */
    unimplemented_(u"void java::io::PushbackInputStream::unread(int32_t b)");
}

void java::io::PushbackInputStream::unread(::int8_tArray* b)
{ /* stub */
    unimplemented_(u"void java::io::PushbackInputStream::unread(::int8_tArray* b)");
}

void java::io::PushbackInputStream::unread(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"void java::io::PushbackInputStream::unread(::int8_tArray* b, int32_t off, int32_t len)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::PushbackInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.PushbackInputStream", 27);
    return c;
}

int32_t java::io::PushbackInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* java::io::PushbackInputStream::getClass0()
{
    return class_();
}

