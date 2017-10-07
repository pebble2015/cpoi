// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor_CryptoAPICipherOutputStream.hpp>

#include <java/lang/String.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.hpp>

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::CryptoAPIEncryptor_CryptoAPICipherOutputStream(CryptoAPIEncryptor *CryptoAPIEncryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , CryptoAPIEncryptor_this(CryptoAPIEncryptor_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::CryptoAPIEncryptor_CryptoAPICipherOutputStream(CryptoAPIEncryptor *CryptoAPIEncryptor_this, ::java::io::OutputStream* stream)  /* throws(IOException, GeneralSecurityException) */
    : CryptoAPIEncryptor_CryptoAPICipherOutputStream(CryptoAPIEncryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, bool lastChunk) /* throws(IOException, GeneralSecurityException) */
{
    flush();
    auto ei = CryptoAPIEncryptor_this->getEncryptionInfo();
    auto sk = CryptoAPIEncryptor_this->getSecretKey();
    return CryptoAPIDecryptor::initCipherForBlock(cipher, block, ei, sk, ::javax::crypto::Cipher::ENCRYPT_MODE);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::calculateChecksum(::java::io::File* file, int32_t i)
{
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */
{
    throw new ::org::apache::poi::EncryptedDocumentException(u"createEncryptionInfoEntry not supported"_j);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::ctor(::java::io::OutputStream* stream) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(stream, CryptoAPIEncryptor_this->chunkSize);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::flush() /* throws(IOException) */
{
    writeChunk(false);
    super::flush();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIEncryptor.CryptoAPICipherOutputStream", 83);
    return c;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::initCipherForBlock(int32_t block, bool lastChunk)
{
    return super::initCipherForBlock(block, lastChunk);
}

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream::getClass0()
{
    return class_();
}

