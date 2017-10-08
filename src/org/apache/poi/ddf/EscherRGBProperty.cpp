// Generated from /POI/java/org/apache/poi/ddf/EscherRGBProperty.java
#include <org/apache/poi/ddf/EscherRGBProperty.hpp>

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

poi::ddf::EscherRGBProperty::EscherRGBProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ddf::EscherRGBProperty::EscherRGBProperty(int16_t propertyNumber, int32_t rgbColor) 
    : EscherRGBProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,rgbColor);
}

void poi::ddf::EscherRGBProperty::ctor(int16_t propertyNumber, int32_t rgbColor)
{
    super::ctor(propertyNumber, rgbColor);
}

int32_t poi::ddf::EscherRGBProperty::getRgbColor()
{
    return getPropertyValue();
}

int8_t poi::ddf::EscherRGBProperty::getRed()
{
    return static_cast< int8_t >((getRgbColor() & int32_t(255)));
}

int8_t poi::ddf::EscherRGBProperty::getGreen()
{
    return static_cast< int8_t >(((getRgbColor() >> int32_t(8)) & int32_t(255)));
}

int8_t poi::ddf::EscherRGBProperty::getBlue()
{
    return static_cast< int8_t >(((getRgbColor() >> int32_t(16)) & int32_t(255)));
}

java::lang::String* poi::ddf::EscherRGBProperty::toXml(::java::lang::String* tab)
{
    auto builder = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(builder)->append(tab))->append(u"<"_j))->append(npc(getClass())->getSimpleName()))->append(u" id=\"0x"_j))->append(::poi::util::HexDump::toHex(getId())))->append(u"\" name=\""_j))->append(getName()))->append(u"\" blipId=\""_j))->append(isBlipId()))->append(u"\" value=\"0x"_j))->append(::poi::util::HexDump::toHex(getRgbColor())))->append(u"\"/>"_j);
    return npc(builder)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ddf::EscherRGBProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherRGBProperty", 36);
    return c;
}

java::lang::Class* poi::ddf::EscherRGBProperty::getClass0()
{
    return class_();
}

