// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/MultipleGradientPaint_CycleMethod.hpp>

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
typedef ::SubArray< ::java::awt::MultipleGradientPaint_CycleMethod, ::java::lang::EnumArray > MultipleGradientPaint_CycleMethodArray;
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::MultipleGradientPaint_CycleMethod::MultipleGradientPaint_CycleMethod(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::MultipleGradientPaint_CycleMethodArray*& java::awt::MultipleGradientPaint_CycleMethod::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::awt::MultipleGradientPaint_CycleMethodArray* java::awt::MultipleGradientPaint_CycleMethod::$VALUES_;
java::awt::MultipleGradientPaint_CycleMethod* java::awt::MultipleGradientPaint_CycleMethod::NO_CYCLE;
java::awt::MultipleGradientPaint_CycleMethod* java::awt::MultipleGradientPaint_CycleMethod::REFLECT;
java::awt::MultipleGradientPaint_CycleMethod* java::awt::MultipleGradientPaint_CycleMethod::REPEAT;

/* private: void ::java::awt::MultipleGradientPaint_CycleMethod::ctor(::java::lang::String* name, int ordinal) */
java::awt::MultipleGradientPaint_CycleMethod* java::awt::MultipleGradientPaint_CycleMethod::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::MultipleGradientPaint_CycleMethod* java::awt::MultipleGradientPaint_CycleMethod::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::awt::MultipleGradientPaint_CycleMethodArray* java::awt::MultipleGradientPaint_CycleMethod::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::MultipleGradientPaint_CycleMethodArray* java::awt::MultipleGradientPaint_CycleMethod::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::MultipleGradientPaint_CycleMethod::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.MultipleGradientPaint.CycleMethod", 42);
    return c;
}

java::lang::Enum* java::awt::MultipleGradientPaint_CycleMethod::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::awt::MultipleGradientPaint_CycleMethod::getClass0()
{
    return class_();
}

