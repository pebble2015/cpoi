// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Toolkit_DesktopPropertyChangeSupport.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util

    namespace beans
    {
typedef ::SubArray< ::java::beans::PropertyChangeListener, ::java::lang::ObjectArray, ::java::util::EventListenerArray > PropertyChangeListenerArray;
    } // beans
} // java

extern void unimplemented_(const char16_t* name);
java::awt::Toolkit_DesktopPropertyChangeSupport::Toolkit_DesktopPropertyChangeSupport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Toolkit_DesktopPropertyChangeSupport::Toolkit_DesktopPropertyChangeSupport(::java::lang::Object* sourceBean)
    : Toolkit_DesktopPropertyChangeSupport(*static_cast< ::default_init_tag* >(0))
{
    ctor(sourceBean);
}

java::lang::StringBuilder*& java::awt::Toolkit_DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY()
{
    clinit();
    return PROP_CHANGE_SUPPORT_KEY_;
}
java::lang::StringBuilder* java::awt::Toolkit_DesktopPropertyChangeSupport::PROP_CHANGE_SUPPORT_KEY_;

void ::java::awt::Toolkit_DesktopPropertyChangeSupport::ctor(::java::lang::Object* sourceBean)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Toolkit_DesktopPropertyChangeSupport::ctor(::java::lang::Object* sourceBean)");
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_DesktopPropertyChangeSupport::addPropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_DesktopPropertyChangeSupport::addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::firePropertyChange(::java::beans::PropertyChangeEvent* evt)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_DesktopPropertyChangeSupport::firePropertyChange(::java::beans::PropertyChangeEvent* evt)");
}

java::beans::PropertyChangeListenerArray* java::awt::Toolkit_DesktopPropertyChangeSupport::getPropertyChangeListeners()
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::awt::Toolkit_DesktopPropertyChangeSupport::getPropertyChangeListeners()");
    return 0;
}

java::beans::PropertyChangeListenerArray* java::awt::Toolkit_DesktopPropertyChangeSupport::getPropertyChangeListeners(::java::lang::String* propertyName)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::awt::Toolkit_DesktopPropertyChangeSupport::getPropertyChangeListeners(::java::lang::String* propertyName)");
    return 0;
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_DesktopPropertyChangeSupport::removePropertyChangeListener(::java::beans::PropertyChangeListener* listener)");
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::removePropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::awt::Toolkit_DesktopPropertyChangeSupport::removePropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Toolkit_DesktopPropertyChangeSupport::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Toolkit.DesktopPropertyChangeSupport", 45);
    return c;
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

void java::awt::Toolkit_DesktopPropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)
{
    super::firePropertyChange(propertyName, oldValue, newValue);
}

java::lang::Class* java::awt::Toolkit_DesktopPropertyChangeSupport::getClass0()
{
    return class_();
}

