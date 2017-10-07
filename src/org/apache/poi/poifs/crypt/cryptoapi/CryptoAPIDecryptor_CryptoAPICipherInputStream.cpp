// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor_CryptoAPICipherInputStream.hpp>

#include <javax/crypto/Cipher.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::CryptoAPIDecryptor_CryptoAPICipherInputStream(CryptoAPIDecryptor *CryptoAPIDecryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , CryptoAPIDecryptor_this(CryptoAPIDecryptor_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::CryptoAPIDecryptor_CryptoAPICipherInputStream(CryptoAPIDecryptor *CryptoAPIDecryptor_this, ::java::io::InputStream* stream, int64_t size, int32_t initialPos)  /* throws(GeneralSecurityException) */
    : CryptoAPIDecryptor_CryptoAPICipherInputStream(CryptoAPIDecryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream,size,initialPos);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */
{
    return CryptoAPIDecryptor_this->initCipherForBlock(existing, block);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::ctor(::java::io::InputStream* stream, int64_t size, int32_t initialPos) /* throws(GeneralSecurityException) */
{
    super::ctor(stream, size, CryptoAPIDecryptor_this->chunkSize, initialPos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIDecryptor.CryptoAPICipherInputStream", 82);
    return c;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::initCipherForBlock(int32_t block)
{
    return super::initCipherForBlock(block);
}

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_CryptoAPICipherInputStream::getClass0()
{
    return class_();
}

