// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

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

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::ObjectStreamField, ::java::lang::ObjectArray, ::java::lang::ComparableArray > ObjectStreamFieldArray;
    } // io
} // java

struct default_init_tag;

class java::beans::PropertyChangeSupport
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;

private:
    PropertyChangeSupport_PropertyChangeListenerMap* map {  };
    static ::java::io::ObjectStreamFieldArray* serialPersistentFields_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(6401253773779951803LL) };

private:
    ::java::lang::Object* source {  };

protected:
    void ctor(::java::lang::Object* sourceBean);

public:
    virtual void addPropertyChangeListener(PropertyChangeListener* listener);
    virtual void addPropertyChangeListener(::java::lang::String* propertyName, PropertyChangeListener* listener);
    /*static void fire(PropertyChangeListenerArray* listeners, PropertyChangeEvent* event); (private) */
    virtual void fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, int32_t oldValue, int32_t newValue);
    virtual void fireIndexedPropertyChange(::java::lang::String* propertyName, int32_t index, bool oldValue, bool newValue);
    virtual void firePropertyChange(PropertyChangeEvent* event);
    virtual void firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue);
    virtual PropertyChangeListenerArray* getPropertyChangeListeners();
    virtual PropertyChangeListenerArray* getPropertyChangeListeners(::java::lang::String* propertyName);
    virtual bool hasListeners(::java::lang::String* propertyName);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    virtual void removePropertyChangeListener(PropertyChangeListener* listener);
    virtual void removePropertyChangeListener(::java::lang::String* propertyName, PropertyChangeListener* listener);
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    PropertyChangeSupport(::java::lang::Object* sourceBean);
protected:
    PropertyChangeSupport(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::io::ObjectStreamFieldArray*& serialPersistentFields();
    virtual ::java::lang::Class* getClass0();
};
