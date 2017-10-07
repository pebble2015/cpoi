// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/imageio/ImageIO_SpiInfo.hpp>

#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang
} // java

namespace javax
{
    namespace imageio
    {
typedef ::SubArray< ::javax::imageio::ImageIO_SpiInfo, ::java::lang::EnumArray > ImageIO_SpiInfoArray;
    } // imageio
} // javax

extern void unimplemented_(const char16_t* name);
javax::imageio::ImageIO_SpiInfo::ImageIO_SpiInfo(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::imageio::ImageIO_SpiInfoArray*& javax::imageio::ImageIO_SpiInfo::$VALUES()
{
    clinit();
    return $VALUES_;
}
javax::imageio::ImageIO_SpiInfoArray* javax::imageio::ImageIO_SpiInfo::$VALUES_;
javax::imageio::ImageIO_SpiInfo* javax::imageio::ImageIO_SpiInfo::FILE_SUFFIXES;
javax::imageio::ImageIO_SpiInfo* javax::imageio::ImageIO_SpiInfo::FORMAT_NAMES;
javax::imageio::ImageIO_SpiInfo* javax::imageio::ImageIO_SpiInfo::MIME_TYPES;

/* private: void ::javax::imageio::ImageIO_SpiInfo::ctor(::java::lang::String* name, int ordinal) */
javax::imageio::ImageIO_SpiInfo* javax::imageio::ImageIO_SpiInfo::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageIO_SpiInfo* javax::imageio::ImageIO_SpiInfo::valueOf(::java::lang::String* arg0)");
    return 0;
}

javax::imageio::ImageIO_SpiInfoArray* javax::imageio::ImageIO_SpiInfo::values()
{ /* stub */
    clinit();
    unimplemented_(u"javax::imageio::ImageIO_SpiInfoArray* javax::imageio::ImageIO_SpiInfo::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::imageio::ImageIO_SpiInfo::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.imageio.ImageIO.SpiInfo", 29);
    return c;
}

java::lang::Enum* javax::imageio::ImageIO_SpiInfo::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* javax::imageio::ImageIO_SpiInfo::getClass0()
{
    return class_();
}

