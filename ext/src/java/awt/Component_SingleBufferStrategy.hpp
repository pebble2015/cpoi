// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/BufferStrategy.hpp>

struct default_init_tag;

class java::awt::Component_SingleBufferStrategy
    : public ::java::awt::image::BufferStrategy
{

public:
    typedef ::java::awt::image::BufferStrategy super;

private:
    BufferCapabilities* caps {  };

public: /* package */
    Component* this$0 {  };

protected:
    void ctor(BufferCapabilities* caps);

public:
    bool contentsLost() override;
    bool contentsRestored() override;
    BufferCapabilities* getCapabilities() override;
    Graphics* getDrawGraphics() override;
    void show() override;

    // Generated
    Component_SingleBufferStrategy(Component *Component_this, BufferCapabilities* caps);
protected:
    Component_SingleBufferStrategy(Component *Component_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    Component *Component_this;

private:
    virtual ::java::lang::Class* getClass0();
};
