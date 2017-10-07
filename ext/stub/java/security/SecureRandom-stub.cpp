// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/security/SecureRandom.hpp>

extern void unimplemented_(const char16_t* name);
java::security::SecureRandom::SecureRandom(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::SecureRandom::SecureRandom()
    : SecureRandom(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::security::SecureRandom::SecureRandom(::int8_tArray* seed)
    : SecureRandom(*static_cast< ::default_init_tag* >(0))
{
    ctor(seed);
}

java::security::SecureRandom::SecureRandom(SecureRandomSpi* secureRandomSpi, Provider* provider)
    : SecureRandom(*static_cast< ::default_init_tag* >(0))
{
    ctor(secureRandomSpi, provider);
}

sun::security::util::Debug*& java::security::SecureRandom::pdebug()
{
    clinit();
    return pdebug_;
}
sun::security::util::Debug* java::security::SecureRandom::pdebug_;
std::atomic< java::security::SecureRandom* >& java::security::SecureRandom::seedGenerator()
{
    clinit();
    return seedGenerator_;
}
std::atomic< java::security::SecureRandom* > java::security::SecureRandom::seedGenerator_;
constexpr int64_t java::security::SecureRandom::serialVersionUID;
bool& java::security::SecureRandom::skipDebug()
{
    clinit();
    return skipDebug_;
}
bool java::security::SecureRandom::skipDebug_;

void ::java::security::SecureRandom::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::SecureRandom::ctor()");
}

void ::java::security::SecureRandom::ctor(::int8_tArray* seed)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::SecureRandom::ctor(::int8_tArray* seed)");
}

void ::java::security::SecureRandom::ctor(SecureRandomSpi* secureRandomSpi, Provider* provider)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::security::SecureRandom::ctor(SecureRandomSpi* secureRandomSpi, Provider* provider)");
}

/* private: void ::java::security::SecureRandom::ctor(SecureRandomSpi* secureRandomSpi, Provider* provider, ::java::lang::String* algorithm) */
int8_tArray* java::security::SecureRandom::generateSeed(int32_t numBytes)
{ /* stub */
    unimplemented_(u"int8_tArray* java::security::SecureRandom::generateSeed(int32_t numBytes)");
    return 0;
}

java::lang::String* java::security::SecureRandom::getAlgorithm()
{ /* stub */
return algorithm ; /* getter */
}

/* private: void java::security::SecureRandom::getDefaultPRNG(bool setSeed, ::int8_tArray* seed) */
java::security::SecureRandom* java::security::SecureRandom::getInstance(::java::lang::String* algorithm)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::SecureRandom* java::security::SecureRandom::getInstance(::java::lang::String* algorithm)");
    return 0;
}

java::security::SecureRandom* java::security::SecureRandom::getInstance(::java::lang::String* algorithm, ::java::lang::String* provider)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::SecureRandom* java::security::SecureRandom::getInstance(::java::lang::String* algorithm, ::java::lang::String* provider)");
    return 0;
}

java::security::SecureRandom* java::security::SecureRandom::getInstance(::java::lang::String* algorithm, Provider* provider)
{ /* stub */
    clinit();
    unimplemented_(u"java::security::SecureRandom* java::security::SecureRandom::getInstance(::java::lang::String* algorithm, Provider* provider)");
    return 0;
}

java::security::SecureRandom* java::security::SecureRandom::getInstanceStrong()
{ /* stub */
    clinit();
    unimplemented_(u"java::security::SecureRandom* java::security::SecureRandom::getInstanceStrong()");
    return 0;
}

/* private: java::lang::String* java::security::SecureRandom::getPrngAlgorithm() */
java::security::Provider* java::security::SecureRandom::getProvider()
{ /* stub */
return provider ; /* getter */
}

java::security::SecureRandomSpi* java::security::SecureRandom::getSecureRandomSpi()
{ /* stub */
return secureRandomSpi ; /* getter */
}

int8_tArray* java::security::SecureRandom::getSeed(int32_t numBytes)
{ /* stub */
    clinit();
    unimplemented_(u"int8_tArray* java::security::SecureRandom::getSeed(int32_t numBytes)");
    return 0;
}

/* private: int8_tArray* java::security::SecureRandom::longToByteArray_(int64_t l) */
int32_t java::security::SecureRandom::next(int32_t numBits)
{ /* stub */
    unimplemented_(u"int32_t java::security::SecureRandom::next(int32_t numBits)");
    return 0;
}

void java::security::SecureRandom::nextBytes(::int8_tArray* bytes)
{ /* stub */
    unimplemented_(u"void java::security::SecureRandom::nextBytes(::int8_tArray* bytes)");
}

void java::security::SecureRandom::setSeed(::int8_tArray* seed)
{ /* stub */
    unimplemented_(u"void java::security::SecureRandom::setSeed(::int8_tArray* seed)");
}

void java::security::SecureRandom::setSeed(int64_t seed)
{ /* stub */
    unimplemented_(u"void java::security::SecureRandom::setSeed(int64_t seed)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::security::SecureRandom::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.security.SecureRandom", 26);
    return c;
}

java::lang::Class* java::security::SecureRandom::getClass0()
{
    return class_();
}

