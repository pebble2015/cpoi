// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/RenderingHints_Key.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::RenderingHints_Key::RenderingHints_Key(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::RenderingHints_Key::RenderingHints_Key(int32_t privatekey)
    : RenderingHints_Key(*static_cast< ::default_init_tag* >(0))
{
    ctor(privatekey);
}

java::util::HashMap*& java::awt::RenderingHints_Key::identitymap()
{
    clinit();
    return identitymap_;
}
java::util::HashMap* java::awt::RenderingHints_Key::identitymap_;

void ::java::awt::RenderingHints_Key::ctor(int32_t privatekey)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::RenderingHints_Key::ctor(int32_t privatekey)");
}

bool java::awt::RenderingHints_Key::equals(::java::lang::Object* o)
{ /* stub */
    unimplemented_(u"bool java::awt::RenderingHints_Key::equals(::java::lang::Object* o)");
    return 0;
}

/* private: java::lang::String* java::awt::RenderingHints_Key::getIdentity() */
int32_t java::awt::RenderingHints_Key::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::RenderingHints_Key::hashCode()");
    return 0;
}

int32_t java::awt::RenderingHints_Key::intKey()
{ /* stub */
    unimplemented_(u"int32_t java::awt::RenderingHints_Key::intKey()");
    return 0;
}

/* private: void java::awt::RenderingHints_Key::recordIdentity(RenderingHints_Key* k) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::RenderingHints_Key::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.RenderingHints.Key", 27);
    return c;
}

java::lang::Class* java::awt::RenderingHints_Key::getClass0()
{
    return class_();
}

