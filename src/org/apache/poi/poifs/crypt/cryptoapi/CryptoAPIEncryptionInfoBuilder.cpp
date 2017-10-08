// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionInfoBuilder.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionInfoBuilder.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::CryptoAPIEncryptionInfoBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::CryptoAPIEncryptionInfoBuilder() 
    : CryptoAPIEncryptionInfoBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::ctor()
{
    super::ctor();
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::util::LittleEndianInput* dis) /* throws(IOException) */
{
    npc(dis)->readInt();
    auto header = new CryptoAPIEncryptionHeader(dis);
    npc(info)->setHeader(header);
    npc(info)->setVerifier(new CryptoAPIEncryptionVerifier(dis, header));
    auto dec = new CryptoAPIDecryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    auto enc = new CryptoAPIEncryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    if(cipherAlgorithm == nullptr) {
        cipherAlgorithm = ::poi::poifs::crypt::CipherAlgorithm::rc4;
    }
    if(hashAlgorithm == nullptr) {
        hashAlgorithm = ::poi::poifs::crypt::HashAlgorithm::sha1;
    }
    if(keyBits == -int32_t(1)) {
        keyBits = 40;
    }
    /* assert((cipherAlgorithm == ::poi::poifs::crypt::CipherAlgorithm::rc4 && hashAlgorithm == ::poi::poifs::crypt::HashAlgorithm::sha1)) */ ;
    npc(info)->setHeader(new CryptoAPIEncryptionHeader(cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode));
    npc(info)->setVerifier(new CryptoAPIEncryptionVerifier(cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode));
    auto dec = new CryptoAPIDecryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    auto enc = new CryptoAPIEncryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIEncryptionInfoBuilder", 67);
    return c;
}

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionInfoBuilder::getClass0()
{
    return class_();
}

