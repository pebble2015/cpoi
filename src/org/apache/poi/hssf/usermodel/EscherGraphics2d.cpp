// Generated from /POI/java/org/apache/poi/hssf/usermodel/EscherGraphics2d.java
#include <org/apache/poi/hssf/usermodel/EscherGraphics2d.hpp>

#include <java/awt/BasicStroke.hpp>
#include <java/awt/Color.hpp>
#include <java/awt/Composite.hpp>
#include <java/awt/Font.hpp>
#include <java/awt/FontMetrics.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Graphics.hpp>
#include <java/awt/GraphicsConfiguration.hpp>
#include <java/awt/Image.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/awt/RenderingHints.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/Stroke.hpp>
#include <java/awt/font/FontRenderContext.hpp>
#include <java/awt/font/GlyphVector.hpp>
#include <java/awt/font/TextLayout.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Arc2D_Float.hpp>
#include <java/awt/geom/Area.hpp>
#include <java/awt/geom/GeneralPath.hpp>
#include <java/awt/geom/Line2D.hpp>
#include <java/awt/geom/RoundRectangle2D_Float.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/awt/image/BufferedImageOp.hpp>
#include <java/awt/image/ImageObserver.hpp>
#include <java/awt/image/Raster.hpp>
#include <java/awt/image/RenderedImage.hpp>
#include <java/awt/image/renderable/RenderableImage.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Hashtable.hpp>
#include <java/util/Map.hpp>
#include <org/apache/poi/hssf/usermodel/EscherGraphics.hpp>
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

poi::hssf::usermodel::EscherGraphics2d::EscherGraphics2d(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::EscherGraphics2d::EscherGraphics2d(EscherGraphics* escherGraphics) 
    : EscherGraphics2d(*static_cast< ::default_init_tag* >(0))
{
    ctor(escherGraphics);
}

void poi::hssf::usermodel::EscherGraphics2d::init()
{
    logger = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(getClass()));
}

void poi::hssf::usermodel::EscherGraphics2d::ctor(EscherGraphics* escherGraphics)
{
    super::ctor();
    init();
    this->_escherGraphics = escherGraphics;
    setImg(new ::java::awt::image::BufferedImage(int32_t(1), int32_t(1), int32_t(2)));
    setColor(::java::awt::Color::black());
}

void poi::hssf::usermodel::EscherGraphics2d::addRenderingHints(::java::util::Map* map)
{
    npc(getG2D())->addRenderingHints(map);
}

void poi::hssf::usermodel::EscherGraphics2d::clearRect(int32_t i, int32_t j, int32_t k, int32_t l)
{
    auto paint1 = getPaint();
    setColor(getBackground());
    fillRect(i, j, k, l);
    setPaint(paint1);
}

void poi::hssf::usermodel::EscherGraphics2d::clip(::java::awt::Shape* shape)
{
    if(getDeviceclip() != nullptr) {
        auto area = new ::java::awt::geom::Area(getClip());
        if(shape != nullptr)
            npc(area)->intersect(new ::java::awt::geom::Area(shape));

        shape = area;
    }
    setClip(shape);
}

void poi::hssf::usermodel::EscherGraphics2d::clipRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    clip(static_cast< ::java::awt::Shape* >(new ::java::awt::Rectangle(x, y, width, height)));
}

void poi::hssf::usermodel::EscherGraphics2d::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy)
{
    npc(getG2D())->copyArea(x, y, width, height, dx, dy);
}

java::awt::Graphics* poi::hssf::usermodel::EscherGraphics2d::create()
{
    auto g2d = new EscherGraphics2d(_escherGraphics);
    return g2d;
}

void poi::hssf::usermodel::EscherGraphics2d::dispose()
{
    npc(getEscherGraphics())->dispose();
    npc(getG2D())->dispose();
    npc(getImg())->flush();
}

void poi::hssf::usermodel::EscherGraphics2d::draw(::java::awt::Shape* shape)
{
    if(dynamic_cast< ::java::awt::geom::Line2D* >(shape) != nullptr) {
        auto shape2d = java_cast< ::java::awt::geom::Line2D* >(shape);
        auto width = int32_t(0);
        if(_stroke != nullptr && dynamic_cast< ::java::awt::BasicStroke* >(_stroke) != nullptr) {
            width = static_cast< int32_t >(npc((java_cast< ::java::awt::BasicStroke* >(_stroke)))->getLineWidth()) * int32_t(12700);
        }
        drawLine(static_cast< int32_t >(npc(shape2d)->getX1()), static_cast< int32_t >(npc(shape2d)->getY1()), static_cast< int32_t >(npc(shape2d)->getX2()), static_cast< int32_t >(npc(shape2d)->getY2()), width);
    } else {
        if(npc(logger)->check(::poi::util::POILogger::WARN))
            npc(logger)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"draw not fully supported"_j)}));

    }
}

void poi::hssf::usermodel::EscherGraphics2d::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    draw(static_cast< ::java::awt::Shape* >(new ::java::awt::geom::Arc2D_Float(x, y, width, height, startAngle, arcAngle, int32_t(0))));
}

void poi::hssf::usermodel::EscherGraphics2d::drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y)
{
    fill(npc(g)->getOutline(x, y));
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* image, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* imageobserver)
{
    if(npc(logger)->check(::poi::util::POILogger::WARN))
        npc(logger)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawImage() not supported"_j)}));

    return true;
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* image, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* imageobserver)
{
    if(npc(logger)->check(::poi::util::POILogger::WARN))
        npc(logger)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawImage() not supported"_j)}));

    return drawImage(image, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, static_cast< ::java::awt::Color* >(nullptr), imageobserver);
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* image, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* imageobserver)
{
    if(npc(logger)->check(::poi::util::POILogger::WARN))
        npc(logger)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawImage() not supported"_j)}));

    return true;
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)
{
    return drawImage(img, x, y, width, height, static_cast< ::java::awt::Color* >(nullptr), observer);
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* image, int32_t x, int32_t y, ::java::awt::Color* bgColor, ::java::awt::image::ImageObserver* imageobserver)
{
    return drawImage(image, x, y, npc(image)->getWidth(imageobserver), npc(image)->getHeight(imageobserver), bgColor, imageobserver);
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* image, int32_t x, int32_t y, ::java::awt::image::ImageObserver* imageobserver)
{
    return drawImage(image, x, y, npc(image)->getWidth(imageobserver), npc(image)->getHeight(imageobserver), imageobserver);
}

bool poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::Image* image, ::java::awt::geom::AffineTransform* affinetransform, ::java::awt::image::ImageObserver* imageobserver)
{
    auto affinetransform1 = java_cast< ::java::awt::geom::AffineTransform* >(npc(getTrans())->clone());
    npc(getTrans())->concatenate(affinetransform);
    drawImage(image, int32_t(0), int32_t(0), imageobserver);
    setTrans(affinetransform1);
    return true;
}

void poi::hssf::usermodel::EscherGraphics2d::drawImage(::java::awt::image::BufferedImage* bufferedimage, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y)
{
    auto img = npc(op)->filter(bufferedimage, nullptr);
    drawImage(static_cast< ::java::awt::Image* >(img), new ::java::awt::geom::AffineTransform(1.0f, 0.0f, 0.0f, 1.0f, static_cast< float >(x), static_cast< float >(y)), static_cast< ::java::awt::image::ImageObserver* >(nullptr));
}

void poi::hssf::usermodel::EscherGraphics2d::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t width)
{
    npc(getEscherGraphics())->drawLine(x1, y1, x2, y2, width);
}

void poi::hssf::usermodel::EscherGraphics2d::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    auto width = int32_t(0);
    if(_stroke != nullptr && dynamic_cast< ::java::awt::BasicStroke* >(_stroke) != nullptr) {
        width = static_cast< int32_t >(npc((java_cast< ::java::awt::BasicStroke* >(_stroke)))->getLineWidth()) * int32_t(12700);
    }
    npc(getEscherGraphics())->drawLine(x1, y1, x2, y2, width);
}

void poi::hssf::usermodel::EscherGraphics2d::drawOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    npc(getEscherGraphics())->drawOval(x, y, width, height);
}

void poi::hssf::usermodel::EscherGraphics2d::drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    npc(getEscherGraphics())->drawPolygon(xPoints, yPoints, nPoints);
}

void poi::hssf::usermodel::EscherGraphics2d::drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    if(nPoints > 0) {
        auto generalpath = new ::java::awt::geom::GeneralPath();
        npc(generalpath)->moveTo(static_cast< float >((*xPoints)[int32_t(0)]), static_cast< float >((*yPoints)[int32_t(0)]));
        for (auto j = int32_t(1); j < nPoints; j++) 
                        npc(generalpath)->lineTo(static_cast< float >((*xPoints)[j]), static_cast< float >((*yPoints)[j]));

        draw(static_cast< ::java::awt::Shape* >(generalpath));
    }
}

void poi::hssf::usermodel::EscherGraphics2d::drawRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    npc(_escherGraphics)->drawRect(x, y, width, height);
}

void poi::hssf::usermodel::EscherGraphics2d::drawRenderableImage(::java::awt::image::renderable::RenderableImage* renderableimage, ::java::awt::geom::AffineTransform* affinetransform)
{
    drawRenderedImage(npc(renderableimage)->createDefaultRendering(), affinetransform);
}

void poi::hssf::usermodel::EscherGraphics2d::drawRenderedImage(::java::awt::image::RenderedImage* renderedimage, ::java::awt::geom::AffineTransform* affinetransform)
{
    auto bufferedimage = new ::java::awt::image::BufferedImage(npc(renderedimage)->getColorModel(), npc(npc(renderedimage)->getData())->createCompatibleWritableRaster(), false, static_cast< ::java::util::Hashtable* >(nullptr));
    npc(bufferedimage)->setData(npc(renderedimage)->getData());
    drawImage(static_cast< ::java::awt::Image* >(bufferedimage), affinetransform, static_cast< ::java::awt::image::ImageObserver* >(nullptr));
}

void poi::hssf::usermodel::EscherGraphics2d::drawRoundRect(int32_t i, int32_t j, int32_t k, int32_t l, int32_t i1, int32_t j1)
{
    draw(static_cast< ::java::awt::Shape* >(new ::java::awt::geom::RoundRectangle2D_Float(i, j, k, l, i1, j1)));
}

void poi::hssf::usermodel::EscherGraphics2d::drawString(::java::lang::String* string, float x, float y)
{
    npc(getEscherGraphics())->drawString(string, static_cast< int32_t >(x), static_cast< int32_t >(y));
}

void poi::hssf::usermodel::EscherGraphics2d::drawString(::java::lang::String* string, int32_t x, int32_t y)
{
    npc(getEscherGraphics())->drawString(string, x, y);
}

void poi::hssf::usermodel::EscherGraphics2d::drawString(::java::text::AttributedCharacterIterator* attributedcharacteriterator, float x, float y)
{
    auto textlayout = new ::java::awt::font::TextLayout(attributedcharacteriterator, getFontRenderContext());
    auto paint1 = getPaint();
    setColor(getColor());
    fill(npc(textlayout)->getOutline(::java::awt::geom::AffineTransform::getTranslateInstance(x, y)));
    setPaint(paint1);
}

void poi::hssf::usermodel::EscherGraphics2d::drawString(::java::text::AttributedCharacterIterator* attributedcharacteriterator, int32_t x, int32_t y)
{
    npc(getEscherGraphics())->drawString(attributedcharacteriterator, x, y);
}

void poi::hssf::usermodel::EscherGraphics2d::fill(::java::awt::Shape* shape)
{
    if(npc(logger)->check(::poi::util::POILogger::WARN))
        npc(logger)->log(::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"fill(Shape) not supported"_j)}));

}

void poi::hssf::usermodel::EscherGraphics2d::fillArc(int32_t i, int32_t j, int32_t k, int32_t l, int32_t i1, int32_t j1)
{
    fill(static_cast< ::java::awt::Shape* >(new ::java::awt::geom::Arc2D_Float(i, j, k, l, i1, j1, int32_t(2))));
}

void poi::hssf::usermodel::EscherGraphics2d::fillOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    npc(_escherGraphics)->fillOval(x, y, width, height);
}

void poi::hssf::usermodel::EscherGraphics2d::fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    npc(_escherGraphics)->fillPolygon(xPoints, yPoints, nPoints);
}

void poi::hssf::usermodel::EscherGraphics2d::fillRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    npc(getEscherGraphics())->fillRect(x, y, width, height);
}

void poi::hssf::usermodel::EscherGraphics2d::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    fill(static_cast< ::java::awt::Shape* >(new ::java::awt::geom::RoundRectangle2D_Float(x, y, width, height, arcWidth, arcHeight)));
}

java::awt::Color* poi::hssf::usermodel::EscherGraphics2d::getBackground()
{
    return npc(getEscherGraphics())->getBackground();
}

java::awt::Shape* poi::hssf::usermodel::EscherGraphics2d::getClip()
{
    try {
        return npc(npc(getTrans())->createInverse())->createTransformedShape(getDeviceclip());
    } catch (::java::lang::Exception* _ex) {
        return nullptr;
    }
}

java::awt::Rectangle* poi::hssf::usermodel::EscherGraphics2d::getClipBounds()
{
    if(getDeviceclip() != nullptr) {
        return npc(getClip())->getBounds();
    }
    return nullptr;
}

java::awt::Color* poi::hssf::usermodel::EscherGraphics2d::getColor()
{
    return npc(_escherGraphics)->getColor();
}

java::awt::Composite* poi::hssf::usermodel::EscherGraphics2d::getComposite()
{
    return npc(getG2D())->getComposite();
}

java::awt::GraphicsConfiguration* poi::hssf::usermodel::EscherGraphics2d::getDeviceConfiguration()
{
    return npc(getG2D())->getDeviceConfiguration();
}

java::awt::Font* poi::hssf::usermodel::EscherGraphics2d::getFont()
{
    return npc(getEscherGraphics())->getFont();
}

java::awt::FontMetrics* poi::hssf::usermodel::EscherGraphics2d::getFontMetrics(::java::awt::Font* font)
{
    return npc(getEscherGraphics())->getFontMetrics(font);
}

java::awt::font::FontRenderContext* poi::hssf::usermodel::EscherGraphics2d::getFontRenderContext()
{
    npc(getG2D())->setTransform(getTrans());
    return npc(getG2D())->getFontRenderContext();
}

java::awt::Paint* poi::hssf::usermodel::EscherGraphics2d::getPaint()
{
    return _paint;
}

java::lang::Object* poi::hssf::usermodel::EscherGraphics2d::getRenderingHint(::java::awt::RenderingHints_Key* key)
{
    return npc(getG2D())->getRenderingHint(key);
}

java::awt::RenderingHints* poi::hssf::usermodel::EscherGraphics2d::getRenderingHints()
{
    return npc(getG2D())->getRenderingHints();
}

java::awt::Stroke* poi::hssf::usermodel::EscherGraphics2d::getStroke()
{
    return _stroke;
}

java::awt::geom::AffineTransform* poi::hssf::usermodel::EscherGraphics2d::getTransform()
{
    return java_cast< ::java::awt::geom::AffineTransform* >(npc(getTrans())->clone());
}

bool poi::hssf::usermodel::EscherGraphics2d::hit(::java::awt::Rectangle* rectangle, ::java::awt::Shape* shape, bool flag)
{
    npc(getG2D())->setTransform(getTrans());
    npc(getG2D())->setStroke(getStroke());
    npc(getG2D())->setClip(getClip());
    return npc(getG2D())->hit(rectangle, shape, flag);
}

void poi::hssf::usermodel::EscherGraphics2d::rotate(double d)
{
    npc(getTrans())->rotate(d);
}

void poi::hssf::usermodel::EscherGraphics2d::rotate(double d, double d1, double d2)
{
    npc(getTrans())->rotate(d, d1, d2);
}

void poi::hssf::usermodel::EscherGraphics2d::scale(double d, double d1)
{
    npc(getTrans())->scale(d, d1);
}

void poi::hssf::usermodel::EscherGraphics2d::setBackground(::java::awt::Color* c)
{
    npc(getEscherGraphics())->setBackground(c);
}

void poi::hssf::usermodel::EscherGraphics2d::setClip(int32_t i, int32_t j, int32_t k, int32_t l)
{
    setClip(static_cast< ::java::awt::Shape* >(new ::java::awt::Rectangle(i, j, k, l)));
}

void poi::hssf::usermodel::EscherGraphics2d::setClip(::java::awt::Shape* shape)
{
    setDeviceclip(npc(getTrans())->createTransformedShape(shape));
}

void poi::hssf::usermodel::EscherGraphics2d::setColor(::java::awt::Color* c)
{
    npc(_escherGraphics)->setColor(c);
}

void poi::hssf::usermodel::EscherGraphics2d::setComposite(::java::awt::Composite* composite)
{
    npc(getG2D())->setComposite(composite);
}

void poi::hssf::usermodel::EscherGraphics2d::setFont(::java::awt::Font* font)
{
    npc(getEscherGraphics())->setFont(font);
}

void poi::hssf::usermodel::EscherGraphics2d::setPaint(::java::awt::Paint* paint1)
{
    if(paint1 != nullptr) {
        _paint = paint1;
        if(dynamic_cast< ::java::awt::Color* >(paint1) != nullptr)
            setColor(java_cast< ::java::awt::Color* >(paint1));

    }
}

void poi::hssf::usermodel::EscherGraphics2d::setPaintMode()
{
    npc(getEscherGraphics())->setPaintMode();
}

void poi::hssf::usermodel::EscherGraphics2d::setRenderingHint(::java::awt::RenderingHints_Key* key, ::java::lang::Object* obj)
{
    npc(getG2D())->setRenderingHint(key, obj);
}

void poi::hssf::usermodel::EscherGraphics2d::setRenderingHints(::java::util::Map* map)
{
    npc(getG2D())->setRenderingHints(map);
}

void poi::hssf::usermodel::EscherGraphics2d::setStroke(::java::awt::Stroke* s)
{
    _stroke = s;
}

void poi::hssf::usermodel::EscherGraphics2d::setTransform(::java::awt::geom::AffineTransform* affinetransform)
{
    setTrans(java_cast< ::java::awt::geom::AffineTransform* >(npc(affinetransform)->clone()));
}

void poi::hssf::usermodel::EscherGraphics2d::setXORMode(::java::awt::Color* color1)
{
    npc(getEscherGraphics())->setXORMode(color1);
}

void poi::hssf::usermodel::EscherGraphics2d::shear(double d, double d1)
{
    npc(getTrans())->shear(d, d1);
}

void poi::hssf::usermodel::EscherGraphics2d::transform(::java::awt::geom::AffineTransform* affinetransform)
{
    npc(getTrans())->concatenate(affinetransform);
}

void poi::hssf::usermodel::EscherGraphics2d::translate(double d, double d1)
{
    npc(getTrans())->translate(d, d1);
}

void poi::hssf::usermodel::EscherGraphics2d::translate(int32_t i, int32_t j)
{
    npc(getTrans())->translate(i, j);
}

poi::hssf::usermodel::EscherGraphics* poi::hssf::usermodel::EscherGraphics2d::getEscherGraphics()
{
    return _escherGraphics;
}

java::awt::image::BufferedImage* poi::hssf::usermodel::EscherGraphics2d::getImg()
{
    return _img;
}

void poi::hssf::usermodel::EscherGraphics2d::setImg(::java::awt::image::BufferedImage* img)
{
    this->_img = img;
}

java::awt::Graphics2D* poi::hssf::usermodel::EscherGraphics2d::getG2D()
{
    return java_cast< ::java::awt::Graphics2D* >(npc(_img)->getGraphics());
}

java::awt::geom::AffineTransform* poi::hssf::usermodel::EscherGraphics2d::getTrans()
{
    return _trans;
}

void poi::hssf::usermodel::EscherGraphics2d::setTrans(::java::awt::geom::AffineTransform* trans)
{
    this->_trans = trans;
}

java::awt::Shape* poi::hssf::usermodel::EscherGraphics2d::getDeviceclip()
{
    return _deviceclip;
}

void poi::hssf::usermodel::EscherGraphics2d::setDeviceclip(::java::awt::Shape* deviceclip)
{
    this->_deviceclip = deviceclip;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::EscherGraphics2d::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.EscherGraphics2d", 46);
    return c;
}

java::awt::Graphics* poi::hssf::usermodel::EscherGraphics2d::create(int32_t x, int32_t y, int32_t width, int32_t height)
{
    return super::create(x, y, width, height);
}

void poi::hssf::usermodel::EscherGraphics2d::drawPolygon(::java::awt::Polygon* p)
{
    super::drawPolygon(p);
}

void poi::hssf::usermodel::EscherGraphics2d::fillPolygon(::java::awt::Polygon* p)
{
    super::fillPolygon(p);
}

java::awt::Rectangle* poi::hssf::usermodel::EscherGraphics2d::getClipBounds(::java::awt::Rectangle* r)
{
    return super::getClipBounds(r);
}

java::awt::FontMetrics* poi::hssf::usermodel::EscherGraphics2d::getFontMetrics()
{
    return super::getFontMetrics();
}

java::lang::Class* poi::hssf::usermodel::EscherGraphics2d::getClass0()
{
    return class_();
}

