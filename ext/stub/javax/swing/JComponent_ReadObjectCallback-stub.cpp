// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/swing/JComponent_ReadObjectCallback.hpp>

#include <javax/swing/JComponent.hpp>

extern void unimplemented_(const char16_t* name);
javax::swing::JComponent_ReadObjectCallback::JComponent_ReadObjectCallback(JComponent *JComponent_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , JComponent_this(JComponent_this)
{
    clinit();
}

javax::swing::JComponent_ReadObjectCallback::JComponent_ReadObjectCallback(JComponent *JComponent_this, ::java::io::ObjectInputStream* s)
    : JComponent_ReadObjectCallback(JComponent_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}


void ::javax::swing::JComponent_ReadObjectCallback::ctor(::java::io::ObjectInputStream* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::swing::JComponent_ReadObjectCallback::ctor(::java::io::ObjectInputStream* s)");
}

/* private: void javax::swing::JComponent_ReadObjectCallback::registerComponent(JComponent* c) */
void javax::swing::JComponent_ReadObjectCallback::validateObject()
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_ReadObjectCallback::validateObject()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::swing::JComponent_ReadObjectCallback::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.swing.JComponent.ReadObjectCallback", 41);
    return c;
}

java::lang::Class* javax::swing::JComponent_ReadObjectCallback::getClass0()
{
    return class_();
}

