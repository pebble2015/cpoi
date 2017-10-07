// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <sun/java2d/pipe/hw/fwd-POI.hpp>
#include <java/awt/BufferCapabilities.hpp>

struct default_init_tag;

class sun::java2d::pipe::hw::ExtendedBufferCapabilities
    : public ::java::awt::BufferCapabilities
{

public:
    typedef ::java::awt::BufferCapabilities super;

private:
    ExtendedBufferCapabilities_VSyncType* vsync {  };

protected:
    void ctor(::java::awt::BufferCapabilities* arg0);
    void ctor(::java::awt::BufferCapabilities* arg0, ExtendedBufferCapabilities_VSyncType* arg1);
    void ctor(::java::awt::ImageCapabilities* arg0, ::java::awt::ImageCapabilities* arg1, ::java::awt::BufferCapabilities_FlipContents* arg2);
    void ctor(::java::awt::ImageCapabilities* arg0, ::java::awt::ImageCapabilities* arg1, ::java::awt::BufferCapabilities_FlipContents* arg2, ExtendedBufferCapabilities_VSyncType* arg3);

public:
    virtual ExtendedBufferCapabilities* derive(ExtendedBufferCapabilities_VSyncType* arg0);
    virtual ExtendedBufferCapabilities_VSyncType* getVSync();
    bool isPageFlipping() override;

    // Generated
    ExtendedBufferCapabilities(::java::awt::BufferCapabilities* arg0);
    ExtendedBufferCapabilities(::java::awt::BufferCapabilities* arg0, ExtendedBufferCapabilities_VSyncType* arg1);
    ExtendedBufferCapabilities(::java::awt::ImageCapabilities* arg0, ::java::awt::ImageCapabilities* arg1, ::java::awt::BufferCapabilities_FlipContents* arg2);
    ExtendedBufferCapabilities(::java::awt::ImageCapabilities* arg0, ::java::awt::ImageCapabilities* arg1, ::java::awt::BufferCapabilities_FlipContents* arg2, ExtendedBufferCapabilities_VSyncType* arg3);
protected:
    ExtendedBufferCapabilities(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
