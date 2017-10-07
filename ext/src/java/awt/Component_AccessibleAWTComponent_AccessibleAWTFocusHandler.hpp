// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/event/FocusListener.hpp>

struct default_init_tag;

class java::awt::Component_AccessibleAWTComponent_AccessibleAWTFocusHandler
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::event::FocusListener
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Component_AccessibleAWTComponent* this$1 {  };

protected:
    void ctor();

public:
    void focusGained(::java::awt::event::FocusEvent* event) override;
    void focusLost(::java::awt::event::FocusEvent* event) override;

    // Generated

public: /* protected */
    Component_AccessibleAWTComponent_AccessibleAWTFocusHandler(Component_AccessibleAWTComponent *Component_AccessibleAWTComponent_this);
protected:
    Component_AccessibleAWTComponent_AccessibleAWTFocusHandler(Component_AccessibleAWTComponent *Component_AccessibleAWTComponent_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component_AccessibleAWTComponent *Component_AccessibleAWTComponent_this;

private:
    virtual ::java::lang::Class* getClass0();
};
