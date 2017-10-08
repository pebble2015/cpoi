// Generated from /POI/java/org/apache/poi/util/LittleEndian.java
#include <org/apache/poi/util/LittleEndian_BufferUnderrunException.hpp>

#include <java/lang/String.hpp>

poi::util::LittleEndian_BufferUnderrunException::LittleEndian_BufferUnderrunException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::LittleEndian_BufferUnderrunException::LittleEndian_BufferUnderrunException() 
    : LittleEndian_BufferUnderrunException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t poi::util::LittleEndian_BufferUnderrunException::serialVersionUID;

void poi::util::LittleEndian_BufferUnderrunException::ctor()
{
    super::ctor(u"buffer underrun"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::LittleEndian_BufferUnderrunException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.LittleEndian.BufferUnderrunException", 56);
    return c;
}

java::lang::Class* poi::util::LittleEndian_BufferUnderrunException::getClass0()
{
    return class_();
}

