// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/zip/ZipInputStream.hpp>

extern void unimplemented_(const char16_t* name);
java::util::zip::ZipInputStream::ZipInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipInputStream::ZipInputStream(::java::io::InputStream* in)
    : ZipInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

java::util::zip::ZipInputStream::ZipInputStream(::java::io::InputStream* in, ::java::nio::charset::Charset* charset)
    : ZipInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(in, charset);
}

constexpr int32_t java::util::zip::ZipInputStream::DEFLATED;
constexpr int32_t java::util::zip::ZipInputStream::STORED;

void ::java::util::zip::ZipInputStream::ctor(::java::io::InputStream* in)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::ZipInputStream::ctor(::java::io::InputStream* in)");
}

void ::java::util::zip::ZipInputStream::ctor(::java::io::InputStream* in, ::java::nio::charset::Charset* charset)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::ZipInputStream::ctor(::java::io::InputStream* in, ::java::nio::charset::Charset* charset)");
}

int32_t java::util::zip::ZipInputStream::available()
{ /* stub */
    unimplemented_(u"int32_t java::util::zip::ZipInputStream::available()");
    return 0;
}

void java::util::zip::ZipInputStream::close()
{ /* stub */
    unimplemented_(u"void java::util::zip::ZipInputStream::close()");
}

void java::util::zip::ZipInputStream::closeEntry()
{ /* stub */
    unimplemented_(u"void java::util::zip::ZipInputStream::closeEntry()");
}

java::util::zip::ZipEntry* java::util::zip::ZipInputStream::createZipEntry(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::util::zip::ZipEntry* java::util::zip::ZipInputStream::createZipEntry(::java::lang::String* name)");
    return 0;
}

/* private: void java::util::zip::ZipInputStream::ensureOpen() */
java::util::zip::ZipEntry* java::util::zip::ZipInputStream::getNextEntry()
{ /* stub */
    unimplemented_(u"java::util::zip::ZipEntry* java::util::zip::ZipInputStream::getNextEntry()");
    return 0;
}

int32_t java::util::zip::ZipInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::util::zip::ZipInputStream::read(::int8_tArray* b, int32_t off, int32_t len)");
    return 0;
}

/* private: void java::util::zip::ZipInputStream::readEnd(ZipEntry* e) */
/* private: void java::util::zip::ZipInputStream::readFully(::int8_tArray* b, int32_t off, int32_t len) */
/* private: java::util::zip::ZipEntry* java::util::zip::ZipInputStream::readLOC() */
int64_t java::util::zip::ZipInputStream::skip(int64_t n)
{ /* stub */
    unimplemented_(u"int64_t java::util::zip::ZipInputStream::skip(int64_t n)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipInputStream", 28);
    return c;
}

int32_t java::util::zip::ZipInputStream::read()
{
    return super::read();
}

int32_t java::util::zip::ZipInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* java::util::zip::ZipInputStream::getClass0()
{
    return class_();
}

