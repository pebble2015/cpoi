// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Insets.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Insets::Insets(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Insets::Insets(int32_t top, int32_t left, int32_t bottom, int32_t right)
    : Insets(*static_cast< ::default_init_tag* >(0))
{
    ctor(top, left, bottom, right);
}

constexpr int64_t java::awt::Insets::serialVersionUID;

void ::java::awt::Insets::ctor(int32_t top, int32_t left, int32_t bottom, int32_t right)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Insets::ctor(int32_t top, int32_t left, int32_t bottom, int32_t right)");
}

java::lang::Object* java::awt::Insets::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::Insets::clone()");
    return 0;
}

bool java::awt::Insets::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::Insets::equals(::java::lang::Object* obj)");
    return 0;
}

int32_t java::awt::Insets::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Insets::hashCode()");
    return 0;
}

void java::awt::Insets::set(int32_t top, int32_t left, int32_t bottom, int32_t right)
{ /* stub */
    unimplemented_(u"void java::awt::Insets::set(int32_t top, int32_t left, int32_t bottom, int32_t right)");
}

java::lang::String* java::awt::Insets::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Insets::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Insets::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Insets", 15);
    return c;
}

java::lang::Class* java::awt::Insets::getClass0()
{
    return class_();
}

