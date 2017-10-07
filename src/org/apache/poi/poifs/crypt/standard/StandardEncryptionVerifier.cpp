// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.java
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayOutputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
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

org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::StandardEncryptionVerifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::StandardEncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is, StandardEncryptionHeader* header) 
    : StandardEncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(is,header);
}

org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::StandardEncryptionVerifier(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode) 
    : StandardEncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(cipherAlgorithm,hashAlgorithm,keyBits,blockSize,chainingMode);
}

constexpr int32_t org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::SPIN_COUNT;

void org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::ctor(::org::apache::poi::util::LittleEndianInput* is, StandardEncryptionHeader* header)
{
    super::ctor();
    auto saltSize = npc(is)->readInt();
    if(saltSize != 16) {
        throw new ::java::lang::RuntimeException(u"Salt size != 16 !?"_j);
    }
    auto salt = new ::int8_tArray(int32_t(16));
    npc(is)->readFully(salt);
    setSalt(salt);
    auto encryptedVerifier = new ::int8_tArray(int32_t(16));
    npc(is)->readFully(encryptedVerifier);
    setEncryptedVerifier(encryptedVerifier);
    verifierHashSize = npc(is)->readInt();
    auto encryptedVerifierHash = new ::int8_tArray(npc(npc(header)->getCipherAlgorithm())->encryptedVerifierHashLength);
    npc(is)->readFully(encryptedVerifierHash);
    setEncryptedVerifierHash(encryptedVerifierHash);
    setSpinCount(SPIN_COUNT);
    setCipherAlgorithm(npc(header)->getCipherAlgorithm());
    setChainingMode(npc(header)->getChainingMode());
    setEncryptedKey(nullptr);
    setHashAlgorithm(npc(header)->getHashAlgorithm());
}

void org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::ctor(::org::apache::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::org::apache::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::org::apache::poi::poifs::crypt::ChainingMode* chainingMode)
{
    super::ctor();
    setCipherAlgorithm(cipherAlgorithm);
    setHashAlgorithm(hashAlgorithm);
    setChainingMode(chainingMode);
    setSpinCount(SPIN_COUNT);
    verifierHashSize = npc(hashAlgorithm)->hashSize;
}

void org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::setSalt(::int8_tArray* salt)
{
    if(salt == nullptr || npc(salt)->length != 16) {
        throw new ::org::apache::poi::EncryptedDocumentException(u"invalid verifier salt"_j);
    }
    super::setSalt(salt);
}

void org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::setEncryptedVerifier(::int8_tArray* encryptedVerifier)
{
    super::setEncryptedVerifier(encryptedVerifier);
}

void org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash)
{
    super::setEncryptedVerifierHash(encryptedVerifierHash);
}

void org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    auto salt = getSalt();
    /* assert((npc(salt)->length == 16)) */ ;
    npc(bos)->writeInt(npc(salt)->length);
    npc(bos)->write(salt);
    auto encryptedVerifier = getEncryptedVerifier();
    /* assert((npc(encryptedVerifier)->length == 16)) */ ;
    npc(bos)->write(encryptedVerifier);
    npc(bos)->writeInt(int32_t(20));
    auto encryptedVerifierHash = getEncryptedVerifierHash();
    /* assert((npc(encryptedVerifierHash)->length == npc(getCipherAlgorithm())->encryptedVerifierHashLength)) */ ;
    npc(bos)->write(encryptedVerifierHash);
}

int32_t org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::getVerifierHashSize()
{
    return verifierHashSize;
}

org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier* org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< StandardEncryptionVerifier* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.standard.StandardEncryptionVerifier", 62);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::standard::StandardEncryptionVerifier::getClass0()
{
    return class_();
}

