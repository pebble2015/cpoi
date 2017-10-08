// Generated from /POI/java/org/apache/poi/poifs/crypt/HashAlgorithm.java
#include <org/apache/poi/poifs/crypt/HashAlgorithm.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/EncryptedDocumentException.hpp>
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

namespace poi
{
    namespace poifs
    {
        namespace crypt
        {
typedef ::SubArray< ::poi::poifs::crypt::HashAlgorithm, ::java::lang::EnumArray > HashAlgorithmArray;
        } // crypt
    } // poifs
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::HashAlgorithm::HashAlgorithm(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::HashAlgorithm::HashAlgorithm(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* ecmaString, int32_t hashSize, ::java::lang::String* jceHmacId, bool needsBouncyCastle) 
    : HashAlgorithm(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, jceId,ecmaId,ecmaString,hashSize,jceHmacId,needsBouncyCastle);
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::none = new ::poi::poifs::crypt::HashAlgorithm(u"none"_j, 0, u""_j, int32_t(0), u""_j, int32_t(0), u""_j, false);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::sha1 = new ::poi::poifs::crypt::HashAlgorithm(u"sha1"_j, 1, u"SHA-1"_j, int32_t(32772), u"SHA1"_j, int32_t(20), u"HmacSHA1"_j, false);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::sha256 = new ::poi::poifs::crypt::HashAlgorithm(u"sha256"_j, 2, u"SHA-256"_j, int32_t(32780), u"SHA256"_j, int32_t(32), u"HmacSHA256"_j, false);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::sha384 = new ::poi::poifs::crypt::HashAlgorithm(u"sha384"_j, 3, u"SHA-384"_j, int32_t(32781), u"SHA384"_j, int32_t(48), u"HmacSHA384"_j, false);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::sha512 = new ::poi::poifs::crypt::HashAlgorithm(u"sha512"_j, 4, u"SHA-512"_j, int32_t(32782), u"SHA512"_j, int32_t(64), u"HmacSHA512"_j, false);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::md5 = new ::poi::poifs::crypt::HashAlgorithm(u"md5"_j, 5, u"MD5"_j, -int32_t(1), u"MD5"_j, int32_t(16), u"HmacMD5"_j, false);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::md2 = new ::poi::poifs::crypt::HashAlgorithm(u"md2"_j, 6, u"MD2"_j, -int32_t(1), u"MD2"_j, int32_t(16), u"Hmac-MD2"_j, true);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::md4 = new ::poi::poifs::crypt::HashAlgorithm(u"md4"_j, 7, u"MD4"_j, -int32_t(1), u"MD4"_j, int32_t(16), u"Hmac-MD4"_j, true);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::ripemd128 = new ::poi::poifs::crypt::HashAlgorithm(u"ripemd128"_j, 8, u"RipeMD128"_j, -int32_t(1), u"RIPEMD-128"_j, int32_t(16), u"HMac-RipeMD128"_j, true);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::ripemd160 = new ::poi::poifs::crypt::HashAlgorithm(u"ripemd160"_j, 9, u"RipeMD160"_j, -int32_t(1), u"RIPEMD-160"_j, int32_t(20), u"HMac-RipeMD160"_j, true);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::whirlpool = new ::poi::poifs::crypt::HashAlgorithm(u"whirlpool"_j, 10, u"Whirlpool"_j, -int32_t(1), u"WHIRLPOOL"_j, int32_t(64), u"HMac-Whirlpool"_j, true);
poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::sha224 = new ::poi::poifs::crypt::HashAlgorithm(u"sha224"_j, 11, u"SHA-224"_j, -int32_t(1), u"SHA224"_j, int32_t(28), u"HmacSHA224"_j, true);
void poi::poifs::crypt::HashAlgorithm::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* ecmaString, int32_t hashSize, ::java::lang::String* jceHmacId, bool needsBouncyCastle)
{
    super::ctor(name, ordinal);
    this->jceId = jceId;
    this->ecmaId = ecmaId;
    this->ecmaString = ecmaString;
    this->hashSize = hashSize;
    this->jceHmacId = jceHmacId;
    this->needsBouncyCastle = needsBouncyCastle;
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::fromEcmaId(int32_t ecmaId)
{
    clinit();
    for(auto ha : *npc(values())) {
        if(npc(ha)->ecmaId == ecmaId)
            return ha;

    }
    throw new ::poi::EncryptedDocumentException(u"hash algorithm not found"_j);
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::fromEcmaId(::java::lang::String* ecmaString)
{
    clinit();
    for(auto ha : *npc(values())) {
        if(npc(npc(ha)->ecmaString)->equals(static_cast< ::java::lang::Object* >(ecmaString)))
            return ha;

    }
    throw new ::poi::EncryptedDocumentException(u"hash algorithm not found"_j);
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::fromString(::java::lang::String* string)
{
    clinit();
    for(auto ha : *npc(values())) {
        if(npc(npc(ha)->ecmaString)->equalsIgnoreCase(string) || npc(npc(ha)->jceId)->equalsIgnoreCase(string))
            return ha;

    }
    throw new ::poi::EncryptedDocumentException(u"hash algorithm not found"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::HashAlgorithm::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.HashAlgorithm", 40);
    return c;
}

poi::poifs::crypt::HashAlgorithm* poi::poifs::crypt::HashAlgorithm::valueOf(::java::lang::String* a0)
{
    if(md2->toString()->equals(a0))
        return md2;
    if(md4->toString()->equals(a0))
        return md4;
    if(md5->toString()->equals(a0))
        return md5;
    if(none->toString()->equals(a0))
        return none;
    if(ripemd128->toString()->equals(a0))
        return ripemd128;
    if(ripemd160->toString()->equals(a0))
        return ripemd160;
    if(sha1->toString()->equals(a0))
        return sha1;
    if(sha224->toString()->equals(a0))
        return sha224;
    if(sha256->toString()->equals(a0))
        return sha256;
    if(sha384->toString()->equals(a0))
        return sha384;
    if(sha512->toString()->equals(a0))
        return sha512;
    if(whirlpool->toString()->equals(a0))
        return whirlpool;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::poifs::crypt::HashAlgorithmArray* poi::poifs::crypt::HashAlgorithm::values()
{
    return new poi::poifs::crypt::HashAlgorithmArray({
        md2,
        md4,
        md5,
        none,
        ripemd128,
        ripemd160,
        sha1,
        sha224,
        sha256,
        sha384,
        sha512,
        whirlpool,
    });
}

java::lang::Class* poi::poifs::crypt::HashAlgorithm::getClass0()
{
    return class_();
}

