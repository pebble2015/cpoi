// Generated from /POI/java/org/apache/poi/poifs/filesystem/Ole10NativeException.java
#include <org/apache/poi/poifs/filesystem/Ole10NativeException.hpp>

org::apache::poi::poifs::filesystem::Ole10NativeException::Ole10NativeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::poifs::filesystem::Ole10NativeException::Ole10NativeException(::java::lang::String* message) 
    : Ole10NativeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

void org::apache::poi::poifs::filesystem::Ole10NativeException::ctor(::java::lang::String* message)
{
    super::ctor(message);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::poifs::filesystem::Ole10NativeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.poifs.filesystem.Ole10NativeException", 52);
    return c;
}

java::lang::Class* org::apache::poi::poifs::filesystem::Ole10NativeException::getClass0()
{
    return class_();
}

