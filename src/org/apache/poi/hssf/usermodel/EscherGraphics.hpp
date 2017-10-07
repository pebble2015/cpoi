// Generated from /POI/java/org/apache/poi/hssf/usermodel/EscherGraphics.java

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/image/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/awt/Graphics.hpp>

struct default_init_tag;

class org::apache::poi::hssf::usermodel::EscherGraphics
    : public ::java::awt::Graphics
{

public:
    typedef ::java::awt::Graphics super;

private:
    HSSFShapeGroup* escherGroup {  };
    HSSFWorkbook* workbook {  };
    float verticalPointsPerPixel {  };
    float verticalPixelsPerPoint {  };
    ::java::awt::Color* foreground {  };
    ::java::awt::Color* background {  };
    ::java::awt::Font* font {  };
    static ::org::apache::poi::util::POILogger* logger_;
protected:
    void ctor(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* forecolor, float verticalPointsPerPixel);
    void ctor(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* foreground, ::java::awt::Font* font, float verticalPointsPerPixel);

public:
    void clearRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void clipRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy) override;
    ::java::awt::Graphics* create() override;
    void dispose() override;
    void drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer) override;
    bool drawImage(::java::awt::Image* image, int32_t i, int32_t j, int32_t k, int32_t l, ::java::awt::Color* color, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, int32_t i, int32_t j, int32_t k, int32_t l, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, int32_t i, int32_t j, ::java::awt::Color* color, ::java::awt::image::ImageObserver* imageobserver) override;
    bool drawImage(::java::awt::Image* image, int32_t i, int32_t j, ::java::awt::image::ImageObserver* imageobserver) override;
    void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2) override;
    virtual void drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t width);
    void drawOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;

private:
    ::int32_tArray* addToAll(::int32_tArray* values, int32_t amount);

public:
    void drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;
    void drawRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    void drawString(::java::lang::String* str, int32_t x, int32_t y) override;

private:
    HSSFFont* matchFont(::java::awt::Font* matchFont);

public:
    void drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y) override;
    void fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle) override;
    void fillOval(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints) override;

private:
    int32_t findBiggest(::int32_tArray* values);
    int32_t findSmallest(::int32_tArray* values);

public:
    void fillRect(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight) override;
    ::java::awt::Shape* getClip() override;
    ::java::awt::Rectangle* getClipBounds() override;
    ::java::awt::Color* getColor() override;
    ::java::awt::Font* getFont() override;
    ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
    void setClip(int32_t x, int32_t y, int32_t width, int32_t height) override;
    void setClip(::java::awt::Shape* shape) override;
    void setColor(::java::awt::Color* color) override;
    void setFont(::java::awt::Font* f) override;
    void setPaintMode() override;
    void setXORMode(::java::awt::Color* color) override;
    void translate(int32_t x, int32_t y) override;
    virtual ::java::awt::Color* getBackground();
    virtual void setBackground(::java::awt::Color* background);

public: /* package */
    virtual HSSFShapeGroup* getEscherGraphics();

    // Generated

public:
    EscherGraphics(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* forecolor, float verticalPointsPerPixel);

public: /* package */
    EscherGraphics(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* foreground, ::java::awt::Font* font, float verticalPointsPerPixel);
protected:
    EscherGraphics(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    void init();

public:
    virtual ::java::awt::Graphics* create(int32_t x, int32_t y, int32_t width, int32_t height);
    virtual void drawPolygon(::java::awt::Polygon* p);
    virtual void fillPolygon(::java::awt::Polygon* p);
    virtual ::java::awt::Rectangle* getClipBounds(::java::awt::Rectangle* r);
    virtual ::java::awt::FontMetrics* getFontMetrics();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
