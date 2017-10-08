// Generated from /POI/java/org/apache/poi/sl/draw/PathGradientPaint.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/awt/PaintContext.hpp>

struct default_init_tag;

class poi::sl::draw::PathGradientPaint_PathGradientContext
    : public virtual ::java::lang::Object
    , public virtual ::java::awt::PaintContext
{

public:
    typedef ::java::lang::Object super;

public: /* protected */
    ::java::awt::Rectangle* deviceBounds {  };
    ::java::awt::geom::Rectangle2D* userBounds {  };
    ::java::awt::geom::AffineTransform* xform {  };
    ::java::awt::RenderingHints* hints {  };
    ::java::awt::Shape* shape {  };
    ::java::awt::PaintContext* pCtx {  };
    int32_t gradientSteps {  };

public: /* package */
    ::java::awt::image::WritableRaster* raster {  };
protected:
    void ctor(::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints);

public:
    void dispose() override;
    ::java::awt::image::ColorModel* getColorModel() override;
    ::java::awt::image::Raster* getRaster(int32_t xOffset, int32_t yOffset, int32_t w, int32_t h) override;

public: /* protected */
    virtual int32_t getGradientSteps(::java::awt::Shape* gradientShape);
    virtual void createRaster();

    // Generated

public:
    PathGradientPaint_PathGradientContext(PathGradientPaint *PathGradientPaint_this, ::java::awt::image::ColorModel* cm, ::java::awt::Rectangle* deviceBounds, ::java::awt::geom::Rectangle2D* userBounds, ::java::awt::geom::AffineTransform* xform, ::java::awt::RenderingHints* hints);
protected:
    PathGradientPaint_PathGradientContext(PathGradientPaint *PathGradientPaint_this, const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    PathGradientPaint *PathGradientPaint_this;

private:
    virtual ::java::lang::Class* getClass0();
    friend class PathGradientPaint;
};
