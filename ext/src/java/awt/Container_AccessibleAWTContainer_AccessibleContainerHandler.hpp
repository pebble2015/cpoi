// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/event/ContainerListener.hpp>

struct default_init_tag;

class java::awt::Container_AccessibleAWTContainer_AccessibleContainerHandler
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::event::ContainerListener
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Container_AccessibleAWTContainer* this$1 {  };

protected:
    void ctor();

public:
    void componentAdded(::java::awt::event::ContainerEvent* e) override;
    void componentRemoved(::java::awt::event::ContainerEvent* e) override;

    // Generated

public: /* protected */
    Container_AccessibleAWTContainer_AccessibleContainerHandler(Container_AccessibleAWTContainer *Container_AccessibleAWTContainer_this);
protected:
    Container_AccessibleAWTContainer_AccessibleContainerHandler(Container_AccessibleAWTContainer *Container_AccessibleAWTContainer_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Container_AccessibleAWTContainer *Container_AccessibleAWTContainer_this;

private:
    virtual ::java::lang::Class* getClass0();
};
