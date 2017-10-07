// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Toolkit_SelectiveAWTEventListener.hpp>

#include <java/awt/Toolkit.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Toolkit_SelectiveAWTEventListener::Toolkit_SelectiveAWTEventListener(Toolkit *Toolkit_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Toolkit_this(Toolkit_this)
{
    clinit();
}

java::awt::Toolkit_SelectiveAWTEventListener::Toolkit_SelectiveAWTEventListener(Toolkit *Toolkit_this, ::java::awt::event::AWTEventListener* l, int64_t mask)
    : Toolkit_SelectiveAWTEventListener(Toolkit_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(l, mask);
}


void ::java::awt::Toolkit_SelectiveAWTEventListener::ctor(::java::awt::event::AWTEventListener* l, int64_t mask)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Toolkit_SelectiveAWTEventListener::ctor(::java::awt::event::AWTEventListener* l, int64_t mask)");
}

void java::awt::Toolkit_SelectiveAWTEventListener::eventDispatched(AWTEvent* event)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_SelectiveAWTEventListener::eventDispatched(AWTEvent* event)");
}

int32_tArray* java::awt::Toolkit_SelectiveAWTEventListener::getCalls()
{ /* stub */
return calls ; /* getter */
}

int64_t java::awt::Toolkit_SelectiveAWTEventListener::getEventMask()
{ /* stub */
return eventMask ; /* getter */
}

java::awt::event::AWTEventListener* java::awt::Toolkit_SelectiveAWTEventListener::getListener()
{ /* stub */
return listener ; /* getter */
}

void java::awt::Toolkit_SelectiveAWTEventListener::orEventMasks(int64_t mask)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_SelectiveAWTEventListener::orEventMasks(int64_t mask)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Toolkit_SelectiveAWTEventListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Toolkit.SelectiveAWTEventListener", 42);
    return c;
}

java::lang::Class* java::awt::Toolkit_SelectiveAWTEventListener::getClass0()
{
    return class_();
}

