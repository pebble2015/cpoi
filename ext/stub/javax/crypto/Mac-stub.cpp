// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/jce.jar
#include <javax/crypto/Mac.hpp>

extern void unimplemented_(const char16_t* name);
javax::crypto::Mac::Mac(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::crypto::Mac::Mac(MacSpi* arg0, ::java::security::Provider* arg1, ::java::lang::String* arg2)
    : Mac(*static_cast< ::default_init_tag* >(0))
{
    ctor(arg0, arg1, arg2);
}

sun::security::util::Debug*& javax::crypto::Mac::debug()
{
    clinit();
    return debug_;
}
sun::security::util::Debug* javax::crypto::Mac::debug_;
sun::security::util::Debug*& javax::crypto::Mac::pdebug()
{
    clinit();
    return pdebug_;
}
sun::security::util::Debug* javax::crypto::Mac::pdebug_;
bool& javax::crypto::Mac::skipDebug()
{
    clinit();
    return skipDebug_;
}
bool javax::crypto::Mac::skipDebug_;
int32_t& javax::crypto::Mac::warnCount()
{
    clinit();
    return warnCount_;
}
int32_t javax::crypto::Mac::warnCount_;

void ::javax::crypto::Mac::ctor(MacSpi* arg0, ::java::security::Provider* arg1, ::java::lang::String* arg2)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::crypto::Mac::ctor(MacSpi* arg0, ::java::security::Provider* arg1, ::java::lang::String* arg2)");
}

/* private: void ::javax::crypto::Mac::ctor(::java::security::Provider_Service* arg0, ::java::util::Iterator* arg1, ::java::lang::String* arg2) */
void javax::crypto::Mac::chooseFirstProvider()
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::chooseFirstProvider()");
}

/* private: void javax::crypto::Mac::chooseProvider(::java::security::Key* arg0, ::java::security::spec::AlgorithmParameterSpec* arg1) */
java::lang::Object* javax::crypto::Mac::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* javax::crypto::Mac::clone()");
    return 0;
}

int8_tArray* javax::crypto::Mac::doFinal()
{ /* stub */
    unimplemented_(u"int8_tArray* javax::crypto::Mac::doFinal()");
    return 0;
}

int8_tArray* javax::crypto::Mac::doFinal(::int8_tArray* arg0)
{ /* stub */
    unimplemented_(u"int8_tArray* javax::crypto::Mac::doFinal(::int8_tArray* arg0)");
    return 0;
}

void javax::crypto::Mac::doFinal(::int8_tArray* arg0, int32_t arg1)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::doFinal(::int8_tArray* arg0, int32_t arg1)");
}

java::lang::String* javax::crypto::Mac::getAlgorithm()
{ /* stub */
return algorithm ; /* getter */
}

javax::crypto::Mac* javax::crypto::Mac::getInstance(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"javax::crypto::Mac* javax::crypto::Mac::getInstance(::java::lang::String* arg0)");
    return 0;
}

javax::crypto::Mac* javax::crypto::Mac::getInstance(::java::lang::String* arg0, ::java::lang::String* arg1)
{ /* stub */
    clinit();
    unimplemented_(u"javax::crypto::Mac* javax::crypto::Mac::getInstance(::java::lang::String* arg0, ::java::lang::String* arg1)");
    return 0;
}

javax::crypto::Mac* javax::crypto::Mac::getInstance(::java::lang::String* arg0, ::java::security::Provider* arg1)
{ /* stub */
    clinit();
    unimplemented_(u"javax::crypto::Mac* javax::crypto::Mac::getInstance(::java::lang::String* arg0, ::java::security::Provider* arg1)");
    return 0;
}

int32_t javax::crypto::Mac::getMacLength()
{ /* stub */
    unimplemented_(u"int32_t javax::crypto::Mac::getMacLength()");
    return 0;
}

java::security::Provider* javax::crypto::Mac::getProvider()
{ /* stub */
return provider ; /* getter */
}

void javax::crypto::Mac::init_(::java::security::Key* arg0)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::init_(::java::security::Key* arg0)");
}

void javax::crypto::Mac::init_(::java::security::Key* arg0, ::java::security::spec::AlgorithmParameterSpec* arg1)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::init_(::java::security::Key* arg0, ::java::security::spec::AlgorithmParameterSpec* arg1)");
}

void javax::crypto::Mac::reset()
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::reset()");
}

void javax::crypto::Mac::update(int8_t arg0)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::update(int8_t arg0)");
}

void javax::crypto::Mac::update(::int8_tArray* arg0)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::update(::int8_tArray* arg0)");
}

void javax::crypto::Mac::update(::java::nio::ByteBuffer* arg0)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::update(::java::nio::ByteBuffer* arg0)");
}

void javax::crypto::Mac::update(::int8_tArray* arg0, int32_t arg1, int32_t arg2)
{ /* stub */
    unimplemented_(u"void javax::crypto::Mac::update(::int8_tArray* arg0, int32_t arg1, int32_t arg2)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::crypto::Mac::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.crypto.Mac", 16);
    return c;
}

java::lang::Class* javax::crypto::Mac::getClass0()
{
    return class_();
}

