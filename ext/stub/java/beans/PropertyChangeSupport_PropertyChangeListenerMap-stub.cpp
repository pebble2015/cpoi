// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/beans/PropertyChangeSupport_PropertyChangeListenerMap.hpp>

#include <java/beans/PropertyChangeListener.hpp>

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
java::beans::PropertyChangeSupport_PropertyChangeListenerMap::PropertyChangeSupport_PropertyChangeListenerMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::beans::PropertyChangeListenerArray*& java::beans::PropertyChangeSupport_PropertyChangeListenerMap::EMPTY()
{
    clinit();
    return EMPTY_;
}
java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::EMPTY_;

/* private: void ::java::beans::PropertyChangeSupport_PropertyChangeListenerMap::ctor() */
java::beans::PropertyChangeListener* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::extract(PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListener* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::extract(PropertyChangeListener* listener)");
    return 0;
}

java::util::EventListener* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::extract(::java::util::EventListener* listener)
{ 
    return extract(dynamic_cast< PropertyChangeListener* >(listener));
}

java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::newArray_(int32_t length)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListenerArray* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::newArray_(int32_t length)");
    return 0;
}

java::beans::PropertyChangeListener* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::newProxy(::java::lang::String* name, PropertyChangeListener* listener)
{ /* stub */
    unimplemented_(u"java::beans::PropertyChangeListener* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::newProxy(::java::lang::String* name, PropertyChangeListener* listener)");
    return 0;
}

java::util::EventListener* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::newProxy(::java::lang::String* name, ::java::util::EventListener* listener)
{ 
    return newProxy(name, dynamic_cast< PropertyChangeListener* >(listener));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.beans.PropertyChangeSupport.PropertyChangeListenerMap", 58);
    return c;
}

java::lang::Class* java::beans::PropertyChangeSupport_PropertyChangeListenerMap::getClass0()
{
    return class_();
}

