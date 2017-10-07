// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/zip/InflaterInputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::util::zip::InflaterInputStream::InflaterInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::InflaterInputStream::InflaterInputStream(::java::io::InputStream* in)
    : InflaterInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::util::zip::InflaterInputStream::InflaterInputStream(::java::io::InputStream* in, Inflater* inf)
    : InflaterInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, inf);
}

java::util::zip::InflaterInputStream::InflaterInputStream(::java::io::InputStream* in, Inflater* inf, int32_t size)
    : InflaterInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, inf, size);
}


void ::java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in)");
}

void ::java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in, Inflater* inf)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in, Inflater* inf)");
}

void ::java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in, Inflater* inf, int32_t size)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::InflaterInputStream::ctor(::java::io::InputStream* in, Inflater* inf, int32_t size)");
}

int32_t java::util::zip::InflaterInputStream::available()
{ /* stub */
    unimplemented_(u"int32_t java::util::zip::InflaterInputStream::available()");
    return 0;
}

void java::util::zip::InflaterInputStream::close()
{ /* stub */
    unimplemented_(u"void java::util::zip::InflaterInputStream::close()");
}

/* private: void java::util::zip::InflaterInputStream::ensureOpen() */
void java::util::zip::InflaterInputStream::fill()
{ /* stub */
    unimplemented_(u"void java::util::zip::InflaterInputStream::fill()");
}

void java::util::zip::InflaterInputStream::mark(int32_t readlimit)
{ /* stub */
    unimplemented_(u"void java::util::zip::InflaterInputStream::mark(int32_t readlimit)");
}

bool java::util::zip::InflaterInputStream::markSupported()
{ /* stub */
    unimplemented_(u"bool java::util::zip::InflaterInputStream::markSupported()");
    return 0;
}

int32_t java::util::zip::InflaterInputStream::read()
{ /* stub */
    unimplemented_(u"int32_t java::util::zip::InflaterInputStream::read()");
    return 0;
}

int32_t java::util::zip::InflaterInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::util::zip::InflaterInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

void java::util::zip::InflaterInputStream::reset()
{ /* stub */
    unimplemented_(u"void java::util::zip::InflaterInputStream::reset()");
}

int64_t java::util::zip::InflaterInputStream::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::util::zip::InflaterInputStream::skip(int64_t n)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::InflaterInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.InflaterInputStream", 33);
    return c;
}

int32_t java::util::zip::InflaterInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* java::util::zip::InflaterInputStream::getClass0()
{
    return class_();
}

