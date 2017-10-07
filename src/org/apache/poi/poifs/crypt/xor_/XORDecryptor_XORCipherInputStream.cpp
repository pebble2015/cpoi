// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XORDecryptor.java
#include <org/apache/poi/poifs/crypt/xor_/XORDecryptor_XORCipherInputStream.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XORDecryptor.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::XORDecryptor_XORCipherInputStream(XORDecryptor *XORDecryptor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , XORDecryptor_this(XORDecryptor_this)
{
    clinit();
}

org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::XORDecryptor_XORCipherInputStream(XORDecryptor *XORDecryptor_this, ::java::io::InputStream* stream, int32_t initialPos)  /* throws(GeneralSecurityException) */
    : XORDecryptor_XORCipherInputStream(XORDecryptor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(stream,initialPos);
}

void org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::init()
{
    recordStart = int32_t(0);
    recordEnd = int32_t(0);
}

void org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::ctor(::java::io::InputStream* stream, int32_t initialPos) /* throws(GeneralSecurityException) */
{
    super::ctor(stream, ::java::lang::Integer::MAX_VALUE, XORDecryptor_this->chunkSize);
    init();
    this->initialOffset = initialPos;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::initCipherForBlock(::javax::crypto::Cipher* existing, int32_t block) /* throws(GeneralSecurityException) */
{
    return XORDecryptor_this->initCipherForBlock(existing, block);
}

int32_t org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::invokeCipher(int32_t totalBytes, bool doFinal)
{
    auto const pos = static_cast< int32_t >(getPos());
    auto const xorArray_ = npc(npc(npc(XORDecryptor_this->getEncryptionInfo())->getDecryptor())->getSecretKey())->getEncoded();
    auto const chunk = getChunk();
    auto const plain = getPlain();
    auto const posInChunk = pos & getChunkMask();
    auto const xorArrayIndex = initialOffset + recordEnd + (pos - recordStart);
    for (auto i = int32_t(0); pos + i < recordEnd && i < totalBytes; i++) {
        auto value = (*plain)[posInChunk + i];
        value = rotateLeft(value, 3);
        value ^= (*xorArray_)[(xorArrayIndex + i) & int32_t(15)];
        (*chunk)[posInChunk + i] = value;
    }
    return totalBytes;
}

int8_t org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::rotateLeft(int8_t bits, int32_t shift)
{
    return static_cast< int8_t >((((bits & int32_t(255)) << shift) | (static_cast<int32_t>(static_cast<uint32_t>((bits & int32_t(255))) >> (int32_t(8) - shift)))));
}

void org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::setNextRecordSize(int32_t recordSize)
{
    auto const pos = static_cast< int32_t >(getPos());
    auto const chunk = getChunk();
    auto const chunkMask = getChunkMask();
    recordStart = pos;
    recordEnd = recordStart + recordSize;
    auto nextBytes = ::java::lang::Math::min(recordSize, npc(chunk)->length - (pos & chunkMask));
    invokeCipher(nextBytes, true);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XORDecryptor.XORCipherInputStream", 64);
    return c;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::initCipherForBlock(int32_t block)
{
    return super::initCipherForBlock(block);
}

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XORDecryptor_XORCipherInputStream::getClass0()
{
    return class_();
}

