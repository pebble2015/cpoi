// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct java::awt::image::RasterOp
    : public virtual ::java::lang::Object
{

    virtual WritableRaster* createCompatibleDestRaster(Raster* src) = 0;
    virtual WritableRaster* filter(Raster* src, WritableRaster* dest) = 0;
    virtual ::java::awt::geom::Rectangle2D* getBounds2D(Raster* src) = 0;
    virtual ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) = 0;
    virtual ::java::awt::RenderingHints* getRenderingHints() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
