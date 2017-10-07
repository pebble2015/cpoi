// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentInputStream.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentInputStream.hpp>

#include <java/lang/ArrayIndexOutOfBoundsException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Throwable.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/ShortBufferException.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::CryptoAPIDocumentInputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::CryptoAPIDocumentInputStream(CryptoAPIDecryptor* decryptor, ::int8_tArray* buf)  /* throws(GeneralSecurityException) */
    : CryptoAPIDocumentInputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(decryptor,buf);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::init()
{
    oneByte = (new ::int8_tArray({static_cast< int8_t >(int32_t(0))}));
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::seek(int32_t newpos)
{
    if(newpos > count) {
        throw new ::java::lang::ArrayIndexOutOfBoundsException(newpos);
    }
    this->pos = newpos;
    mark_ = newpos;
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::setBlock(int32_t block) /* throws(GeneralSecurityException) */
{
    cipher = npc(decryptor)->initCipherForBlock(cipher, block);
}

int32_t org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::read()
{
    auto ch = super::read();
    if(ch == -int32_t(1)) {
        return -int32_t(1);
    }
    (*oneByte)[int32_t(0)] = static_cast< int8_t >(ch);
    try {
        npc(cipher)->update(oneByte, 0, 1, oneByte);
    } catch (::javax::crypto::ShortBufferException* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
    return (*oneByte)[int32_t(0)];
}

int32_t org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::read(::int8_tArray* b, int32_t off, int32_t len)
{
    auto readLen = super::read(b, off, len);
    if(readLen == -int32_t(1)) {
        return -int32_t(1);
    }
    try {
        npc(cipher)->update(b, off, readLen, b, off);
    } catch (::javax::crypto::ShortBufferException* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
    return readLen;
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::ctor(CryptoAPIDecryptor* decryptor, ::int8_tArray* buf) /* throws(GeneralSecurityException) */
{
    super::ctor(buf);
    init();
    this->decryptor = decryptor;
    cipher = npc(decryptor)->initCipherForBlock(static_cast< ::javax::crypto::Cipher* >(nullptr), int32_t(0));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIDocumentInputStream", 65);
    return c;
}

int32_t org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::read(::int8_tArray* b)
{
    return super::read(b);
}

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentInputStream::getClass0()
{
    return class_();
}

