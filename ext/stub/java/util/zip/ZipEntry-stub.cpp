// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/zip/ZipEntry.hpp>

extern void unimplemented_(const char16_t* name);
java::util::zip::ZipEntry::ZipEntry(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::ZipEntry::ZipEntry()
    : ZipEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::zip::ZipEntry::ZipEntry(::java::lang::String* name)
    : ZipEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(name);
}

java::util::zip::ZipEntry::ZipEntry(ZipEntry* e)
    : ZipEntry(*static_cast< ::default_init_tag* >(0))
{
    ctor(e);
}

constexpr int32_t java::util::zip::ZipEntry::DEFLATED;
constexpr int64_t java::util::zip::ZipEntry::DOSTIME_BEFORE_1980;
constexpr int32_t java::util::zip::ZipEntry::STORED;
constexpr int64_t java::util::zip::ZipEntry::UPPER_DOSTIME_BOUND;

void ::java::util::zip::ZipEntry::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::ZipEntry::ctor()");
}

void ::java::util::zip::ZipEntry::ctor(::java::lang::String* name)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::ZipEntry::ctor(::java::lang::String* name)");
}

void ::java::util::zip::ZipEntry::ctor(ZipEntry* e)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::ZipEntry::ctor(ZipEntry* e)");
}

java::lang::Object* java::util::zip::ZipEntry::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::zip::ZipEntry::clone()");
    return 0;
}

java::lang::String* java::util::zip::ZipEntry::getComment()
{ /* stub */
return comment ; /* getter */
}

int64_t java::util::zip::ZipEntry::getCompressedSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::zip::ZipEntry::getCompressedSize()");
    return 0;
}

int64_t java::util::zip::ZipEntry::getCrc()
{ /* stub */
return crc ; /* getter */
}

java::nio::file::attribute::FileTime* java::util::zip::ZipEntry::getCreationTime()
{ /* stub */
    unimplemented_(u"java::nio::file::attribute::FileTime* java::util::zip::ZipEntry::getCreationTime()");
    return 0;
}

int8_tArray* java::util::zip::ZipEntry::getExtra()
{ /* stub */
return extra ; /* getter */
}

java::nio::file::attribute::FileTime* java::util::zip::ZipEntry::getLastAccessTime()
{ /* stub */
    unimplemented_(u"java::nio::file::attribute::FileTime* java::util::zip::ZipEntry::getLastAccessTime()");
    return 0;
}

java::nio::file::attribute::FileTime* java::util::zip::ZipEntry::getLastModifiedTime()
{ /* stub */
    unimplemented_(u"java::nio::file::attribute::FileTime* java::util::zip::ZipEntry::getLastModifiedTime()");
    return 0;
}

int32_t java::util::zip::ZipEntry::getMethod()
{ /* stub */
return method ; /* getter */
}

java::lang::String* java::util::zip::ZipEntry::getName()
{ /* stub */
return name ; /* getter */
}

int64_t java::util::zip::ZipEntry::getSize()
{ /* stub */
return size ; /* getter */
}

int64_t java::util::zip::ZipEntry::getTime()
{ /* stub */
    unimplemented_(u"int64_t java::util::zip::ZipEntry::getTime()");
    return 0;
}

int32_t java::util::zip::ZipEntry::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::zip::ZipEntry::hashCode()");
    return 0;
}

bool java::util::zip::ZipEntry::isDirectory()
{ /* stub */
    unimplemented_(u"bool java::util::zip::ZipEntry::isDirectory()");
    return 0;
}

void java::util::zip::ZipEntry::setComment(::java::lang::String* comment)
{ /* stub */
    this->comment = comment; /* setter */
}

void java::util::zip::ZipEntry::setCompressedSize(int64_t csize)
{ /* stub */
    unimplemented_(u"void java::util::zip::ZipEntry::setCompressedSize(int64_t csize)");
}

void java::util::zip::ZipEntry::setCrc(int64_t crc)
{ /* stub */
    this->crc = crc; /* setter */
}

java::util::zip::ZipEntry* java::util::zip::ZipEntry::setCreationTime(::java::nio::file::attribute::FileTime* time)
{ /* stub */
    unimplemented_(u"java::util::zip::ZipEntry* java::util::zip::ZipEntry::setCreationTime(::java::nio::file::attribute::FileTime* time)");
    return 0;
}

void java::util::zip::ZipEntry::setExtra(::int8_tArray* extra)
{ /* stub */
    this->extra = extra; /* setter */
}

void java::util::zip::ZipEntry::setExtra0(::int8_tArray* extra, bool doZIP64)
{ /* stub */
    unimplemented_(u"void java::util::zip::ZipEntry::setExtra0(::int8_tArray* extra, bool doZIP64)");
}

java::util::zip::ZipEntry* java::util::zip::ZipEntry::setLastAccessTime(::java::nio::file::attribute::FileTime* time)
{ /* stub */
    unimplemented_(u"java::util::zip::ZipEntry* java::util::zip::ZipEntry::setLastAccessTime(::java::nio::file::attribute::FileTime* time)");
    return 0;
}

java::util::zip::ZipEntry* java::util::zip::ZipEntry::setLastModifiedTime(::java::nio::file::attribute::FileTime* time)
{ /* stub */
    unimplemented_(u"java::util::zip::ZipEntry* java::util::zip::ZipEntry::setLastModifiedTime(::java::nio::file::attribute::FileTime* time)");
    return 0;
}

void java::util::zip::ZipEntry::setMethod(int32_t method)
{ /* stub */
    this->method = method; /* setter */
}

void java::util::zip::ZipEntry::setSize(int64_t size)
{ /* stub */
    this->size = size; /* setter */
}

void java::util::zip::ZipEntry::setTime(int64_t time)
{ /* stub */
    unimplemented_(u"void java::util::zip::ZipEntry::setTime(int64_t time)");
}

java::lang::String* java::util::zip::ZipEntry::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::zip::ZipEntry::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::ZipEntry::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.ZipEntry", 22);
    return c;
}

java::lang::Class* java::util::zip::ZipEntry::getClass0()
{
    return class_();
}

