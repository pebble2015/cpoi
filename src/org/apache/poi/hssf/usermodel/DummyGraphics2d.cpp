// Generated from /POI/java/org/apache/poi/hssf/usermodel/DummyGraphics2d.java
#include <org/apache/poi/hssf/usermodel/DummyGraphics2d.hpp>

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
#include <java/awt/Polygon.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/awt/RenderingHints_Key.hpp>
#include <java/awt/RenderingHints.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/Stroke.hpp>
#include <java/awt/font/FontRenderContext.hpp>
#include <java/awt/font/GlyphVector.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/awt/image/BufferedImageOp.hpp>
#include <java/awt/image/ImageObserver.hpp>
#include <java/awt/image/RenderedImage.hpp>
#include <java/awt/image/renderable/RenderableImage.hpp>
#include <java/io/PrintStream.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Map.hpp>

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

poi::hssf::usermodel::DummyGraphics2d::DummyGraphics2d(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::DummyGraphics2d::DummyGraphics2d() 
    : DummyGraphics2d(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::usermodel::DummyGraphics2d::DummyGraphics2d(::java::io::PrintStream* log) 
    : DummyGraphics2d(*static_cast< ::default_init_tag* >(0))
{
    ctor(log);
}

poi::hssf::usermodel::DummyGraphics2d::DummyGraphics2d(::java::io::PrintStream* log, ::java::awt::Graphics2D* g2D) 
    : DummyGraphics2d(*static_cast< ::default_init_tag* >(0))
{
    ctor(log,g2D);
}

void poi::hssf::usermodel::DummyGraphics2d::ctor()
{
    ctor(::java::lang::System::out());
}

void poi::hssf::usermodel::DummyGraphics2d::ctor(::java::io::PrintStream* log)
{
    super::ctor();
    bufimg = new ::java::awt::image::BufferedImage(int32_t(1000), int32_t(1000), int32_t(2));
    g2D = java_cast< ::java::awt::Graphics2D* >(npc(bufimg)->getGraphics());
    this->log = log;
}

void poi::hssf::usermodel::DummyGraphics2d::ctor(::java::io::PrintStream* log, ::java::awt::Graphics2D* g2D)
{
    super::ctor();
    this->g2D = g2D;
    this->log = log;
}

void poi::hssf::usermodel::DummyGraphics2d::addRenderingHints(::java::util::Map* hints)
{
    auto l = ::java::lang::StringBuilder().append(u"addRenderingHinds(Map):"_j)->append(u"\n  hints = "_j)
        ->append(static_cast< ::java::lang::Object* >(hints))->toString();
    npc(log)->println(l);
    npc(g2D)->addRenderingHints(hints);
}

void poi::hssf::usermodel::DummyGraphics2d::clip(::java::awt::Shape* s)
{
    auto l = ::java::lang::StringBuilder().append(u"clip(Shape):"_j)->append(u"\n  s = "_j)
        ->append(static_cast< ::java::lang::Object* >(s))->toString();
    npc(log)->println(l);
    npc(g2D)->clip(s);
}

void poi::hssf::usermodel::DummyGraphics2d::draw(::java::awt::Shape* s)
{
    auto l = ::java::lang::StringBuilder().append(u"draw(Shape):"_j)->append(u"\n  s = "_j)
        ->append(static_cast< ::java::lang::Object* >(s))->toString();
    npc(log)->println(l);
    npc(g2D)->draw(s);
}

void poi::hssf::usermodel::DummyGraphics2d::drawGlyphVector(::java::awt::font::GlyphVector* g, float x, float y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawGlyphVector(GlyphVector, float, float):"_j)->append(u"\n  g = "_j)->toString())->append(static_cast< ::java::lang::Object* >(g))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawGlyphVector(g, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::image::BufferedImage* img, ::java::awt::image::BufferedImageOp* op, int32_t x, int32_t y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(BufferedImage, BufferedImageOp, x, y):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  op = "_j)
        ->append(static_cast< ::java::lang::Object* >(op))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawImage(img, op, x, y);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, ::java::awt::geom::AffineTransform* xform, ::java::awt::image::ImageObserver* obs)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,AfflineTransform,ImageObserver):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  xform = "_j)
        ->append(static_cast< ::java::lang::Object* >(xform))
        ->append(u"\n  obs = "_j)
        ->append(static_cast< ::java::lang::Object* >(obs))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, xform, obs);
}

void poi::hssf::usermodel::DummyGraphics2d::drawRenderableImage(::java::awt::image::renderable::RenderableImage* img, ::java::awt::geom::AffineTransform* xform)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawRenderableImage(RenderableImage, AfflineTransform):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  xform = "_j)
        ->append(static_cast< ::java::lang::Object* >(xform))->toString();
    npc(log)->println(l);
    npc(g2D)->drawRenderableImage(img, xform);
}

void poi::hssf::usermodel::DummyGraphics2d::drawRenderedImage(::java::awt::image::RenderedImage* img, ::java::awt::geom::AffineTransform* xform)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawRenderedImage(RenderedImage, AffineTransform):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  xform = "_j)
        ->append(static_cast< ::java::lang::Object* >(xform))->toString();
    npc(log)->println(l);
    npc(g2D)->drawRenderedImage(img, xform);
}

void poi::hssf::usermodel::DummyGraphics2d::drawString(::java::text::AttributedCharacterIterator* iterator, float x, float y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawString(AttributedCharacterIterator):"_j)->append(u"\n  iterator = "_j)->toString())->append(static_cast< ::java::lang::Object* >(iterator))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawString(iterator, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::drawString(::java::lang::String* s, float x, float y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawString(s,x,y):"_j)->append(u"\n  s = "_j)->toString())->append(s)
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawString(s, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::fill(::java::awt::Shape* s)
{
    auto l = ::java::lang::StringBuilder().append(u"fill(Shape):"_j)->append(u"\n  s = "_j)
        ->append(static_cast< ::java::lang::Object* >(s))->toString();
    npc(log)->println(l);
    npc(g2D)->fill(s);
}

java::awt::Color* poi::hssf::usermodel::DummyGraphics2d::getBackground()
{
    npc(log)->println(u"getBackground():"_j);
    return npc(g2D)->getBackground();
}

java::awt::Composite* poi::hssf::usermodel::DummyGraphics2d::getComposite()
{
    npc(log)->println(u"getComposite():"_j);
    return npc(g2D)->getComposite();
}

java::awt::GraphicsConfiguration* poi::hssf::usermodel::DummyGraphics2d::getDeviceConfiguration()
{
    npc(log)->println(u"getDeviceConfiguration():"_j);
    return npc(g2D)->getDeviceConfiguration();
}

java::awt::font::FontRenderContext* poi::hssf::usermodel::DummyGraphics2d::getFontRenderContext()
{
    npc(log)->println(u"getFontRenderContext():"_j);
    return npc(g2D)->getFontRenderContext();
}

java::awt::Paint* poi::hssf::usermodel::DummyGraphics2d::getPaint()
{
    npc(log)->println(u"getPaint():"_j);
    return npc(g2D)->getPaint();
}

java::lang::Object* poi::hssf::usermodel::DummyGraphics2d::getRenderingHint(::java::awt::RenderingHints_Key* hintKey)
{
    auto l = ::java::lang::StringBuilder().append(u"getRenderingHint(RenderingHints.Key):"_j)->append(u"\n  hintKey = "_j)
        ->append(static_cast< ::java::lang::Object* >(hintKey))->toString();
    npc(log)->println(l);
    return npc(g2D)->getRenderingHint(hintKey);
}

java::awt::RenderingHints* poi::hssf::usermodel::DummyGraphics2d::getRenderingHints()
{
    npc(log)->println(u"getRenderingHints():"_j);
    return npc(g2D)->getRenderingHints();
}

java::awt::Stroke* poi::hssf::usermodel::DummyGraphics2d::getStroke()
{
    npc(log)->println(u"getStroke():"_j);
    return npc(g2D)->getStroke();
}

java::awt::geom::AffineTransform* poi::hssf::usermodel::DummyGraphics2d::getTransform()
{
    npc(log)->println(u"getTransform():"_j);
    return npc(g2D)->getTransform();
}

bool poi::hssf::usermodel::DummyGraphics2d::hit(::java::awt::Rectangle* rect, ::java::awt::Shape* s, bool onStroke)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"hit(Rectangle, Shape, onStroke):"_j)->append(u"\n  rect = "_j)->toString())->append(static_cast< ::java::lang::Object* >(rect))
        ->append(u"\n  s = "_j)
        ->append(static_cast< ::java::lang::Object* >(s))
        ->append(u"\n  onStroke = "_j)
        ->append(onStroke)->toString();
    npc(log)->println(l);
    return npc(g2D)->hit(rect, s, onStroke);
}

void poi::hssf::usermodel::DummyGraphics2d::rotate(double theta)
{
    auto l = ::java::lang::StringBuilder().append(u"rotate(theta):"_j)->append(u"\n  theta = "_j)
        ->append(theta)->toString();
    npc(log)->println(l);
    npc(g2D)->rotate(theta);
}

void poi::hssf::usermodel::DummyGraphics2d::rotate(double theta, double x, double y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"rotate(double,double,double):"_j)->append(u"\n  theta = "_j)->toString())->append(theta)
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->rotate(theta, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::scale(double sx, double sy)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"scale(double,double):"_j)->append(u"\n  sx = "_j)->toString())->append(sx)
        ->append(u"\n  sy"_j)->toString();
    npc(log)->println(l);
    npc(g2D)->scale(sx, sy);
}

void poi::hssf::usermodel::DummyGraphics2d::setBackground(::java::awt::Color* color)
{
    auto l = ::java::lang::StringBuilder().append(u"setBackground(Color):"_j)->append(u"\n  color = "_j)
        ->append(static_cast< ::java::lang::Object* >(color))->toString();
    npc(log)->println(l);
    npc(g2D)->setBackground(color);
}

void poi::hssf::usermodel::DummyGraphics2d::setComposite(::java::awt::Composite* comp)
{
    auto l = ::java::lang::StringBuilder().append(u"setComposite(Composite):"_j)->append(u"\n  comp = "_j)
        ->append(static_cast< ::java::lang::Object* >(comp))->toString();
    npc(log)->println(l);
    npc(g2D)->setComposite(comp);
}

void poi::hssf::usermodel::DummyGraphics2d::setPaint(::java::awt::Paint* paint)
{
    auto l = ::java::lang::StringBuilder().append(u"setPaint(Paint):"_j)->append(u"\n  paint = "_j)
        ->append(static_cast< ::java::lang::Object* >(paint))->toString();
    npc(log)->println(l);
    npc(g2D)->setPaint(paint);
}

void poi::hssf::usermodel::DummyGraphics2d::setRenderingHint(::java::awt::RenderingHints_Key* hintKey, ::java::lang::Object* hintValue)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"setRenderingHint(RenderingHints.Key, Object):"_j)->append(u"\n  hintKey = "_j)->toString())->append(static_cast< ::java::lang::Object* >(hintKey))
        ->append(u"\n  hintValue = "_j)
        ->append(static_cast< ::java::lang::Object* >(hintValue))->toString();
    npc(log)->println(l);
    npc(g2D)->setRenderingHint(hintKey, hintValue);
}

void poi::hssf::usermodel::DummyGraphics2d::setRenderingHints(::java::util::Map* hints)
{
    auto l = ::java::lang::StringBuilder().append(u"setRenderingHints(Map):"_j)->append(u"\n  hints = "_j)
        ->append(static_cast< ::java::lang::Object* >(hints))->toString();
    npc(log)->println(l);
    npc(g2D)->setRenderingHints(hints);
}

void poi::hssf::usermodel::DummyGraphics2d::setStroke(::java::awt::Stroke* s)
{
    ::java::lang::String* l;
    if(dynamic_cast< ::java::awt::BasicStroke* >(s) != nullptr) {
        auto bs = java_cast< ::java::awt::BasicStroke* >(s);
        l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"setStroke(Stoke):"_j)->append(u"\n  s = BasicStroke("_j)
            ->append(u"\n    dash[]: "_j)->toString())->append(::java::util::Arrays::toString(npc(bs)->getDashArray_()))
            ->append(u"\n    dashPhase: "_j)
            ->append(npc(bs)->getDashPhase())
            ->append(u"\n    endCap: "_j)
            ->append(npc(bs)->getEndCap())
            ->append(u"\n    lineJoin: "_j)
            ->append(npc(bs)->getLineJoin())
            ->append(u"\n    width: "_j)
            ->append(npc(bs)->getLineWidth())
            ->append(u"\n    miterLimit: "_j)
            ->append(npc(bs)->getMiterLimit())
            ->append(u"\n  )"_j)->toString();
    } else {
        l = ::java::lang::StringBuilder().append(u"setStroke(Stoke):"_j)->append(u"\n  s = "_j)
            ->append(static_cast< ::java::lang::Object* >(s))->toString();
    }
    npc(log)->println(l);
    npc(g2D)->setStroke(s);
}

void poi::hssf::usermodel::DummyGraphics2d::setTransform(::java::awt::geom::AffineTransform* Tx)
{
    auto l = ::java::lang::StringBuilder().append(u"setTransform():"_j)->append(u"\n  Tx = "_j)
        ->append(static_cast< ::java::lang::Object* >(Tx))->toString();
    npc(log)->println(l);
    npc(g2D)->setTransform(Tx);
}

void poi::hssf::usermodel::DummyGraphics2d::shear(double shx, double shy)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"shear(shx, dhy):"_j)->append(u"\n  shx = "_j)->toString())->append(shx)
        ->append(u"\n  shy = "_j)
        ->append(shy)->toString();
    npc(log)->println(l);
    npc(g2D)->shear(shx, shy);
}

void poi::hssf::usermodel::DummyGraphics2d::transform(::java::awt::geom::AffineTransform* Tx)
{
    auto l = ::java::lang::StringBuilder().append(u"transform(AffineTransform):"_j)->append(u"\n  Tx = "_j)
        ->append(static_cast< ::java::lang::Object* >(Tx))->toString();
    npc(log)->println(l);
    npc(g2D)->transform(Tx);
}

void poi::hssf::usermodel::DummyGraphics2d::translate(double tx, double ty)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"translate(double, double):"_j)->append(u"\n  tx = "_j)->toString())->append(tx)
        ->append(u"\n  ty = "_j)
        ->append(ty)->toString();
    npc(log)->println(l);
    npc(g2D)->translate(tx, ty);
}

void poi::hssf::usermodel::DummyGraphics2d::clearRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"clearRect(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->clearRect(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::clipRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"clipRect(int, int, int, int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->clipRect(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"copyArea(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->copyArea(x, y, width, height, dx, dy);
}

java::awt::Graphics* poi::hssf::usermodel::DummyGraphics2d::create()
{
    npc(log)->println(u"create():"_j);
    return npc(g2D)->create();
}

java::awt::Graphics* poi::hssf::usermodel::DummyGraphics2d::create(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"create(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    return npc(g2D)->create(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::dispose()
{
    npc(log)->println(u"dispose():"_j);
    npc(g2D)->dispose();
}

void poi::hssf::usermodel::DummyGraphics2d::draw3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"draw3DRect(int,int,int,int,boolean):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  raised = "_j)
        ->append(raised)->toString();
    npc(log)->println(l);
    npc(g2D)->draw3DRect(x, y, width, height, raised);
}

void poi::hssf::usermodel::DummyGraphics2d::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawArc(int,int,int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  startAngle = "_j)
        ->append(startAngle)
        ->append(u"\n  arcAngle = "_j)
        ->append(arcAngle)->toString();
    npc(log)->println(l);
    npc(g2D)->drawArc(x, y, width, height, startAngle, arcAngle);
}

void poi::hssf::usermodel::DummyGraphics2d::drawBytes(::int8_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawBytes(byte[],int,int,int,int):"_j)->append(u"\n  data = "_j)->toString())->append(::java::util::Arrays::toString(data))
        ->append(u"\n  offset = "_j)
        ->append(offset)
        ->append(u"\n  length = "_j)
        ->append(length)
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawBytes(data, offset, length, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::drawChars(::char16_tArray* data, int32_t offset, int32_t length, int32_t x, int32_t y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawChars(data,int,int,int,int):"_j)->append(u"\n  data = "_j)->toString())->append(::java::util::Arrays::toString(data))
        ->append(u"\n  offset = "_j)
        ->append(offset)
        ->append(u"\n  length = "_j)
        ->append(length)
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawChars(data, offset, length, x, y);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,int,int,int,int,int,int,int,int,ImageObserver):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  dx1 = "_j)
        ->append(dx1)
        ->append(u"\n  dy1 = "_j)
        ->append(dy1)
        ->append(u"\n  dx2 = "_j)
        ->append(dx2)
        ->append(u"\n  dy2 = "_j)
        ->append(dy2)
        ->append(u"\n  sx1 = "_j)
        ->append(sx1)
        ->append(u"\n  sy1 = "_j)
        ->append(sy1)
        ->append(u"\n  sx2 = "_j)
        ->append(sx2)
        ->append(u"\n  sy2 = "_j)
        ->append(sy2)
        ->append(u"\n  observer = "_j)
        ->append(static_cast< ::java::lang::Object* >(observer))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, observer);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,int,int,int,int,int,int,int,int,Color,ImageObserver):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  dx1 = "_j)
        ->append(dx1)
        ->append(u"\n  dy1 = "_j)
        ->append(dy1)
        ->append(u"\n  dx2 = "_j)
        ->append(dx2)
        ->append(u"\n  dy2 = "_j)
        ->append(dy2)
        ->append(u"\n  sx1 = "_j)
        ->append(sx1)
        ->append(u"\n  sy1 = "_j)
        ->append(sy1)
        ->append(u"\n  sx2 = "_j)
        ->append(sx2)
        ->append(u"\n  sy2 = "_j)
        ->append(sy2)
        ->append(u"\n  bgcolor = "_j)
        ->append(static_cast< ::java::lang::Object* >(bgcolor))
        ->append(u"\n  observer = "_j)
        ->append(static_cast< ::java::lang::Object* >(observer))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, dx1, dy1, dx2, dy2, sx1, sy1, sx2, sy2, bgcolor, observer);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,int,int,Color,ImageObserver):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  bgcolor = "_j)
        ->append(static_cast< ::java::lang::Object* >(bgcolor))
        ->append(u"\n  observer = "_j)
        ->append(static_cast< ::java::lang::Object* >(observer))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, x, y, bgcolor, observer);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, int32_t x, int32_t y, ::java::awt::image::ImageObserver* observer)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,int,int,observer):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  observer = "_j)
        ->append(static_cast< ::java::lang::Object* >(observer))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, x, y, observer);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,int,int,int,int,Color,ImageObserver):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  bgcolor = "_j)
        ->append(static_cast< ::java::lang::Object* >(bgcolor))
        ->append(u"\n  observer = "_j)
        ->append(static_cast< ::java::lang::Object* >(observer))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, x, y, width, height, bgcolor, observer);
}

bool poi::hssf::usermodel::DummyGraphics2d::drawImage(::java::awt::Image* img, int32_t x, int32_t y, int32_t width, int32_t height, ::java::awt::image::ImageObserver* observer)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawImage(Image,int,int,width,height,observer):"_j)->append(u"\n  img = "_j)->toString())->append(static_cast< ::java::lang::Object* >(img))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  observer = "_j)
        ->append(static_cast< ::java::lang::Object* >(observer))->toString();
    npc(log)->println(l);
    return npc(g2D)->drawImage(img, x, y, width, height, observer);
}

void poi::hssf::usermodel::DummyGraphics2d::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawLine(int,int,int,int):"_j)->append(u"\n  x1 = "_j)->toString())->append(x1)
        ->append(u"\n  y1 = "_j)
        ->append(y1)
        ->append(u"\n  x2 = "_j)
        ->append(x2)
        ->append(u"\n  y2 = "_j)
        ->append(y2)->toString();
    npc(log)->println(l);
    npc(g2D)->drawLine(x1, y1, x2, y2);
}

void poi::hssf::usermodel::DummyGraphics2d::drawOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawOval(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->drawOval(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::drawPolygon(::java::awt::Polygon* p)
{
    auto l = ::java::lang::StringBuilder().append(u"drawPolygon(Polygon):"_j)->append(u"\n  p = "_j)
        ->append(static_cast< ::java::lang::Object* >(p))->toString();
    npc(log)->println(l);
    npc(g2D)->drawPolygon(p);
}

void poi::hssf::usermodel::DummyGraphics2d::drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawPolygon(int[],int[],int):"_j)->append(u"\n  xPoints = "_j)->toString())->append(::java::util::Arrays::toString(xPoints))
        ->append(u"\n  yPoints = "_j)
        ->append(::java::util::Arrays::toString(yPoints))
        ->append(u"\n  nPoints = "_j)
        ->append(nPoints)->toString();
    npc(log)->println(l);
    npc(g2D)->drawPolygon(xPoints, yPoints, nPoints);
}

void poi::hssf::usermodel::DummyGraphics2d::drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawPolyline(int[],int[],int):"_j)->append(u"\n  xPoints = "_j)->toString())->append(::java::util::Arrays::toString(xPoints))
        ->append(u"\n  yPoints = "_j)
        ->append(::java::util::Arrays::toString(yPoints))
        ->append(u"\n  nPoints = "_j)
        ->append(nPoints)->toString();
    npc(log)->println(l);
    npc(g2D)->drawPolyline(xPoints, yPoints, nPoints);
}

void poi::hssf::usermodel::DummyGraphics2d::drawRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawRect(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->drawRect(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawRoundRect(int,int,int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  arcWidth = "_j)
        ->append(arcWidth)
        ->append(u"\n  arcHeight = "_j)
        ->append(arcHeight)->toString();
    npc(log)->println(l);
    npc(g2D)->drawRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void poi::hssf::usermodel::DummyGraphics2d::drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawString(AttributedCharacterIterator,int,int):"_j)->append(u"\n  iterator = "_j)->toString())->append(static_cast< ::java::lang::Object* >(iterator))
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawString(iterator, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::drawString(::java::lang::String* str, int32_t x, int32_t y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"drawString(str,int,int):"_j)->append(u"\n  str = "_j)->toString())->append(str)
        ->append(u"\n  x = "_j)
        ->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->drawString(str, x, y);
}

void poi::hssf::usermodel::DummyGraphics2d::fill3DRect(int32_t x, int32_t y, int32_t width, int32_t height, bool raised)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"fill3DRect(int,int,int,int,boolean):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  raised = "_j)
        ->append(raised)->toString();
    npc(log)->println(l);
    npc(g2D)->fill3DRect(x, y, width, height, raised);
}

void poi::hssf::usermodel::DummyGraphics2d::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"fillArc(int,int,int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)
        ->append(u"\n  startAngle = "_j)
        ->append(startAngle)
        ->append(u"\n  arcAngle = "_j)
        ->append(arcAngle)->toString();
    npc(log)->println(l);
    npc(g2D)->fillArc(x, y, width, height, startAngle, arcAngle);
}

void poi::hssf::usermodel::DummyGraphics2d::fillOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"fillOval(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->fillOval(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::fillPolygon(::java::awt::Polygon* p)
{
    auto l = ::java::lang::StringBuilder().append(u"fillPolygon(Polygon):"_j)->append(u"\n  p = "_j)
        ->append(static_cast< ::java::lang::Object* >(p))->toString();
    npc(log)->println(l);
    npc(g2D)->fillPolygon(p);
}

void poi::hssf::usermodel::DummyGraphics2d::fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"fillPolygon(int[],int[],int):"_j)->append(u"\n  xPoints = "_j)->toString())->append(::java::util::Arrays::toString(xPoints))
        ->append(u"\n  yPoints = "_j)
        ->append(::java::util::Arrays::toString(yPoints))
        ->append(u"\n  nPoints = "_j)
        ->append(nPoints)->toString();
    npc(log)->println(l);
    npc(g2D)->fillPolygon(xPoints, yPoints, nPoints);
}

void poi::hssf::usermodel::DummyGraphics2d::fillRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"fillRect(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->fillRect(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"fillRoundRect(int,int,int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->fillRoundRect(x, y, width, height, arcWidth, arcHeight);
}

void poi::hssf::usermodel::DummyGraphics2d::finalize()
{
    npc(log)->println(u"finalize():"_j);
    npc(g2D)->finalize();
    super::finalize();
}

java::awt::Shape* poi::hssf::usermodel::DummyGraphics2d::getClip()
{
    npc(log)->println(u"getClip():"_j);
    return npc(g2D)->getClip();
}

java::awt::Rectangle* poi::hssf::usermodel::DummyGraphics2d::getClipBounds()
{
    npc(log)->println(u"getClipBounds():"_j);
    return npc(g2D)->getClipBounds();
}

java::awt::Rectangle* poi::hssf::usermodel::DummyGraphics2d::getClipBounds(::java::awt::Rectangle* r)
{
    auto l = ::java::lang::StringBuilder().append(u"getClipBounds(Rectangle):"_j)->append(u"\n  r = "_j)
        ->append(static_cast< ::java::lang::Object* >(r))->toString();
    npc(log)->println(l);
    return npc(g2D)->getClipBounds(r);
}

java::awt::Color* poi::hssf::usermodel::DummyGraphics2d::getColor()
{
    npc(log)->println(u"getColor():"_j);
    return npc(g2D)->getColor();
}

java::awt::Font* poi::hssf::usermodel::DummyGraphics2d::getFont()
{
    npc(log)->println(u"getFont():"_j);
    return npc(g2D)->getFont();
}

java::awt::FontMetrics* poi::hssf::usermodel::DummyGraphics2d::getFontMetrics()
{
    npc(log)->println(u"getFontMetrics():"_j);
    return npc(g2D)->getFontMetrics();
}

java::awt::FontMetrics* poi::hssf::usermodel::DummyGraphics2d::getFontMetrics(::java::awt::Font* f)
{
    npc(log)->println(u"getFontMetrics():"_j);
    return npc(g2D)->getFontMetrics(f);
}

bool poi::hssf::usermodel::DummyGraphics2d::hitClip(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"hitClip(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    return npc(g2D)->hitClip(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::setClip(::java::awt::Shape* clip)
{
    auto l = ::java::lang::StringBuilder().append(u"setClip(Shape):"_j)->append(u"\n  clip = "_j)
        ->append(static_cast< ::java::lang::Object* >(clip))->toString();
    npc(log)->println(l);
    npc(g2D)->setClip(clip);
}

void poi::hssf::usermodel::DummyGraphics2d::setClip(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"setClip(int,int,int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)
        ->append(u"\n  width = "_j)
        ->append(width)
        ->append(u"\n  height = "_j)
        ->append(height)->toString();
    npc(log)->println(l);
    npc(g2D)->setClip(x, y, width, height);
}

void poi::hssf::usermodel::DummyGraphics2d::setColor(::java::awt::Color* c)
{
    auto l = ::java::lang::StringBuilder().append(u"setColor():"_j)->append(u"\n  c = "_j)
        ->append(static_cast< ::java::lang::Object* >(c))->toString();
    npc(log)->println(l);
    npc(g2D)->setColor(c);
}

void poi::hssf::usermodel::DummyGraphics2d::setFont(::java::awt::Font* font)
{
    auto l = ::java::lang::StringBuilder().append(u"setFont(Font):"_j)->append(u"\n  font = "_j)
        ->append(static_cast< ::java::lang::Object* >(font))->toString();
    npc(log)->println(l);
    npc(g2D)->setFont(font);
}

void poi::hssf::usermodel::DummyGraphics2d::setPaintMode()
{
    npc(log)->println(u"setPaintMode():"_j);
    npc(g2D)->setPaintMode();
}

void poi::hssf::usermodel::DummyGraphics2d::setXORMode(::java::awt::Color* c1)
{
    auto l = ::java::lang::StringBuilder().append(u"setXORMode(Color):"_j)->append(u"\n  c1 = "_j)
        ->append(static_cast< ::java::lang::Object* >(c1))->toString();
    npc(log)->println(l);
    npc(g2D)->setXORMode(c1);
}

java::lang::String* poi::hssf::usermodel::DummyGraphics2d::toString()
{
    npc(log)->println(u"toString():"_j);
    return npc(g2D)->toString();
}

void poi::hssf::usermodel::DummyGraphics2d::translate(int32_t x, int32_t y)
{
    auto l = ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"translate(int,int):"_j)->append(u"\n  x = "_j)->toString())->append(x)
        ->append(u"\n  y = "_j)
        ->append(y)->toString();
    npc(log)->println(l);
    npc(g2D)->translate(x, y);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::DummyGraphics2d::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.DummyGraphics2d", 45);
    return c;
}

java::lang::Class* poi::hssf::usermodel::DummyGraphics2d::getClass0()
{
    return class_();
}

