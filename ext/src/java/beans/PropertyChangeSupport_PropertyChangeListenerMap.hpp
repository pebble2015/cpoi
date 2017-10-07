// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/beans/ChangeListenerMap.hpp>
#include <java/beans/PropertyChangeListener.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/util/EventListener.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

struct default_init_tag;

class java::beans::PropertyChangeSupport_PropertyChangeListenerMap final
    : public ChangeListenerMap
{

public:
    typedef ChangeListenerMap super;

private:
    static PropertyChangeListenerArray* EMPTY_;

    /*void ctor(); (private) */

public:
    PropertyChangeListener* extract(PropertyChangeListener* listener);

public: /* protected */
    PropertyChangeListenerArray* newArray_(int32_t length) override;
    PropertyChangeListener* newProxy(::java::lang::String* name, PropertyChangeListener* listener);

    // Generated

public:
    PropertyChangeSupport_PropertyChangeListenerMap();
protected:
    PropertyChangeSupport_PropertyChangeListenerMap(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual ::java::util::EventListener* extract(::java::util::EventListener* listener) override;

public: /* protected */
    virtual ::java::util::EventListener* newProxy(::java::lang::String* name, ::java::util::EventListener* listener) override;

private:
    static PropertyChangeListenerArray*& EMPTY();
    virtual ::java::lang::Class* getClass0();
};
