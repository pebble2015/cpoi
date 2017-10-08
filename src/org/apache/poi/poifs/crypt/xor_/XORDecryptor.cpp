// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XORDecryptor.java
#include <org/apache/poi/poifs/crypt/xor_/XORDecryptor.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <javax/crypto/spec/SecretKeySpec.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XORDecryptor_XORCipherInputStream.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionVerifier.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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

poi::poifs::crypt::xor_::XORDecryptor::XORDecryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::xor_::XORDecryptor::XORDecryptor() 
    : XORDecryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::xor_::XORDecryptor::init()
{
    length = -int64_t(1LL);
    chunkSize = int32_t(512);
}

void poi::poifs::crypt::xor_::XORDecryptor::ctor()
{
    super::ctor();
    init();
}

bool poi::poifs::crypt::xor_::XORDecryptor::verifyPassword(::java::lang::String* password)
{
    auto ver = java_cast< XOREncryptionVerifier* >(npc(getEncryptionInfo())->getVerifier());
    auto keyVer = ::poi::util::LittleEndian::getUShort(npc(ver)->getEncryptedKey());
    auto verifierVer = ::poi::util::LittleEndian::getUShort(npc(ver)->getEncryptedVerifier());
    auto keyComp = ::poi::poifs::crypt::CryptoFunctions::createXorKey1(password);
    auto verifierComp = ::poi::poifs::crypt::CryptoFunctions::createXorVerifier1(password);
    if(keyVer == keyComp && verifierVer == verifierComp) {
        auto xorArray_ = ::poi::poifs::crypt::CryptoFunctions::createXorArray1(password);
        setSecretKey(new ::javax::crypto::spec::SecretKeySpec(xorArray_, u"XOR"_j));
        return true;
    } else {
        return false;
    }
}

javax::crypto::Cipher* poi::poifs::crypt::xor_::XORDecryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */
{
    return nullptr;
}

javax::crypto::Cipher* poi::poifs::crypt::xor_::XORDecryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, ::poi::poifs::crypt::EncryptionInfo* encryptionInfo, ::javax::crypto::SecretKey* skey, int32_t encryptMode) /* throws(GeneralSecurityException) */
{
    clinit();
    return nullptr;
}

poi::poifs::crypt::ChunkedCipherInputStream* poi::poifs::crypt::xor_::XORDecryptor::getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    throw new ::poi::EncryptedDocumentException(u"not supported"_j);
}

java::io::InputStream* poi::poifs::crypt::xor_::XORDecryptor::getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */
{
    return new XORDecryptor_XORCipherInputStream(this, stream, initialPos);
}

int64_t poi::poifs::crypt::xor_::XORDecryptor::getLength()
{
    if(length == -int64_t(1LL)) {
        throw new ::java::lang::IllegalStateException(u"Decryptor.getDataStream() was not called"_j);
    }
    return length;
}

void poi::poifs::crypt::xor_::XORDecryptor::setChunkSize(int32_t chunkSize)
{
    this->chunkSize = chunkSize;
}

poi::poifs::crypt::xor_::XORDecryptor* poi::poifs::crypt::xor_::XORDecryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< XORDecryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::xor_::XORDecryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XORDecryptor", 43);
    return c;
}

java::io::InputStream* poi::poifs::crypt::xor_::XORDecryptor::getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* poi::poifs::crypt::xor_::XORDecryptor::getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* poi::poifs::crypt::xor_::XORDecryptor::getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* poi::poifs::crypt::xor_::XORDecryptor::getClass0()
{
    return class_();
}

