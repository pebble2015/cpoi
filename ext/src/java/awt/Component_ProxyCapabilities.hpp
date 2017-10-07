// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.hpp>

struct default_init_tag;

class java::awt::Component_ProxyCapabilities
    : public ::sun::java2d::pipe::hw::ExtendedBufferCapabilities
{

public:
    typedef ::sun::java2d::pipe::hw::ExtendedBufferCapabilities super;

private:
    BufferCapabilities* orig {  };

public: /* package */
    Component* this$0 {  };

    /*void ctor(BufferCapabilities* orig); (private) */

    // Generated

public:
    Component_ProxyCapabilities(Component *Component_this);
protected:
    Component_ProxyCapabilities(Component *Component_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component *Component_this;

private:
    virtual ::java::lang::Class* getClass0();
};
