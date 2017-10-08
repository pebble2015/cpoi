// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionInfoBuilder.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionInfoBuilder.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::BinaryRC4EncryptionInfoBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::BinaryRC4EncryptionInfoBuilder() 
    : BinaryRC4EncryptionInfoBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::ctor()
{
    super::ctor();
}

void poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::util::LittleEndianInput* dis) /* throws(IOException) */
{
    auto vMajor = npc(info)->getVersionMajor();
    auto vMinor = npc(info)->getVersionMinor();
    /* assert((vMajor == 1 && vMinor == 1)) */ ;
    npc(info)->setHeader(new BinaryRC4EncryptionHeader());
    npc(info)->setVerifier(new BinaryRC4EncryptionVerifier(dis));
    ::poi::poifs::crypt::Decryptor* dec = new BinaryRC4Decryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    ::poi::poifs::crypt::Encryptor* enc = new BinaryRC4Encryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

void poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    npc(info)->setHeader(new BinaryRC4EncryptionHeader());
    npc(info)->setVerifier(new BinaryRC4EncryptionVerifier());
    ::poi::poifs::crypt::Decryptor* dec = new BinaryRC4Decryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    ::poi::poifs::crypt::Encryptor* enc = new BinaryRC4Encryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4EncryptionInfoBuilder", 67);
    return c;
}

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionInfoBuilder::getClass0()
{
    return class_();
}

