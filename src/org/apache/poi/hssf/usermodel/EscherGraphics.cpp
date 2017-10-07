// Generated from /POI/java/org/apache/poi/hssf/usermodel/EscherGraphics.java
#include <org/apache/poi/hssf/usermodel/EscherGraphics.hpp>

#include <java/awt/Color.hpp>
#include <java/awt/Font.hpp>
#include <java/awt/FontMetrics.hpp>
#include <java/awt/Graphics.hpp>
#include <java/awt/Image.hpp>
#include <java/awt/Rectangle.hpp>
#include <java/awt/Shape.hpp>
#include <java/awt/Toolkit.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/usermodel/FontDetails.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFChildAnchor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFFont.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPalette.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFPolygon.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFRichTextString.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFShapeGroup.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSimpleShape.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFTextbox.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFWorkbook.hpp>
#include <org/apache/poi/hssf/usermodel/StaticFontMetrics.hpp>
#include <org/apache/poi/hssf/util/HSSFColor.hpp>
#include <org/apache/poi/ss/usermodel/Font.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::EscherGraphics::EscherGraphics(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::EscherGraphics::EscherGraphics(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* forecolor, float verticalPointsPerPixel) 
    : EscherGraphics(*static_cast< ::default_init_tag* >(0))
{
    ctor(escherGroup,workbook,forecolor,verticalPointsPerPixel);
}

org::apache::poi::hssf::usermodel::EscherGraphics::EscherGraphics(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* foreground, ::java::awt::Font* font, float verticalPointsPerPixel) 
    : EscherGraphics(*static_cast< ::default_init_tag* >(0))
{
    ctor(escherGroup,workbook,foreground,font,verticalPointsPerPixel);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::init()
{
    verticalPointsPerPixel = 1.0f;
    background = ::java::awt::Color::white();
}

org::apache::poi::util::POILogger*& org::apache::poi::hssf::usermodel::EscherGraphics::logger()
{
    clinit();
    return logger_;
}
org::apache::poi::util::POILogger* org::apache::poi::hssf::usermodel::EscherGraphics::logger_;

void org::apache::poi::hssf::usermodel::EscherGraphics::ctor(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* forecolor, float verticalPointsPerPixel)
{
    super::ctor();
    init();
    this->escherGroup = escherGroup;
    this->workbook = workbook;
    this->verticalPointsPerPixel = verticalPointsPerPixel;
    this->verticalPixelsPerPoint = int32_t(1) / verticalPointsPerPixel;
    this->font = new ::java::awt::Font(u"Arial"_j, int32_t(0), int32_t(10));
    this->foreground = forecolor;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::ctor(HSSFShapeGroup* escherGroup, HSSFWorkbook* workbook, ::java::awt::Color* foreground, ::java::awt::Font* font, float verticalPointsPerPixel)
{
    super::ctor();
    init();
    this->escherGroup = escherGroup;
    this->workbook = workbook;
    this->foreground = foreground;
    this->font = font;
    this->verticalPointsPerPixel = verticalPointsPerPixel;
    this->verticalPixelsPerPoint = int32_t(1) / verticalPointsPerPixel;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::clearRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto color = foreground;
    setColor(background);
    fillRect(x, y, width, height);
    setColor(color);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::clipRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"clipRect not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::copyArea(int32_t x, int32_t y, int32_t width, int32_t height, int32_t dx, int32_t dy)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"copyArea not supported"_j)}));

}

java::awt::Graphics* org::apache::poi::hssf::usermodel::EscherGraphics::create()
{
    auto g = new EscherGraphics(escherGroup, workbook, foreground, font, verticalPointsPerPixel);
    return g;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::dispose()
{
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawArc not supported"_j)}));

}

bool org::apache::poi::hssf::usermodel::EscherGraphics::drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::Color* bgcolor, ::java::awt::image::ImageObserver* observer)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawImage not supported"_j)}));

    return true;
}

bool org::apache::poi::hssf::usermodel::EscherGraphics::drawImage(::java::awt::Image* img, int32_t dx1, int32_t dy1, int32_t dx2, int32_t dy2, int32_t sx1, int32_t sy1, int32_t sx2, int32_t sy2, ::java::awt::image::ImageObserver* observer)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawImage not supported"_j)}));

    return true;
}

bool org::apache::poi::hssf::usermodel::EscherGraphics::drawImage(::java::awt::Image* image, int32_t i, int32_t j, int32_t k, int32_t l, ::java::awt::Color* color, ::java::awt::image::ImageObserver* imageobserver)
{
    return drawImage(image, i, j, i + k, j + l, int32_t(0), int32_t(0), npc(image)->getWidth(imageobserver), npc(image)->getHeight(imageobserver), color, imageobserver);
}

bool org::apache::poi::hssf::usermodel::EscherGraphics::drawImage(::java::awt::Image* image, int32_t i, int32_t j, int32_t k, int32_t l, ::java::awt::image::ImageObserver* imageobserver)
{
    return drawImage(image, i, j, i + k, j + l, int32_t(0), int32_t(0), npc(image)->getWidth(imageobserver), npc(image)->getHeight(imageobserver), imageobserver);
}

bool org::apache::poi::hssf::usermodel::EscherGraphics::drawImage(::java::awt::Image* image, int32_t i, int32_t j, ::java::awt::Color* color, ::java::awt::image::ImageObserver* imageobserver)
{
    return drawImage(image, i, j, npc(image)->getWidth(imageobserver), npc(image)->getHeight(imageobserver), color, imageobserver);
}

bool org::apache::poi::hssf::usermodel::EscherGraphics::drawImage(::java::awt::Image* image, int32_t i, int32_t j, ::java::awt::image::ImageObserver* imageobserver)
{
    return drawImage(image, i, j, npc(image)->getWidth(imageobserver), npc(image)->getHeight(imageobserver), imageobserver);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2)
{
    drawLine(x1, y1, x2, y2, 0);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawLine(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t width)
{
    auto shape = npc(escherGroup)->createShape(new HSSFChildAnchor(x1, y1, x2, y2));
    npc(shape)->setShapeType(HSSFSimpleShape::OBJECT_TYPE_LINE);
    npc(shape)->setLineWidth(width);
    npc(shape)->setLineStyleColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto shape = npc(escherGroup)->createShape(new HSSFChildAnchor(x, y, x + width, y + height));
    npc(shape)->setShapeType(HSSFSimpleShape::OBJECT_TYPE_OVAL);
    npc(shape)->setLineWidth(0);
    npc(shape)->setLineStyleColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
    npc(shape)->setNoFill(true);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto right = findBiggest(xPoints);
    auto bottom = findBiggest(yPoints);
    auto left = findSmallest(xPoints);
    auto top = findSmallest(yPoints);
    auto shape = npc(escherGroup)->createPolygon(new HSSFChildAnchor(left, top, right, bottom));
    npc(shape)->setPolygonDrawArea(right - left, bottom - top);
    npc(shape)->setPoints(addToAll(xPoints, -left), addToAll(yPoints, -top));
    npc(shape)->setLineStyleColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
    npc(shape)->setLineWidth(0);
    npc(shape)->setNoFill(true);
}

int32_tArray* org::apache::poi::hssf::usermodel::EscherGraphics::addToAll(::int32_tArray* values, int32_t amount)
{
    auto result = new ::int32_tArray(npc(values)->length);
    for (auto i = int32_t(0); i < npc(values)->length; i++) 
                (*result)[i] = (*values)[i] + amount;

    return result;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawPolyline(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawPolyline not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawRect not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawRoundRect not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawString(::java::lang::String* str, int32_t x, int32_t y)
{
    if(str == nullptr || npc(str)->equals(static_cast< ::java::lang::Object* >(u""_j)))
        return;

    auto excelFont = font;
    if(npc(npc(font)->getName())->equals(static_cast< ::java::lang::Object* >(u"SansSerif"_j))) {
        excelFont = new ::java::awt::Font(u"Arial"_j, npc(font)->getStyle(), static_cast< int32_t >((npc(font)->getSize() / verticalPixelsPerPoint)));
    } else {
        excelFont = new ::java::awt::Font(npc(font)->getName(), npc(font)->getStyle(), static_cast< int32_t >((npc(font)->getSize() / verticalPixelsPerPoint)));
    }
    auto d = StaticFontMetrics::getFontDetails(excelFont);
    auto width = npc(d)->getStringWidth(str) * int32_t(8) + int32_t(12);
    auto height = static_cast< int32_t >(((npc(font)->getSize() / verticalPixelsPerPoint) + int32_t(6))) * int32_t(2);
    y -= (npc(font)->getSize() / verticalPixelsPerPoint) + int32_t(2) * verticalPixelsPerPoint;
    auto textbox = npc(escherGroup)->createTextbox(new HSSFChildAnchor(x, y, x + width, y + height));
    npc(textbox)->setNoFill(true);
    npc(textbox)->setLineStyle(HSSFShape::LINESTYLE_NONE);
    auto s = new HSSFRichTextString(str);
    auto hssfFont = matchFont(excelFont);
    npc(s)->applyFont(static_cast< ::org::apache::poi::ss::usermodel::Font* >(hssfFont));
    npc(textbox)->setString(s);
}

org::apache::poi::hssf::usermodel::HSSFFont* org::apache::poi::hssf::usermodel::EscherGraphics::matchFont(::java::awt::Font* matchFont)
{
    auto hssfColor = npc(npc(workbook)->getCustomPalette())->findColor(static_cast< int8_t >(npc(foreground)->getRed()), static_cast< int8_t >(npc(foreground)->getGreen()), static_cast< int8_t >(npc(foreground)->getBlue()));
    if(hssfColor == nullptr)
        hssfColor = npc(npc(workbook)->getCustomPalette())->findSimilarColor(static_cast< int8_t >(npc(foreground)->getRed()), static_cast< int8_t >(npc(foreground)->getGreen()), static_cast< int8_t >(npc(foreground)->getBlue()));

    auto bold = (npc(matchFont)->getStyle() & ::java::awt::Font::BOLD) != 0;
    auto italic = (npc(matchFont)->getStyle() & ::java::awt::Font::ITALIC) != 0;
    auto hssfFont = npc(workbook)->findFont(bold, npc(hssfColor)->getIndex(), static_cast< int16_t >((npc(matchFont)->getSize() * int32_t(20))), npc(matchFont)->getName(), italic, false, static_cast< int16_t >(int32_t(0)), static_cast< int8_t >(int32_t(0)));
    if(hssfFont == nullptr) {
        hssfFont = npc(workbook)->createFont();
        npc(hssfFont)->setBold(bold);
        npc(hssfFont)->setColor(npc(hssfColor)->getIndex());
        npc(hssfFont)->setFontHeight(static_cast< int16_t >((npc(matchFont)->getSize() * int32_t(20))));
        npc(hssfFont)->setFontName(npc(matchFont)->getName());
        npc(hssfFont)->setItalic(italic);
        npc(hssfFont)->setStrikeout(false);
        npc(hssfFont)->setTypeOffset(static_cast< int16_t >(int32_t(0)));
        npc(hssfFont)->setUnderline(static_cast< int8_t >(int32_t(0)));
    }
    return hssfFont;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawString(::java::text::AttributedCharacterIterator* iterator, int32_t x, int32_t y)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"drawString not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::fillArc(int32_t x, int32_t y, int32_t width, int32_t height, int32_t startAngle, int32_t arcAngle)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"fillArc not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::fillOval(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto shape = npc(escherGroup)->createShape(new HSSFChildAnchor(x, y, x + width, y + height));
    npc(shape)->setShapeType(HSSFSimpleShape::OBJECT_TYPE_OVAL);
    npc(shape)->setLineStyle(HSSFShape::LINESTYLE_NONE);
    npc(shape)->setFillColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
    npc(shape)->setLineStyleColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
    npc(shape)->setNoFill(false);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::fillPolygon(::int32_tArray* xPoints, ::int32_tArray* yPoints, int32_t nPoints)
{
    auto right = findBiggest(xPoints);
    auto bottom = findBiggest(yPoints);
    auto left = findSmallest(xPoints);
    auto top = findSmallest(yPoints);
    auto shape = npc(escherGroup)->createPolygon(new HSSFChildAnchor(left, top, right, bottom));
    npc(shape)->setPolygonDrawArea(right - left, bottom - top);
    npc(shape)->setPoints(addToAll(xPoints, -left), addToAll(yPoints, -top));
    npc(shape)->setLineStyleColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
    npc(shape)->setFillColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
}

int32_t org::apache::poi::hssf::usermodel::EscherGraphics::findBiggest(::int32_tArray* values)
{
    auto result = ::java::lang::Integer::MIN_VALUE;
    for (auto i = int32_t(0); i < npc(values)->length; i++) {
        if((*values)[i] > result)
            result = (*values)[i];

    }
    return result;
}

int32_t org::apache::poi::hssf::usermodel::EscherGraphics::findSmallest(::int32_tArray* values)
{
    auto result = ::java::lang::Integer::MAX_VALUE;
    for (auto i = int32_t(0); i < npc(values)->length; i++) {
        if((*values)[i] < result)
            result = (*values)[i];

    }
    return result;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::fillRect(int32_t x, int32_t y, int32_t width, int32_t height)
{
    auto shape = npc(escherGroup)->createShape(new HSSFChildAnchor(x, y, x + width, y + height));
    npc(shape)->setShapeType(HSSFSimpleShape::OBJECT_TYPE_RECTANGLE);
    npc(shape)->setLineStyle(HSSFShape::LINESTYLE_NONE);
    npc(shape)->setFillColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
    npc(shape)->setLineStyleColor(npc(foreground)->getRed(), npc(foreground)->getGreen(), npc(foreground)->getBlue());
}

void org::apache::poi::hssf::usermodel::EscherGraphics::fillRoundRect(int32_t x, int32_t y, int32_t width, int32_t height, int32_t arcWidth, int32_t arcHeight)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"fillRoundRect not supported"_j)}));

}

java::awt::Shape* org::apache::poi::hssf::usermodel::EscherGraphics::getClip()
{
    return getClipBounds();
}

java::awt::Rectangle* org::apache::poi::hssf::usermodel::EscherGraphics::getClipBounds()
{
    return nullptr;
}

java::awt::Color* org::apache::poi::hssf::usermodel::EscherGraphics::getColor()
{
    return foreground;
}

java::awt::Font* org::apache::poi::hssf::usermodel::EscherGraphics::getFont()
{
    return font;
}

java::awt::FontMetrics* org::apache::poi::hssf::usermodel::EscherGraphics::getFontMetrics(::java::awt::Font* f)
{
    return npc(::java::awt::Toolkit::getDefaultToolkit())->getFontMetrics(f);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::setClip(int32_t x, int32_t y, int32_t width, int32_t height)
{
    setClip(static_cast< ::java::awt::Shape* >(new ::java::awt::Rectangle(x, y, width, height)));
}

void org::apache::poi::hssf::usermodel::EscherGraphics::setClip(::java::awt::Shape* shape)
{
}

void org::apache::poi::hssf::usermodel::EscherGraphics::setColor(::java::awt::Color* color)
{
    foreground = color;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::setFont(::java::awt::Font* f)
{
    font = f;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::setPaintMode()
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"setPaintMode not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::setXORMode(::java::awt::Color* color)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"setXORMode not supported"_j)}));

}

void org::apache::poi::hssf::usermodel::EscherGraphics::translate(int32_t x, int32_t y)
{
    if(npc(logger_)->check(::org::apache::poi::util::POILogger::WARN))
        npc(logger_)->log(::org::apache::poi::util::POILogger::WARN, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"translate not supported"_j)}));

}

java::awt::Color* org::apache::poi::hssf::usermodel::EscherGraphics::getBackground()
{
    return background;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::setBackground(::java::awt::Color* background)
{
    this->background = background;
}

org::apache::poi::hssf::usermodel::HSSFShapeGroup* org::apache::poi::hssf::usermodel::EscherGraphics::getEscherGraphics()
{
    return escherGroup;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::EscherGraphics::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.EscherGraphics", 44);
    return c;
}

void org::apache::poi::hssf::usermodel::EscherGraphics::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(EscherGraphics::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::awt::Graphics* org::apache::poi::hssf::usermodel::EscherGraphics::create(int32_t x, int32_t y, int32_t width, int32_t height)
{
    return super::create(x, y, width, height);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::drawPolygon(::java::awt::Polygon* p)
{
    super::drawPolygon(p);
}

void org::apache::poi::hssf::usermodel::EscherGraphics::fillPolygon(::java::awt::Polygon* p)
{
    super::fillPolygon(p);
}

java::awt::Rectangle* org::apache::poi::hssf::usermodel::EscherGraphics::getClipBounds(::java::awt::Rectangle* r)
{
    return super::getClipBounds(r);
}

java::awt::FontMetrics* org::apache::poi::hssf::usermodel::EscherGraphics::getFontMetrics()
{
    return super::getFontMetrics();
}

java::lang::Class* org::apache::poi::hssf::usermodel::EscherGraphics::getClass0()
{
    return class_();
}

