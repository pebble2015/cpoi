// Generated from /POI/java/org/apache/poi/poifs/crypt/Encryptor.java
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <javax/crypto/spec/SecretKeySpec.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/OPOIFSFileSystem.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>

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

poi::poifs::crypt::Encryptor::Encryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::Encryptor::Encryptor()
    : Encryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::String*& poi::poifs::crypt::Encryptor::DEFAULT_POIFS_ENTRY()
{
    clinit();
    return DEFAULT_POIFS_ENTRY_;
}
java::lang::String* poi::poifs::crypt::Encryptor::DEFAULT_POIFS_ENTRY_;

poi::poifs::crypt::Encryptor* poi::poifs::crypt::Encryptor::getInstance(EncryptionInfo* info)
{
    clinit();
    return npc(info)->getEncryptor();
}

java::io::OutputStream* poi::poifs::crypt::Encryptor::getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */
{
    return getDataStream(npc(fs)->getRoot());
}

java::io::OutputStream* poi::poifs::crypt::Encryptor::getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */
{
    return getDataStream(npc(fs)->getRoot());
}

java::io::OutputStream* poi::poifs::crypt::Encryptor::getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs) /* throws(IOException, GeneralSecurityException) */
{
    return getDataStream(npc(fs)->getRoot());
}

poi::poifs::crypt::ChunkedCipherOutputStream* poi::poifs::crypt::Encryptor::getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */
{
    throw new ::poi::EncryptedDocumentException(u"this decryptor doesn't support writing directly to a stream"_j);
}

javax::crypto::SecretKey* poi::poifs::crypt::Encryptor::getSecretKey()
{
    return secretKey;
}

void poi::poifs::crypt::Encryptor::setSecretKey(::javax::crypto::SecretKey* secretKey)
{
    this->secretKey = secretKey;
}

poi::poifs::crypt::EncryptionInfo* poi::poifs::crypt::Encryptor::getEncryptionInfo()
{
    return encryptionInfo;
}

void poi::poifs::crypt::Encryptor::setEncryptionInfo(EncryptionInfo* encryptionInfo)
{
    this->encryptionInfo = encryptionInfo;
}

void poi::poifs::crypt::Encryptor::setChunkSize(int32_t chunkSize)
{
    throw new ::poi::EncryptedDocumentException(u"this decryptor doesn't support changing the chunk size"_j);
}

poi::poifs::crypt::Encryptor* poi::poifs::crypt::Encryptor::clone() /* throws(CloneNotSupportedException) */
{
    auto other = java_cast< Encryptor* >(super::clone());
    npc(other)->secretKey = new ::javax::crypto::spec::SecretKeySpec(npc(secretKey)->getEncoded(), npc(secretKey)->getAlgorithm());
    return other;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::Encryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.Encryptor", 36);
    return c;
}

void poi::poifs::crypt::Encryptor::clinit()
{
struct string_init_ {
    string_init_() {
    DEFAULT_POIFS_ENTRY_ = Decryptor::DEFAULT_POIFS_ENTRY();
    }
};

    static string_init_ string_init_instance;

    super::clinit();
}

java::lang::Class* poi::poifs::crypt::Encryptor::getClass0()
{
    return class_();
}

