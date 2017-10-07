// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/event/ComponentListener.hpp>

struct default_init_tag;

class java::awt::Component_AccessibleAWTComponent_AccessibleAWTComponentHandler
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::event::ComponentListener
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    Component_AccessibleAWTComponent* this$1 {  };

protected:
    void ctor();

public:
    void componentHidden(::java::awt::event::ComponentEvent* e) override;
    void componentMoved(::java::awt::event::ComponentEvent* e) override;
    void componentResized(::java::awt::event::ComponentEvent* e) override;
    void componentShown(::java::awt::event::ComponentEvent* e) override;

    // Generated

public: /* protected */
    Component_AccessibleAWTComponent_AccessibleAWTComponentHandler(Component_AccessibleAWTComponent *Component_AccessibleAWTComponent_this);
protected:
    Component_AccessibleAWTComponent_AccessibleAWTComponentHandler(Component_AccessibleAWTComponent *Component_AccessibleAWTComponent_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component_AccessibleAWTComponent *Component_AccessibleAWTComponent_this;

private:
    virtual ::java::lang::Class* getClass0();
};
