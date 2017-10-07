// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Formatter_BigDecimalLayoutForm.hpp>

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
typedef ::SubArray< ::java::util::Formatter_BigDecimalLayoutForm, ::java::lang::EnumArray > Formatter_BigDecimalLayoutFormArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
java::util::Formatter_BigDecimalLayoutForm::Formatter_BigDecimalLayoutForm(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Formatter_BigDecimalLayoutFormArray*& java::util::Formatter_BigDecimalLayoutForm::$VALUES()
{
    clinit();
    return $VALUES_;
}
java::util::Formatter_BigDecimalLayoutFormArray* java::util::Formatter_BigDecimalLayoutForm::$VALUES_;
java::util::Formatter_BigDecimalLayoutForm* java::util::Formatter_BigDecimalLayoutForm::DECIMAL_FLOAT;
java::util::Formatter_BigDecimalLayoutForm* java::util::Formatter_BigDecimalLayoutForm::SCIENTIFIC;

/* private: void ::java::util::Formatter_BigDecimalLayoutForm::ctor(::java::lang::String* name, int ordinal) */
java::util::Formatter_BigDecimalLayoutForm* java::util::Formatter_BigDecimalLayoutForm::valueOf(::java::lang::String* arg0)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Formatter_BigDecimalLayoutForm* java::util::Formatter_BigDecimalLayoutForm::valueOf(::java::lang::String* arg0)");
    return 0;
}

java::util::Formatter_BigDecimalLayoutFormArray* java::util::Formatter_BigDecimalLayoutForm::values()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Formatter_BigDecimalLayoutFormArray* java::util::Formatter_BigDecimalLayoutForm::values()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Formatter_BigDecimalLayoutForm::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Formatter.BigDecimalLayoutForm", 40);
    return c;
}

java::lang::Enum* java::util::Formatter_BigDecimalLayoutForm::valueOf(::java::lang::Class* enumType, ::java::lang::String* name)
{
    return super::valueOf(enumType, name);
}

java::lang::Class* java::util::Formatter_BigDecimalLayoutForm::getClass0()
{
    return class_();
}

