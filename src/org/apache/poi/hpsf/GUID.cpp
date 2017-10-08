// Generated from /POI/java/org/apache/poi/hpsf/GUID.java
#include <org/apache/poi/hpsf/GUID.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::GUID::GUID(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::GUID::GUID() 
    : GUID(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::GUID::ctor()
{
    super::ctor();
}

void poi::hpsf::GUID::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    _data1 = npc(lei)->readInt();
    _data2 = npc(lei)->readShort();
    _data3 = npc(lei)->readShort();
    _data4 = npc(lei)->readLong();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::GUID::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.GUID", 24);
    return c;
}

java::lang::Class* poi::hpsf::GUID::getClass0()
{
    return class_();
}

