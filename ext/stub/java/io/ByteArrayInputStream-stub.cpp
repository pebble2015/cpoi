// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/io/ByteArrayInputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::io::ByteArrayInputStream::ByteArrayInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::io::ByteArrayInputStream::ByteArrayInputStream(::int8_tArray* buf)
    : ByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf);
}

java::io::ByteArrayInputStream::ByteArrayInputStream(::int8_tArray* buf, int32_t offset, int32_t length)
    : ByteArrayInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(buf, offset, length);
}


void ::java::io::ByteArrayInputStream::ctor(::int8_tArray* buf)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ByteArrayInputStream::ctor(::int8_tArray* buf)");
}

void ::java::io::ByteArrayInputStream::ctor(::int8_tArray* buf, int32_t offset, int32_t length)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::io::ByteArrayInputStream::ctor(::int8_tArray* buf, int32_t offset, int32_t length)");
}

int32_t java::io::ByteArrayInputStream::available()
{ /* stub */
    unimplemented_(u"int32_t java::io::ByteArrayInputStream::available()");
    return 0;
}

void java::io::ByteArrayInputStream::close()
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayInputStream::close()");
}

void java::io::ByteArrayInputStream::mark(int32_t readAheadLimit)
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayInputStream::mark(int32_t readAheadLimit)");
}

bool java::io::ByteArrayInputStream::markSupported()
{ /* stub */
    unimplemented_(u"bool java::io::ByteArrayInputStream::markSupported()");
    return 0;
}

int32_t java::io::ByteArrayInputStream::read()
{ /* stub */
    unimplemented_(u"int32_t java::io::ByteArrayInputStream::read()");
    return 0;
}

int32_t java::io::ByteArrayInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::io::ByteArrayInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

void java::io::ByteArrayInputStream::reset()
{ /* stub */
    unimplemented_(u"void java::io::ByteArrayInputStream::reset()");
}

int64_t java::io::ByteArrayInputStream::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::io::ByteArrayInputStream::skip(int64_t n)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::io::ByteArrayInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.io.ByteArrayInputStream", 28);
    return c;
}

int32_t java::io::ByteArrayInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* java::io::ByteArrayInputStream::getClass0()
{
    return class_();
}

