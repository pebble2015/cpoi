// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/MessageDigest.hpp>

extern void unimplemented_(const char16_t* name);
java::security::MessageDigest::MessageDigest(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::MessageDigest::MessageDigest(::java::lang::String* algorithm)
    : MessageDigest(*static_cast< ::default_init_tag* >(0))
{
    ctor(algorithm);
}

constexpr int32_t java::security::MessageDigest::INITIAL;
constexpr int32_t java::security::MessageDigest::IN_PROGRESS;
sun::security::util::Debug*& java::security::MessageDigest::pdebug()
{
    clinit();
    return pdebug_;
}
sun::security::util::Debug* java::security::MessageDigest::pdebug_;
bool& java::security::MessageDigest::skipDebug()
{
    clinit();
    return skipDebug_;
}
bool java::security::MessageDigest::skipDebug_;

void ::java::security::MessageDigest::ctor(::java::lang::String* algorithm)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::MessageDigest::ctor(::java::lang::String* algorithm)");
}

java::lang::Object* java::security::MessageDigest::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::security::MessageDigest::clone()");
    return 0;
}

int8_tArray* java::security::MessageDigest::digest()
{ /* stub */
    unimplemented_(u"int8_tArray* java::security::MessageDigest::digest()");
    return 0;
}

int8_tArray* java::security::MessageDigest::digest(::int8_tArray* input)
{ /* stub */
    unimplemented_(u"int8_tArray* java::security::MessageDigest::digest(::int8_tArray* input)");
    return 0;
}

int32_t java::security::MessageDigest::digest(::int8_tArray* buf, int32_t offset, int32_t len)
{ /* stub */
    unimplemented_(u"int32_t java::security::MessageDigest::digest(::int8_tArray* buf, int32_t offset, int32_t len)");
    return 0;
}

java::lang::String* java::security::MessageDigest::getAlgorithm()
{ /* stub */
return algorithm ; /* getter */
}

int32_t java::security::MessageDigest::getDigestLength()
{ /* stub */
    unimplemented_(u"int32_t java::security::MessageDigest::getDigestLength()");
    return 0;
}

java::security::MessageDigest* java::security::MessageDigest::getInstance(::java::lang::String* algorithm)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::MessageDigest* java::security::MessageDigest::getInstance(::java::lang::String* algorithm)");
    return 0;
}

java::security::MessageDigest* java::security::MessageDigest::getInstance(::java::lang::String* algorithm, ::java::lang::String* provider)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::MessageDigest* java::security::MessageDigest::getInstance(::java::lang::String* algorithm, ::java::lang::String* provider)");
    return 0;
}

java::security::MessageDigest* java::security::MessageDigest::getInstance(::java::lang::String* algorithm, Provider* provider)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::MessageDigest* java::security::MessageDigest::getInstance(::java::lang::String* algorithm, Provider* provider)");
    return 0;
}

java::security::Provider* java::security::MessageDigest::getProvider()
{ /* stub */
return provider ; /* getter */
}

bool java::security::MessageDigest::isEqual(::int8_tArray* digesta, ::int8_tArray* digestb)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::security::MessageDigest::isEqual(::int8_tArray* digesta, ::int8_tArray* digestb)");
    return 0;
}

void java::security::MessageDigest::reset()
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest::reset()");
}

java::lang::String* java::security::MessageDigest::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::security::MessageDigest::toString()");
    return 0;
}

void java::security::MessageDigest::update(int8_t input)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest::update(int8_t input)");
}

void java::security::MessageDigest::update(::int8_tArray* input)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest::update(::int8_tArray* input)");
}

void java::security::MessageDigest::update(::java::nio::ByteBuffer* input)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest::update(::java::nio::ByteBuffer* input)");
}

void java::security::MessageDigest::update(::int8_tArray* input, int32_t offset, int32_t len)
{ /* stub */
    unimplemented_(u"void java::security::MessageDigest::update(::int8_tArray* input, int32_t offset, int32_t len)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::MessageDigest::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.MessageDigest", 27);
    return c;
}

java::lang::Class* java::security::MessageDigest::getClass0()
{
    return class_();
}

