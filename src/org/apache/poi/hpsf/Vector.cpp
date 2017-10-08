// Generated from /POI/java/org/apache/poi/hpsf/Vector.java
#include <org/apache/poi/hpsf/Vector.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/UnsupportedOperationException.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/hpsf/TypedPropertyValue.hpp>
#include <org/apache/poi/hpsf/Variant.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hpsf
    {
typedef ::SubArray< ::poi::hpsf::TypedPropertyValue, ::java::lang::ObjectArray > TypedPropertyValueArray;
    } // hpsf
} // poi

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

poi::hpsf::Vector::Vector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::Vector::Vector(int16_t type) 
    : Vector(*static_cast< ::default_init_tag* >(0))
{
    ctor(type);
}

void poi::hpsf::Vector::ctor(int16_t type)
{
    super::ctor();
    this->_type = type;
}

void poi::hpsf::Vector::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    auto const longLength = npc(lei)->readUInt();
    if(longLength > ::java::lang::Integer::MAX_VALUE) {
        throw new ::java::lang::UnsupportedOperationException(::java::lang::StringBuilder().append(u"Vector is too long -- "_j)->append(longLength)->toString());
    }
    auto const length = static_cast< int32_t >(longLength);
    ::java::util::List* values = new ::java::util::ArrayList();
    int32_t paddedType = (_type == Variant::VT_VARIANT) ? static_cast< int16_t >(int32_t(0)) : _type;
    for (auto i = int32_t(0); i < length; i++) {
        auto value = new TypedPropertyValue(paddedType, nullptr);
        if(paddedType == 0) {
            npc(value)->read(lei);
        } else {
            npc(value)->readValue(lei);
        }
        npc(values)->add(static_cast< ::java::lang::Object* >(value));
    }
    _values = java_cast< TypedPropertyValueArray* >(npc(values)->toArray_(static_cast< ::java::lang::ObjectArray* >(new TypedPropertyValueArray(npc(values)->size()))));
}

poi::hpsf::TypedPropertyValueArray* poi::hpsf::Vector::getValues()
{
    return _values;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::Vector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Vector", 26);
    return c;
}

java::lang::Class* poi::hpsf::Vector::getClass0()
{
    return class_();
}

