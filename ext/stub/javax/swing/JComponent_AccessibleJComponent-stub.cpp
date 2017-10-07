// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <javax/swing/JComponent_AccessibleJComponent.hpp>

#include <javax/swing/JComponent.hpp>

extern void unimplemented_(const char16_t* name);
javax::swing::JComponent_AccessibleJComponent::JComponent_AccessibleJComponent(JComponent *JComponent_this, const ::default_init_tag&)
    : super(JComponent_this, *static_cast< ::default_init_tag* >(0))
    , JComponent_this(JComponent_this)
{
    clinit();
}

javax::swing::JComponent_AccessibleJComponent::JComponent_AccessibleJComponent(JComponent *JComponent_this)
    : JComponent_AccessibleJComponent(JComponent_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::javax::swing::JComponent_AccessibleJComponent::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::javax::swing::JComponent_AccessibleJComponent::ctor()");
}

void javax::swing::JComponent_AccessibleJComponent::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_AccessibleJComponent::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

javax::accessibility::Accessible* javax::swing::JComponent_AccessibleJComponent::getAccessibleChild(int32_t i)
{ /* stub */
    unimplemented_(u"javax::accessibility::Accessible* javax::swing::JComponent_AccessibleJComponent::getAccessibleChild(int32_t i)");
    return 0;
}

int32_t javax::swing::JComponent_AccessibleJComponent::getAccessibleChildrenCount()
{ /* stub */
    unimplemented_(u"int32_t javax::swing::JComponent_AccessibleJComponent::getAccessibleChildrenCount()");
    return 0;
}

java::lang::String* javax::swing::JComponent_AccessibleJComponent::getAccessibleDescription()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent_AccessibleJComponent::getAccessibleDescription()");
    return 0;
}

javax::accessibility::AccessibleExtendedComponent* javax::swing::JComponent_AccessibleJComponent::getAccessibleExtendedComponent()
{ /* stub */
    unimplemented_(u"javax::accessibility::AccessibleExtendedComponent* javax::swing::JComponent_AccessibleJComponent::getAccessibleExtendedComponent()");
    return 0;
}

javax::accessibility::AccessibleKeyBinding* javax::swing::JComponent_AccessibleJComponent::getAccessibleKeyBinding()
{ /* stub */
    unimplemented_(u"javax::accessibility::AccessibleKeyBinding* javax::swing::JComponent_AccessibleJComponent::getAccessibleKeyBinding()");
    return 0;
}

java::lang::String* javax::swing::JComponent_AccessibleJComponent::getAccessibleName()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent_AccessibleJComponent::getAccessibleName()");
    return 0;
}

javax::accessibility::AccessibleRole* javax::swing::JComponent_AccessibleJComponent::getAccessibleRole()
{ /* stub */
    unimplemented_(u"javax::accessibility::AccessibleRole* javax::swing::JComponent_AccessibleJComponent::getAccessibleRole()");
    return 0;
}

javax::accessibility::AccessibleStateSet* javax::swing::JComponent_AccessibleJComponent::getAccessibleStateSet()
{ /* stub */
    unimplemented_(u"javax::accessibility::AccessibleStateSet* javax::swing::JComponent_AccessibleJComponent::getAccessibleStateSet()");
    return 0;
}

java::lang::String* javax::swing::JComponent_AccessibleJComponent::getBorderTitle(::javax::swing::border::Border* b)
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent_AccessibleJComponent::getBorderTitle(::javax::swing::border::Border* b)");
    return 0;
}

java::lang::String* javax::swing::JComponent_AccessibleJComponent::getTitledBorderText()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent_AccessibleJComponent::getTitledBorderText()");
    return 0;
}

java::lang::String* javax::swing::JComponent_AccessibleJComponent::getToolTipText()
{ /* stub */
    unimplemented_(u"java::lang::String* javax::swing::JComponent_AccessibleJComponent::getToolTipText()");
    return 0;
}

void javax::swing::JComponent_AccessibleJComponent::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void javax::swing::JComponent_AccessibleJComponent::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* javax::swing::JComponent_AccessibleJComponent::class_()
{
    static ::java::lang::Class* c = ::class_(u"javax.swing.JComponent.AccessibleJComponent", 43);
    return c;
}

void javax::swing::JComponent_AccessibleJComponent::addFocusListener(::java::awt::event::FocusListener* l)
{
    Component_AccessibleAWTComponent::addFocusListener(l);
}

bool javax::swing::JComponent_AccessibleJComponent::contains(::java::awt::Point* p)
{
    return Component_AccessibleAWTComponent::contains(p);
}

javax::accessibility::Accessible* javax::swing::JComponent_AccessibleJComponent::getAccessibleAt(::java::awt::Point* p)
{
    return Container_AccessibleAWTContainer::getAccessibleAt(p);
}

java::awt::Color* javax::swing::JComponent_AccessibleJComponent::getBackground()
{
    return Component_AccessibleAWTComponent::getBackground();
}

java::awt::Rectangle* javax::swing::JComponent_AccessibleJComponent::getBounds()
{
    return Component_AccessibleAWTComponent::getBounds();
}

java::awt::Cursor* javax::swing::JComponent_AccessibleJComponent::getCursor()
{
    return Component_AccessibleAWTComponent::getCursor();
}

java::awt::Font* javax::swing::JComponent_AccessibleJComponent::getFont()
{
    return Component_AccessibleAWTComponent::getFont();
}

java::awt::FontMetrics* javax::swing::JComponent_AccessibleJComponent::getFontMetrics(::java::awt::Font* f)
{
    return Component_AccessibleAWTComponent::getFontMetrics(f);
}

java::awt::Color* javax::swing::JComponent_AccessibleJComponent::getForeground()
{
    return Component_AccessibleAWTComponent::getForeground();
}

java::awt::Point* javax::swing::JComponent_AccessibleJComponent::getLocation()
{
    return Component_AccessibleAWTComponent::getLocation();
}

java::awt::Point* javax::swing::JComponent_AccessibleJComponent::getLocationOnScreen()
{
    return Component_AccessibleAWTComponent::getLocationOnScreen();
}

java::awt::Dimension* javax::swing::JComponent_AccessibleJComponent::getSize()
{
    return Component_AccessibleAWTComponent::getSize();
}

bool javax::swing::JComponent_AccessibleJComponent::isEnabled()
{
    return Component_AccessibleAWTComponent::isEnabled();
}

bool javax::swing::JComponent_AccessibleJComponent::isFocusTraversable()
{
    return Component_AccessibleAWTComponent::isFocusTraversable();
}

bool javax::swing::JComponent_AccessibleJComponent::isShowing()
{
    return Component_AccessibleAWTComponent::isShowing();
}

bool javax::swing::JComponent_AccessibleJComponent::isVisible()
{
    return Component_AccessibleAWTComponent::isVisible();
}

void javax::swing::JComponent_AccessibleJComponent::removeFocusListener(::java::awt::event::FocusListener* l)
{
    Component_AccessibleAWTComponent::removeFocusListener(l);
}

void javax::swing::JComponent_AccessibleJComponent::requestFocus()
{
    Component_AccessibleAWTComponent::requestFocus();
}

void javax::swing::JComponent_AccessibleJComponent::setBackground(::java::awt::Color* c)
{
    Component_AccessibleAWTComponent::setBackground(c);
}

void javax::swing::JComponent_AccessibleJComponent::setBounds(::java::awt::Rectangle* r)
{
    Component_AccessibleAWTComponent::setBounds(r);
}

void javax::swing::JComponent_AccessibleJComponent::setCursor(::java::awt::Cursor* cursor)
{
    Component_AccessibleAWTComponent::setCursor(cursor);
}

void javax::swing::JComponent_AccessibleJComponent::setEnabled(bool b)
{
    Component_AccessibleAWTComponent::setEnabled(b);
}

void javax::swing::JComponent_AccessibleJComponent::setFont(::java::awt::Font* f)
{
    Component_AccessibleAWTComponent::setFont(f);
}

void javax::swing::JComponent_AccessibleJComponent::setForeground(::java::awt::Color* c)
{
    Component_AccessibleAWTComponent::setForeground(c);
}

void javax::swing::JComponent_AccessibleJComponent::setLocation(::java::awt::Point* p)
{
    Component_AccessibleAWTComponent::setLocation(p);
}

void javax::swing::JComponent_AccessibleJComponent::setSize(::java::awt::Dimension* d)
{
    Component_AccessibleAWTComponent::setSize(d);
}

void javax::swing::JComponent_AccessibleJComponent::setVisible(bool b)
{
    Component_AccessibleAWTComponent::setVisible(b);
}

java::lang::Class* javax::swing::JComponent_AccessibleJComponent::getClass0()
{
    return class_();
}

