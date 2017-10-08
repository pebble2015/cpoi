// Generated from /POI/java/org/apache/poi/poifs/crypt/standard/StandardEncryptionInfoBuilder.java
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionInfoBuilder.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/EncryptionInfo.hpp>
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardDecryptor.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionHeader.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptionVerifier.hpp>
#include <org/apache/poi/poifs/crypt/standard/StandardEncryptor.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::standard::StandardEncryptionInfoBuilder::StandardEncryptionInfoBuilder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::standard::StandardEncryptionInfoBuilder::StandardEncryptionInfoBuilder()
    : StandardEncryptionInfoBuilder(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::poifs::crypt::standard::StandardEncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::util::LittleEndianInput* dis) /* throws(IOException) */
{
    npc(dis)->readInt();
    auto header = new StandardEncryptionHeader(dis);
    npc(info)->setHeader(header);
    npc(info)->setVerifier(new StandardEncryptionVerifier(dis, header));
    if(npc(info)->getVersionMinor() == 2 && (npc(info)->getVersionMajor() == 3 || npc(info)->getVersionMajor() == 4)) {
        auto dec = new StandardDecryptor();
        npc(dec)->setEncryptionInfo(info);
        npc(info)->setDecryptor(dec);
    }
}

void poi::poifs::crypt::standard::StandardEncryptionInfoBuilder::initialize(::poi::poifs::crypt::EncryptionInfo* info, ::poi::poifs::crypt::CipherAlgorithm* cipherAlgorithm, ::poi::poifs::crypt::HashAlgorithm* hashAlgorithm, int32_t keyBits, int32_t blockSize, ::poi::poifs::crypt::ChainingMode* chainingMode)
{
    if(cipherAlgorithm == nullptr) {
        cipherAlgorithm = ::poi::poifs::crypt::CipherAlgorithm::aes128;
    }
    if(cipherAlgorithm != ::poi::poifs::crypt::CipherAlgorithm::aes128 && cipherAlgorithm != ::poi::poifs::crypt::CipherAlgorithm::aes192 && cipherAlgorithm != ::poi::poifs::crypt::CipherAlgorithm::aes256) {
        throw new ::poi::EncryptedDocumentException(u"Standard encryption only supports AES128/192/256."_j);
    }
    if(hashAlgorithm == nullptr) {
        hashAlgorithm = ::poi::poifs::crypt::HashAlgorithm::sha1;
    }
    if(hashAlgorithm != ::poi::poifs::crypt::HashAlgorithm::sha1) {
        throw new ::poi::EncryptedDocumentException(u"Standard encryption only supports SHA-1."_j);
    }
    if(chainingMode == nullptr) {
        chainingMode = ::poi::poifs::crypt::ChainingMode::ecb;
    }
    if(chainingMode != ::poi::poifs::crypt::ChainingMode::ecb) {
        throw new ::poi::EncryptedDocumentException(u"Standard encryption only supports ECB chaining."_j);
    }
    if(keyBits == -int32_t(1)) {
        keyBits = npc(cipherAlgorithm)->defaultKeySize;
    }
    if(blockSize == -int32_t(1)) {
        blockSize = npc(cipherAlgorithm)->blockSize;
    }
    auto found = false;
    for(auto ks : *npc(npc(cipherAlgorithm)->allowedKeySize)) {
        found |= (ks == keyBits);
    }
    if(!found) {
        throw new ::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"KeySize "_j)->append(keyBits)
            ->append(u" not allowed for Cipher "_j)
            ->append(static_cast< ::java::lang::Object* >(cipherAlgorithm))->toString());
    }
    npc(info)->setHeader(new StandardEncryptionHeader(cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode));
    npc(info)->setVerifier(new StandardEncryptionVerifier(cipherAlgorithm, hashAlgorithm, keyBits, blockSize, chainingMode));
    auto dec = new StandardDecryptor();
    npc(dec)->setEncryptionInfo(info);
    npc(info)->setDecryptor(dec);
    auto enc = new StandardEncryptor();
    npc(enc)->setEncryptionInfo(info);
    npc(info)->setEncryptor(enc);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptionInfoBuilder::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.standard.StandardEncryptionInfoBuilder", 65);
    return c;
}

java::lang::Class* poi::poifs::crypt::standard::StandardEncryptionInfoBuilder::getClass0()
{
    return class_();
}

