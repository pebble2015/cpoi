// Generated from /POI/java/org/apache/poi/hssf/usermodel/DummyGraphics2d.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/awt/image/renderable/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <java/awt/Graphics2D.hpp>

struct default_init_tag;

class poi::hssf::usermodel::DummyGraphics2d
    : public ::java::awt::Graphics2D
{

public:
    typedef ::java::awt::Graphics2D super;

private:
    ::java::awt::image::BufferedImage* bufimg {  };
    ::java::awt::Graphics2D* g2D {  };
    ::java::io::PrintStream* log {  };
protected:
    void ctor();
    void ctor(::java::io::PrintStream* log);
    void ctor(::java::io::PrintStream* log, ::java::awt::Graphics2D* g2D);

public:
    void addRenderingHints(::java::util::Map* hints) override;
    void clip(::java::awt::Shape* s) override;
    void draw(::java::awt::Shape* s) override;
    void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) override;
    void drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
    bool drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs) override;
    void drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform) override;
    void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) override;
    void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) override;
    void drawString(::java::lang::String* s, float x, float y) override;
    void fill(::java::awt::Shape* s) override;
    ::java::awt::Color* getBackground() override;
    ::java::awt::Composite* getComposite() override;
    ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
    ::java::awt::font::FontRenderContext* getFontRenderContext() override;
    ::java::awt::Paint* getPaint() override;
    ::java::lang::Object* getRenderingHint(::java::awt::RenderingHints_Key* hintKey) override;
    ::java::awt::RenderingHints* getRenderingHints() override;
    ::java::awt::Stroke* getStroke() override;
    ::java::awt::geom::AffineTransform* getTransform() override;
    bool hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke) override;
    void rotate(double theta) override;
    void rotate(double theta, double x, double y) override;
    void scale(double sx, double sy) override;
    void setBackground(::java::awt::Color* color) override;
    void setComposite(::java::awt::Composite* comp) override;
    void setPaint(::java::awt::Paint* paint) override;
    void setRenderingHint(::java::awt::RenderingHints_Key* hintKey, ::java::lang::Object* hintValue) override;
    void setRenderingHints(::java::util::Map* hints) override;
    void setStroke(::java::awt::Stroke* s) override;
    void setTransform(::java::awt::geom::AffineTransform* Tx) override;
    void shear(double shx, double shy) override;
    void transform(::java::awt::geom::AffineTransform* Tx) override;
    void translate(double tx, double ty) override;
    void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) override;
    ::java::awt::Graphics* create() override;
    ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void dispose() override;
    void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
    void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    void drawBytes(::int8_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
    void drawChars(::char16_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y) override;
    bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
    void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawPolygon(::java::awt::Polygon* p) override;
    void drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
    void drawString(::java::lang::String* str, int32_t x, int32_t y) override;
    void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised) override;
    void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillPolygon(::java::awt::Polygon* p) override;
    void fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    void finalize() override;
    ::java::awt::Shape* getClip() override;
    ::java::awt::Rectangle* getClipBounds() override;
    ::java::awt::Rectangle* getClipBounds(::java::awt::Rectangle* r) override;
    ::java::awt::Color* getColor() override;
    ::java::awt::Font* getFont() override;
    ::java::awt::FontMetrics* getFontMetrics() override;
    ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
    bool hitClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void setClip(::java::awt::Shape* clip) override;
    void setClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void setColor(::java::awt::Color* c) override;
    void setFont(::java::awt::Font* font) override;
    void setPaintMode() override;
    void setXORMode(::java::awt::Color* c1) override;
    ::java::lang::String* toString() override;
    void translate(int32_t x, int32_t y) override;

    // Generated
    DummyGraphics2d();
    DummyGraphics2d(::java::io::PrintStream* log);
    DummyGraphics2d(::java::io::PrintStream* log, ::java::awt::Graphics2D* g2D);
protected:
    DummyGraphics2d(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
