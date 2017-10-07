// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Component_DummyRequestFocusController.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Component_DummyRequestFocusController::Component_DummyRequestFocusController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::awt::Component_DummyRequestFocusController::ctor() */
bool java::awt::Component_DummyRequestFocusController::acceptRequestFocus(Component* from, Component* to, bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause)
{ /* stub */
    unimplemented_(u"bool java::awt::Component_DummyRequestFocusController::acceptRequestFocus(Component* from, Component* to, bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Component_DummyRequestFocusController::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Component.DummyRequestFocusController", 46);
    return c;
}

java::lang::Class* java::awt::Component_DummyRequestFocusController::getClass0()
{
    return class_();
}

