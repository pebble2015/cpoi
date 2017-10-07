// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_BaselineResizeBehavior.hpp>

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
typedef ::SubArray< ::java::awt::Component_BaselineResizeBehavior, ::java::lang::EnumArray > Component_BaselineResizeBehaviorArray;
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::Component_BaselineResizeBehavior::Component_BaselineResizeBehavior(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Component_BaselineResizeBehaviorArray*& java::awt::Component_BaselineResizeBehavior::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::awt::Component_BaselineResizeBehaviorArray* java::awt::Component_BaselineResizeBehavior::$VALUES_;
java::awt::Component_BaselineResizeBehavior* java::awt::Component_BaselineResizeBehavior::CENTER_OFFSET;
java::awt::Component_BaselineResizeBehavior* java::awt::Component_BaselineResizeBehavior::CONSTANT_ASCENT;
java::awt::Component_BaselineResizeBehavior* java::awt::Component_BaselineResizeBehavior::CONSTANT_DESCENT;
java::awt::Component_BaselineResizeBehavior* java::awt::Component_BaselineResizeBehavior::OTHER;

/* private: void ::java::awt::Component_BaselineResizeBehavior::ctor(::java::lang::String* name, int ordinal) */
java::awt::Component_BaselineResizeBehavior* java::awt::Component_BaselineResizeBehavior::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Component_BaselineResizeBehavior* java::awt::Component_BaselineResizeBehavior::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::awt::Component_BaselineResizeBehaviorArray* java::awt::Component_BaselineResizeBehavior::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Component_BaselineResizeBehaviorArray* java::awt::Component_BaselineResizeBehavior::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_BaselineResizeBehavior::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.BaselineResizeBehavior", 41);
    return c;
}

java::lang::Enum* java::awt::Component_BaselineResizeBehavior::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::awt::Component_BaselineResizeBehavior::getClass0()
{
    return class_();
}

