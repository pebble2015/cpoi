// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/EOFException.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
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
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor_CryptoAPICipherInputStream.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor_StreamDescriptorEntry.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentNode.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/POIFSFileSystem.hpp>
#include <org/apache/poi/util/BoundedInputStream.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianInputStream.hpp>
#include <org/apache/poi/util/StringUtil.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace poifs
            {
                namespace crypt
                {
                    namespace cryptoapi
                    {
typedef ::SubArray< ::org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor_StreamDescriptorEntry, ::java::lang::ObjectArray > CryptoAPIDecryptor_StreamDescriptorEntryArray;
                    } // cryptoapi
                } // crypt
            } // poifs
        } // poi
    } // apache
} // org

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::CryptoAPIDecryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::CryptoAPIDecryptor() 
    : CryptoAPIDecryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::init()
{
    length = -int64_t(1LL);
    chunkSize = -int32_t(1);
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::ctor()
{
    super::ctor();
    init();
}

bool org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::verifyPassword(::java::lang::String* password)
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
        auto hashAlg = ::org::apache::poi::poifs::crypt::CryptoFunctions::getMessageDigest(hashAlgo);
        auto calcVerifierHash = npc(hashAlg)->digest(verifier);
        if(::java::util::Arrays::equals(calcVerifierHash, verifierHash)) {
            setSecretKey(skey);
            return true;
        }
    } catch (::java::security::GeneralSecurityException* e) {
        throw new ::org::apache::poi::EncryptedDocumentException(static_cast< ::java::lang::Throwable* >(e));
    }
    return false;
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */
{
    auto ei = getEncryptionInfo();
    auto sk = getSecretKey();
    return initCipherForBlock(cipher, block, ei, sk, ::javax::crypto::Cipher::DECRYPT_MODE);
}

javax::crypto::Cipher* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block, ::org::apache::poi::poifs::crypt::EncryptionInfo* encryptionInfo, ::javax::crypto::SecretKey* skey, int32_t encryptMode) /* throws(GeneralSecurityException) */
{
    clinit();
    auto ver = npc(encryptionInfo)->getVerifier();
    auto hashAlgo = npc(ver)->getHashAlgorithm();
    auto blockKey = new ::int8_tArray(int32_t(4));
    ::org::apache::poi::util::LittleEndian::putUInt(blockKey, 0, block);
    auto hashAlg = ::org::apache::poi::poifs::crypt::CryptoFunctions::getMessageDigest(hashAlgo);
    npc(hashAlg)->update(npc(skey)->getEncoded());
    auto encKey = npc(hashAlg)->digest(blockKey);
    auto header = npc(encryptionInfo)->getHeader();
    auto keyBits = npc(header)->getKeySize();
    encKey = ::org::apache::poi::poifs::crypt::CryptoFunctions::getBlock0(encKey, keyBits / int32_t(8));
    if(keyBits == 40) {
        encKey = ::org::apache::poi::poifs::crypt::CryptoFunctions::getBlock0(encKey, 16);
    }
    ::javax::crypto::SecretKey* key = new ::javax::crypto::spec::SecretKeySpec(encKey, npc(skey)->getAlgorithm());
    if(cipher == nullptr) {
        cipher = ::org::apache::poi::poifs::crypt::CryptoFunctions::getCipher(key, npc(header)->getCipherAlgorithm(), nullptr, nullptr, encryptMode);
    } else {
        npc(cipher)->init_(encryptMode, static_cast< ::java::security::Key* >(key));
    }
    return cipher;
}

javax::crypto::SecretKey* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::generateSecretKey(::java::lang::String* password, ::org::apache::poi::poifs::crypt::EncryptionVerifier* ver)
{
    clinit();
    if(npc(password)->length() > 255) {
        password = npc(password)->substring(0, 255);
    }
    auto hashAlgo = npc(ver)->getHashAlgorithm();
    auto hashAlg = ::org::apache::poi::poifs::crypt::CryptoFunctions::getMessageDigest(hashAlgo);
    npc(hashAlg)->update(npc(ver)->getSalt());
    auto hash = npc(hashAlg)->digest(::org::apache::poi::util::StringUtil::getToUnicodeLE(password));
    ::javax::crypto::SecretKey* skey = new ::javax::crypto::spec::SecretKeySpec(hash, npc(npc(ver)->getCipherAlgorithm())->jceId);
    return skey;
}

org::apache::poi::poifs::crypt::ChunkedCipherInputStream* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    throw new ::java::io::IOException(u"not supported"_j);
}

org::apache::poi::poifs::crypt::ChunkedCipherInputStream* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getDataStream(::java::io::InputStream* stream, int32_t size, int32_t initialPos) /* throws(IOException, GeneralSecurityException) */
{
    return new CryptoAPIDecryptor_CryptoAPICipherInputStream(this, stream, size, initialPos);
}

org::apache::poi::poifs::filesystem::POIFSFileSystem* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getSummaryEntries(::org::apache::poi::poifs::filesystem::DirectoryNode* root, ::java::lang::String* encryptedStream) /* throws(IOException, GeneralSecurityException) */
{
    auto es = java_cast< ::org::apache::poi::poifs::filesystem::DocumentNode* >(npc(root)->getEntry(encryptedStream));
    auto dis = npc(root)->createDocumentInputStream(static_cast< ::org::apache::poi::poifs::filesystem::Entry* >(es));
    auto bos = new ::java::io::ByteArrayOutputStream();
    ::org::apache::poi::util::IOUtils::copy(dis, bos);
    npc(dis)->close();
    auto sbis = new CryptoAPIDocumentInputStream(this, npc(bos)->toByteArray_());
    auto leis = new ::org::apache::poi::util::LittleEndianInputStream(sbis);
    ::org::apache::poi::poifs::filesystem::POIFSFileSystem* fsOut = nullptr;
    {
        auto finally0 = finally([&] {
            ::org::apache::poi::util::IOUtils::closeQuietly(leis);
            ::org::apache::poi::util::IOUtils::closeQuietly(sbis);
        });
        try {
            auto streamDescriptorArrayOffset = static_cast< int32_t >(npc(leis)->readUInt());
            npc(leis)->readUInt();
            auto skipN = streamDescriptorArrayOffset - int64_t(8LL);
            if(npc(sbis)->skip(skipN) < skipN) {
                throw new ::java::io::EOFException(u"buffer underrun"_j);
            }
            npc(sbis)->setBlock(0);
            auto encryptedStreamDescriptorCount = static_cast< int32_t >(npc(leis)->readUInt());
            auto entries = new CryptoAPIDecryptor_StreamDescriptorEntryArray(encryptedStreamDescriptorCount);
            for (auto i = int32_t(0); i < encryptedStreamDescriptorCount; i++) {
                auto entry = new CryptoAPIDecryptor_StreamDescriptorEntry();
                entries->set(i, entry);
                npc(entry)->streamOffset = static_cast< int32_t >(npc(leis)->readUInt());
                npc(entry)->streamSize = static_cast< int32_t >(npc(leis)->readUInt());
                npc(entry)->block = npc(leis)->readUShort();
                auto nameSize = npc(leis)->readUByte();
                npc(entry)->flags = npc(leis)->readUByte();
                npc(entry)->reserved2 = npc(leis)->readInt();
                npc(entry)->streamName = ::org::apache::poi::util::StringUtil::readUnicodeLE(leis, nameSize);
                npc(leis)->readShort();
                /* assert((npc(npc(entry)->streamName)->length() == nameSize)) */ ;
            }
            fsOut = new ::org::apache::poi::poifs::filesystem::POIFSFileSystem();
            for(auto entry : *npc(entries)) {
                npc(sbis)->seek(npc(entry)->streamOffset);
                npc(sbis)->setBlock(npc(entry)->block);
                ::java::io::InputStream* is = new ::org::apache::poi::util::BoundedInputStream(sbis, npc(entry)->streamSize);
                npc(fsOut)->createDocument(is, npc(entry)->streamName);
                npc(is)->close();
            }
        } catch (::java::lang::Exception* e) {
            ::org::apache::poi::util::IOUtils::closeQuietly(fsOut);
            if(dynamic_cast< ::java::security::GeneralSecurityException* >(e) != nullptr) {
                throw java_cast< ::java::security::GeneralSecurityException* >(e);
            } else if(dynamic_cast< ::java::io::IOException* >(e) != nullptr) {
                throw java_cast< ::java::io::IOException* >(e);
            } else {
                throw new ::java::io::IOException(u"summary entries can't be read"_j, e);
            }
        }
    }
    return fsOut;
}

int64_t org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getLength()
{
    if(length == -int64_t(1LL)) {
        throw new ::java::lang::IllegalStateException(u"Decryptor.getDataStream() was not called"_j);
    }
    return length;
}

void org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::setChunkSize(int32_t chunkSize)
{
    this->chunkSize = chunkSize;
}

org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< CryptoAPIDecryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIDecryptor", 55);
    return c;
}

java::io::InputStream* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::InputStream* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getDataStream(::org::apache::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* org::apache::poi::poifs::crypt::cryptoapi::CryptoAPIDecryptor::getClass0()
{
    return class_();
}

