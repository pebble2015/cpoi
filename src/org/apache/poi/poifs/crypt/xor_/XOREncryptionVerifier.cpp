// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptionVerifier.java
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionVerifier.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::XOREncryptionVerifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::XOREncryptionVerifier() 
    : XOREncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::XOREncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is) 
    : XOREncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::ctor()
{
    super::ctor();
    setEncryptedKey(new ::int8_tArray(int32_t(2)));
    setEncryptedVerifier(new ::int8_tArray(int32_t(2)));
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::ctor(::org::apache::poi::util::LittleEndianInput* is)
{
    super::ctor();
    auto key = new ::int8_tArray(int32_t(2));
    npc(is)->readFully(key);
    setEncryptedKey(key);
    auto verifier = new ::int8_tArray(int32_t(2));
    npc(is)->readFully(verifier);
    setEncryptedVerifier(verifier);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    npc(bos)->write(getEncryptedKey());
    npc(bos)->write(getEncryptedVerifier());
}

org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier* org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< XOREncryptionVerifier* >(super::clone());
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::setEncryptedVerifier(::int8_tArray* encryptedVerifier)
{
    super::setEncryptedVerifier(encryptedVerifier);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::setEncryptedKey(::int8_tArray* encryptedKey)
{
    super::setEncryptedKey(encryptedKey);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XOREncryptionVerifier", 52);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XOREncryptionVerifier::getClass0()
{
    return class_();
}

