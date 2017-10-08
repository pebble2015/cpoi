// Generated from /POI/java/org/apache/poi/ddf/EscherSimpleProperty.java
#include <org/apache/poi/ddf/EscherSimpleProperty.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>

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

poi::ddf::EscherSimpleProperty::EscherSimpleProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherSimpleProperty::EscherSimpleProperty(int16_t id, int32_t propertyValue) 
    : EscherSimpleProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id,propertyValue);
}

poi::ddf::EscherSimpleProperty::EscherSimpleProperty(int16_t propertyNumber, bool isComplex, bool isBlipId, int32_t propertyValue) 
    : EscherSimpleProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,isComplex,isBlipId,propertyValue);
}

void poi::ddf::EscherSimpleProperty::ctor(int16_t id, int32_t propertyValue)
{
    super::ctor(id);
    this->propertyValue = propertyValue;
}

void poi::ddf::EscherSimpleProperty::ctor(int16_t propertyNumber, bool isComplex, bool isBlipId, int32_t propertyValue)
{
    super::ctor(propertyNumber, isComplex, isBlipId);
    this->propertyValue = propertyValue;
}

int32_t poi::ddf::EscherSimpleProperty::serializeSimplePart(::int8_tArray* data, int32_t offset)
{
    ::poi::util::LittleEndian::putShort(data, offset, getId());
    ::poi::util::LittleEndian::putInt(data, offset + int32_t(2), propertyValue);
    return 6;
}

int32_t poi::ddf::EscherSimpleProperty::serializeComplexPart(::int8_tArray* data, int32_t pos)
{
    return 0;
}

int32_t poi::ddf::EscherSimpleProperty::getPropertyValue()
{
    return propertyValue;
}

bool poi::ddf::EscherSimpleProperty::equals(::java::lang::Object* o)
{
    if(static_cast< ::java::lang::Object* >(this) == o) {
        return true;
    }
    if(!(dynamic_cast< EscherSimpleProperty* >(o) != nullptr)) {
        return false;
    }
    auto const escherSimpleProperty = java_cast< EscherSimpleProperty* >(o);
    if(propertyValue != npc(escherSimpleProperty)->propertyValue) {
        return false;
    }
    if(getId() != npc(escherSimpleProperty)->getId()) {
        return false;
    }
    return true;
}

int32_t poi::ddf::EscherSimpleProperty::hashCode()
{
    return propertyValue;
}

java::lang::String* poi::ddf::EscherSimpleProperty::toString()
{
    return ::java::lang::StringBuilder().append(u"propNum: "_j)->append(getPropertyNumber())
        ->append(u", RAW: 0x"_j)
        ->append(::poi::util::HexDump::toHex(getId()))
        ->append(u", propName: "_j)
        ->append(EscherProperties::getPropertyName(getPropertyNumber()))
        ->append(u", complex: "_j)
        ->append(isComplex())
        ->append(u", blipId: "_j)
        ->append(isBlipId())
        ->append(u", value: "_j)
        ->append(propertyValue)
        ->append(u" (0x"_j)
        ->append(::poi::util::HexDump::toHex(propertyValue))
        ->append(u")"_j)->toString();
}

java::lang::String* poi::ddf::EscherSimpleProperty::toXml(::java::lang::String* tab)
{
    auto builder = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(builder)->append(tab))->append(u"<"_j))->append(npc(getClass())->getSimpleName()))->append(u" id=\"0x"_j))->append(::poi::util::HexDump::toHex(getId())))->append(u"\" name=\""_j))->append(getName()))->append(u"\" blipId=\""_j))->append(isBlipId()))->append(u"\" complex=\""_j))->append(isComplex()))->append(u"\" value=\""_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(propertyValue)))->append(u"\"/>"_j);
    return npc(builder)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherSimpleProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherSimpleProperty", 39);
    return c;
}

java::lang::Class* poi::ddf::EscherSimpleProperty::getClass0()
{
    return class_();
}

