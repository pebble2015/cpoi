// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::Graphics
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

protected:
    void ctor();

public:
    virtual void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) = 0;
    virtual void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) = 0;
    virtual void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) = 0;
    virtual Graphics* create() = 0;
    virtual Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void dispose() = 0;
    virtual void draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
    virtual void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) = 0;
    virtual void drawBytes(::int8_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y);
    virtual void drawChars(::char16_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y);
    virtual bool drawImage(Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t x, int32_t y, Color* bgcolor, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t x, int32_t y, int32_t width, int32_t height, Color* bgcolor, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) = 0;
    virtual bool drawImage(Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, Color* bgcolor, ::java::awt::image::ImageObserver* observer) = 0;
    virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) = 0;
    virtual void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) = 0;
    virtual void drawPolygon(Polygon* p);
    virtual void drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) = 0;
    virtual void drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) = 0;
    virtual void drawRect(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) = 0;
    virtual void drawString(::java::lang::String* str, int32_t x, int32_t y) = 0;
    virtual void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) = 0;
    virtual void fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised);
    virtual void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) = 0;
    virtual void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) = 0;
    virtual void fillPolygon(Polygon* p);
    virtual void fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) = 0;
    virtual void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) = 0;
    virtual void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) = 0;
    void finalize() override;
    virtual Shape* getClip() = 0;
    virtual Rectangle* getClipBounds() = 0;
    virtual Rectangle* getClipBounds(Rectangle* r);
    virtual Rectangle* getClipRect();
    virtual Color* getColor() = 0;
    virtual Font* getFont() = 0;
    virtual FontMetrics* getFontMetrics();
    virtual FontMetrics* getFontMetrics(Font* f) = 0;
    virtual bool hitClip(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void setClip(Shape* clip) = 0;
    virtual void setClip(int32_t x, int32_t y, int32_t width, int32_t height) = 0;
    virtual void setColor(Color* c) = 0;
    virtual void setFont(Font* font) = 0;
    virtual void setPaintMode() = 0;
    virtual void setXORMode(Color* c1) = 0;
    ::java::lang::String* toString() override;
    virtual void translate(int32_t x, int32_t y) = 0;

    // Generated

public: /* protected */
    Graphics();
protected:
    Graphics(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
