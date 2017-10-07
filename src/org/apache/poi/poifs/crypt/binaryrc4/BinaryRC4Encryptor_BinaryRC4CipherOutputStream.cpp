// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor_BinaryRC4CipherOutputStream.hpp>

#include <javax/crypto/Cipher.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.hpp>

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor *BinaryRC4Encryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , BinaryRC4Encryptor_this(BinaryRC4Encryptor_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor *BinaryRC4Encryptor_this, ::java::io::OutputStream* stream)  /* throws(IOException, GeneralSecurityException) */
    : BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor *BinaryRC4Encryptor_this, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir)  /* throws(IOException, GeneralSecurityException) */
    : BinaryRC4Encryptor_BinaryRC4CipherOutputStream(BinaryRC4Encryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::ctor(::java::io::OutputStream* stream) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(stream, BinaryRC4Encryptor_this->chunkSize);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(dir, BinaryRC4Encryptor_this->chunkSize);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, bool lastChunk) /* throws(GeneralSecurityException) */
{
    return BinaryRC4Decryptor::initCipherForBlock(cipher, block, BinaryRC4Encryptor_this->getEncryptionInfo(), BinaryRC4Encryptor_this->getSecretKey(), ::javax::crypto::Cipher::ENCRYPT_MODE);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::calculateChecksum(::java::io::File* file, int32_t i)
{
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */
{
    BinaryRC4Encryptor_this->createEncryptionInfoEntry(dir);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::flush() /* throws(IOException) */
{
    writeChunk(false);
    super::flush();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4Encryptor.BinaryRC4CipherOutputStream", 83);
    return c;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::initCipherForBlock(int32_t block, bool lastChunk)
{
    return super::initCipherForBlock(block, lastChunk);
}

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream::getClass0()
{
    return class_();
}

