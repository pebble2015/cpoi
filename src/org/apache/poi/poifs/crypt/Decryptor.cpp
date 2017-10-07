// Generated from /POI/java/org/apache/poi/poifs/crypt/Decryptor.java
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <javax/crypto/spec/SecretKeySpec.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
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

org::apache::poi::poifs::crypt::Decryptor::Decryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::Decryptor::Decryptor() 
    : Decryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& org::apache::poi::poifs::crypt::Decryptor::DEFAULT_PASSWORD()
{
    clinit();
    return DEFAULT_PASSWORD_;
}
java::lang::String* org::apache::poi::poifs::crypt::Decryptor::DEFAULT_PASSWORD_;

java::lang::String*& org::apache::poi::poifs::crypt::Decryptor::DEFAULT_POIFS_ENTRY()
{
    clinit();
    return DEFAULT_POIFS_ENTRY_;
}
java::lang::String* org::apache::poi::poifs::crypt::Decryptor::DEFAULT_POIFS_ENTRY_;

void org::apache::poi::poifs::crypt::Decryptor::ctor()
{
    super::ctor();
}

java::io::InputStream* org::apache::poi::poifs::crypt::Decryptor::getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */
{
    throw new ::org::apache::poi::EncryptedDocumentException(u"this decryptor doesn't support reading from a stream"_j);
}

void org::apache::poi::poifs::crypt::Decryptor::setChunkSize(int32_t chunkSize)
{
    throw new ::org::apache::poi::EncryptedDocumentException(u"this decryptor doesn't support changing the chunk size"_j);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::Decryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */
{
    throw new ::org::apache::poi::EncryptedDocumentException(u"this decryptor doesn't support initCipherForBlock"_j);
}

org::apache::poi::poifs::crypt::Decryptor* org::apache::poi::poifs::crypt::Decryptor::getInstance(EncryptionInfo* info)
{
    clinit();
    auto d = npc(info)->getDecryptor();
    if(d == nullptr) {
        throw new ::org::apache::poi::EncryptedDocumentException(u"Unsupported version"_j);
    }
    return d;
}

java::io::InputStream* org::apache::poi::poifs::crypt::Decryptor::getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */
{
    return getDataStream(npc(fs)->getRoot());
}

java::io::InputStream* org::apache::poi::poifs::crypt::Decryptor::getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */
{
    return getDataStream(npc(fs)->getRoot());
}

java::io::InputStream* org::apache::poi::poifs::crypt::Decryptor::getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */
{
    return getDataStream(npc(fs)->getRoot());
}

int8_tArray* org::apache::poi::poifs::crypt::Decryptor::getVerifier()
{
    return verifier;
}

javax::crypto::SecretKey* org::apache::poi::poifs::crypt::Decryptor::getSecretKey()
{
    return secretKey;
}

int8_tArray* org::apache::poi::poifs::crypt::Decryptor::getIntegrityHmacKey()
{
    return integrityHmacKey;
}

int8_tArray* org::apache::poi::poifs::crypt::Decryptor::getIntegrityHmacValue()
{
    return integrityHmacValue;
}

void org::apache::poi::poifs::crypt::Decryptor::setSecretKey(::javax::crypto::SecretKey* secretKey)
{
    this->secretKey = secretKey;
}

void org::apache::poi::poifs::crypt::Decryptor::setVerifier(::int8_tArray* verifier)
{
    this->verifier = (verifier == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(verifier)->clone();
}

void org::apache::poi::poifs::crypt::Decryptor::setIntegrityHmacKey(::int8_tArray* integrityHmacKey)
{
    this->integrityHmacKey = (integrityHmacKey == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(integrityHmacKey)->clone();
}

void org::apache::poi::poifs::crypt::Decryptor::setIntegrityHmacValue(::int8_tArray* integrityHmacValue)
{
    this->integrityHmacValue = (integrityHmacValue == nullptr) ? static_cast< ::int8_tArray* >(nullptr) : npc(integrityHmacValue)->clone();
}

int32_t org::apache::poi::poifs::crypt::Decryptor::getBlockSizeInBytes()
{
    return npc(npc(encryptionInfo)->getHeader())->getBlockSize();
}

int32_t org::apache::poi::poifs::crypt::Decryptor::getKeySizeInBytes()
{
    return npc(npc(encryptionInfo)->getHeader())->getKeySize() / int32_t(8);
}

org::apache::poi::poifs::crypt::EncryptionInfo* org::apache::poi::poifs::crypt::Decryptor::getEncryptionInfo()
{
    return encryptionInfo;
}

void org::apache::poi::poifs::crypt::Decryptor::setEncryptionInfo(EncryptionInfo* encryptionInfo)
{
    this->encryptionInfo = encryptionInfo;
}

org::apache::poi::poifs::crypt::Decryptor* org::apache::poi::poifs::crypt::Decryptor::clone() /* throws(CloneNotSupportedException) */
{
    auto other = java_cast< Decryptor* >(super::clone());
    npc(other)->integrityHmacKey = npc(integrityHmacKey)->clone();
    npc(other)->integrityHmacValue = npc(integrityHmacValue)->clone();
    npc(other)->verifier = npc(verifier)->clone();
    npc(other)->secretKey = new ::javax::crypto::spec::SecretKeySpec(npc(secretKey)->getEncoded(), npc(secretKey)->getAlgorithm());
    return other;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::Decryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.Decryptor", 36);
    return c;
}

void org::apache::poi::poifs::crypt::Decryptor::clinit()
{
struct string_init_ {
    string_init_() {
    DEFAULT_PASSWORD_ = u"VelvetSweatshop"_j;
    DEFAULT_POIFS_ENTRY_ = u"EncryptedPackage"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* org::apache::poi::poifs::crypt::Decryptor::getClass0()
{
    return class_();
}

