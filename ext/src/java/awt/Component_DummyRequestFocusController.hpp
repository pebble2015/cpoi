// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <sun/awt/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <sun/awt/RequestFocusController.hpp>

struct default_init_tag;

class java::awt::Component_DummyRequestFocusController
    : public virtual ::java::lang::Object
    , public virtual ::sun::awt::RequestFocusController
{

public:
    typedef ::java::lang::Object super;

    /*void ctor(); (private) */
    bool acceptRequestFocus(Component* from, Component* to, bool temporary, bool focusedWindowChangeAllowed, ::sun::awt::CausedFocusEvent_Cause* cause) override;

    // Generated
    Component_DummyRequestFocusController();
protected:
    Component_DummyRequestFocusController(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
