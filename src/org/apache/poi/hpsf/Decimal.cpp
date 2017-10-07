// Generated from /POI/java/org/apache/poi/hpsf/Decimal.java
#include <org/apache/poi/hpsf/Decimal.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::Decimal::Decimal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Decimal::Decimal() 
    : Decimal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hpsf::Decimal::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::Decimal::read(::org::apache::poi::util::LittleEndianByteArrayInputStream* lei)
{
    field_1_wReserved = npc(lei)->readShort();
    field_2_scale = npc(lei)->readByte();
    field_3_sign = npc(lei)->readByte();
    field_4_hi32 = npc(lei)->readInt();
    field_5_lo64 = npc(lei)->readLong();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Decimal::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Decimal", 27);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::Decimal::getClass0()
{
    return class_();
}

