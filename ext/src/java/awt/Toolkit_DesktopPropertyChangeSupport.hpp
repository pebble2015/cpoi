// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
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

struct default_init_tag;

class java::awt::Toolkit_DesktopPropertyChangeSupport
    : public ::java::beans::PropertyChangeSupport
{

public:
    typedef ::java::beans::PropertyChangeSupport super;

private:
    static ::java::lang::StringBuilder* PROP_CHANGE_SUPPORT_KEY_;
    ::java::lang::Object* source {  };

protected:
    void ctor(::java::lang::Object* sourceBean);

public:
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    void addPropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener) override;
    void firePropertyChange(::java::beans::PropertyChangeEvent* evt) override;
    ::java::beans::PropertyChangeListenerArray* getPropertyChangeListeners() override;
    ::java::beans::PropertyChangeListenerArray* getPropertyChangeListeners(::java::lang::String* propertyName) override;
    void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    void removePropertyChangeListener(::java::lang::String* propertyName, ::java::beans::PropertyChangeListener* listener) override;

    // Generated
    Toolkit_DesktopPropertyChangeSupport(::java::lang::Object* sourceBean);
protected:
    Toolkit_DesktopPropertyChangeSupport(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual void firePropertyChange(::java::lang::String* propertyName, ::java::lang::Object* oldValue, ::java::lang::Object* newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, int32_t oldValue, int32_t newValue);
    virtual void firePropertyChange(::java::lang::String* propertyName, bool oldValue, bool newValue);

private:
    static ::java::lang::StringBuilder*& PROP_CHANGE_SUPPORT_KEY();
    virtual ::java::lang::Class* getClass0();
};
