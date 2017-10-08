// Generated from /POI/java/org/apache/poi/hpsf/Array.java
#include <org/apache/poi/hpsf/Array__ArrayDimension.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/util/LittleEndianByteArrayInputStream.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hpsf::Array__ArrayDimension::Array__ArrayDimension(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hpsf::Array__ArrayDimension::Array__ArrayDimension()
    : Array__ArrayDimension(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hpsf::Array__ArrayDimension::read(::poi::util::LittleEndianByteArrayInputStream* lei)
{
    _size = npc(lei)->readUInt();
    _indexOffset = npc(lei)->readInt();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hpsf::Array__ArrayDimension::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hpsf.Array.ArrayDimension", 40);
    return c;
}

java::lang::Class* poi::hpsf::Array__ArrayDimension::getClass0()
{
    return class_();
}

