// Generated from /POI/java/org/apache/poi/ddf/EscherBoolProperty.java
#include <org/apache/poi/ddf/EscherBoolProperty.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/util/HexDump.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ddf::EscherBoolProperty::EscherBoolProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherBoolProperty::EscherBoolProperty(int16_t propertyNumber, int32_t value) 
    : EscherBoolProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,value);
}

void poi::ddf::EscherBoolProperty::ctor(int16_t propertyNumber, int32_t value)
{
    super::ctor(propertyNumber, value);
}

bool poi::ddf::EscherBoolProperty::isTrue()
{
    return getPropertyValue() != 0;
}

bool poi::ddf::EscherBoolProperty::isFalse()
{
    return !isTrue();
}

java::lang::String* poi::ddf::EscherBoolProperty::toXml(::java::lang::String* tab)
{
    auto builder = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(builder)->append(tab))->append(u"<"_j))->append(npc(getClass())->getSimpleName()))->append(u" id=\"0x"_j))->append(::poi::util::HexDump::toHex(getId())))->append(u"\" name=\""_j))->append(getName()))->append(u"\" simpleValue=\""_j))->append(getPropertyValue()))->append(u"\" blipId=\""_j))->append(isBlipId()))->append(u"\" value=\""_j))->append(isTrue()))->append(u"\""_j))->append(u"/>"_j);
    return npc(builder)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherBoolProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherBoolProperty", 37);
    return c;
}

java::lang::Class* poi::ddf::EscherBoolProperty::getClass0()
{
    return class_();
}

