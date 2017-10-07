// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/math/RoundingMode.hpp>

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

    namespace math
    {
typedef ::SubArray< ::java::math::RoundingMode, ::java::lang::EnumArray > RoundingModeArray;
    } // math
} // java

extern void unimplemented_(const char16_t* name);
java::math::RoundingMode::RoundingMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::RoundingModeArray*& java::math::RoundingMode::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::math::RoundingModeArray* java::math::RoundingMode::$VALUES_;
java::math::RoundingMode* java::math::RoundingMode::CEILING;
java::math::RoundingMode* java::math::RoundingMode::DOWN;
java::math::RoundingMode* java::math::RoundingMode::FLOOR;
java::math::RoundingMode* java::math::RoundingMode::HALF_DOWN;
java::math::RoundingMode* java::math::RoundingMode::HALF_EVEN;
java::math::RoundingMode* java::math::RoundingMode::HALF_UP;
java::math::RoundingMode* java::math::RoundingMode::UNNECESSARY;
java::math::RoundingMode* java::math::RoundingMode::UP;

/* private: void ::java::math::RoundingMode::ctor(::java::lang::String* name, int ordinal, int32_t oldMode) */
java::math::RoundingMode* java::math::RoundingMode::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::RoundingMode* java::math::RoundingMode::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::math::RoundingMode* java::math::RoundingMode::valueOf(int32_t rm)
{ /* stub */
    clinit();
    unimplemented_(u"java::math::RoundingMode* java::math::RoundingMode::valueOf(int32_t rm)");
    return 0;
}

java::math::RoundingModeArray* java::math::RoundingMode::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::math::RoundingModeArray* java::math::RoundingMode::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::math::RoundingMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.RoundingMode", 22);
    return c;
}

java::lang::Enum* java::math::RoundingMode::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::math::RoundingMode::getClass0()
{
    return class_();
}

