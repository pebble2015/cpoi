// Generated from /POI/java/org/apache/poi/hpsf/Variant.java
#include <org/apache/poi/hpsf/Variant.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Map.hpp>
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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::ObjectArray, CloneableArray, ::java::io::SerializableArray > ObjectArrayArray;
    } // lang
} // java

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

org::apache::poi::hpsf::Variant::Variant(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Variant::Variant()
    : Variant(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::hpsf::Variant::VT_EMPTY;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_NULL;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_I2;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_I4;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_R4;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_R8;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_CY;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_DATE;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_BSTR;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_DISPATCH;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_ERROR;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_BOOL;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_VARIANT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_UNKNOWN;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_DECIMAL;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_I1;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_UI1;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_UI2;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_UI4;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_I8;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_UI8;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_INT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_UINT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_VOID;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_HRESULT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_PTR;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_SAFEARRAY;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_CARRAY;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_USERDEFINED;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_LPSTR;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_LPWSTR;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_FILETIME;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_BLOB;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_STREAM;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_STORAGE;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_STREAMED_OBJECT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_STORED_OBJECT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_BLOB_OBJECT;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_CF;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_CLSID;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_VERSIONED_STREAM;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_VECTOR;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_ARRAY;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_BYREF;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_RESERVED;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_ILLEGAL;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_ILLEGALMASKED;

constexpr int32_t org::apache::poi::hpsf::Variant::VT_TYPEMASK;

java::util::Map*& org::apache::poi::hpsf::Variant::numberToName()
{
    clinit();
    return numberToName_;
}
java::util::Map* org::apache::poi::hpsf::Variant::numberToName_;

java::util::Map*& org::apache::poi::hpsf::Variant::numberToLength()
{
    clinit();
    return numberToLength_;
}
java::util::Map* org::apache::poi::hpsf::Variant::numberToLength_;

java::lang::Integer*& org::apache::poi::hpsf::Variant::LENGTH_UNKNOWN()
{
    clinit();
    return LENGTH_UNKNOWN_;
}
java::lang::Integer* org::apache::poi::hpsf::Variant::LENGTH_UNKNOWN_;

java::lang::Integer*& org::apache::poi::hpsf::Variant::LENGTH_VARIABLE()
{
    clinit();
    return LENGTH_VARIABLE_;
}
java::lang::Integer* org::apache::poi::hpsf::Variant::LENGTH_VARIABLE_;

java::lang::Integer*& org::apache::poi::hpsf::Variant::LENGTH_0()
{
    clinit();
    return LENGTH_0_;
}
java::lang::Integer* org::apache::poi::hpsf::Variant::LENGTH_0_;

java::lang::Integer*& org::apache::poi::hpsf::Variant::LENGTH_2()
{
    clinit();
    return LENGTH_2_;
}
java::lang::Integer* org::apache::poi::hpsf::Variant::LENGTH_2_;

java::lang::Integer*& org::apache::poi::hpsf::Variant::LENGTH_4()
{
    clinit();
    return LENGTH_4_;
}
java::lang::Integer* org::apache::poi::hpsf::Variant::LENGTH_4_;

java::lang::Integer*& org::apache::poi::hpsf::Variant::LENGTH_8()
{
    clinit();
    return LENGTH_8_;
}
java::lang::Integer* org::apache::poi::hpsf::Variant::LENGTH_8_;

java::lang::ObjectArrayArray*& org::apache::poi::hpsf::Variant::NUMBER_TO_NAME_LIST()
{
    clinit();
    return NUMBER_TO_NAME_LIST_;
}
java::lang::ObjectArrayArray* org::apache::poi::hpsf::Variant::NUMBER_TO_NAME_LIST_;

java::lang::String* org::apache::poi::hpsf::Variant::getVariantName(int64_t variantType)
{
    clinit();
    auto vt = variantType;
    auto name = u""_j;
    if((vt & VT_VECTOR) != 0) {
        name = u"Vector of "_j;
        vt -= VT_VECTOR;
    } else if((vt & VT_ARRAY) != 0) {
        name = u"Array of "_j;
        vt -= VT_ARRAY;
    } else if((vt & VT_BYREF) != 0) {
        name = u"ByRef of "_j;
        vt -= VT_BYREF;
    }
    name = ::java::lang::StringBuilder(name).append(java_cast< ::java::lang::String* >(npc(numberToName_)->get(::java::lang::Long::valueOf(vt))))->toString();
    return (name != nullptr && !npc(u""_j)->equals(static_cast< ::java::lang::Object* >(name))) ? name : u"unknown variant type"_j;
}

int32_t org::apache::poi::hpsf::Variant::getVariantLength(int64_t variantType)
{
    clinit();
    auto const length = java_cast< ::java::lang::Integer* >(npc(numberToLength_)->get(::java::lang::Long::valueOf(variantType)));
    return (npc((length != nullptr) ? length : LENGTH_UNKNOWN_))->intValue();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Variant::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Variant", 27);
    return c;
}

void org::apache::poi::hpsf::Variant::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LENGTH_UNKNOWN_ = ::java::lang::Integer::valueOf(-int32_t(2));
        LENGTH_VARIABLE_ = ::java::lang::Integer::valueOf(-int32_t(1));
        LENGTH_0_ = ::java::lang::Integer::valueOf(int32_t(0));
        LENGTH_2_ = ::java::lang::Integer::valueOf(int32_t(2));
        LENGTH_4_ = ::java::lang::Integer::valueOf(int32_t(4));
        LENGTH_8_ = ::java::lang::Integer::valueOf(int32_t(8));
        NUMBER_TO_NAME_LIST_ = (new ::java::lang::ObjectArrayArray({
            (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(0LL)))
            , static_cast< ::java::lang::Object* >(u"VT_EMPTY"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_0_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(1LL)))
            , static_cast< ::java::lang::Object* >(u"VT_NULL"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(2LL)))
            , static_cast< ::java::lang::Object* >(u"VT_I2"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_2_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(3LL)))
            , static_cast< ::java::lang::Object* >(u"VT_I4"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_4_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(4LL)))
            , static_cast< ::java::lang::Object* >(u"VT_R4"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_4_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(5LL)))
            , static_cast< ::java::lang::Object* >(u"VT_R8"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_8_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(6LL)))
            , static_cast< ::java::lang::Object* >(u"VT_CY"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(7LL)))
            , static_cast< ::java::lang::Object* >(u"VT_DATE"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(8LL)))
            , static_cast< ::java::lang::Object* >(u"VT_BSTR"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(9LL)))
            , static_cast< ::java::lang::Object* >(u"VT_DISPATCH"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(10LL)))
            , static_cast< ::java::lang::Object* >(u"VT_ERROR"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(11LL)))
            , static_cast< ::java::lang::Object* >(u"VT_BOOL"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(12LL)))
            , static_cast< ::java::lang::Object* >(u"VT_VARIANT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(13LL)))
            , static_cast< ::java::lang::Object* >(u"VT_UNKNOWN"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(14LL)))
            , static_cast< ::java::lang::Object* >(u"VT_DECIMAL"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(16LL)))
            , static_cast< ::java::lang::Object* >(u"VT_I1"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(17LL)))
            , static_cast< ::java::lang::Object* >(u"VT_UI1"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(18LL)))
            , static_cast< ::java::lang::Object* >(u"VT_UI2"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(19LL)))
            , static_cast< ::java::lang::Object* >(u"VT_UI4"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(20LL)))
            , static_cast< ::java::lang::Object* >(u"VT_I8"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(21LL)))
            , static_cast< ::java::lang::Object* >(u"VT_UI8"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(22LL)))
            , static_cast< ::java::lang::Object* >(u"VT_INT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(23LL)))
            , static_cast< ::java::lang::Object* >(u"VT_UINT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(24LL)))
            , static_cast< ::java::lang::Object* >(u"VT_VOID"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(25LL)))
            , static_cast< ::java::lang::Object* >(u"VT_HRESULT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(26LL)))
            , static_cast< ::java::lang::Object* >(u"VT_PTR"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(27LL)))
            , static_cast< ::java::lang::Object* >(u"VT_SAFEARRAY"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(28LL)))
            , static_cast< ::java::lang::Object* >(u"VT_CARRAY"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(29LL)))
            , static_cast< ::java::lang::Object* >(u"VT_USERDEFINED"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(30LL)))
            , static_cast< ::java::lang::Object* >(u"VT_LPSTR"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_VARIABLE_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(31LL)))
            , static_cast< ::java::lang::Object* >(u"VT_LPWSTR"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(64LL)))
            , static_cast< ::java::lang::Object* >(u"VT_FILETIME"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_8_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(65LL)))
            , static_cast< ::java::lang::Object* >(u"VT_BLOB"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(66LL)))
            , static_cast< ::java::lang::Object* >(u"VT_STREAM"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(67LL)))
            , static_cast< ::java::lang::Object* >(u"VT_STORAGE"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(68LL)))
            , static_cast< ::java::lang::Object* >(u"VT_STREAMED_OBJECT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(69LL)))
            , static_cast< ::java::lang::Object* >(u"VT_STORED_OBJECT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(70LL)))
            , static_cast< ::java::lang::Object* >(u"VT_BLOB_OBJECT"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(71LL)))
            , static_cast< ::java::lang::Object* >(u"VT_CF"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
            , (new ::java::lang::ObjectArray({
            static_cast< ::java::lang::Object* >(::java::lang::Long::valueOf(int64_t(72LL)))
            , static_cast< ::java::lang::Object* >(u"VT_CLSID"_j)
            , static_cast< ::java::lang::Object* >(LENGTH_UNKNOWN_)
        }))
        }));
        {
            ::java::util::Map* number2Name = new ::java::util::HashMap(npc(NUMBER_TO_NAME_LIST_)->length, 1.0f);
            ::java::util::Map* number2Len = new ::java::util::HashMap(npc(NUMBER_TO_NAME_LIST_)->length, 1.0f);
            for(auto nn : *npc(NUMBER_TO_NAME_LIST_)) {
                npc(number2Name)->put(java_cast< ::java::lang::Long* >((*nn)[int32_t(0)]), java_cast< ::java::lang::String* >((*nn)[int32_t(1)]));
                npc(number2Len)->put(java_cast< ::java::lang::Long* >((*nn)[int32_t(0)]), java_cast< ::java::lang::Integer* >((*nn)[int32_t(2)]));
            }
            numberToName_ = ::java::util::Collections::unmodifiableMap(number2Name);
            numberToLength_ = ::java::util::Collections::unmodifiableMap(number2Len);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hpsf::Variant::getClass0()
{
    return class_();
}

