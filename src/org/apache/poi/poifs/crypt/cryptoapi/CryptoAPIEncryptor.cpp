// Generated from /POI/java/org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.java
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor.hpp>

#include <java/io/ByteArrayInputStream.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/MessageDigest.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
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
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor_StreamDescriptorEntry.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIDocumentOutputStream.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor_createEncryptionInfoEntry_1.hpp>
#include <org/apache/poi/poifs/crypt/cryptoapi/CryptoAPIEncryptor_CryptoAPICipherOutputStream.hpp>
#include <org/apache/poi/poifs/filesystem/DirectoryNode.hpp>
#include <org/apache/poi/poifs/filesystem/DocumentInputStream.hpp>
#include <org/apache/poi/poifs/filesystem/Entry.hpp>
#include <org/apache/poi/poifs/filesystem/NPOIFSFileSystem.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/IOUtils.hpp>
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

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::CryptoAPIEncryptor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::CryptoAPIEncryptor() 
    : CryptoAPIEncryptor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::init()
{
    chunkSize = int32_t(512);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::ctor()
{
    super::ctor();
    init();
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::confirmPassword(::java::lang::String* password)
{
    ::java::util::Random* r = new ::java::security::SecureRandom();
    auto salt = new ::int8_tArray(int32_t(16));
    auto verifier = new ::int8_tArray(int32_t(16));
    npc(r)->nextBytes(salt);
    npc(r)->nextBytes(verifier);
    confirmPassword(password, static_cast< ::int8_tArray* >(nullptr), static_cast< ::int8_tArray* >(nullptr), verifier, salt, static_cast< ::int8_tArray* >(nullptr));
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::confirmPassword(::java::lang::String* password, ::int8_tArray* keySpec, ::int8_tArray* keySalt, ::int8_tArray* verifier, ::int8_tArray* verifierSalt, ::int8_tArray* integritySalt)
{
    /* assert((verifier != nullptr && verifierSalt != nullptr)) */ ;
    auto ver = java_cast< CryptoAPIEncryptionVerifier* >(npc(getEncryptionInfo())->getVerifier());
    npc(ver)->setSalt(verifierSalt);
    auto skey = CryptoAPIDecryptor::generateSecretKey(password, ver);
    setSecretKey(skey);
    try {
        auto cipher = initCipherForBlock(nullptr, 0);
        auto encryptedVerifier = new ::int8_tArray(npc(verifier)->length);
        npc(cipher)->update(verifier, 0, npc(verifier)->length, encryptedVerifier);
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

javax::crypto::Cipher* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::initCipherForBlock(::javax::crypto::Cipher* cipher, int32_t block) /* throws(GeneralSecurityException) */
{
    return CryptoAPIDecryptor::initCipherForBlock(cipher, block, getEncryptionInfo(), getSecretKey(), ::javax::crypto::Cipher::ENCRYPT_MODE);
}

poi::poifs::crypt::ChunkedCipherOutputStream* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getDataStream(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException, GeneralSecurityException) */
{
    throw new ::java::io::IOException(u"not supported"_j);
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor_CryptoAPICipherOutputStream* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getDataStream(::java::io::OutputStream* stream, int32_t initialOffset) /* throws(IOException, GeneralSecurityException) */
{
    return new CryptoAPIEncryptor_CryptoAPICipherOutputStream(this, stream);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::setSummaryEntries(::poi::poifs::filesystem::DirectoryNode* dir, ::java::lang::String* encryptedStream, ::poi::poifs::filesystem::NPOIFSFileSystem* entries) /* throws(IOException, GeneralSecurityException) */
{
    auto bos = new CryptoAPIDocumentOutputStream(this);
    auto buf = new ::int8_tArray(int32_t(8));
    npc(bos)->write(buf, int32_t(0), int32_t(8));
    ::java::util::List* descList = new ::java::util::ArrayList();
    auto block = int32_t(0);
    for (auto _i = npc(npc(entries)->getRoot())->iterator(); _i->hasNext(); ) {
        ::poi::poifs::filesystem::Entry* entry = java_cast< ::poi::poifs::filesystem::Entry* >(_i->next());
        {
            if(npc(entry)->isDirectoryEntry()) {
                continue;
            }
            auto descEntry = new CryptoAPIDecryptor_StreamDescriptorEntry();
            npc(descEntry)->block = block;
            npc(descEntry)->streamOffset = npc(bos)->size();
            npc(descEntry)->streamName = npc(entry)->getName();
            npc(descEntry)->flags = npc(CryptoAPIDecryptor_StreamDescriptorEntry::flagStream())->setValue(0, 1);
            npc(descEntry)->reserved2 = 0;
            npc(bos)->setBlock(block);
            auto dis = npc(dir)->createDocumentInputStream(entry);
            ::poi::util::IOUtils::copy(dis, bos);
            npc(dis)->close();
            npc(descEntry)->streamSize = npc(bos)->size() - npc(descEntry)->streamOffset;
            npc(descList)->add(static_cast< ::java::lang::Object* >(descEntry));
            block++;
        }
    }
    auto streamDescriptorArrayOffset = npc(bos)->size();
    npc(bos)->setBlock(0);
    ::poi::util::LittleEndian::putUInt(buf, 0, npc(descList)->size());
    npc(bos)->write(buf, int32_t(0), int32_t(4));
    for (auto _i = npc(descList)->iterator(); _i->hasNext(); ) {
        CryptoAPIDecryptor_StreamDescriptorEntry* sde = java_cast< CryptoAPIDecryptor_StreamDescriptorEntry* >(_i->next());
        {
            ::poi::util::LittleEndian::putUInt(buf, 0, npc(sde)->streamOffset);
            npc(bos)->write(buf, int32_t(0), int32_t(4));
            ::poi::util::LittleEndian::putUInt(buf, 0, npc(sde)->streamSize);
            npc(bos)->write(buf, int32_t(0), int32_t(4));
            ::poi::util::LittleEndian::putUShort(buf, 0, npc(sde)->block);
            npc(bos)->write(buf, int32_t(0), int32_t(2));
            ::poi::util::LittleEndian::putUByte(buf, 0, static_cast< int16_t >(npc(npc(sde)->streamName)->length()));
            npc(bos)->write(buf, int32_t(0), int32_t(1));
            ::poi::util::LittleEndian::putUByte(buf, 0, static_cast< int16_t >(npc(sde)->flags));
            npc(bos)->write(buf, int32_t(0), int32_t(1));
            ::poi::util::LittleEndian::putUInt(buf, 0, npc(sde)->reserved2);
            npc(bos)->write(buf, int32_t(0), int32_t(4));
            auto nameBytes = ::poi::util::StringUtil::getToUnicodeLE(npc(sde)->streamName);
            npc(bos)->write(nameBytes, int32_t(0), npc(nameBytes)->length);
            ::poi::util::LittleEndian::putShort(buf, 0, static_cast< int16_t >(int32_t(0)));
            npc(bos)->write(buf, int32_t(0), int32_t(2));
        }
    }
    auto savedSize = npc(bos)->size();
    auto streamDescriptorArraySize = savedSize - streamDescriptorArrayOffset;
    ::poi::util::LittleEndian::putUInt(buf, 0, streamDescriptorArrayOffset);
    ::poi::util::LittleEndian::putUInt(buf, 4, streamDescriptorArraySize);
    npc(bos)->reset();
    npc(bos)->setBlock(0);
    npc(bos)->write(buf, int32_t(0), int32_t(8));
    npc(bos)->setSize(savedSize);
    npc(dir)->createDocument(encryptedStream, static_cast< ::java::io::InputStream* >(new ::java::io::ByteArrayInputStream(npc(bos)->getBuf(), int32_t(0), savedSize)));
}

int32_t poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getKeySizeInBytes()
{
    return npc(npc(getEncryptionInfo())->getHeader())->getKeySize() / int32_t(8);
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::setChunkSize(int32_t chunkSize)
{
    this->chunkSize = chunkSize;
}

void poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::createEncryptionInfoEntry(::poi::poifs::filesystem::DirectoryNode* dir) /* throws(IOException) */
{
    ::poi::poifs::crypt::DataSpaceMapUtils::addDefaultDataSpace(dir);
    auto const info = getEncryptionInfo();
    auto const header = java_cast< CryptoAPIEncryptionHeader* >(npc(getEncryptionInfo())->getHeader());
    auto const verifier = java_cast< CryptoAPIEncryptionVerifier* >(npc(getEncryptionInfo())->getVerifier());
    ::poi::poifs::crypt::standard::EncryptionRecord* er = new CryptoAPIEncryptor_createEncryptionInfoEntry_1(this, info, header, verifier);
    ::poi::poifs::crypt::DataSpaceMapUtils::createEncryptionEntry(dir, u"EncryptionInfo"_j, er);
}

poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::clone() /* throws(CloneNotSupportedException) */
{
    return java_cast< CryptoAPIEncryptor* >(super::clone());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIEncryptor", 55);
    return c;
}

java::io::OutputStream* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getDataStream(::poi::poifs::filesystem::NPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getDataStream(::poi::poifs::filesystem::OPOIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::io::OutputStream* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getDataStream(::poi::poifs::filesystem::POIFSFileSystem* fs)
{
    return super::getDataStream(fs);
}

java::lang::Class* poi::poifs::crypt::cryptoapi::CryptoAPIEncryptor::getClass0()
{
    return class_();
}

