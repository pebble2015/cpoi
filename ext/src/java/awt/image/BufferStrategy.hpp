// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::image::BufferStrategy
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual bool contentsLost() = 0;
    virtual bool contentsRestored() = 0;
    virtual void dispose();
    virtual ::java::awt::BufferCapabilities* getCapabilities() = 0;
    virtual ::java::awt::Graphics* getDrawGraphics() = 0;
    virtual void show() = 0;

    // Generated
    BufferStrategy();
protected:
    BufferStrategy(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
