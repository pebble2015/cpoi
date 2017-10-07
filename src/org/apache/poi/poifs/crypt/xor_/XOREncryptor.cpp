// Generated from /POI/java/org/apache/poi/poifs/crypt/xor/XOREncryptor.java
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptor.hpp>

#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <javax/crypto/spec/SecretKeySpec.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/Encryptor.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/xor_/XOREncryptor_XORCipherOutputStream.hpp>
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

org::apache::poi::poifs::crypt::xor_::XOREncryptor::XOREncryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::xor_::XOREncryptor::XOREncryptor() 
    : XOREncryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor::ctor()
{
    super::ctor();
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor::confirmPassword(::java::lang::String* password)
{
    auto keyComp = ::org::apache::poi::poifs::crypt::CryptoFunctions::createXorKey1(password);
    auto verifierComp = ::org::apache::poi::poifs::crypt::CryptoFunctions::createXorVerifier1(password);
    auto xorArray_ = ::org::apache::poi::poifs::crypt::CryptoFunctions::createXorArray1(password);
    auto shortBuf = new ::int8_tArray(int32_t(2));
    auto ver = java_cast< XOREncryptionVerifier* >(npc(getEncryptionInfo())->getVerifier());
    ::org::apache::poi::util::LittleEndian::putUShort(shortBuf, 0, keyComp);
    npc(ver)->setEncryptedKey(shortBuf);
    ::org::apache::poi::util::LittleEndian::putUShort(shortBuf, 0, verifierComp);
    npc(ver)->setEncryptedVerifier(shortBuf);
    setSecretKey(new ::javax::crypto::spec::SecretKeySpec(xorArray_, u"XOR"_j));
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor::confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt)
{
    confirmPassword(password);
}

java::io::OutputStream* org::apache::poi::poifs::crypt::xor_::XOREncryptor::getDataStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    return new XOREncryptor_XORCipherOutputStream(this, dir);
}

org::apache::poi::poifs::crypt::xor_::XOREncryptor_XORCipherOutputStream* org::apache::poi::poifs::crypt::xor_::XOREncryptor::getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */
{
    return new XOREncryptor_XORCipherOutputStream(this, stream, initialOffset);
}

int32_t org::apache::poi::poifs::crypt::xor_::XOREncryptor::getKeySizeInBytes()
{
    return -int32_t(1);
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor::setChunkSize(int32_t chunkSize)
{
}

void org::apache::poi::poifs::crypt::xor_::XOREncryptor::createEncryptionInfoEntry(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
}

org::apache::poi::poifs::crypt::xor_::XOREncryptor* org::apache::poi::poifs::crypt::xor_::XOREncryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< XOREncryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XOREncryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.xor.XOREncryptor", 43);
    return c;
}

java::io::OutputStream* org::apache::poi::poifs::crypt::xor_::XOREncryptor::getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* org::apache::poi::poifs::crypt::xor_::XOREncryptor::getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* org::apache::poi::poifs::crypt::xor_::XOREncryptor::getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* org::apache::poi::poifs::crypt::xor_::XOREncryptor::getClass0()
{
    return class_();
}

