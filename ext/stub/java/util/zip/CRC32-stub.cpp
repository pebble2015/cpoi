// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/zip/CRC32.hpp>

extern void unimplemented_(const char16_t* name);
java::util::zip::CRC32::CRC32(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::zip::CRC32::CRC32()
    : CRC32(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool& java::util::zip::CRC32::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::util::zip::CRC32::$assertionsDisabled_;

void ::java::util::zip::CRC32::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::zip::CRC32::ctor()");
}

int64_t java::util::zip::CRC32::getValue()
{ /* stub */
    unimplemented_(u"int64_t java::util::zip::CRC32::getValue()");
    return 0;
}

void java::util::zip::CRC32::reset()
{ /* stub */
    unimplemented_(u"void java::util::zip::CRC32::reset()");
}

void java::util::zip::CRC32::update(int32_t b)
{ /* stub */
    unimplemented_(u"void java::util::zip::CRC32::update(int32_t b)");
}

void java::util::zip::CRC32::update(::int8_tArray* b)
{ /* stub */
    unimplemented_(u"void java::util::zip::CRC32::update(::int8_tArray* b)");
}

void java::util::zip::CRC32::update(::java::nio::ByteBuffer* buffer)
{ /* stub */
    unimplemented_(u"void java::util::zip::CRC32::update(::java::nio::ByteBuffer* buffer)");
}

void java::util::zip::CRC32::update(::int8_tArray* b, int32_t off, int32_t len)
{ /* stub */
    unimplemented_(u"void java::util::zip::CRC32::update(::int8_tArray* b, int32_t off, int32_t len)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::zip::CRC32::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.zip.CRC32", 19);
    return c;
}

java::lang::Class* java::util::zip::CRC32::getClass0()
{
    return class_();
}

