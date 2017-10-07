// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/swing/JComponent_ActionStandin.hpp>

#include <javax/swing/JComponent.hpp>

extern void unimplemented_(const char16_t* name);
javax::swing::JComponent_ActionStandin::JComponent_ActionStandin(JComponent *JComponent_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , JComponent_this(JComponent_this)
{
    clinit();
}

javax::swing::JComponent_ActionStandin::JComponent_ActionStandin(JComponent *JComponent_this, ::java::awt::event::ActionListener* actionListener, ::java::lang::String* command)
    : JComponent_ActionStandin(JComponent_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(actionListener, command);
}


void ::javax::swing::JComponent_ActionStandin::ctor(::java::awt::event::ActionListener* actionListener, ::java::lang::String* command)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::swing::JComponent_ActionStandin::ctor(::java::awt::event::ActionListener* actionListener, ::java::lang::String* command)");
}

void javax::swing::JComponent_ActionStandin::actionPerformed(::java::awt::event::ActionEvent* ae)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_ActionStandin::actionPerformed(::java::awt::event::ActionEvent* ae)");
}

void javax::swing::JComponent_ActionStandin::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_ActionStandin::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

java::lang::Object* javax::swing::JComponent_ActionStandin::getValue(::java::lang::String* key)
{ /* stub */
    unimplemented_(u"java::lang::Object* javax::swing::JComponent_ActionStandin::getValue(::java::lang::String* key)");
    return 0;
}

bool javax::swing::JComponent_ActionStandin::isEnabled()
{ /* stub */
    unimplemented_(u"bool javax::swing::JComponent_ActionStandin::isEnabled()");
    return 0;
}

void javax::swing::JComponent_ActionStandin::putValue(::java::lang::String* key, ::java::lang::Object* value)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_ActionStandin::putValue(::java::lang::String* key, ::java::lang::Object* value)");
}

void javax::swing::JComponent_ActionStandin::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_ActionStandin::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

void javax::swing::JComponent_ActionStandin::setEnabled(bool b)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_ActionStandin::setEnabled(bool b)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::swing::JComponent_ActionStandin::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.swing.JComponent.ActionStandin", 36);
    return c;
}

java::lang::Class* javax::swing::JComponent_ActionStandin::getClass0()
{
    return class_();
}

