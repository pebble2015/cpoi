// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/beans/ChangeListenerMap.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace util
    {
typedef ::SubArray< ::java::util::EventListener, ::java::lang::ObjectArray > EventListenerArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
java::beans::ChangeListenerMap::ChangeListenerMap(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::beans::ChangeListenerMap::ChangeListenerMap()
    : ChangeListenerMap(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}


void ::java::beans::ChangeListenerMap::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::beans::ChangeListenerMap::ctor()");
}

void java::beans::ChangeListenerMap::add(::java::lang::String* name, ::java::util::EventListener* listener)
{ /* stub */
    unimplemented_(u"void java::beans::ChangeListenerMap::add(::java::lang::String* name, ::java::util::EventListener* listener)");
}

java::util::EventListenerArray* java::beans::ChangeListenerMap::get(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::util::EventListenerArray* java::beans::ChangeListenerMap::get(::java::lang::String* name)");
    return 0;
}

java::util::Set* java::beans::ChangeListenerMap::getEntries()
{ /* stub */
    unimplemented_(u"java::util::Set* java::beans::ChangeListenerMap::getEntries()");
    return 0;
}

java::util::EventListenerArray* java::beans::ChangeListenerMap::getListeners()
{ /* stub */
    unimplemented_(u"java::util::EventListenerArray* java::beans::ChangeListenerMap::getListeners()");
    return 0;
}

java::util::EventListenerArray* java::beans::ChangeListenerMap::getListeners(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"java::util::EventListenerArray* java::beans::ChangeListenerMap::getListeners(::java::lang::String* name)");
    return 0;
}

bool java::beans::ChangeListenerMap::hasListeners(::java::lang::String* name)
{ /* stub */
    unimplemented_(u"bool java::beans::ChangeListenerMap::hasListeners(::java::lang::String* name)");
    return 0;
}

void java::beans::ChangeListenerMap::remove(::java::lang::String* name, ::java::util::EventListener* listener)
{ /* stub */
    unimplemented_(u"void java::beans::ChangeListenerMap::remove(::java::lang::String* name, ::java::util::EventListener* listener)");
}

void java::beans::ChangeListenerMap::set(::java::lang::String* name, ::java::util::EventListenerArray* listeners)
{ /* stub */
    unimplemented_(u"void java::beans::ChangeListenerMap::set(::java::lang::String* name, ::java::util::EventListenerArray* listeners)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::beans::ChangeListenerMap::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.beans.ChangeListenerMap", 28);
    return c;
}

java::lang::Class* java::beans::ChangeListenerMap::getClass0()
{
    return class_();
}

