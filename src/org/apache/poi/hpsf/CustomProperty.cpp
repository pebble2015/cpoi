// Generated from /POI/java/org/apache/poi/hpsf/CustomProperty.java
#include <org/apache/poi/hpsf/CustomProperty.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>

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

org::apache::poi::hpsf::CustomProperty::CustomProperty(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::CustomProperty::CustomProperty() 
    : CustomProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hpsf::CustomProperty::CustomProperty(Property* property) 
    : CustomProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(property);
}

org::apache::poi::hpsf::CustomProperty::CustomProperty(Property* property, ::java::lang::String* name) 
    : CustomProperty(*static_cast< ::default_init_tag* >(0))
{
    ctor(property,name);
}

void org::apache::poi::hpsf::CustomProperty::ctor()
{
    super::ctor();
    this->name = nullptr;
}

void org::apache::poi::hpsf::CustomProperty::ctor(Property* property)
{
    ctor(property, nullptr);
}

void org::apache::poi::hpsf::CustomProperty::ctor(Property* property, ::java::lang::String* name)
{
    super::ctor(property);
    this->name = name;
}

java::lang::String* org::apache::poi::hpsf::CustomProperty::getName()
{
    return name;
}

void org::apache::poi::hpsf::CustomProperty::setName(::java::lang::String* name)
{
    this->name = name;
}

bool org::apache::poi::hpsf::CustomProperty::equalsContents(::java::lang::Object* o)
{
    auto const c = java_cast< CustomProperty* >(o);
    auto const name1 = npc(c)->getName();
    auto const name2 = this->getName();
    auto equalNames = true;
    if(name1 == nullptr) {
        equalNames = name2 == nullptr;
    } else {
        equalNames = npc(name1)->equals(static_cast< ::java::lang::Object* >(name2));
    }
    return equalNames && npc(c)->getID() == this->getID() && npc(c)->getType() == this->getType() && npc(npc(c)->getValue())->equals(this->getValue());
}

int32_t org::apache::poi::hpsf::CustomProperty::hashCode()
{
    return static_cast< int32_t >(this->getID());
}

bool org::apache::poi::hpsf::CustomProperty::equals(::java::lang::Object* o)
{
    return (dynamic_cast< CustomProperty* >(o) != nullptr) ? equalsContents(o) : false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::CustomProperty::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.CustomProperty", 34);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::CustomProperty::getClass0()
{
    return class_();
}

