// Generated from /POI/java/org/apache/poi/hpsf/Blob.java
#include <org/apache/poi/hpsf/Blob.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hpsf::Blob::Blob(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hpsf::Blob::Blob() 
    : Blob(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hpsf::Blob::ctor()
{
    super::ctor();
}

void org::apache::poi::hpsf::Blob::read(::org::apache::poi::util::LittleEndianInput* lei)
{
    auto size = npc(lei)->readInt();
    _value = new ::int8_tArray(size);
    if(size > 0) {
        npc(lei)->readFully(_value);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hpsf::Blob::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Blob", 24);
    return c;
}

java::lang::Class* org::apache::poi::hpsf::Blob::getClass0()
{
    return class_();
}

