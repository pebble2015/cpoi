// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionVerifier.java
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
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

poi::poifs::crypt::EncryptionVerifier::EncryptionVerifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::EncryptionVerifier::EncryptionVerifier() 
    : EncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::EncryptionVerifier::ctor()
{
    super::ctor();
}

int8_tArray* poi::poifs::crypt::EncryptionVerifier::getSalt()
{
    return salt;
}

int8_tArray* poi::poifs::crypt::EncryptionVerifier::getEncryptedVerifier()
{
    return encryptedVerifier;
}

int8_tArray* poi::poifs::crypt::EncryptionVerifier::getEncryptedVerifierHash()
{
    return encryptedVerifierHash;
}

int32_t poi::poifs::crypt::EncryptionVerifier::getSpinCount()
{
    return spinCount;
}

int32_t poi::poifs::crypt::EncryptionVerifier::getCipherMode()
{
    return npc(chainingMode)->ecmaId;
}

int32_t poi::poifs::crypt::EncryptionVerifier::getAlgorithm()
{
    return npc(cipherAlgorithm)->ecmaId;
}

int8_tArray* poi::poifs::crypt::EncryptionVerifier::getEncryptedKey()
{
    return encryptedKey;
}

poi::poifs::crypt::CipherAlgorithm* poi::poifs::crypt::EncryptionVerifier::getCipherAlgorithm()
{
    return cipherAlgorithm;
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::EncryptionVerifier::getHashAlgorithm()
{
    return hashAlgorithm;
}

poi::poifs::crypt::ChainingMode* poi::poifs::crypt::EncryptionVerifier::getChainingMode()
{
    return chainingMode;
}

void poi::poifs::crypt::EncryptionVerifier::setSalt(::int8_tArray* salt)
{
    this->salt = (salt == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(salt)->clone();
}

void poi::poifs::crypt::EncryptionVerifier::setEncryptedVerifier(::int8_tArray* encryptedVerifier)
{
    this->encryptedVerifier = (encryptedVerifier == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(encryptedVerifier)->clone();
}

void poi::poifs::crypt::EncryptionVerifier::setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash)
{
    this->encryptedVerifierHash = (encryptedVerifierHash == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(encryptedVerifierHash)->clone();
}

void poi::poifs::crypt::EncryptionVerifier::setEncryptedKey(::int8_tArray* encryptedKey)
{
    this->encryptedKey = (encryptedKey == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(encryptedKey)->clone();
}

void poi::poifs::crypt::EncryptionVerifier::setSpinCount(int32_t spinCount)
{
    this->spinCount = spinCount;
}

void poi::poifs::crypt::EncryptionVerifier::setCipherAlgorithm(CipherAlgorithm* cipherAlgorithm)
{
    this->cipherAlgorithm = cipherAlgorithm;
}

void poi::poifs::crypt::EncryptionVerifier::setChainingMode(ChainingMode* chainingMode)
{
    this->chainingMode = chainingMode;
}

void poi::poifs::crypt::EncryptionVerifier::setHashAlgorithm(HashAlgorithm* hashAlgorithm)
{
    this->hashAlgorithm = hashAlgorithm;
}

poi::poifs::crypt::EncryptionVerifier* poi::poifs::crypt::EncryptionVerifier::clone() /* throws(CloneNotSupportedException) */
{
    auto other = java_cast< EncryptionVerifier* >(super::clone());
    npc(other)->salt = (salt == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(salt)->clone();
    npc(other)->encryptedVerifier = (encryptedVerifier == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(encryptedVerifier)->clone();
    npc(other)->encryptedVerifierHash = (encryptedVerifierHash == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(encryptedVerifierHash)->clone();
    npc(other)->encryptedKey = (encryptedKey == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(encryptedKey)->clone();
    return other;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::EncryptionVerifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.EncryptionVerifier", 45);
    return c;
}

java::lang::Class* poi::poifs::crypt::EncryptionVerifier::getClass0()
{
    return class_();
}

