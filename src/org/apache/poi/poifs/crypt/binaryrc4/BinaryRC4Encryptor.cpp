// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/MessageDigest.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/util/Random.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor_createEncryptionInfoEntry_1.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Encryptor_BinaryRC4CipherOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
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

poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::BinaryRC4Encryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::BinaryRC4Encryptor() 
    : BinaryRC4Encryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::init()
{
    chunkSize = int32_t(512);
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::ctor()
{
    super::ctor();
    init();
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::confirmPassword(::java::lang::String* password)
{
    ::java::util::Random* r = new ::java::security::SecureRandom();
    auto salt = new ::int8_tArray(int32_t(16));
    auto verifier = new ::int8_tArray(int32_t(16));
    npc(r)->nextBytes(salt);
    npc(r)->nextBytes(verifier);
    confirmPassword(password, static_cast< ::int8_tArray* >(nullptr), static_cast< ::int8_tArray* >(nullptr), verifier, salt, static_cast< ::int8_tArray* >(nullptr));
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt)
{
    auto ver = java_cast< BinaryRC4EncryptionVerifier* >(npc(getEncryptionInfo())->getVerifier());
    npc(ver)->setSalt(verifierSalt);
    auto skey = BinaryRC4Decryptor::generateSecretKey(password, ver);
    setSecretKey(skey);
    try {
        auto cipher = BinaryRC4Decryptor::initCipherForBlock(nullptr, 0, getEncryptionInfo(), skey, ::javax::crypto::Cipher::ENCRYPT_MODE);
        auto encryptedVerifier = new ::int8_tArray(int32_t(16));
        npc(cipher)->update(verifier, 0, 16, encryptedVerifier);
        npc(ver)->setEncryptedVerifier(encryptedVerifier);
        auto hashAlgo = npc(ver)->getHashAlgorithm();
        auto hashAlg = ::poi::poifs::crypt::CryptoFunctions::getMessageDigest(hashAlgo);
        auto calcVerifierHash = npc(hashAlg)->digest(verifier);
        auto encryptedVerifierHash = npc(cipher)->doFinal(calcVerifierHash);
        npc(ver)->setEncryptedVerifierHash(encryptedVerifierHash);
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::poi::EncryptedDocumentException(u"Password confirmation failed"_j, e);
    }
}

java::io::OutputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    ::java::io::OutputStream* countStream = new BinaryRC4Encryptor_BinaryRC4CipherOutputStream(this, dir);
    return countStream;
}

poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor_BinaryRC4CipherOutputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */
{
    return new BinaryRC4Encryptor_BinaryRC4CipherOutputStream(this, stream);
}

int32_t poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getKeySizeInBytes()
{
    return npc(npc(getEncryptionInfo())->getHeader())->getKeySize() / int32_t(8);
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    ::poi::poifs::crypt::DataSpaceMapUtils::addDefaultDataSpace(dir);
    auto const info = getEncryptionInfo();
    auto const header = java_cast< BinaryRC4EncryptionHeader* >(npc(info)->getHeader());
    auto const verifier = java_cast< BinaryRC4EncryptionVerifier* >(npc(info)->getVerifier());
    ::poi::poifs::crypt::standard::EncryptionRecord* er = new BinaryRC4Encryptor_createEncryptionInfoEntry_1(this, info, header, verifier);
    ::poi::poifs::crypt::DataSpaceMapUtils::createEncryptionEntry(dir, u"EncryptionInfo"_j, er);
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::setChunkSize(int32_t chunkSize)
{
    this->chunkSize = chunkSize;
}

poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< BinaryRC4Encryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4Encryptor", 55);
    return c;
}

java::io::OutputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4Encryptor::getClass0()
{
    return class_();
}

