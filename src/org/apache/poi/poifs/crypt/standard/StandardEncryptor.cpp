// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptor.java
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/MessageDigest.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Random.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/ChunkedCipherOutputStream.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/poifs/crypt/DataSpaceMapUtils.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor_createEncryptionInfoEntry_1.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor_StandardCipherOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
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

poi::poifs::crypt::standard::StandardEncryptor::StandardEncryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::standard::StandardEncryptor::StandardEncryptor() 
    : StandardEncryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::poifs::crypt::standard::StandardEncryptor::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::poifs::crypt::standard::StandardEncryptor::logger_;

void poi::poifs::crypt::standard::StandardEncryptor::ctor()
{
    super::ctor();
}

void poi::poifs::crypt::standard::StandardEncryptor::confirmPassword(::java::lang::String* password)
{
    ::java::util::Random* r = new ::java::security::SecureRandom();
    auto salt = new ::int8_tArray(int32_t(16));
    auto verifier = new ::int8_tArray(int32_t(16));
    npc(r)->nextBytes(salt);
    npc(r)->nextBytes(verifier);
    confirmPassword(password, static_cast< ::int8_tArray* >(nullptr), static_cast< ::int8_tArray* >(nullptr), salt, verifier, static_cast< ::int8_tArray* >(nullptr));
}

void poi::poifs::crypt::standard::StandardEncryptor::confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt)
{
    auto ver = java_cast< StandardEncryptionVerifier* >(npc(getEncryptionInfo())->getVerifier());
    npc(ver)->setSalt(verifierSalt);
    auto secretKey = StandardDecryptor::generateSecretKey(password, ver, getKeySizeInBytes());
    setSecretKey(secretKey);
    auto cipher = getCipher(secretKey, nullptr);
    try {
        auto encryptedVerifier = npc(cipher)->doFinal(verifier);
        auto hashAlgo = ::poi::poifs::crypt::CryptoFunctions::getMessageDigest(npc(ver)->getHashAlgorithm());
        auto calcVerifierHash = npc(hashAlgo)->digest(verifier);
        auto encVerHashSize = npc(npc(ver)->getCipherAlgorithm())->encryptedVerifierHashLength;
        auto encryptedVerifierHash = npc(cipher)->doFinal(::java::util::Arrays::copyOf(calcVerifierHash, encVerHashSize));
        npc(ver)->setEncryptedVerifier(encryptedVerifier);
        npc(ver)->setEncryptedVerifierHash(encryptedVerifierHash);
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::poi::EncryptedDocumentException(u"Password confirmation failed"_j, e);
    }
}

javax::crypto::Cipher* poi::poifs::crypt::standard::StandardEncryptor::getCipher(::javax::crypto::SecretKey* key, ::java::lang::String* padding)
{
    auto ver = npc(getEncryptionInfo())->getVerifier();
    return ::poi::poifs::crypt::CryptoFunctions::getCipher(key, npc(ver)->getCipherAlgorithm(), npc(ver)->getChainingMode(), nullptr, ::javax::crypto::Cipher::ENCRYPT_MODE, padding);
}

java::io::OutputStream* poi::poifs::crypt::standard::StandardEncryptor::getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    createEncryptionInfoEntry(dir);
    ::poi::poifs::crypt::DataSpaceMapUtils::addDefaultDataSpace(dir);
    return new StandardEncryptor_StandardCipherOutputStream(this, dir);
}

int32_t poi::poifs::crypt::standard::StandardEncryptor::getKeySizeInBytes()
{
    return npc(npc(getEncryptionInfo())->getHeader())->getKeySize() / int32_t(8);
}

void poi::poifs::crypt::standard::StandardEncryptor::createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    auto const info = getEncryptionInfo();
    auto const header = java_cast< StandardEncryptionHeader* >(npc(info)->getHeader());
    auto const verifier = java_cast< StandardEncryptionVerifier* >(npc(info)->getVerifier());
    EncryptionRecord* er = new StandardEncryptor_createEncryptionInfoEntry_1(this, info, header, verifier);
    ::poi::poifs::crypt::DataSpaceMapUtils::createEncryptionEntry(dir, u"EncryptionInfo"_j, er);
}

poi::poifs::crypt::standard::StandardEncryptor* poi::poifs::crypt::standard::StandardEncryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< StandardEncryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.standard.StandardEncryptor", 53);
    return c;
}

void poi::poifs::crypt::standard::StandardEncryptor::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(StandardEncryptor::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::io::OutputStream* poi::poifs::crypt::standard::StandardEncryptor::getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* poi::poifs::crypt::standard::StandardEncryptor::getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* poi::poifs::crypt::standard::StandardEncryptor::getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

poi::poifs::crypt::ChunkedCipherOutputStream* poi::poifs::crypt::standard::StandardEncryptor::getDataStream(::java::io::OutputStream* stream, int32_t initialOffset)
{
    return super::getDataStream(stream, initialOffset);
}

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptor::getClass0()
{
    return class_();
}

