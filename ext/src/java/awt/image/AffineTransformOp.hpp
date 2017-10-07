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

class java::awt::image::AffineTransformOp
    : public virtual ::java::lang::Object
    , public virtual BufferedImageOp
    , public virtual RasterOp
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t TYPE_BICUBIC { int32_t(3) };
    static constexpr int32_t TYPE_BILINEAR { int32_t(2) };
    static constexpr int32_t TYPE_NEAREST_NEIGHBOR { int32_t(1) };

public: /* package */
    ::java::awt::RenderingHints* hints {  };
    int32_t interpolationType {  };

private:
    ::java::awt::geom::AffineTransform* xform {  };

protected:
    void ctor(::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints);
    void ctor(::java::awt::geom::AffineTransform* xform, int32_t interpolationType);

public:
    BufferedImage* createCompatibleDestImage(BufferedImage* src, ColorModel* destCM) override;
    WritableRaster* createCompatibleDestRaster(Raster* src) override;
    BufferedImage* filter(BufferedImage* src, BufferedImage* dst) override;
    WritableRaster* filter(Raster* src, WritableRaster* dst) override;
    ::java::awt::geom::Rectangle2D* getBounds2D(BufferedImage* src) override;
    ::java::awt::geom::Rectangle2D* getBounds2D(Raster* src) override;
    int32_t getInterpolationType();
    ::java::awt::geom::Point2D* getPoint2D(::java::awt::geom::Point2D* srcPt, ::java::awt::geom::Point2D* dstPt) override;
    ::java::awt::RenderingHints* getRenderingHints() override;
    ::java::awt::geom::AffineTransform* getTransform();

public: /* package */
    virtual void validateTransform(::java::awt::geom::AffineTransform* xform);

    // Generated

public:
    AffineTransformOp(::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints);
    AffineTransformOp(::java::awt::geom::AffineTransform* xform, int32_t interpolationType);
protected:
    AffineTransformOp(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
