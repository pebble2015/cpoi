// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/event/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/event/AWTEventListener.hpp>

struct default_init_tag;

class java::awt::Toolkit_SelectiveAWTEventListener
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::event::AWTEventListener
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::int32_tArray* calls {  };

private:
    int64_t eventMask {  };

public: /* package */
    ::java::awt::event::AWTEventListener* listener {  };
    Toolkit* this$0 {  };

protected:
    void ctor(::java::awt::event::AWTEventListener* l, int64_t mask);

public:
    void eventDispatched(AWTEvent* event) override;
    virtual ::int32_tArray* getCalls();
    virtual int64_t getEventMask();
    virtual ::java::awt::event::AWTEventListener* getListener();
    virtual void orEventMasks(int64_t mask);

    // Generated

public: /* package */
    Toolkit_SelectiveAWTEventListener(Toolkit *Toolkit_this, ::java::awt::event::AWTEventListener* l, int64_t mask);
protected:
    Toolkit_SelectiveAWTEventListener(Toolkit *Toolkit_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Toolkit *Toolkit_this;

private:
    virtual ::java::lang::Class* getClass0();
};
