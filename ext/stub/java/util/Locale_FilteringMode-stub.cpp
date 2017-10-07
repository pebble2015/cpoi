// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Locale_FilteringMode.hpp>

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

    namespace util
    {
typedef ::SubArray< ::java::util::Locale_FilteringMode, ::java::lang::EnumArray > Locale_FilteringModeArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
java::util::Locale_FilteringMode::Locale_FilteringMode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Locale_FilteringModeArray*& java::util::Locale_FilteringMode::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::util::Locale_FilteringModeArray* java::util::Locale_FilteringMode::$VALUES_;
java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::AUTOSELECT_FILTERING;
java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::EXTENDED_FILTERING;
java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::IGNORE_EXTENDED_RANGES;
java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::MAP_EXTENDED_RANGES;
java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::REJECT_EXTENDED_RANGES;

/* private: void ::java::util::Locale_FilteringMode::ctor(::java::lang::String* name, int ordinal) */
java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Locale_FilteringMode* java::util::Locale_FilteringMode::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::util::Locale_FilteringModeArray* java::util::Locale_FilteringMode::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Locale_FilteringModeArray* java::util::Locale_FilteringMode::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Locale_FilteringMode::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Locale.FilteringMode", 30);
    return c;
}

java::lang::Enum* java::util::Locale_FilteringMode::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::util::Locale_FilteringMode::getClass0()
{
    return class_();
}

