// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptionInfoBuilder.java
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionInfoBuilder.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XORDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::XOREncryptionInfoBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::XOREncryptionInfoBuilder() 
    : XOREncryptionInfoBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::ctor()
{
    super::ctor();
}

void poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::util::LittleEndianInput* dis) /* throws(IOException) */
{
    npc(info)->setHeader(new XOREncryptionHeader());
    npc(info)->setVerifier(new XOREncryptionVerifier(dis));
    ::poi::poifs::crypt::Decryptor* dec = new XORDecryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    ::poi::poifs::crypt::Encryptor* enc = new XOREncryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

void poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    npc(info)->setHeader(new XOREncryptionHeader());
    npc(info)->setVerifier(new XOREncryptionVerifier());
    ::poi::poifs::crypt::Decryptor* dec = new XORDecryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    ::poi::poifs::crypt::Encryptor* enc = new XOREncryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XOREncryptionInfoBuilder", 55);
    return c;
}

java::lang::Class* poi::poifs::crypt::xor_::XOREncryptionInfoBuilder::getClass0()
{
    return class_();
}

