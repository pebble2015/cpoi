// Generated from /POI/java/org/apache/poi/hpsf/VersionedStream.java
#include <org/apache/poi/hpsf/VersionedStream.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hpsf/GUID.hpp>
#include <org/apache/poi/hpsf/IndirectPropertyName.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::VersionedStream::VersionedStream(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::VersionedStream::VersionedStream() 
    : VersionedStream(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::VersionedStream::init()
{
    _versionGuid = new GUID();
    _streamName = new IndirectPropertyName();
}

void poi::hpsf::VersionedStream::ctor()
{
    super::ctor();
    init();
}

void poi::hpsf::VersionedStream::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    npc(_versionGuid)->read(lei);
    npc(_streamName)->read(lei);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::VersionedStream::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.VersionedStream", 35);
    return c;
}

java::lang::Class* poi::hpsf::VersionedStream::getClass0()
{
    return class_();
}

