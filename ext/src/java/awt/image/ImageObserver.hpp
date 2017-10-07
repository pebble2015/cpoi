// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::image::ImageObserver
    : public virtual ::java::lang::Object
{
    static constexpr int32_t ABORT { int32_t(128) };
    static constexpr int32_t ALLBITS { int32_t(32) };
    static constexpr int32_t ERROR { int32_t(64) };
    static constexpr int32_t FRAMEBITS { int32_t(16) };
    static constexpr int32_t HEIGHT { int32_t(2) };
    static constexpr int32_t PROPERTIES { int32_t(4) };
    static constexpr int32_t SOMEBITS { int32_t(8) };
    static constexpr int32_t WIDTH { int32_t(1) };

    virtual bool imageUpdate(::java::awt::Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t width, int32_t height) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
