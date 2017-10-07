// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/beans/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <java/awt/Component_AccessibleAWTComponent.hpp>

struct default_init_tag;

class java::awt::Container_AccessibleAWTContainer
    : public Component_AccessibleAWTComponent
{

public:
    typedef Component_AccessibleAWTComponent super;

public: /* protected */
    ::java::awt::event::ContainerListener* accessibleContainerHandler {  };

private:
    std::atomic< int32_t > propertyListenersCount {  };
    static constexpr int64_t serialVersionUID { int64_t(5081320404842566097LL) };

public: /* package */
    Container* this$0 {  };

protected:
    void ctor();

public:
    void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
    ::javax::accessibility::Accessible* getAccessibleAt(Point* p) override;
    ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
    int32_t getAccessibleChildrenCount() override;
    void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;

    // Generated

public: /* protected */
    Container_AccessibleAWTContainer(Container *Container_this);
protected:
    Container_AccessibleAWTContainer(Container *Container_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Container *Container_this;

private:
    virtual ::java::lang::Class* getClass0();
};
