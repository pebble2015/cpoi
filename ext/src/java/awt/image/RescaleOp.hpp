// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/image/BufferedImageOp.hpp>
#include <java/awt/image/RasterOp.hpp>

struct default_init_tag;

class java::awt::image::RescaleOp
    : public virtual ::java::lang::Object
    , public virtual BufferedImageOp
    , public virtual RasterOp
{

public:
    typedef ::java::lang::Object super;

private:
    int32_t dstNbits {  };

public: /* package */
    ::java::awt::RenderingHints* hints {  };
    int32_t length {  };
    ::floatArray* offsets {  };
    ::floatArray* scaleFactors {  };

private:
    int32_t srcNbits {  };

protected:
    void ctor(::floatArray* scaleFactors, ::floatArray* offsets, ::java::awt::RenderingHints* hints);
    void ctor(float scaleFactor, float offset, ::java::awt::RenderingHints* hints);
    /*bool canUseLookup(Raster* src, Raster* dst); (private) */
    /*ByteLookupTable* createByteLut(::floatArray* scale, ::floatArray* off, int32_t nBands, int32_t nElems); (private) */

public:
    BufferedImage* createCompatibleDestImage(BufferedImage* src, ColorModel* destCM) override;
    WritableRaster* createCompatibleDestRaster(Raster* src) override;
    /*ShortLookupTable* createShortLut(::floatArray* scale, ::floatArray* off, int32_t nBands, int32_t nElems); (private) */
    BufferedImage* filter(BufferedImage* src, BufferedImage* dst) override;
    WritableRaster* filter(Raster* src, WritableRaster* dst) override;
    ::java::awt::geom::Rectangle2D* getBounds2D(BufferedImage* src) override;
    ::java::awt::geom::Rectangle2D* getBounds2D(Raster* src) override;
    int32_t getNumFactors();
    ::floatArray* getOffsets(::floatArray* offsets);
    ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
    ::java::awt::RenderingHints* getRenderingHints() override;
    ::floatArray* getScaleFactors(::floatArray* scaleFactors);

    // Generated
    RescaleOp(::floatArray* scaleFactors, ::floatArray* offsets, ::java::awt::RenderingHints* hints);
    RescaleOp(float scaleFactor, float offset, ::java::awt::RenderingHints* hints);
protected:
    RescaleOp(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
