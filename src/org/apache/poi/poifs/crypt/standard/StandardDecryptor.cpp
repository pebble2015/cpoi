// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardDecryptor.java
#include <org/apache/poi/poifs/crypt/standard/StandardDecryptor.hpp>

#include <java/io/InputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/MessageDigest.hpp>
#include <java/util/Arrays.hpp>
#include <javax/crypto/Cipher.hpp>
#include <javax/crypto/CipherInputStream.hpp>
#include <javax/crypto/SecretKey.hpp>
#include <javax/crypto/spec/SecretKeySpec.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/CryptoFunctions.hpp>
#include <org/apache/poi/poifs/crypt/Decryptor.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/util/BoundedInputStream.hpp>
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

org::apache::poi::poifs::crypt::standard::StandardDecryptor::StandardDecryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::standard::StandardDecryptor::StandardDecryptor() 
    : StandardDecryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::crypt::standard::StandardDecryptor::init()
{
    _length = -int32_t(1);
}

void org::apache::poi::poifs::crypt::standard::StandardDecryptor::ctor()
{
    super::ctor();
    init();
}

bool org::apache::poi::poifs::crypt::standard::StandardDecryptor::verifyPassword(::java::lang::String* password)
{
    auto ver = npc(getEncryptionInfo())->getVerifier();
    auto skey = generateSecretKey(password, ver, getKeySizeInBytes());
    auto cipher = getCipher(skey);
    try {
        auto encryptedVerifier = npc(ver)->getEncryptedVerifier();
        auto verifier = npc(cipher)->doFinal(encryptedVerifier);
        setVerifier(verifier);
        auto sha1 = ::org::apache::poi::poifs::crypt::CryptoFunctions::getMessageDigest(npc(ver)->getHashAlgorithm());
        auto calcVerifierHash = npc(sha1)->digest(verifier);
        auto encryptedVerifierHash = npc(ver)->getEncryptedVerifierHash();
        auto decryptedVerifierHash = npc(cipher)->doFinal(encryptedVerifierHash);
        auto verifierHash = ::java::util::Arrays::copyOf(decryptedVerifierHash, npc(calcVerifierHash)->length);
        if(::java::util::Arrays::equals(calcVerifierHash, verifierHash)) {
            setSecretKey(skey);
            return true;
        } else {
            return false;
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
}

javax::crypto::SecretKey* org::apache::poi::poifs::crypt::standard::StandardDecryptor::generateSecretKey(::java::lang::String* password, ::org::apache::poi::poifs::crypt::EncryptionVerifier* ver, int32_t keySize)
{
    clinit();
    auto hashAlgo = npc(ver)->getHashAlgorithm();
    auto pwHash = ::org::apache::poi::poifs::crypt::CryptoFunctions::hashPassword(password, hashAlgo, npc(ver)->getSalt(), npc(ver)->getSpinCount());
    auto blockKey = new ::int8_tArray(int32_t(4));
    ::org::apache::poi::util::LittleEndian::putInt(blockKey, 0, 0);
    auto finalHash = ::org::apache::poi::poifs::crypt::CryptoFunctions::generateKey(pwHash, hashAlgo, blockKey, npc(hashAlgo)->hashSize);
    auto x1 = fillAndXor(finalHash, static_cast< int8_t >(int32_t(54)));
    auto x2 = fillAndXor(finalHash, static_cast< int8_t >(int32_t(92)));
    auto x3 = new ::int8_tArray(npc(x1)->length + npc(x2)->length);
    ::java::lang::System::arraycopy(x1, 0, x3, 0, npc(x1)->length);
    ::java::lang::System::arraycopy(x2, 0, x3, npc(x1)->length, npc(x2)->length);
    auto key = ::java::util::Arrays::copyOf(x3, keySize);
    ::javax::crypto::SecretKey* skey = new ::javax::crypto::spec::SecretKeySpec(key, npc(npc(ver)->getCipherAlgorithm())->jceId);
    return skey;
}

int8_tArray* org::apache::poi::poifs::crypt::standard::StandardDecryptor::fillAndXor(::int8_tArray* hash, int8_t fillByte)
{
    clinit();
    auto buff = new ::int8_tArray(int32_t(64));
    ::java::util::Arrays::fill(buff, fillByte);
    for (auto i = int32_t(0); i < npc(hash)->length; i++) {
        (*buff)[i] = static_cast< int8_t >(((*buff)[i] ^ (*hash)[i]));
    }
    auto sha1 = ::org::apache::poi::poifs::crypt::CryptoFunctions::getMessageDigest(::org::apache::poi::poifs::crypt::HashAlgorithm::sha1);
    return npc(sha1)->digest(buff);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getCipher(::javax::crypto::SecretKey* key)
{
    auto em = npc(getEncryptionInfo())->getHeader();
    auto cm = npc(em)->getChainingMode();
    /* assert((cm == ::org::apache::poi::poifs::crypt::ChainingMode::ecb)) */ ;
    return ::org::apache::poi::poifs::crypt::CryptoFunctions::getCipher(key, npc(em)->getCipherAlgorithm(), cm, nullptr, ::javax::crypto::Cipher::DECRYPT_MODE);
}

java::io::InputStream* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    auto dis = npc(dir)->createDocumentInputStream(DEFAULT_POIFS_ENTRY());
    _length = npc(dis)->readLong();
    if(getSecretKey() == nullptr) {
        verifyPassword(static_cast< ::java::lang::String* >(nullptr));
    }
    auto blockSize = npc(npc(npc(getEncryptionInfo())->getHeader())->getCipherAlgorithm())->blockSize;
    auto cipherLen = (_length / blockSize + int32_t(1)) * blockSize;
    auto cipher = getCipher(getSecretKey());
    ::java::io::InputStream* boundedDis = new ::org::apache::poi::util::BoundedInputStream(dis, cipherLen);
    return new ::org::apache::poi::util::BoundedInputStream(new ::javax::crypto::CipherInputStream(boundedDis, cipher), _length);
}

int64_t org::apache::poi::poifs::crypt::standard::StandardDecryptor::getLength()
{
    if(_length == -int32_t(1)) {
        throw new ::java::lang::IllegalStateException(u"Decryptor.getDataStream() was not called"_j);
    }
    return _length;
}

org::apache::poi::poifs::crypt::standard::StandardDecryptor* org::apache::poi::poifs::crypt::standard::StandardDecryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< StandardDecryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::standard::StandardDecryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.standard.StandardDecryptor", 53);
    return c;
}

java::io::InputStream* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos)
{
    return super::getDataStream(stream, size, initialPos);
}

java::io::InputStream* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* org::apache::poi::poifs::crypt::standard::StandardDecryptor::getClass0()
{
    return class_();
}

