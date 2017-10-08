// Generated from /POI/java/org/apache/poi/sl/draw/SLGraphics.java

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
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <org/apache/poi/sl/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::sl::draw::SLGraphics final
    : public ::java::awt::Graphics2D
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::awt::Graphics2D super;

public: /* protected */
    ::poi::util::POILogger* log {  };

private:
    ::poi::sl::usermodel::GroupShape* _group {  };
    ::java::awt::geom::AffineTransform* _transform {  };
    ::java::awt::Stroke* _stroke {  };
    ::java::awt::Paint* _paint {  };
    ::java::awt::Font* _font {  };
    ::java::awt::Color* _foreground {  };
    ::java::awt::Color* _background {  };
    ::java::awt::RenderingHints* _hints {  };
protected:
    void ctor(::poi::sl::usermodel::GroupShape* group);

public:
    ::poi::sl::usermodel::GroupShape* getShapeGroup();
    ::java::awt::Font* getFont() override;
    void setFont(::java::awt::Font* font) override;
    ::java::awt::Color* getColor() override;
    void setColor(::java::awt::Color* c) override;
    ::java::awt::Stroke* getStroke() override;
    void setStroke(::java::awt::Stroke* s) override;
    ::java::awt::Paint* getPaint() override;
    void setPaint(::java::awt::Paint* paint) override;
    ::java::awt::geom::AffineTransform* getTransform() override;
    void setTransform(::java::awt::geom::AffineTransform* Tx) override;
    void draw(::java::awt::Shape* shape) override;
    void drawString(::java::lang::String* s, float x, float y) override;
    void fill(::java::awt::Shape* shape) override;
    void translate(int32_t x, int32_t y) override;
    void clip(::java::awt::Shape* s) override;
    ::java::awt::Shape* getClip() override;
    void scale(double sx, double sy) override;
    void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    void drawString(::java::lang::String* str, int32_t x, int32_t y) override;
    void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    void drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) override;
    void dispose() override;
    void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    void fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void setClip(::java::awt::Shape* clip) override;
    ::java::awt::Rectangle* getClipBounds() override;
    void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
    void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) override;
    void setClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void rotate(double theta) override;
    void rotate(double theta, double x, double y) override;
    void shear(double shx, double shy) override;
    ::java::awt::font::FontRenderContext* getFontRenderContext() override;
    void transform(::java::awt::geom::AffineTransform* Tx) override;
    void drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y) override;
    void setBackground(::java::awt::Color* color) override;
    ::java::awt::Color* getBackground() override;
    void setComposite(::java::awt::Composite* comp) override;
    ::java::awt::Composite* getComposite() override;
    ::java::lang::Object* getRenderingHint(::java::awt::RenderingHints_Key* hintKey) override;
    void setRenderingHint(::java::awt::RenderingHints_Key* hintKey, ::java::lang::Object* hintValue) override;
    void drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y) override;
    ::java::awt::GraphicsConfiguration* getDeviceConfiguration() override;
    void addRenderingHints(::java::util::Map* hints) override;
    void translate(double tx, double ty) override;
    void drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y) override;
    bool hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke) override;
    ::java::awt::RenderingHints* getRenderingHints() override;
    void setRenderingHints(::java::util::Map* hints) override;
    bool drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs) override;
    bool drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) override;
    ::java::awt::Graphics* create() override;
    ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
    void setXORMode(::java::awt::Color* c1) override;
    void setPaintMode() override;
    void drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform) override;
    void drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform) override;

public: /* protected */
    void applyStroke(::poi::sl::usermodel::SimpleShape* shape);
    void applyPaint(::poi::sl::usermodel::SimpleShape* shape);

    // Generated

public:
    SLGraphics(::poi::sl::usermodel::GroupShape* group);
protected:
    SLGraphics(const ::default_init_tag&);


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
