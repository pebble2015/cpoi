// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_ProxyCapabilities.hpp>

#include <java/awt/Component.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_ProxyCapabilities::Component_ProxyCapabilities(Component *Component_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Component_this(Component_this)
{
    clinit();
}


/* private: void ::java::awt::Component_ProxyCapabilities::ctor(BufferCapabilities* orig) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_ProxyCapabilities::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.ProxyCapabilities", 36);
    return c;
}

java::lang::Class* java::awt::Component_ProxyCapabilities::getClass0()
{
    return class_();
}

