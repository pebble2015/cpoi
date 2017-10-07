// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/AttributeValue.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);
java::awt::AttributeValue::AttributeValue(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::AttributeValue::AttributeValue(int32_t value, ::java::lang::StringArray* names)
    : AttributeValue(*static_cast< ::default_init_tag* >(0))
{
    ctor(value, names);
}

sun::util::logging::PlatformLogger*& java::awt::AttributeValue::log()
{
    clinit();
    return log_;
}
sun::util::logging::PlatformLogger* java::awt::AttributeValue::log_;

void ::java::awt::AttributeValue::ctor(int32_t value, ::java::lang::StringArray* names)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::AttributeValue::ctor(int32_t value, ::java::lang::StringArray* names)");
}

int32_t java::awt::AttributeValue::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::AttributeValue::hashCode()");
    return 0;
}

java::lang::String* java::awt::AttributeValue::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::AttributeValue::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::AttributeValue::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.AttributeValue", 23);
    return c;
}

java::lang::Class* java::awt::AttributeValue::getClass0()
{
    return class_();
}

