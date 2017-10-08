// Generated from /POI/java/org/apache/poi/hpsf/Date.java
#include <org/apache/poi/hpsf/Date.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::Date::Date(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::Date::Date() 
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::Date::init()
{
    _value = new ::int8_tArray(SIZE);
}

constexpr int32_t poi::hpsf::Date::SIZE;

void poi::hpsf::Date::ctor()
{
    super::ctor();
    init();
}

void poi::hpsf::Date::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    npc(lei)->readFully(_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::Date::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Date", 24);
    return c;
}

java::lang::Class* poi::hpsf::Date::getClass0()
{
    return class_();
}

