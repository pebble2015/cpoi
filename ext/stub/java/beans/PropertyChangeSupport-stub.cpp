// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/beans/PropertyChangeSupport.hpp>

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
java::beans::PropertyChangeSupport::PropertyChangeSupport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::beans::PropertyChangeSupport::PropertyChangeSupport(::java::lang::Object* sourceBean)
    : PropertyChangeSupport(*static_cast< ::default_init_tag* >(0))
{
    ctor(sourceBean);
}

java::io::ObjectStreamFieldArray*& java::beans::PropertyChangeSupport::serialPersistentFields()
{
    clinit();
    return serialPersistentFields_;
}
java::io::ObjectStreamFieldArray* java::beans::PropertyChangeSupport::serialPersistentFields_;
constexpr int64_t java::beans::PropertyChangeSupport::serialVersionUID;

void ::java::beans::PropertyChangeSupport::ctor(::java::lang::Object* sourceBean)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::beans::PropertyChangeSupport::ctor(::java::lang::Object* sourceBean)");
}

void java::beans::PropertyChangeSupport::addPropertyChangeListener(PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::addPropertyChangeListener(PropertyChangeListener* listener)");
}

void java::beans::PropertyChangeSupport::addPropertyChangeListener(::java::lang::String* propertyName, PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::addPropertyChangeListener(::java::lang::String* propertyName, PropertyChangeListener* listener)");
}

/* private: void java::beans::PropertyChangeSupport::fire(PropertyChangeListenerArray* listeners, PropertyChangeEvent* event) */
void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, int32_t oldValue, int32_t newValue)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, int32_t oldValue, int32_t newValue)");
}

void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, bool oldValue, bool newValue)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, bool oldValue, bool newValue)");
}

void java::beans::PropertyChangeSupport::firePropertyChange(PropertyChangeEvent* event)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::firePropertyChange(PropertyChangeEvent* event)");
}

void java::beans::PropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue)");
}

void java::beans::PropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue)");
}

void java::beans::PropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue)");
}

java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport::getPropertyChangeListeners()
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport::getPropertyChangeListeners()");
    return 0;
}

java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport::getPropertyChangeListeners(::java::lang::String* propertyName)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport::getPropertyChangeListeners(::java::lang::String* propertyName)");
    return 0;
}

bool java::beans::PropertyChangeSupport::hasListeners(::java::lang::String* propertyName)
{ /* stub */
    unimplemented_(u"bool java::beans::PropertyChangeSupport::hasListeners(::java::lang::String* propertyName)");
    return 0;
}

/* private: void java::beans::PropertyChangeSupport::readObject(::java::io::ObjectInputStream* s) */
void java::beans::PropertyChangeSupport::removePropertyChangeListener(PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::removePropertyChangeListener(PropertyChangeListener* listener)");
}

void java::beans::PropertyChangeSupport::removePropertyChangeListener(::java::lang::String* propertyName, PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"void java::beans::PropertyChangeSupport::removePropertyChangeListener(::java::lang::String* propertyName, PropertyChangeListener* listener)");
}

/* private: void java::beans::PropertyChangeSupport::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::beans::PropertyChangeSupport::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.beans.PropertyChangeSupport", 32);
    return c;
}

java::lang::Class* java::beans::PropertyChangeSupport::getClass0()
{
    return class_();
}

