// Generated from /POI/java/org/apache/poi/poifs/crypt/CipherAlgorithm.java
#include <org/apache/poi/poifs/crypt/CipherAlgorithm.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
#include <org/apache/poi/poifs/crypt/CipherProvider.hpp>
#include <Array.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

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
typedef ::SubArray< ::org::apache::poi::poifs::crypt::CipherAlgorithm, ::java::lang::EnumArray > CipherAlgorithmArray;
                } // crypt
            } // poifs
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::poifs::crypt::CipherAlgorithm::CipherAlgorithm(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::CipherAlgorithm::CipherAlgorithm(::java::lang::String* name, int ordinal, CipherProvider* provider, ::java::lang::String* jceId, int32_t ecmaId, int32_t defaultKeySize, ::int32_tArray* allowedKeySize, int32_t blockSize, int32_t encryptedVerifierHashLength, ::java::lang::String* xmlId, bool needsBouncyCastle) 
    : CipherAlgorithm(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, provider,jceId,ecmaId,defaultKeySize,allowedKeySize,blockSize,encryptedVerifierHashLength,xmlId,needsBouncyCastle);
}

org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::rc4 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"rc4"_j, 0, CipherProvider::rc4, u"RC4"_j, int32_t(26625), int32_t(64), new ::int32_tArray({
    int32_t(40)
    , int32_t(48)
    , int32_t(56)
    , int32_t(64)
    , int32_t(72)
    , int32_t(80)
    , int32_t(88)
    , int32_t(96)
    , int32_t(104)
    , int32_t(112)
    , int32_t(120)
    , int32_t(128)
}), -int32_t(1), int32_t(20), u"RC4"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::aes128 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"aes128"_j, 1, CipherProvider::aes, u"AES"_j, int32_t(26126), int32_t(128), new ::int32_tArray({int32_t(128)}), int32_t(16), int32_t(32), u"AES"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::aes192 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"aes192"_j, 2, CipherProvider::aes, u"AES"_j, int32_t(26127), int32_t(192), new ::int32_tArray({int32_t(192)}), int32_t(16), int32_t(32), u"AES"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::aes256 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"aes256"_j, 3, CipherProvider::aes, u"AES"_j, int32_t(26128), int32_t(256), new ::int32_tArray({int32_t(256)}), int32_t(16), int32_t(32), u"AES"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::rc2 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"rc2"_j, 4, nullptr, u"RC2"_j, -int32_t(1), int32_t(128), new ::int32_tArray({
    int32_t(40)
    , int32_t(48)
    , int32_t(56)
    , int32_t(64)
    , int32_t(72)
    , int32_t(80)
    , int32_t(88)
    , int32_t(96)
    , int32_t(104)
    , int32_t(112)
    , int32_t(120)
    , int32_t(128)
}), int32_t(8), int32_t(20), u"RC2"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::des = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"des"_j, 5, nullptr, u"DES"_j, -int32_t(1), int32_t(64), new ::int32_tArray({int32_t(64)}), int32_t(8), int32_t(32), u"DES"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::des3 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"des3"_j, 6, nullptr, u"DESede"_j, -int32_t(1), int32_t(192), new ::int32_tArray({int32_t(192)}), int32_t(8), int32_t(32), u"3DES"_j, false);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::des3_112 = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"des3_112"_j, 7, nullptr, u"DESede"_j, -int32_t(1), int32_t(128), new ::int32_tArray({int32_t(128)}), int32_t(8), int32_t(32), u"3DES_112"_j, true);
org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::rsa = new ::org::apache::poi::poifs::crypt::CipherAlgorithm(u"rsa"_j, 8, nullptr, u"RSA"_j, -int32_t(1), int32_t(1024), new ::int32_tArray({
    int32_t(1024)
    , int32_t(2048)
    , int32_t(3072)
    , int32_t(4096)
}), -int32_t(1), -int32_t(1), u""_j, false);
void org::apache::poi::poifs::crypt::CipherAlgorithm::ctor(::java::lang::String* name, int ordinal, CipherProvider* provider, ::java::lang::String* jceId, int32_t ecmaId, int32_t defaultKeySize, ::int32_tArray* allowedKeySize, int32_t blockSize, int32_t encryptedVerifierHashLength, ::java::lang::String* xmlId, bool needsBouncyCastle)
{
    super::ctor(name, ordinal);
    this->provider = provider;
    this->jceId = jceId;
    this->ecmaId = ecmaId;
    this->defaultKeySize = defaultKeySize;
    this->allowedKeySize = npc(allowedKeySize)->clone();
    this->blockSize = blockSize;
    this->encryptedVerifierHashLength = encryptedVerifierHashLength;
    this->xmlId = xmlId;
    this->needsBouncyCastle = needsBouncyCastle;
}

org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::fromEcmaId(int32_t ecmaId)
{
    clinit();
    for(auto ca : *npc(CipherAlgorithm::values())) {
        if(npc(ca)->ecmaId == ecmaId)
            return ca;

    }
    throw new ::org::apache::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"cipher algorithm "_j)->append(ecmaId)
        ->append(u" not found"_j)->toString());
}

org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::fromXmlId(::java::lang::String* xmlId, int32_t keySize)
{
    clinit();
    for(auto ca : *npc(CipherAlgorithm::values())) {
        if(!npc(npc(ca)->xmlId)->equals(static_cast< ::java::lang::Object* >(xmlId)))
            continue;

        for(auto ks : *npc(npc(ca)->allowedKeySize)) {
            if(ks == keySize)
                return ca;

        }
    }
    throw new ::org::apache::poi::EncryptedDocumentException(::java::lang::StringBuilder().append(u"cipher algorithm "_j)->append(xmlId)
        ->append(u"/"_j)
        ->append(keySize)
        ->append(u" not found"_j)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::CipherAlgorithm::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.CipherAlgorithm", 42);
    return c;
}

org::apache::poi::poifs::crypt::CipherAlgorithm* org::apache::poi::poifs::crypt::CipherAlgorithm::valueOf(::java::lang::String* a0)
{
    if(aes128->toString()->equals(a0))
        return aes128;
    if(aes192->toString()->equals(a0))
        return aes192;
    if(aes256->toString()->equals(a0))
        return aes256;
    if(des->toString()->equals(a0))
        return des;
    if(des3->toString()->equals(a0))
        return des3;
    if(des3_112->toString()->equals(a0))
        return des3_112;
    if(rc2->toString()->equals(a0))
        return rc2;
    if(rc4->toString()->equals(a0))
        return rc4;
    if(rsa->toString()->equals(a0))
        return rsa;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::poifs::crypt::CipherAlgorithmArray* org::apache::poi::poifs::crypt::CipherAlgorithm::values()
{
    return new org::apache::poi::poifs::crypt::CipherAlgorithmArray({
        aes128,
        aes192,
        aes256,
        des,
        des3,
        des3_112,
        rc2,
        rc4,
        rsa,
    });
}

java::lang::Class* org::apache::poi::poifs::crypt::CipherAlgorithm::getClass0()
{
    return class_();
}

