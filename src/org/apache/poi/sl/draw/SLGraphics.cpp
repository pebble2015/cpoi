// Generated from /POI/java/org/apache/poi/sl/draw/SLGraphics.java
#include <org/apache/poi/sl/draw/SLGraphics.hpp>

#include <java/awt/BasicStroke.hpp>
#include <java/awt/Color.hpp>
#include <java/awt/Font.hpp>
#include <java/awt/FontMetrics.hpp>
#include <java/awt/Graphics.hpp>
#include <java/awt/GraphicsConfiguration.hpp>
#include <java/awt/GraphicsDevice.hpp>
#include <java/awt/GraphicsEnvironment.hpp>
#include <java/awt/Image.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/Polygon.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/awt/RenderingHints_Key.hpp>
#include <java/awt/RenderingHints.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/Stroke.hpp>
#include <java/awt/Toolkit.hpp>
#include <java/awt/font/FontRenderContext.hpp>
#include <java/awt/font/GlyphVector.hpp>
#include <java/awt/font/TextLayout.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Arc2D_Double.hpp>
#include <java/awt/geom/Arc2D.hpp>
#include <java/awt/geom/Ellipse2D_Double.hpp>
#include <java/awt/geom/Ellipse2D.hpp>
#include <java/awt/geom/GeneralPath.hpp>
#include <java/awt/geom/Line2D_Double.hpp>
#include <java/awt/geom/Line2D.hpp>
#include <java/awt/geom/Path2D_Double.hpp>
#include <java/awt/geom/RoundRectangle2D_Double.hpp>
#include <java/awt/geom/RoundRectangle2D.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/awt/image/BufferedImageOp.hpp>
#include <java/awt/image/ImageObserver.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/CloneNotSupportedException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/List.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/usermodel/FreeformShape.hpp>
#include <org/apache/poi/sl/usermodel/GroupShape.hpp>
#include <org/apache/poi/sl/usermodel/Insets2D.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle_SolidPaint.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle.hpp>
#include <org/apache/poi/sl/usermodel/SimpleShape.hpp>
#include <org/apache/poi/sl/usermodel/StrokeStyle_LineDash.hpp>
#include <org/apache/poi/sl/usermodel/TextBox.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/TextRun.hpp>
#include <org/apache/poi/sl/usermodel/VerticalAlignment.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::sl::draw::SLGraphics::SLGraphics(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::sl::draw::SLGraphics::SLGraphics(::org::apache::poi::sl::usermodel::GroupShape* group) 
    : SLGraphics(*static_cast< ::default_init_tag* >(0))
{
    ctor(group);
}

void org::apache::poi::sl::draw::SLGraphics::init()
{
    log = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(this->getClass()));
}

void org::apache::poi::sl::draw::SLGraphics::ctor(::org::apache::poi::sl::usermodel::GroupShape* group)
{
    super::ctor();
    init();
    this->_group = group;
    _transform = new ::java::awt::geom::AffineTransform();
    _stroke = new ::java::awt::BasicStroke();
    _paint = ::java::awt::Color::black();
    _font = new ::java::awt::Font(u"Arial"_j, ::java::awt::Font::PLAIN, int32_t(12));
    _background = ::java::awt::Color::black();
    _foreground = ::java::awt::Color::white();
    _hints = new ::java::awt::RenderingHints(nullptr);
}

org::apache::poi::sl::usermodel::GroupShape* org::apache::poi::sl::draw::SLGraphics::getShapeGroup()
{
    return _group;
}

java::awt::Font* org::apache::poi::sl::draw::SLGraphics::getFont()
{
    return _font;
}

void org::apache::poi::sl::draw::SLGraphics::setFont(::java::awt::Font* font)
{
    this->_font = font;
}

java::awt::Color* org::apache::poi::sl::draw::SLGraphics::getColor()
{
    return _foreground;
}

void org::apache::poi::sl::draw::SLGraphics::setColor(::java::awt::Color* c)
{
    setPaint(static_cast< ::java::awt::Paint* >(c));
}

java::awt::Stroke* org::apache::poi::sl::draw::SLGraphics::getStroke()
{
    return _stroke;
}

void org::apache::poi::sl::draw::SLGraphics::setStroke(::java::awt::Stroke* s)
{
    this->_stroke = s;
}

java::awt::Paint* org::apache::poi::sl::draw::SLGraphics::getPaint()
{
    return _paint;
}

void org::apache::poi::sl::draw::SLGraphics::setPaint(::java::awt::Paint* paint)
{
    if(paint == nullptr)
        return;

    this->_paint = paint;
    if(dynamic_cast< ::java::awt::Color* >(paint) != nullptr)
        _foreground = java_cast< ::java::awt::Color* >(paint);

}

java::awt::geom::AffineTransform* org::apache::poi::sl::draw::SLGraphics::getTransform()
{
    return new ::java::awt::geom::AffineTransform(_transform);
}

void org::apache::poi::sl::draw::SLGraphics::setTransform(::java::awt::geom::AffineTransform* Tx)
{
    _transform = new ::java::awt::geom::AffineTransform(Tx);
}

void org::apache::poi::sl::draw::SLGraphics::draw(::java::awt::Shape* shape)
{
    auto path = new ::java::awt::geom::Path2D_Double(npc(_transform)->createTransformedShape(shape));
    auto p = npc(_group)->createFreeform();
    npc(p)->setPath(path);
    npc(p)->setFillColor(nullptr);
    applyStroke(p);
    if(dynamic_cast< ::java::awt::Color* >(_paint) != nullptr) {
        npc(p)->setStrokeStyle(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(java_cast< ::java::awt::Color* >(_paint))}));
    }
}

void org::apache::poi::sl::draw::SLGraphics::drawString(::java::lang::String* s, float x, float y)
{
    auto txt = npc(_group)->createTextBox();
    ::org::apache::poi::sl::usermodel::TextRun* rt = java_cast< ::org::apache::poi::sl::usermodel::TextRun* >(java_cast< ::java::lang::Object* >(npc(npc(java_cast< ::org::apache::poi::sl::usermodel::TextParagraph* >(npc(npc(txt)->getTextParagraphs())->get(0)))->getTextRuns())->get(0)));
    npc(rt)->setFontSize(::java::lang::Double::valueOf(static_cast< double >(npc(_font)->getSize())));
    npc(rt)->setFontFamily(npc(_font)->getFamily());
    if(getColor() != nullptr)
        npc(rt)->setFontColor(static_cast< ::org::apache::poi::sl::usermodel::PaintStyle* >(DrawPaint::createSolidPaint(getColor())));

    if(npc(_font)->isBold())
        npc(rt)->setBold(true);

    if(npc(_font)->isItalic())
        npc(rt)->setItalic(true);

    npc(txt)->setText(s);
    npc(txt)->setInsets(new ::org::apache::poi::sl::usermodel::Insets2D(int32_t(0), int32_t(0), int32_t(0), int32_t(0)));
    npc(txt)->setWordWrap(false);
    npc(txt)->setHorizontalCentered(::java::lang::Boolean::valueOf(false));
    npc(txt)->setVerticalAlignment(::org::apache::poi::sl::usermodel::VerticalAlignment::MIDDLE);
    auto layout = new ::java::awt::font::TextLayout(s, _font, getFontRenderContext());
    auto ascent = npc(layout)->getAscent();
    auto width = static_cast< float >(::java::lang::Math::floor(npc(layout)->getAdvance()));
    auto height = ascent * int32_t(2);
    y -= height / int32_t(2) + ascent / int32_t(2);
    npc(txt)->setAnchor(new ::java::awt::Rectangle(static_cast< int32_t >(x), static_cast< int32_t >(y), static_cast< int32_t >(width), static_cast< int32_t >(height)));
}

void org::apache::poi::sl::draw::SLGraphics::fill(::java::awt::Shape* shape)
{
    auto path = new ::java::awt::geom::Path2D_Double(npc(_transform)->createTransformedShape(shape));
    auto p = npc(_group)->createFreeform();
    npc(p)->setPath(path);
    applyPaint(p);
    npc(p)->setStrokeStyle(new ::java::lang::ObjectArray());
}

void org::apache::poi::sl::draw::SLGraphics::translate(int32_t x, int32_t y)
{
    npc(_transform)->translate(x, y);
}

void org::apache::poi::sl::draw::SLGraphics::clip(::java::awt::Shape* s)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

java::awt::Shape* org::apache::poi::sl::draw::SLGraphics::getClip()
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return nullptr;
}

void org::apache::poi::sl::draw::SLGraphics::scale(double sx, double sy)
{
    npc(_transform)->scale(sx, sy);
}

void org::apache::poi::sl::draw::SLGraphics::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    ::java::awt::geom::RoundRectangle2D* rect = new ::java::awt::geom::RoundRectangle2D_Double(x, y, width, height, arcWidth, arcHeight);
    draw(static_cast< ::java::awt::Shape* >(rect));
}

void org::apache::poi::sl::draw::SLGraphics::drawString(::java::lang::String* str, int32_t x, int32_t y)
{
    drawString(str, static_cast< float >(x), static_cast< float >(y));
}

void org::apache::poi::sl::draw::SLGraphics::fillOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    ::java::awt::geom::Ellipse2D* oval = new ::java::awt::geom::Ellipse2D_Double(x, y, width, height);
    fill(static_cast< ::java::awt::Shape* >(oval));
}

void org::apache::poi::sl::draw::SLGraphics::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    ::java::awt::geom::RoundRectangle2D* rect = new ::java::awt::geom::RoundRectangle2D_Double(x, y, width, height, arcWidth, arcHeight);
    fill(static_cast< ::java::awt::Shape* >(rect));
}

void org::apache::poi::sl::draw::SLGraphics::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    ::java::awt::geom::Arc2D* arc = new ::java::awt::geom::Arc2D_Double(x, y, width, height, startAngle, arcAngle, ::java::awt::geom::Arc2D::PIE);
    fill(static_cast< ::java::awt::Shape* >(arc));
}

void org::apache::poi::sl::draw::SLGraphics::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    ::java::awt::geom::Arc2D* arc = new ::java::awt::geom::Arc2D_Double(x, y, width, height, startAngle, arcAngle, ::java::awt::geom::Arc2D::OPEN);
    draw(static_cast< ::java::awt::Shape* >(arc));
}

void org::apache::poi::sl::draw::SLGraphics::drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    if(nPoints > 0) {
        auto path = new ::java::awt::geom::GeneralPath();
        npc(path)->moveTo(static_cast< float >((*xPoints)[int32_t(0)]), static_cast< float >((*yPoints)[int32_t(0)]));
        for (auto i = int32_t(1); i < nPoints; i++) 
                        npc(path)->lineTo(static_cast< float >((*xPoints)[i]), static_cast< float >((*yPoints)[i]));

        draw(static_cast< ::java::awt::Shape* >(path));
    }
}

void org::apache::poi::sl::draw::SLGraphics::drawOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    ::java::awt::geom::Ellipse2D* oval = new ::java::awt::geom::Ellipse2D_Double(x, y, width, height);
    draw(static_cast< ::java::awt::Shape* >(oval));
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

void org::apache::poi::sl::draw::SLGraphics::dispose()
{
}

void org::apache::poi::sl::draw::SLGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    ::java::awt::geom::Line2D* line = new ::java::awt::geom::Line2D_Double(x1, y1, x2, y2);
    draw(static_cast< ::java::awt::Shape* >(line));
}

void org::apache::poi::sl::draw::SLGraphics::fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto polygon = new ::java::awt::Polygon(xPoints, yPoints, nPoints);
    fill(static_cast< ::java::awt::Shape* >(polygon));
}

void org::apache::poi::sl::draw::SLGraphics::fillRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto rect = new ::java::awt::Rectangle(x, y, width, height);
    fill(static_cast< ::java::awt::Shape* >(rect));
}

void org::apache::poi::sl::draw::SLGraphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto rect = new ::java::awt::Rectangle(x, y, width, height);
    draw(static_cast< ::java::awt::Shape* >(rect));
}

void org::apache::poi::sl::draw::SLGraphics::drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto polygon = new ::java::awt::Polygon(xPoints, yPoints, nPoints);
    draw(static_cast< ::java::awt::Shape* >(polygon));
}

void org::apache::poi::sl::draw::SLGraphics::clipRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    clip(static_cast< ::java::awt::Shape* >(new ::java::awt::Rectangle(x, y, width, height)));
}

void org::apache::poi::sl::draw::SLGraphics::setClip(::java::awt::Shape* clip)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

java::awt::Rectangle* org::apache::poi::sl::draw::SLGraphics::getClipBounds()
{
    auto c = getClip();
    if(c == nullptr) {
        return nullptr;
    }
    return npc(c)->getBounds();
}

void org::apache::poi::sl::draw::SLGraphics::drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y)
{
    drawString(iterator, static_cast< float >(x), static_cast< float >(y));
}

void org::apache::poi::sl::draw::SLGraphics::clearRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto paint = getPaint();
    setColor(getBackground());
    fillRect(x, y, width, height);
    setPaint(paint);
}

void org::apache::poi::sl::draw::SLGraphics::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy)
{
}

void org::apache::poi::sl::draw::SLGraphics::setClip(int32_t x, int32_t y, int32_t width, int32_t height)
{
    setClip(static_cast< ::java::awt::Shape* >(new ::java::awt::Rectangle(x, y, width, height)));
}

void org::apache::poi::sl::draw::SLGraphics::rotate(double theta)
{
    npc(_transform)->rotate(theta);
}

void org::apache::poi::sl::draw::SLGraphics::rotate(double theta, double x, double y)
{
    npc(_transform)->rotate(theta, x, y);
}

void org::apache::poi::sl::draw::SLGraphics::shear(double shx, double shy)
{
    npc(_transform)->shear(shx, shy);
}

java::awt::font::FontRenderContext* org::apache::poi::sl::draw::SLGraphics::getFontRenderContext()
{
    auto isAntiAliased = npc(::java::awt::RenderingHints::VALUE_TEXT_ANTIALIAS_ON())->equals(getRenderingHint(::java::awt::RenderingHints::KEY_TEXT_ANTIALIASING()));
    auto usesFractionalMetrics = npc(::java::awt::RenderingHints::VALUE_FRACTIONALMETRICS_ON())->equals(getRenderingHint(::java::awt::RenderingHints::KEY_FRACTIONALMETRICS()));
    return new ::java::awt::font::FontRenderContext(new ::java::awt::geom::AffineTransform(), isAntiAliased, usesFractionalMetrics);
}

void org::apache::poi::sl::draw::SLGraphics::transform(::java::awt::geom::AffineTransform* Tx)
{
    npc(_transform)->concatenate(Tx);
}

void org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y)
{
    img = npc(op)->filter(img, nullptr);
    drawImage(static_cast< ::java::awt::Image* >(img), x, y, static_cast< ::java::awt::image::ImageObserver* >(nullptr));
}

void org::apache::poi::sl::draw::SLGraphics::setBackground(::java::awt::Color* color)
{
    if(color == nullptr)
        return;

    _background = color;
}

java::awt::Color* org::apache::poi::sl::draw::SLGraphics::getBackground()
{
    return _background;
}

void org::apache::poi::sl::draw::SLGraphics::setComposite(::java::awt::Composite* comp)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

java::awt::Composite* org::apache::poi::sl::draw::SLGraphics::getComposite()
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return nullptr;
}

java::lang::Object* org::apache::poi::sl::draw::SLGraphics::getRenderingHint(::java::awt::RenderingHints_Key* hintKey)
{
    return npc(_hints)->get(static_cast< ::java::lang::Object* >(hintKey));
}

void org::apache::poi::sl::draw::SLGraphics::setRenderingHint(::java::awt::RenderingHints_Key* hintKey, ::java::lang::Object* hintValue)
{
    npc(_hints)->put(static_cast< ::java::lang::Object* >(hintKey), hintValue);
}

void org::apache::poi::sl::draw::SLGraphics::drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y)
{
    auto glyphOutline = npc(g)->getOutline(x, y);
    fill(glyphOutline);
}

java::awt::GraphicsConfiguration* org::apache::poi::sl::draw::SLGraphics::getDeviceConfiguration()
{
    return npc(npc(::java::awt::GraphicsEnvironment::getLocalGraphicsEnvironment())->getDefaultScreenDevice())->getDefaultConfiguration();
}

void org::apache::poi::sl::draw::SLGraphics::addRenderingHints(::java::util::Map* hints)
{
    npc(this->_hints)->putAll(static_cast< ::java::util::Map* >(hints));
}

void org::apache::poi::sl::draw::SLGraphics::translate(double tx, double ty)
{
    npc(_transform)->translate(tx, ty);
}

void org::apache::poi::sl::draw::SLGraphics::drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

bool org::apache::poi::sl::draw::SLGraphics::hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke)
{
    if(onStroke) {
        s = npc(getStroke())->createStrokedShape(s);
    }
    s = npc(getTransform())->createTransformedShape(s);
    return npc(s)->intersects(rect);
}

java::awt::RenderingHints* org::apache::poi::sl::draw::SLGraphics::getRenderingHints()
{
    return _hints;
}

void org::apache::poi::sl::draw::SLGraphics::setRenderingHints(::java::util::Map* hints)
{
    this->_hints = new ::java::awt::RenderingHints(nullptr);
    npc(this->_hints)->putAll(static_cast< ::java::util::Map* >(hints));
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

bool org::apache::poi::sl::draw::SLGraphics::drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
    return false;
}

java::awt::Graphics* org::apache::poi::sl::draw::SLGraphics::create()
{
    try {
        return java_cast< ::java::awt::Graphics* >(clone());
    } catch (::java::lang::CloneNotSupportedException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
}

java::awt::FontMetrics* org::apache::poi::sl::draw::SLGraphics::getFontMetrics(::java::awt::Font* f)
{
    return npc(::java::awt::Toolkit::getDefaultToolkit())->getFontMetrics(f);
}

void org::apache::poi::sl::draw::SLGraphics::setXORMode(::java::awt::Color* c1)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

void org::apache::poi::sl::draw::SLGraphics::setPaintMode()
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

void org::apache::poi::sl::draw::SLGraphics::drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

void org::apache::poi::sl::draw::SLGraphics::drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform)
{
    if(npc(log)->check(::org::apache::poi::util::POILogger::WARN)) {
        npc(log)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Not implemented"_j)}));
    }
}

void org::apache::poi::sl::draw::SLGraphics::applyStroke(::org::apache::poi::sl::usermodel::SimpleShape* shape)
{
    if(dynamic_cast< ::java::awt::BasicStroke* >(_stroke) != nullptr) {
        auto bs = java_cast< ::java::awt::BasicStroke* >(_stroke);
        npc(shape)->setStrokeStyle(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Double::valueOf(static_cast< double >(npc(bs)->getLineWidth())))}));
        auto dash = npc(bs)->getDashArray_();
        if(dash != nullptr) {
            npc(shape)->setStrokeStyle(new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::org::apache::poi::sl::usermodel::StrokeStyle_LineDash::DASH)}));
        }
    }
}

void org::apache::poi::sl::draw::SLGraphics::applyPaint(::org::apache::poi::sl::usermodel::SimpleShape* shape)
{
    if(dynamic_cast< ::java::awt::Color* >(_paint) != nullptr) {
        npc(shape)->setFillColor(java_cast< ::java::awt::Color* >(_paint));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::sl::draw::SLGraphics::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.SLGraphics", 33);
    return c;
}

java::awt::Graphics* org::apache::poi::sl::draw::SLGraphics::create(int32_t x, int32_t y, int32_t width, int32_t height)
{
    return super::create(x, y, width, height);
}

void org::apache::poi::sl::draw::SLGraphics::drawPolygon(::java::awt::Polygon* p)
{
    super::drawPolygon(p);
}

void org::apache::poi::sl::draw::SLGraphics::fillPolygon(::java::awt::Polygon* p)
{
    super::fillPolygon(p);
}

java::awt::Rectangle* org::apache::poi::sl::draw::SLGraphics::getClipBounds(::java::awt::Rectangle* r)
{
    return super::getClipBounds(r);
}

java::awt::FontMetrics* org::apache::poi::sl::draw::SLGraphics::getFontMetrics()
{
    return super::getFontMetrics();
}

java::lang::Class* org::apache::poi::sl::draw::SLGraphics::getClass0()
{
    return class_();
}

