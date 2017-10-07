// Generated from /POI/java/org/apache/poi/poifs/crypt/EncryptionMode.java
#include <org/apache/poi/poifs/crypt/EncryptionMode.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>
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
typedef ::SubArray< ::org::apache::poi::poifs::crypt::EncryptionMode, ::java::lang::EnumArray > EncryptionModeArray;
                } // crypt
            } // poifs
        } // poi
    } // apache
} // org

org::apache::poi::poifs::crypt::EncryptionMode::EncryptionMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::crypt::EncryptionMode::EncryptionMode(::java::lang::String* name, int ordinal, ::java::lang::String* builder, int32_t versionMajor, int32_t versionMinor, int32_t encryptionFlags) 
    : EncryptionMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, builder,versionMajor,versionMinor,encryptionFlags);
}

org::apache::poi::poifs::crypt::EncryptionMode* org::apache::poi::poifs::crypt::EncryptionMode::binaryRC4 = new ::org::apache::poi::poifs::crypt::EncryptionMode(u"binaryRC4"_j, 0, u"org.apache.poi.poifs.crypt.binaryrc4.BinaryRC4EncryptionInfoBuilder"_j, int32_t(1), int32_t(1), int32_t(0));
org::apache::poi::poifs::crypt::EncryptionMode* org::apache::poi::poifs::crypt::EncryptionMode::cryptoAPI = new ::org::apache::poi::poifs::crypt::EncryptionMode(u"cryptoAPI"_j, 1, u"org.apache.poi.poifs.crypt.cryptoapi.CryptoAPIEncryptionInfoBuilder"_j, int32_t(4), int32_t(2), int32_t(4));
org::apache::poi::poifs::crypt::EncryptionMode* org::apache::poi::poifs::crypt::EncryptionMode::standard = new ::org::apache::poi::poifs::crypt::EncryptionMode(u"standard"_j, 2, u"org.apache.poi.poifs.crypt.standard.StandardEncryptionInfoBuilder"_j, int32_t(4), int32_t(2), int32_t(36));
org::apache::poi::poifs::crypt::EncryptionMode* org::apache::poi::poifs::crypt::EncryptionMode::agile = new ::org::apache::poi::poifs::crypt::EncryptionMode(u"agile"_j, 3, u"org.apache.poi.poifs.crypt.agile.AgileEncryptionInfoBuilder"_j, int32_t(4), int32_t(4), int32_t(64));
org::apache::poi::poifs::crypt::EncryptionMode* org::apache::poi::poifs::crypt::EncryptionMode::xor_ = new ::org::apache::poi::poifs::crypt::EncryptionMode(u"xor_"_j, 4, u"org.apache.poi.poifs.crypt.xor.XOREncryptionInfoBuilder"_j, int32_t(0), int32_t(0), int32_t(0));
void org::apache::poi::poifs::crypt::EncryptionMode::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* builder, int32_t versionMajor, int32_t versionMinor, int32_t encryptionFlags)
{
    super::ctor(name, ordinal);
    this->builder = builder;
    this->versionMajor = versionMajor;
    this->versionMinor = versionMinor;
    this->encryptionFlags = encryptionFlags;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::crypt::EncryptionMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.EncryptionMode", 41);
    return c;
}

org::apache::poi::poifs::crypt::EncryptionMode* org::apache::poi::poifs::crypt::EncryptionMode::valueOf(::java::lang::String* a0)
{
    if(agile->toString()->equals(a0))
        return agile;
    if(binaryRC4->toString()->equals(a0))
        return binaryRC4;
    if(cryptoAPI->toString()->equals(a0))
        return cryptoAPI;
    if(standard->toString()->equals(a0))
        return standard;
    if(xor_->toString()->equals(a0))
        return xor_;
    throw new ::java::lang::IllegalArgumentException(a0);
}

org::apache::poi::poifs::crypt::EncryptionModeArray* org::apache::poi::poifs::crypt::EncryptionMode::values()
{
    return new org::apache::poi::poifs::crypt::EncryptionModeArray({
        agile,
        binaryRC4,
        cryptoAPI,
        standard,
        xor_,
    });
}

java::lang::Class* org::apache::poi::poifs::crypt::EncryptionMode::getClass0()
{
    return class_();
}

