// Generated from /POI/java/org/apache/poi/ddf/EscherProperty.java
#include <org/apache/poi/ddf/EscherProperty.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <org/apache/poi/ddf/EscherProperties.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ddf::EscherProperty::EscherProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ddf::EscherProperty::EscherProperty(int16_t id) 
    : EscherProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(id);
}

org::apache::poi::ddf::EscherProperty::EscherProperty(int16_t propertyNumber, bool isComplex, bool isBlipId) 
    : EscherProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(propertyNumber,isComplex,isBlipId);
}

void org::apache::poi::ddf::EscherProperty::ctor(int16_t id)
{
    super::ctor();
    _id = id;
}

void org::apache::poi::ddf::EscherProperty::ctor(int16_t propertyNumber, bool isComplex, bool isBlipId)
{
    super::ctor();
    _id = static_cast< int16_t >((propertyNumber + (isComplex ? int32_t(32768) : int32_t(0)) + (isBlipId ? int32_t(16384) : int32_t(0))));
}

int16_t org::apache::poi::ddf::EscherProperty::getId()
{
    return _id;
}

int16_t org::apache::poi::ddf::EscherProperty::getPropertyNumber()
{
    return static_cast< int16_t >((_id & static_cast< int16_t >(int32_t(16383))));
}

bool org::apache::poi::ddf::EscherProperty::isComplex()
{
    return (_id & static_cast< int16_t >(int32_t(32768))) != 0;
}

bool org::apache::poi::ddf::EscherProperty::isBlipId()
{
    return (_id & static_cast< int16_t >(int32_t(16384))) != 0;
}

java::lang::String* org::apache::poi::ddf::EscherProperty::getName()
{
    return EscherProperties::getPropertyName(getPropertyNumber());
}

int32_t org::apache::poi::ddf::EscherProperty::getPropertySize()
{
    return 6;
}

java::lang::String* org::apache::poi::ddf::EscherProperty::toXml(::java::lang::String* tab)
{
    auto builder = new ::java::lang::StringBuilder();
    npc(npc(npc(npc(npc(npc(npc(npc(npc(npc(builder)->append(tab))->append(u"<"_j))->append(npc(getClass())->getSimpleName()))->append(u" id=\""_j))->append(static_cast< int32_t >(getId())))->append(u"\" name=\""_j))->append(getName()))->append(u"\" blipId=\""_j))->append(isBlipId()))->append(u"\"/>\n"_j);
    return npc(builder)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ddf::EscherProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ddf.EscherProperty", 33);
    return c;
}

java::lang::Class* org::apache::poi::ddf::EscherProperty::getClass0()
{
    return class_();
}

