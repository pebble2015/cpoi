// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionVerifier.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionVerifier.hpp>

#include <java/lang/ClassCastException.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::CryptoAPIEncryptionVerifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::CryptoAPIEncryptionVerifier(::poi::util::LittleEndianInput* is, CryptoAPIEncryptionHeader* header) 
    : CryptoAPIEncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(is,header);
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::CryptoAPIEncryptionVerifier(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode) 
    : CryptoAPIEncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(cipherAlgorithm,hashAlgorithm,keyBits,blockSize,chainingMode);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::ctor(::poi::util::LittleEndianInput* is, CryptoAPIEncryptionHeader* header)
{
    super::ctor(is, header);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::ctor(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    super::ctor(cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::setSalt(::int8_tArray* salt)
{
    super::setSalt(salt);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::setEncryptedVerifier(::int8_tArray* encryptedVerifier)
{
    super::setEncryptedVerifier(encryptedVerifier);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash)
{
    super::setEncryptedVerifierHash(encryptedVerifierHash);
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< CryptoAPIEncryptionVerifier* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIEncryptionVerifier", 64);
    return c;
}

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionVerifier::getClass0()
{
    return class_();
}

