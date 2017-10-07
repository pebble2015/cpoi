// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities_VSyncType.hpp>

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

namespace sun
{
    namespace java2d
    {
        namespace pipe
        {
            namespace hw
            {
typedef ::SubArray< ::sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType, ::java::lang::EnumArray > ExtendedBufferCapabilities_VSyncTypeArray;
            } // hw
        } // pipe
    } // java2d
} // sun

extern void unimplemented_(const char16_t* name);
sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::ExtendedBufferCapabilities_VSyncType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncTypeArray*& sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::$VALUES()
{
    clinit();
    return $VALUES_;
}
sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncTypeArray* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::$VALUES_;
sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::VSYNC_DEFAULT;
sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::VSYNC_OFF;
sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::VSYNC_ON;

/* private: void ::sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::ctor(::java::lang::String* name, int ordinal, int32_t arg0) */
int32_t sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::id()
{ /* stub */
    unimplemented_(u"int32_t sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::id()");
    return 0;
}

sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::valueOf(::java::lang::String* arg0)");
    return 0;
}

sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncTypeArray* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::values()
{ /* stub */
    clinit();
    unimplemented_(u"sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncTypeArray* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::class_()
{
    static ::java::lang::Class* c = ::class_(u"sun.java2d.pipe.hw.ExtendedBufferCapabilities.VSyncType", 55);
    return c;
}

java::lang::Enum* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* sun::java2d::pipe::hw::ExtendedBufferCapabilities_VSyncType::getClass0()
{
    return class_();
}

