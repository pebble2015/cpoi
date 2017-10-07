// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Container_AccessibleAWTContainer.hpp>

#include <java/awt/Container.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::Container_AccessibleAWTContainer::Container_AccessibleAWTContainer(Container *Container_this, const ::default_init_tag&)
    : super(Container_this, *static_cast< ::default_init_tag* >(0))
    , Container_this(Container_this)
{
    clinit();
}

java::awt::Container_AccessibleAWTContainer::Container_AccessibleAWTContainer(Container *Container_this)
    : Container_AccessibleAWTContainer(Container_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int64_t java::awt::Container_AccessibleAWTContainer::serialVersionUID;

void ::java::awt::Container_AccessibleAWTContainer::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Container_AccessibleAWTContainer::ctor()");
}

void java::awt::Container_AccessibleAWTContainer::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Container_AccessibleAWTContainer::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

javax::accessibility::Accessible* java::awt::Container_AccessibleAWTContainer::getAccessibleAt(Point* p)
{ /* stub */
    unimplemented_(u"javax::accessibility::Accessible* java::awt::Container_AccessibleAWTContainer::getAccessibleAt(Point* p)");
    return 0;
}

javax::accessibility::Accessible* java::awt::Container_AccessibleAWTContainer::getAccessibleChild(int32_t i)
{ /* stub */
    unimplemented_(u"javax::accessibility::Accessible* java::awt::Container_AccessibleAWTContainer::getAccessibleChild(int32_t i)");
    return 0;
}

int32_t java::awt::Container_AccessibleAWTContainer::getAccessibleChildrenCount()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Container_AccessibleAWTContainer::getAccessibleChildrenCount()");
    return 0;
}

void java::awt::Container_AccessibleAWTContainer::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Container_AccessibleAWTContainer::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Container_AccessibleAWTContainer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Container.AccessibleAWTContainer", 41);
    return c;
}

java::lang::Class* java::awt::Container_AccessibleAWTContainer::getClass0()
{
    return class_();
}

