// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/image/renderable/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/awt/Graphics.hpp>

struct default_init_tag;

class java::awt::Graphics2D
    : public Graphics
{

public:
    typedef Graphics super;

protected:
    void ctor();

public:
    virtual void addRenderingHints(::java::util::Map* hints) = 0;
    virtual void clip(Shape* s) = 0;
    virtual void draw(Shape* s) = 0;
    void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
    virtual void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) = 0;
    virtual bool drawImage(Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs) = 0;
    virtual void drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) = 0;
    virtual void drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform) = 0;
    virtual void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) = 0;
    void drawString(::java::lang::String* str, int32_t x, int32_t y) = 0;
    virtual void drawString(::java::lang::String* str, float x, float y) = 0;
    void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) = 0;
    virtual void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) = 0;
    virtual void fill(Shape* s) = 0;
    void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
    virtual Color* getBackground() = 0;
    virtual Composite* getComposite() = 0;
    virtual GraphicsConfiguration* getDeviceConfiguration() = 0;
    virtual ::java::awt::font::FontRenderContext* getFontRenderContext() = 0;
    virtual Paint* getPaint() = 0;
    virtual ::java::lang::Object* getRenderingHint(RenderingHints_Key* hintKey) = 0;
    virtual RenderingHints* getRenderingHints() = 0;
    virtual Stroke* getStroke() = 0;
    virtual ::java::awt::geom::AffineTransform* getTransform() = 0;
    virtual bool hit(Rectangle* rect, Shape* s, bool onStroke) = 0;
    virtual void rotate(double theta) = 0;
    virtual void rotate(double theta, double x, double y) = 0;
    virtual void scale(double sx, double sy) = 0;
    virtual void setBackground(Color* color) = 0;
    virtual void setComposite(Composite* comp) = 0;
    virtual void setPaint(Paint* paint) = 0;
    virtual void setRenderingHint(RenderingHints_Key* hintKey, ::java::lang::Object* hintValue) = 0;
    virtual void setRenderingHints(::java::util::Map* hints) = 0;
    virtual void setStroke(Stroke* s) = 0;
    virtual void setTransform(::java::awt::geom::AffineTransform* Tx) = 0;
    virtual void shear(double shx, double shy) = 0;
    virtual void transform(::java::awt::geom::AffineTransform* Tx) = 0;
    void translate(int32_t x, int32_t y) = 0;
    virtual void translate(double tx, double ty) = 0;

    // Generated

public: /* protected */
    Graphics2D();
protected:
    Graphics2D(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual bool drawImage(Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t x, int32_t y, Color* bgcolor, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t x, int32_t y, int32_t width, int32_t height, Color* bgcolor, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, Color* bgcolor, ::java::awt::image::ImageObserver* observer) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
