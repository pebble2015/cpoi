// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptor.java
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptor_XORCipherOutputStream.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/BitSet.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XORDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptor.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::XOREncryptor_XORCipherOutputStream(XOREncryptor *XOREncryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , XOREncryptor_this(XOREncryptor_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::XOREncryptor_XORCipherOutputStream(XOREncryptor *XOREncryptor_this, ::java::io::OutputStream* stream, int32_t initialPos)  /* throws(IOException, GeneralSecurityException) */
    : XOREncryptor_XORCipherOutputStream(XOREncryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream,initialPos);
}

org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::XOREncryptor_XORCipherOutputStream(XOREncryptor *XOREncryptor_this, ::org::apache::poi::poifs::filesystem::DirectoryNode* dir)  /* throws(IOException, GeneralSecurityException) */
    : XOREncryptor_XORCipherOutputStream(XOREncryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(dir);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::init()
{
    recordStart = int32_t(0);
    recordEnd = int32_t(0);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::ctor(::java::io::OutputStream* stream, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(stream, -int32_t(1));
    init();
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::ctor(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    super::ctor(dir, -int32_t(1));
    init();
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, bool lastChunk) /* throws(GeneralSecurityException) */
{
    return XORDecryptor::initCipherForBlock(cipher, block, XOREncryptor_this->getEncryptionInfo(), XOREncryptor_this->getSecretKey(), ::javax::crypto::Cipher::ENCRYPT_MODE);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::calculateChecksum(::java::io::File* file, int32_t i)
{
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir, ::java::io::File* tmpFile) /* throws(IOException, GeneralSecurityException) */
{
    XOREncryptor_this->createEncryptionInfoEntry(dir);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::setNextRecordSize(int32_t recordSize, bool isPlain)
{
    if(recordEnd > 0 && !isPlain) {
        invokeCipher(static_cast< int32_t >(getPos()), true);
    }
    recordStart = static_cast< int32_t >(getTotalPos()) + int32_t(4);
    recordEnd = recordStart + recordSize;
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::flush() /* throws(IOException) */
{
    setNextRecordSize(int32_t(0), true);
    super::flush();
}

int32_t org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::invokeCipher(int32_t posInChunk, bool doFinal)
{
    if(posInChunk == 0) {
        return 0;
    }
    auto const start = ::java::lang::Math::max(posInChunk - (recordEnd - recordStart), int32_t(0));
    auto const plainBytes = getPlainByteFlags();
    auto const xorArray_ = npc(npc(npc(XOREncryptor_this->getEncryptionInfo())->getEncryptor())->getSecretKey())->getEncoded();
    auto const chunk = getChunk();
    auto const plain = (npc(plainBytes)->isEmpty()) ? static_cast< ::int8_tArray* >(nullptr) : npc(chunk)->clone();
    auto xorArrayIndex = recordEnd + (start - recordStart);
    for (auto i = start; i < posInChunk; i++) {
        auto value = (*chunk)[i];
        value ^= (*xorArray_)[(xorArrayIndex++) & int32_t(15)];
        value = rotateLeft(value, int32_t(8) - int32_t(3));
        (*chunk)[i] = value;
    }
    for (auto i = npc(plainBytes)->nextSetBit(start); i >= 0 && i < posInChunk; i = npc(plainBytes)->nextSetBit(i + int32_t(1))) {
        (*chunk)[i] = (*plain)[i];
    }
    return posInChunk;
}

int8_t org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::rotateLeft(int8_t bits, int32_t shift)
{
    return static_cast< int8_t >((((bits & int32_t(255)) << shift) | (static_cast<int32_t>(static_cast<uint32_t>((bits & int32_t(255))) >> (int32_t(8) - shift)))));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XOREncryptor.XORCipherOutputStream", 65);
    return c;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::initCipherForBlock(int32_t block, bool lastChunk)
{
    return super::initCipherForBlock(block, lastChunk);
}

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream::getClass0()
{
    return class_();
}

