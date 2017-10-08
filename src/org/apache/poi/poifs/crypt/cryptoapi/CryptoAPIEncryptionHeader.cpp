// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CipherProvider.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>
#include <Array.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::CryptoAPIEncryptionHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::CryptoAPIEncryptionHeader(::poi::util::LittleEndianInput* is)  /* throws(IOException) */
    : CryptoAPIEncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::CryptoAPIEncryptionHeader(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode) 
    : CryptoAPIEncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor(cipherAlgorithm,hashAlgorithm,keyBits,blockSize,chainingMode);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::ctor(::poi::util::LittleEndianInput* is) /* throws(IOException) */
{
    super::ctor(is);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::ctor(::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    super::ctor(cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::setKeySize(int32_t keyBits)
{
    auto found = false;
    for(auto size : *npc(npc(getCipherAlgorithm())->allowedKeySize)) {
        if(size == keyBits) {
            found = true;
            break;
        }
    }
    if(!found) {
        throw new ::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"invalid keysize "_j)->append(keyBits)
            ->append(u" for cipher algorithm "_j)
            ->append(static_cast< ::java::lang::Object* >(getCipherAlgorithm()))->toString());
    }
    super::setKeySize(keyBits);
    if(keyBits > 40) {
        setCspName(u"Microsoft Enhanced Cryptographic Provider v1.0"_j);
    } else {
        setCspName(npc(::poi::poifs::crypt::CipherProvider::rc4)->cipherProviderName);
    }
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< CryptoAPIEncryptionHeader* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIEncryptionHeader", 62);
    return c;
}

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptionHeader::getClass0()
{
    return class_();
}

