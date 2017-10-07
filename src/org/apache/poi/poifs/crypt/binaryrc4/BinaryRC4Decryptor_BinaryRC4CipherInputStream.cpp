// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor_BinaryRC4CipherInputStream.hpp>

#include <javax/crypto/Cipher.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor *BinaryRC4Decryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , BinaryRC4Decryptor_this(BinaryRC4Decryptor_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor *BinaryRC4Decryptor_this, ::org::apache::poi::poifs::filesystem::DocumentInputStream* stream, int64_t size)  /* throws(GeneralSecurityException) */
    : BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream,size);
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor *BinaryRC4Decryptor_this, ::java::io::InputStream* stream, int32_t size, int32_t initialPos)  /* throws(GeneralSecurityException) */
    : BinaryRC4Decryptor_BinaryRC4CipherInputStream(BinaryRC4Decryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream,size,initialPos);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */
{
    return BinaryRC4Decryptor_this->initCipherForBlock(existing, block);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::ctor(::org::apache::poi::poifs::filesystem::DocumentInputStream* stream, int64_t size) /* throws(GeneralSecurityException) */
{
    super::ctor(stream, size, BinaryRC4Decryptor_this->chunkSize);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::ctor(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(GeneralSecurityException) */
{
    super::ctor(stream, size, BinaryRC4Decryptor_this->chunkSize, initialPos);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4Decryptor.BinaryRC4CipherInputStream", 82);
    return c;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::initCipherForBlock(int32_t block)
{
    return super::initCipherForBlock(block);
}

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor_BinaryRC4CipherInputStream::getClass0()
{
    return class_();
}

