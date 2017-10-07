// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::PaintContext
    : public virtual ::java::lang::Object
{

    virtual void dispose() = 0;
    virtual ::java::awt::image::ColorModel* getColorModel() = 0;
    virtual ::java::awt::image::Raster* getRaster(int32_t x, int32_t y, int32_t w, int32_t h) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
