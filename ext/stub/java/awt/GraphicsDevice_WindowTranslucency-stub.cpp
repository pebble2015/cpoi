// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/GraphicsDevice_WindowTranslucency.hpp>

#include <java/lang/Enum.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Enum, ObjectArray, ComparableArray, ::java::io::SerializableArray > EnumArray;
    } // lang

    namespace awt
    {
typedef ::SubArray< ::java::awt::GraphicsDevice_WindowTranslucency, ::java::lang::EnumArray > GraphicsDevice_WindowTranslucencyArray;
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::GraphicsDevice_WindowTranslucency::GraphicsDevice_WindowTranslucency(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::GraphicsDevice_WindowTranslucencyArray*& java::awt::GraphicsDevice_WindowTranslucency::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::awt::GraphicsDevice_WindowTranslucencyArray* java::awt::GraphicsDevice_WindowTranslucency::$VALUES_;
java::awt::GraphicsDevice_WindowTranslucency* java::awt::GraphicsDevice_WindowTranslucency::PERPIXEL_TRANSLUCENT;
java::awt::GraphicsDevice_WindowTranslucency* java::awt::GraphicsDevice_WindowTranslucency::PERPIXEL_TRANSPARENT;
java::awt::GraphicsDevice_WindowTranslucency* java::awt::GraphicsDevice_WindowTranslucency::TRANSLUCENT;

/* private: void ::java::awt::GraphicsDevice_WindowTranslucency::ctor(::java::lang::String* name, int ordinal) */
java::awt::GraphicsDevice_WindowTranslucency* java::awt::GraphicsDevice_WindowTranslucency::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::GraphicsDevice_WindowTranslucency* java::awt::GraphicsDevice_WindowTranslucency::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::awt::GraphicsDevice_WindowTranslucencyArray* java::awt::GraphicsDevice_WindowTranslucency::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::GraphicsDevice_WindowTranslucencyArray* java::awt::GraphicsDevice_WindowTranslucency::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::GraphicsDevice_WindowTranslucency::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.GraphicsDevice.WindowTranslucency", 42);
    return c;
}

java::lang::Enum* java::awt::GraphicsDevice_WindowTranslucency::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::awt::GraphicsDevice_WindowTranslucency::getClass0()
{
    return class_();
}

