// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
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

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::BinaryRC4EncryptionVerifier(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::BinaryRC4EncryptionVerifier() 
    : BinaryRC4EncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::BinaryRC4EncryptionVerifier(::org::apache::poi::util::LittleEndianInput* is) 
    : BinaryRC4EncryptionVerifier(*static_cast< ::default_init_tag* >(0))
{
    ctor(is);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::ctor()
{
    super::ctor();
    setSpinCount(-int32_t(1));
    setCipherAlgorithm(::org::apache::poi::poifs::crypt::CipherAlgorithm::rc4);
    setChainingMode(nullptr);
    setEncryptedKey(nullptr);
    setHashAlgorithm(::org::apache::poi::poifs::crypt::HashAlgorithm::md5);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::ctor(::org::apache::poi::util::LittleEndianInput* is)
{
    super::ctor();
    auto salt = new ::int8_tArray(int32_t(16));
    npc(is)->readFully(salt);
    setSalt(salt);
    auto encryptedVerifier = new ::int8_tArray(int32_t(16));
    npc(is)->readFully(encryptedVerifier);
    setEncryptedVerifier(encryptedVerifier);
    auto encryptedVerifierHash = new ::int8_tArray(int32_t(16));
    npc(is)->readFully(encryptedVerifierHash);
    setEncryptedVerifierHash(encryptedVerifierHash);
    setSpinCount(-int32_t(1));
    setCipherAlgorithm(::org::apache::poi::poifs::crypt::CipherAlgorithm::rc4);
    setChainingMode(nullptr);
    setEncryptedKey(nullptr);
    setHashAlgorithm(::org::apache::poi::poifs::crypt::HashAlgorithm::md5);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::setSalt(::int8_tArray* salt)
{
    if(salt == nullptr || npc(salt)->length != 16) {
        throw new ::org::apache::poi::EncryptedDocumentException(u"invalid verifier salt"_j);
    }
    super::setSalt(salt);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::setEncryptedVerifier(::int8_tArray* encryptedVerifier)
{
    super::setEncryptedVerifier(encryptedVerifier);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::setEncryptedVerifierHash(::int8_tArray* encryptedVerifierHash)
{
    super::setEncryptedVerifierHash(encryptedVerifierHash);
}

void org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::write(::org::apache::poi::util::LittleEndianByteArrayOutputStream* bos)
{
    auto salt = getSalt();
    /* assert((npc(salt)->length == 16)) */ ;
    npc(bos)->write(salt);
    auto encryptedVerifier = getEncryptedVerifier();
    /* assert((npc(encryptedVerifier)->length == 16)) */ ;
    npc(bos)->write(encryptedVerifier);
    auto encryptedVerifierHash = getEncryptedVerifierHash();
    /* assert((npc(encryptedVerifierHash)->length == 16)) */ ;
    npc(bos)->write(encryptedVerifierHash);
}

org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< BinaryRC4EncryptionVerifier* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4EncryptionVerifier", 64);
    return c;
}

java::lang::Class* org::apache::poi::poifs::crypt::binaryrc4::BinaryRC4EncryptionVerifier::getClass0()
{
    return class_();
}

