// Generated from /POI/java/org/apache/poi/poifs/crypt/ChainingMode.java
#include <org/apache/poi/poifs/crypt/ChainingMode.hpp>

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

namespace poi
{
    namespace poifs
    {
        namespace crypt
        {
typedef ::SubArray< ::poi::poifs::crypt::ChainingMode, ::java::lang::EnumArray > ChainingModeArray;
        } // crypt
    } // poifs
} // poi

poi::poifs::crypt::ChainingMode::ChainingMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::poifs::crypt::ChainingMode::ChainingMode(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId) 
    : ChainingMode(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, ordinal, jceId,ecmaId);
}

poi::poifs::crypt::ChainingMode* poi::poifs::crypt::ChainingMode::ecb = new ::poi::poifs::crypt::ChainingMode(u"ecb"_j, 0, u"ECB"_j, int32_t(1));
poi::poifs::crypt::ChainingMode* poi::poifs::crypt::ChainingMode::cbc = new ::poi::poifs::crypt::ChainingMode(u"cbc"_j, 1, u"CBC"_j, int32_t(2));
poi::poifs::crypt::ChainingMode* poi::poifs::crypt::ChainingMode::cfb = new ::poi::poifs::crypt::ChainingMode(u"cfb"_j, 2, u"CFB8"_j, int32_t(3));
void poi::poifs::crypt::ChainingMode::ctor(::java::lang::String* name, int ordinal, ::java::lang::String* jceId, int32_t ecmaId)
{
    super::ctor(name, ordinal);
    this->jceId = jceId;
    this->ecmaId = ecmaId;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::poifs::crypt::ChainingMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.crypt.ChainingMode", 39);
    return c;
}

poi::poifs::crypt::ChainingMode* poi::poifs::crypt::ChainingMode::valueOf(::java::lang::String* a0)
{
    if(cbc->toString()->equals(a0))
        return cbc;
    if(cfb->toString()->equals(a0))
        return cfb;
    if(ecb->toString()->equals(a0))
        return ecb;
    throw new ::java::lang::IllegalArgumentException(a0);
}

poi::poifs::crypt::ChainingModeArray* poi::poifs::crypt::ChainingMode::values()
{
    return new poi::poifs::crypt::ChainingModeArray({
        cbc,
        cfb,
        ecb,
    });
}

java::lang::Class* poi::poifs::crypt::ChainingMode::getClass0()
{
    return class_();
}

