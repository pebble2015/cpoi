// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/event/fwd-POI.hpp>
#include <javax/swing/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/event/FocusListener.hpp>

struct default_init_tag;

class javax::swing::JComponent_AccessibleJComponent_AccessibleFocusHandler
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::event::FocusListener
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    JComponent_AccessibleJComponent* this$1 {  };

protected:
    void ctor();

public:
    void focusGained(::java::awt::event::FocusEvent* event) override;
    void focusLost(::java::awt::event::FocusEvent* event) override;

    // Generated

public: /* protected */
    JComponent_AccessibleJComponent_AccessibleFocusHandler(JComponent_AccessibleJComponent *JComponent_AccessibleJComponent_this);
protected:
    JComponent_AccessibleJComponent_AccessibleFocusHandler(JComponent_AccessibleJComponent *JComponent_AccessibleJComponent_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    JComponent_AccessibleJComponent *JComponent_AccessibleJComponent_this;

private:
    virtual ::java::lang::Class* getClass0();
};
