// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentOutputStream.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentOutputStream.hpp>

#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Throwable.hpp>
#include <javax/crypto/Cipher.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::CryptoAPIDocumentOutputStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::CryptoAPIDocumentOutputStream(CryptoAPIEncryptor* encryptor)  /* throws(GeneralSecurityException) */
    : CryptoAPIDocumentOutputStream(*static_cast< ::default_init_tag* >(0))
{
    ctor(encryptor);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::init()
{
    oneByte = (new ::int8_tArray({static_cast< int8_t >(int32_t(0))}));
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::ctor(CryptoAPIEncryptor* encryptor) /* throws(GeneralSecurityException) */
{
    super::ctor();
    init();
    this->encryptor = encryptor;
    cipher = npc(encryptor)->initCipherForBlock(nullptr, 0);
}

int8_tArray* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::getBuf()
{
    return buf;
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::setSize(int32_t count)
{
    this->count = count;
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::setBlock(int32_t block) /* throws(GeneralSecurityException) */
{
    npc(encryptor)->initCipherForBlock(cipher, block);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::write(int32_t b)
{
    try {
        (*oneByte)[int32_t(0)] = static_cast< int8_t >(b);
        npc(cipher)->update(oneByte, 0, 1, oneByte, 0);
        super::write(oneByte);
    } catch (::java::lang::Exception* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::write(::int8_tArray* b, int32_t off, int32_t len)
{
    try {
        npc(cipher)->update(b, off, len, b, off);
        super::write(b, off, len);
    } catch (::java::lang::Exception* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIDocumentOutputStream", 66);
    return c;
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::write(::int8_tArray* b)
{
    super::write(b);
}

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDocumentOutputStream::getClass0()
{
    return class_();
}

