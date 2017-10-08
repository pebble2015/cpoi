// Generated from /POI/java/org/apache/poi/poifs/crypt/CipherProvider.java
#include <org/apache/poi/poifs/crypt/CipherProvider.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
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
typedef ::SubArray< ::poi::poifs::crypt::CipherProvider, ::java::lang::EnumArray > CipherProviderArray;
        } // crypt
    } // poifs
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::poifs::crypt::CipherProvider::CipherProvider(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::CipherProvider::CipherProvider(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* cipherProviderName) 
    : CipherProvider(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, jceId,ecmaId,cipherProviderName);
}

poi::poifs::crypt::CipherProvider* poi::poifs::crypt::CipherProvider::rc4 = new ::poi::poifs::crypt::CipherProvider(u"rc4"_j, 0, u"RC4"_j, int32_t(1), u"Microsoft Base Cryptographic Provider v1.0"_j);
poi::poifs::crypt::CipherProvider* poi::poifs::crypt::CipherProvider::aes = new ::poi::poifs::crypt::CipherProvider(u"aes"_j, 1, u"AES"_j, int32_t(24), u"Microsoft Enhanced RSA and AES Cryptographic Provider"_j);
poi::poifs::crypt::CipherProvider* poi::poifs::crypt::CipherProvider::fromEcmaId(int32_t ecmaId)
{
    clinit();
    for(auto cp : *npc(CipherProvider::values())) {
        if(npc(cp)->ecmaId == ecmaId)
            return cp;

    }
    throw new ::poi::EncryptedDocumentException(u"cipher provider not found"_j);
}

void poi::poifs::crypt::CipherProvider::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId, ::java::lang::String* cipherProviderName)
{
    super::ctor(name, ordinal);
    this->jceId = jceId;
    this->ecmaId = ecmaId;
    this->cipherProviderName = cipherProviderName;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::CipherProvider::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.CipherProvider", 41);
    return c;
}

poi::poifs::crypt::CipherProvider* poi::poifs::crypt::CipherProvider::valueOf(::java::lang::String* a0)
{
    if(aes->toString()->equals(a0))
        return aes;
    if(rc4->toString()->equals(a0))
        return rc4;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::poifs::crypt::CipherProviderArray* poi::poifs::crypt::CipherProvider::values()
{
    return new poi::poifs::crypt::CipherProviderArray({
        aes,
        rc4,
    });
}

java::lang::Class* poi::poifs::crypt::CipherProvider::getClass0()
{
    return class_();
}

