// Generated from /POI/java/org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.java
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/Key.hpp>
#include <java/security/MessageDigest.hpp>
#include <java/util/Arrays.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <javax/crypto/spec/SecretKeySpec.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/binaryrc4/BinaryRC4Decryptor_BinaryRC4CipherInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
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

poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::BinaryRC4Decryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::BinaryRC4Decryptor() 
    : BinaryRC4Decryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::init()
{
    length = -int64_t(1LL);
    chunkSize = int32_t(512);
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::ctor()
{
    super::ctor();
    init();
}

bool poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::verifyPassword(::java::lang::String* password)
{
    auto ver = npc(getEncryptionInfo())->getVerifier();
    auto skey = generateSecretKey(password, ver);
    try {
        auto cipher = initCipherForBlock(nullptr, 0, getEncryptionInfo(), skey, ::javax::crypto::Cipher::DECRYPT_MODE);
        auto encryptedVerifier = npc(ver)->getEncryptedVerifier();
        auto verifier = new ::int8_tArray(npc(encryptedVerifier)->length);
        npc(cipher)->update(encryptedVerifier, 0, npc(encryptedVerifier)->length, verifier);
        setVerifier(verifier);
        auto encryptedVerifierHash = npc(ver)->getEncryptedVerifierHash();
        auto verifierHash = npc(cipher)->doFinal(encryptedVerifierHash);
        auto hashAlgo = npc(ver)->getHashAlgorithm();
        auto hashAlg = ::poi::poifs::crypt::CryptoFunctions::getMessageDigest(hashAlgo);
        auto calcVerifierHash = npc(hashAlg)->digest(verifier);
        if(::java::util::Arrays::equals(calcVerifierHash, verifierHash)) {
            setSecretKey(skey);
            return true;
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
    return false;
}

javax::crypto::Cipher* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */
{
    return initCipherForBlock(cipher, block, getEncryptionInfo(), getSecretKey(), ::javax::crypto::Cipher::DECRYPT_MODE);
}

javax::crypto::Cipher* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, ::poi::poifs::crypt::EncryptionInfo* encryptionInfo, ::javax::crypto::SecretKey* skey, int32_t encryptMode) /* throws(GeneralSecurityException) */
{
    clinit();
    auto ver = npc(encryptionInfo)->getVerifier();
    auto hashAlgo = npc(ver)->getHashAlgorithm();
    auto blockKey = new ::int8_tArray(int32_t(4));
    ::poi::util::LittleEndian::putUInt(blockKey, 0, block);
    auto encKey = ::poi::poifs::crypt::CryptoFunctions::generateKey(npc(skey)->getEncoded(), hashAlgo, blockKey, 16);
    ::javax::crypto::SecretKey* key = new ::javax::crypto::spec::SecretKeySpec(encKey, npc(skey)->getAlgorithm());
    if(cipher == nullptr) {
        auto em = npc(encryptionInfo)->getHeader();
        cipher = ::poi::poifs::crypt::CryptoFunctions::getCipher(key, npc(em)->getCipherAlgorithm(), nullptr, nullptr, encryptMode);
    } else {
        npc(cipher)->init_(encryptMode, static_cast< ::java::security::Key* >(key));
    }
    return cipher;
}

javax::crypto::SecretKey* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::generateSecretKey(::java::lang::String* password, ::poi::poifs::crypt::EncryptionVerifier* ver)
{
    clinit();
    if(npc(password)->length() > 255) {
        password = npc(password)->substring(0, 255);
    }
    auto hashAlgo = npc(ver)->getHashAlgorithm();
    auto hashAlg = ::poi::poifs::crypt::CryptoFunctions::getMessageDigest(hashAlgo);
    auto hash = npc(hashAlg)->digest(::poi::util::StringUtil::getToUnicodeLE(password));
    auto salt = npc(ver)->getSalt();
    npc(hashAlg)->reset();
    for (auto i = int32_t(0); i < 16; i++) {
        npc(hashAlg)->update(hash, 0, 5);
        npc(hashAlg)->update(salt);
    }
    hash = new ::int8_tArray(int32_t(5));
    ::java::lang::System::arraycopy(npc(hashAlg)->digest(), 0, hash, 0, 5);
    ::javax::crypto::SecretKey* skey = new ::javax::crypto::spec::SecretKeySpec(hash, npc(npc(ver)->getCipherAlgorithm())->jceId);
    return skey;
}

poi::poifs::crypt::ChunkedCipherInputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    auto dis = npc(dir)->createDocumentInputStream(DEFAULT_POIFS_ENTRY());
    length = npc(dis)->readLong();
    return new BinaryRC4Decryptor_BinaryRC4CipherInputStream(this, dis, length);
}

java::io::InputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */
{
    return new BinaryRC4Decryptor_BinaryRC4CipherInputStream(this, stream, size, initialPos);
}

int64_t poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getLength()
{
    if(length == -int64_t(1LL)) {
        throw new ::java::lang::IllegalStateException(u"Decryptor.getDataStream() was not called"_j);
    }
    return length;
}

void poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::setChunkSize(int32_t chunkSize)
{
    this->chunkSize = chunkSize;
}

poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< BinaryRC4Decryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4Decryptor", 55);
    return c;
}

java::io::InputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* poi::poifs::crypt::binaryrc4::BinaryRC4Decryptor::getClass0()
{
    return class_();
}

