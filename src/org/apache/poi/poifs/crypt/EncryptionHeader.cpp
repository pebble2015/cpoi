// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionHeader.java
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CipherProvider.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
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

poi::poifs::crypt::EncryptionHeader::EncryptionHeader(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::EncryptionHeader::EncryptionHeader() 
    : EncryptionHeader(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t& poi::poifs::crypt::EncryptionHeader::ALGORITHM_RC4()
{
    clinit();
    return ALGORITHM_RC4_;
}
int32_t poi::poifs::crypt::EncryptionHeader::ALGORITHM_RC4_;

int32_t& poi::poifs::crypt::EncryptionHeader::ALGORITHM_AES_128()
{
    clinit();
    return ALGORITHM_AES_128_;
}
int32_t poi::poifs::crypt::EncryptionHeader::ALGORITHM_AES_128_;

int32_t& poi::poifs::crypt::EncryptionHeader::ALGORITHM_AES_192()
{
    clinit();
    return ALGORITHM_AES_192_;
}
int32_t poi::poifs::crypt::EncryptionHeader::ALGORITHM_AES_192_;

int32_t& poi::poifs::crypt::EncryptionHeader::ALGORITHM_AES_256()
{
    clinit();
    return ALGORITHM_AES_256_;
}
int32_t poi::poifs::crypt::EncryptionHeader::ALGORITHM_AES_256_;

int32_t& poi::poifs::crypt::EncryptionHeader::HASH_NONE()
{
    clinit();
    return HASH_NONE_;
}
int32_t poi::poifs::crypt::EncryptionHeader::HASH_NONE_;

int32_t& poi::poifs::crypt::EncryptionHeader::HASH_SHA1()
{
    clinit();
    return HASH_SHA1_;
}
int32_t poi::poifs::crypt::EncryptionHeader::HASH_SHA1_;

int32_t& poi::poifs::crypt::EncryptionHeader::HASH_SHA256()
{
    clinit();
    return HASH_SHA256_;
}
int32_t poi::poifs::crypt::EncryptionHeader::HASH_SHA256_;

int32_t& poi::poifs::crypt::EncryptionHeader::HASH_SHA384()
{
    clinit();
    return HASH_SHA384_;
}
int32_t poi::poifs::crypt::EncryptionHeader::HASH_SHA384_;

int32_t& poi::poifs::crypt::EncryptionHeader::HASH_SHA512()
{
    clinit();
    return HASH_SHA512_;
}
int32_t poi::poifs::crypt::EncryptionHeader::HASH_SHA512_;

int32_t& poi::poifs::crypt::EncryptionHeader::PROVIDER_RC4()
{
    clinit();
    return PROVIDER_RC4_;
}
int32_t poi::poifs::crypt::EncryptionHeader::PROVIDER_RC4_;

int32_t& poi::poifs::crypt::EncryptionHeader::PROVIDER_AES()
{
    clinit();
    return PROVIDER_AES_;
}
int32_t poi::poifs::crypt::EncryptionHeader::PROVIDER_AES_;

int32_t& poi::poifs::crypt::EncryptionHeader::MODE_ECB()
{
    clinit();
    return MODE_ECB_;
}
int32_t poi::poifs::crypt::EncryptionHeader::MODE_ECB_;

int32_t& poi::poifs::crypt::EncryptionHeader::MODE_CBC()
{
    clinit();
    return MODE_CBC_;
}
int32_t poi::poifs::crypt::EncryptionHeader::MODE_CBC_;

int32_t& poi::poifs::crypt::EncryptionHeader::MODE_CFB()
{
    clinit();
    return MODE_CFB_;
}
int32_t poi::poifs::crypt::EncryptionHeader::MODE_CFB_;

void poi::poifs::crypt::EncryptionHeader::ctor()
{
    super::ctor();
}

poi::poifs::crypt::ChainingMode* poi::poifs::crypt::EncryptionHeader::getChainingMode()
{
    return chainingMode;
}

void poi::poifs::crypt::EncryptionHeader::setChainingMode(ChainingMode* chainingMode)
{
    this->chainingMode = chainingMode;
}

int32_t poi::poifs::crypt::EncryptionHeader::getFlags()
{
    return flags;
}

void poi::poifs::crypt::EncryptionHeader::setFlags(int32_t flags)
{
    this->flags = flags;
}

int32_t poi::poifs::crypt::EncryptionHeader::getSizeExtra()
{
    return sizeExtra;
}

void poi::poifs::crypt::EncryptionHeader::setSizeExtra(int32_t sizeExtra)
{
    this->sizeExtra = sizeExtra;
}

poi::poifs::crypt::CipherAlgorithm* poi::poifs::crypt::EncryptionHeader::getCipherAlgorithm()
{
    return cipherAlgorithm;
}

void poi::poifs::crypt::EncryptionHeader::setCipherAlgorithm(CipherAlgorithm* cipherAlgorithm)
{
    this->cipherAlgorithm = cipherAlgorithm;
    if(npc(npc(cipherAlgorithm)->allowedKeySize)->length == 1) {
        setKeySize(npc(cipherAlgorithm)->defaultKeySize);
    }
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::EncryptionHeader::getHashAlgorithm()
{
    return hashAlgorithm;
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::EncryptionHeader::getHashAlgorithmEx()
{
    return hashAlgorithm;
}

void poi::poifs::crypt::EncryptionHeader::setHashAlgorithm(HashAlgorithm* hashAlgorithm)
{
    this->hashAlgorithm = hashAlgorithm;
}

int32_t poi::poifs::crypt::EncryptionHeader::getKeySize()
{
    return keyBits;
}

void poi::poifs::crypt::EncryptionHeader::setKeySize(int32_t keyBits)
{
    this->keyBits = keyBits;
    for(auto allowedBits : *npc(npc(getCipherAlgorithm())->allowedKeySize)) {
        if(allowedBits == keyBits) {
            return;
        }
    }
    throw new ::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"KeySize "_j)->append(keyBits)
        ->append(u" not allowed for cipher "_j)
        ->append(static_cast< ::java::lang::Object* >(getCipherAlgorithm()))->toString());
}

int32_t poi::poifs::crypt::EncryptionHeader::getBlockSize()
{
    return blockSize;
}

void poi::poifs::crypt::EncryptionHeader::setBlockSize(int32_t blockSize)
{
    this->blockSize = blockSize;
}

int8_tArray* poi::poifs::crypt::EncryptionHeader::getKeySalt()
{
    return keySalt;
}

void poi::poifs::crypt::EncryptionHeader::setKeySalt(::int8_tArray* salt)
{
    this->keySalt = (salt == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(salt)->clone();
}

poi::poifs::crypt::CipherProvider* poi::poifs::crypt::EncryptionHeader::getCipherProvider()
{
    return providerType;
}

void poi::poifs::crypt::EncryptionHeader::setCipherProvider(CipherProvider* providerType)
{
    this->providerType = providerType;
}

java::lang::String* poi::poifs::crypt::EncryptionHeader::getCspName()
{
    return cspName;
}

void poi::poifs::crypt::EncryptionHeader::setCspName(::java::lang::String* cspName)
{
    this->cspName = cspName;
}

poi::poifs::crypt::EncryptionHeader* poi::poifs::crypt::EncryptionHeader::clone() /* throws(CloneNotSupportedException) */
{
    auto other = java_cast< EncryptionHeader* >(super::clone());
    npc(other)->keySalt = (keySalt == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(keySalt)->clone();
    return other;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::EncryptionHeader::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.EncryptionHeader", 43);
    return c;
}

void poi::poifs::crypt::EncryptionHeader::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ALGORITHM_RC4_ = npc(CipherAlgorithm::rc4)->ecmaId;
        ALGORITHM_AES_128_ = npc(CipherAlgorithm::aes128)->ecmaId;
        ALGORITHM_AES_192_ = npc(CipherAlgorithm::aes192)->ecmaId;
        ALGORITHM_AES_256_ = npc(CipherAlgorithm::aes256)->ecmaId;
        HASH_NONE_ = npc(HashAlgorithm::none)->ecmaId;
        HASH_SHA1_ = npc(HashAlgorithm::sha1)->ecmaId;
        HASH_SHA256_ = npc(HashAlgorithm::sha256)->ecmaId;
        HASH_SHA384_ = npc(HashAlgorithm::sha384)->ecmaId;
        HASH_SHA512_ = npc(HashAlgorithm::sha512)->ecmaId;
        PROVIDER_RC4_ = npc(CipherProvider::rc4)->ecmaId;
        PROVIDER_AES_ = npc(CipherProvider::aes)->ecmaId;
        MODE_ECB_ = npc(ChainingMode::ecb)->ecmaId;
        MODE_CBC_ = npc(ChainingMode::cbc)->ecmaId;
        MODE_CFB_ = npc(ChainingMode::cfb)->ecmaId;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::poifs::crypt::EncryptionHeader::getClass0()
{
    return class_();
}

