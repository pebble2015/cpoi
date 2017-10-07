// Generated from /POI/java/org/apache/poi/hssf/usermodel/EscherGraphics2d.java

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
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/awt/Graphics2D.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::EscherGraphics2d final
    : public ::java::awt::Graphics2D
{

public:
    typedef ::java::awt::Graphics2D super;

private:
    EscherGraphics* _escherGraphics {  };
    ::java::awt::image::BufferedImage* _img {  };
    ::java::awt::geom::AffineTransform* _trans {  };
    ::java::awt::Stroke* _stroke {  };
    ::java::awt::Paint* _paint {  };
    ::java::awt::Shape* _deviceclip {  };
    ::org::apache::poi::util::POILogger* logger {  };
protected:
    void ctor(EscherGraphics* escherGraphics);

public:
    void addRenderingHints(::java::util::Map* map) override;
    void clearRect(int32_t i, int32_t j, int32_t k, int32_t l) override;
    void clip(::java::awt::Shape* shape) override;
    void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) override;
    ::java::awt::Graphics* create() override;
    void dispose() override;
    void draw(::java::awt::Shape* shape) override;
    void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) override;
    bool drawImage(::java::awt::Image* image, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* image, int32_t x, int32_t y, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, int32_t x, int32_t y, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, ::java::awt::geom::AffineTransform* affinetransform, ::java::awt::image::ImageObserver* imageobserver) override;
    void drawImage(::java::awt::image::BufferedImage* bufferedimage, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
    void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t width);
    void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawRenderableImage(::java::awt::image::renderable::RenderableImage* renderableimage, ::java::awt::geom::AffineTransform* affinetransform) override;
    void drawRenderedImage(::java::awt::image::RenderedImage* renderedimage, ::java::awt::geom::AffineTransform* affinetransform) override;
    void drawRoundRect(int32_t i, int32_t j, int32_t k, int32_t l, int32_t i1, int32_t j1) override;
    void drawString(::java::lang::String* string, float x, float y) override;
    void drawString(::java::lang::String* string, int32_t x, int32_t y) override;
    void drawString(::java::text::AttributedCharacterIterator* attributedcharacteriterator, float x, float y) override;
    void drawString(::java::text::AttributedCharacterIterator* attributedcharacteriterator, int32_t x, int32_t y) override;
    void fill(::java::awt::Shape* shape) override;
    void fillArc(int32_t i, int32_t j, int32_t k, int32_t l, int32_t i1, int32_t j1) override;
    void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    ::java::awt::Color* getBackground() override;
    ::java::awt::Shape* getClip() override;
    ::java::awt::Rectangle* getClipBounds() override;
    ::java::awt::Color* getColor() override;
    ::java::awt::Composite* getComposite() override;
    ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
    ::java::awt::Font* getFont() override;
    ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
    ::java::awt::font::FontRenderContext* getFontRenderContext() override;
    ::java::awt::Paint* getPaint() override;
    ::java::lang::Object* getRenderingHint(::java::awt::RenderingHints_Key* key) override;
    ::java::awt::RenderingHints* getRenderingHints() override;
    ::java::awt::Stroke* getStroke() override;
    ::java::awt::geom::AffineTransform* getTransform() override;
    bool hit(::java::awt::Rectangle* rectangle, ::java::awt::Shape* shape, bool flag) override;
    void rotate(double d) override;
    void rotate(double d, double d1, double d2) override;
    void scale(double d, double d1) override;
    void setBackground(::java::awt::Color* c) override;
    void setClip(int32_t i, int32_t j, int32_t k, int32_t l) override;
    void setClip(::java::awt::Shape* shape) override;
    void setColor(::java::awt::Color* c) override;
    void setComposite(::java::awt::Composite* composite) override;
    void setFont(::java::awt::Font* font) override;
    void setPaint(::java::awt::Paint* paint1) override;
    void setPaintMode() override;
    void setRenderingHint(::java::awt::RenderingHints_Key* key, ::java::lang::Object* obj) override;
    void setRenderingHints(::java::util::Map* map) override;
    void setStroke(::java::awt::Stroke* s) override;
    void setTransform(::java::awt::geom::AffineTransform* affinetransform) override;
    void setXORMode(::java::awt::Color* color1) override;
    void shear(double d, double d1) override;
    void transform(::java::awt::geom::AffineTransform* affinetransform) override;
    void translate(double d, double d1) override;
    void translate(int32_t i, int32_t j) override;

private:
    EscherGraphics* getEscherGraphics();
    ::java::awt::image::BufferedImage* getImg();
    void setImg(::java::awt::image::BufferedImage* img);
    ::java::awt::Graphics2D* getG2D();
    ::java::awt::geom::AffineTransform* getTrans();
    void setTrans(::java::awt::geom::AffineTransform* trans);
    ::java::awt::Shape* getDeviceclip();
    void setDeviceclip(::java::awt::Shape* deviceclip);

    // Generated

public:
    EscherGraphics2d(EscherGraphics* escherGraphics);
protected:
    EscherGraphics2d(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    virtual ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void drawPolygon(::java::awt::Polygon* p);
    virtual void fillPolygon(::java::awt::Polygon* p);
    virtual ::java::awt::Rectangle* getClipBounds(::java::awt::Rectangle* r);
    virtual ::java::awt::FontMetrics* getFontMetrics();

private:
    virtual ::java::lang::Class* getClass0();
};
