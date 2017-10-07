// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/BufferCapabilities.hpp>

struct default_init_tag;

class java::awt::GraphicsConfiguration_DefaultBufferCapabilities
    : public BufferCapabilities
{

public:
    typedef BufferCapabilities super;

protected:
    void ctor(ImageCapabilities* imageCaps);

    // Generated

public:
    GraphicsConfiguration_DefaultBufferCapabilities(ImageCapabilities* imageCaps);
protected:
    GraphicsConfiguration_DefaultBufferCapabilities(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
