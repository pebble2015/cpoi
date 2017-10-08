// Generated from /POI/java/org/apache/poi/hpsf/Currency.java
#include <org/apache/poi/hpsf/Currency.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::Currency::Currency(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::Currency::Currency() 
    : Currency(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::Currency::init()
{
    _value = new ::int8_tArray(SIZE);
}

constexpr int32_t poi::hpsf::Currency::SIZE;

void poi::hpsf::Currency::ctor()
{
    super::ctor();
    init();
}

void poi::hpsf::Currency::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    npc(lei)->readFully(_value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::Currency::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Currency", 28);
    return c;
}

java::lang::Class* poi::hpsf::Currency::getClass0()
{
    return class_();
}

