// Generated from /POI/java/org/apache/poi/ddf/EscherComplexProperty.java
#include <org/apache/poi/ddf/EscherComplexProperty.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/util/Arrays.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
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

org::apache::poi::ddf::EscherComplexProperty::EscherComplexProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherComplexProperty::EscherComplexProperty(int16_t id, ::int8_tArray* complexData) 
    : EscherComplexProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,complexData);
}

org::apache::poi::ddf::EscherComplexProperty::EscherComplexProperty(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData) 
    : EscherComplexProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,isBlipId,complexData);
}

void org::apache::poi::ddf::EscherComplexProperty::ctor(int16_t id, ::int8_tArray* complexData)
{
    super::ctor(id);
    if(complexData == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"complexData can't be null"_j);
    }
    _complexData = npc(complexData)->clone();
}

void org::apache::poi::ddf::EscherComplexProperty::ctor(int16_t propertyNumber, bool isBlipId, ::int8_tArray* complexData)
{
    super::ctor(propertyNumber, true, isBlipId);
    if(complexData == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"complexData can't be null"_j);
    }
    _complexData = npc(complexData)->clone();
}

int32_t org::apache::poi::ddf::EscherComplexProperty::serializeSimplePart(::int8_tArray* data, int32_t pos)
{
    ::org::apache::poi::util::LittleEndian::putShort(data, pos, getId());
    ::org::apache::poi::util::LittleEndian::putInt(data, pos + int32_t(2), npc(_complexData)->length);
    return 6;
}

int32_t org::apache::poi::ddf::EscherComplexProperty::serializeComplexPart(::int8_tArray* data, int32_t pos)
{
    ::java::lang::System::arraycopy(_complexData, 0, data, pos, npc(_complexData)->length);
    return npc(_complexData)->length;
}

int8_tArray* org::apache::poi::ddf::EscherComplexProperty::getComplexData()
{
    return _complexData;
}

void org::apache::poi::ddf::EscherComplexProperty::setComplexData(::int8_tArray* _complexData)
{
    this->_complexData = _complexData;
}

bool org::apache::poi::ddf::EscherComplexProperty::equals(::java::lang::Object* o)
{
    if(static_cast< ::java::lang::Object* >(this) == o) {
        return true;
    }
    if(o == nullptr || !(dynamic_cast< EscherComplexProperty* >(o) != nullptr)) {
        return false;
    }
    auto escherComplexProperty = java_cast< EscherComplexProperty* >(o);
    return ::java::util::Arrays::equals(_complexData, npc(escherComplexProperty)->_complexData);
}

int32_t org::apache::poi::ddf::EscherComplexProperty::getPropertySize()
{
    return int32_t(6) + npc(_complexData)->length;
}

int32_t org::apache::poi::ddf::EscherComplexProperty::hashCode()
{
    return getId() * int32_t(11);
}

java::lang::String* org::apache::poi::ddf::EscherComplexProperty::toString()
{
    auto dataStr = ::org::apache::poi::util::HexDump::toHex(_complexData, 32);
    return ::java::lang::StringBuilder().append(u"propNum: "_j)->append(getPropertyNumber())
        ->append(u", propName: "_j)
        ->append(EscherProperties::getPropertyName(getPropertyNumber()))
        ->append(u", complex: "_j)
        ->append(isComplex())
        ->append(u", blipId: "_j)
        ->append(isBlipId())
        ->append(u", data: "_j)
        ->append(::java::lang::System::getProperty(u"line.separator"_j))
        ->append(dataStr)->toString();
}

java::lang::String* org::apache::poi::ddf::EscherComplexProperty::toXml(::java::lang::String* tab)
{
    return ::java::lang::StringBuilder().append(tab)->append(u"<"_j)
        ->append(npc(getClass())->getSimpleName())
        ->append(u" id=\"0x"_j)
        ->append(::org::apache::poi::util::HexDump::toHex(getId()))
        ->append(u"\" name=\""_j)
        ->append(getName())
        ->append(u"\" blipId=\""_j)
        ->append(isBlipId())
        ->append(u"\">\n"_j)
        ->append(tab)
        ->append(u"</"_j)
        ->append(npc(getClass())->getSimpleName())
        ->append(u">"_j)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherComplexProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherComplexProperty", 40);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherComplexProperty::getClass0()
{
    return class_();
}

