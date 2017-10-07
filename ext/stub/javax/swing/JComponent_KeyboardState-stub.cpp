// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/swing/JComponent_KeyboardState.hpp>

extern void unimplemented_(const char16_t* name);
javax::swing::JComponent_KeyboardState::JComponent_KeyboardState(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

javax::swing::JComponent_KeyboardState::JComponent_KeyboardState()
    : JComponent_KeyboardState(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::lang::Object*& javax::swing::JComponent_KeyboardState::keyCodesKey()
{
    clinit();
    return keyCodesKey_;
}
java::lang::Object* javax::swing::JComponent_KeyboardState::keyCodesKey_;

void ::javax::swing::JComponent_KeyboardState::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::swing::JComponent_KeyboardState::ctor()");
}

javax::swing::JComponent_IntVector* javax::swing::JComponent_KeyboardState::getKeyCodeArray_()
{ /* stub */
    clinit();
    unimplemented_(u"javax::swing::JComponent_IntVector* javax::swing::JComponent_KeyboardState::getKeyCodeArray_()");
    return 0;
}

bool javax::swing::JComponent_KeyboardState::keyIsPressed(int32_t keyCode)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::swing::JComponent_KeyboardState::keyIsPressed(int32_t keyCode)");
    return 0;
}

void javax::swing::JComponent_KeyboardState::registerKeyPressed(int32_t keyCode)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::swing::JComponent_KeyboardState::registerKeyPressed(int32_t keyCode)");
}

void javax::swing::JComponent_KeyboardState::registerKeyReleased(int32_t keyCode)
{ /* stub */
    clinit();
    unimplemented_(u"void javax::swing::JComponent_KeyboardState::registerKeyReleased(int32_t keyCode)");
}

bool javax::swing::JComponent_KeyboardState::shouldProcess(::java::awt::event::KeyEvent* e)
{ /* stub */
    clinit();
    unimplemented_(u"bool javax::swing::JComponent_KeyboardState::shouldProcess(::java::awt::event::KeyEvent* e)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::swing::JComponent_KeyboardState::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.swing.JComponent.KeyboardState", 36);
    return c;
}

java::lang::Class* javax::swing::JComponent_KeyboardState::getClass0()
{
    return class_();
}

