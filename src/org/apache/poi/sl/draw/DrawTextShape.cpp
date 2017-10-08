// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextShape.java
#include <org/apache/poi/sl/draw/DrawTextShape.hpp>

#include <java/awt/Graphics2D.hpp>
#include <java/awt/RenderingHints.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/awt/image/BufferedImage.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/AutoNumberingScheme.hpp>
#include <org/apache/poi/sl/usermodel/Insets2D.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/Shape.hpp>
#include <org/apache/poi/sl/usermodel/ShapeContainer.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph_BulletStyle.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/TextShape_TextDirection.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>
#include <org/apache/poi/sl/usermodel/VerticalAlignment.hpp>

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

poi::sl::draw::DrawTextShape::DrawTextShape(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawTextShape::DrawTextShape(::poi::sl::usermodel::TextShape* shape) 
    : DrawTextShape(*static_cast< ::default_init_tag* >(0))
{
    ctor(shape);
}

void poi::sl::draw::DrawTextShape::ctor(::poi::sl::usermodel::TextShape* shape)
{
    super::ctor(shape);
}

void poi::sl::draw::DrawTextShape::drawContent(::java::awt::Graphics2D* graphics)
{
    npc(DrawFactory::getInstance(graphics))->fixFonts(graphics);
    auto s = getShape();
    auto anchor = DrawShape::getAnchor(graphics, static_cast< ::poi::sl::usermodel::PlaceableShape* >(s));
    auto insets = npc(s)->getInsets();
    auto x = npc(anchor)->getX() + npc(insets)->left;
    auto y = npc(anchor)->getY();
    auto tx = npc(graphics)->getTransform();
    auto vertFlip = npc(s)->getFlipVertical();
    auto horzFlip = npc(s)->getFlipHorizontal();
    auto sc = npc(s)->getParent();
    while (dynamic_cast< ::poi::sl::usermodel::PlaceableShape* >(sc) != nullptr) {
        auto ps = java_cast< ::poi::sl::usermodel::PlaceableShape* >(sc);
        vertFlip ^= npc(ps)->getFlipVertical();
        horzFlip ^= npc(ps)->getFlipHorizontal();
        sc = npc(ps)->getParent();
    }
    if(horzFlip ^ vertFlip) {
        auto const ax = npc(anchor)->getX();
        auto const ay = npc(anchor)->getY();
        npc(graphics)->translate(ax + npc(anchor)->getWidth(), ay);
        npc(graphics)->scale(-int32_t(1), 1);
        npc(graphics)->translate(-ax, -ay);
    }
    auto textRot = npc(s)->getTextRotation();
    if(textRot != nullptr && (npc(textRot))->doubleValue() != 0) {
        auto const cx = npc(anchor)->getCenterX();
        auto const cy = npc(anchor)->getCenterY();
        npc(graphics)->translate(cx, cy);
        npc(graphics)->rotate(::java::lang::Math::toRadians((npc(textRot))->doubleValue()));
        npc(graphics)->translate(-cx, -cy);
    }
    double textHeight;
    {
        double delta;
        {
            auto v = npc(s)->getVerticalAlignment();
            if((v == ::poi::sl::usermodel::VerticalAlignment::TOP)) {
                y += npc(insets)->top;
                goto end_switch0;;
            }
            if((v == ::poi::sl::usermodel::VerticalAlignment::BOTTOM)) {
                textHeight = getTextHeight(graphics);
                y += npc(anchor)->getHeight() - textHeight - npc(insets)->bottom;
                goto end_switch0;;
            }
            if((v == ::poi::sl::usermodel::VerticalAlignment::MIDDLE)) {
                textHeight = getTextHeight(graphics);
                auto delta = npc(anchor)->getHeight() - textHeight - npc(insets)->top- npc(insets)->bottom;
                y += npc(insets)->top + delta / int32_t(2);
                goto end_switch0;;
            }
end_switch0:;
        }
    }

    auto textDir = npc(s)->getTextDirection();
    if(textDir == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL || textDir == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL_270) {
        double const deg = (textDir == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL) ? int32_t(90) : int32_t(270);
        auto const cx = npc(anchor)->getCenterX();
        auto const cy = npc(anchor)->getCenterY();
        npc(graphics)->translate(cx, cy);
        npc(graphics)->rotate(::java::lang::Math::toRadians(deg));
        npc(graphics)->translate(-cx, -cy);
        auto const w = npc(anchor)->getWidth();
        auto const h = npc(anchor)->getHeight();
        auto const dx = (w - h) / 2.0;
        npc(graphics)->translate(dx, -dx);
    }
    drawParagraphs(graphics, x, y);
    npc(graphics)->setTransform(tx);
}

double poi::sl::draw::DrawTextShape::drawParagraphs(::java::awt::Graphics2D* graphics, double x, double y)
{
    auto fact = DrawFactory::getInstance(graphics);
    auto y0 = y;
    auto paragraphs = npc(getShape())->iterator();
    auto isFirstLine = true;
    for (auto autoNbrIdx = int32_t(0); npc(paragraphs)->hasNext(); autoNbrIdx++) {
        auto p = java_cast< ::poi::sl::usermodel::TextParagraph* >(npc(paragraphs)->next());
        auto dp = npc(fact)->getDrawable(static_cast< ::poi::sl::usermodel::TextParagraph* >(p));
        auto bs = npc(p)->getBulletStyle();
        if(bs == nullptr || npc(bs)->getAutoNumberingScheme() == nullptr) {
            autoNbrIdx = -int32_t(1);
        } else {
            auto startAt = npc(bs)->getAutoNumberingStartAt();
            if(startAt == nullptr)
                startAt = ::java::lang::Integer::valueOf(int32_t(1));

            if((npc(startAt))->intValue() > autoNbrIdx)
                autoNbrIdx = (npc(startAt))->intValue();

        }
        npc(dp)->setAutoNumberingIdx(autoNbrIdx);
        npc(dp)->breakText(graphics);
        if(isFirstLine) {
            y += npc(dp)->getFirstLineLeading();
        } else {
            auto spaceBefore = npc(p)->getSpaceBefore();
            if(spaceBefore == nullptr)
                spaceBefore = ::java::lang::Double::valueOf(0.0);

            if((npc(spaceBefore))->doubleValue() > 0) {
                y += (npc(spaceBefore))->doubleValue() * 0.01 * npc(dp)->getFirstLineHeight();
            } else {
                y += -(npc(spaceBefore))->doubleValue();
            }
        }
        isFirstLine = false;
        npc(dp)->setPosition(x, y);
        npc(dp)->draw(graphics);
        y += npc(dp)->getY();
        if(npc(paragraphs)->hasNext()) {
            auto spaceAfter = npc(p)->getSpaceAfter();
            if(spaceAfter == nullptr)
                spaceAfter = ::java::lang::Double::valueOf(0.0);

            if((npc(spaceAfter))->doubleValue() > 0) {
                y += (npc(spaceAfter))->doubleValue() * 0.01 * npc(dp)->getLastLineHeight();
            } else {
                y += -(npc(spaceAfter))->doubleValue();
            }
        }
    }
    return y - y0;
}

double poi::sl::draw::DrawTextShape::getTextHeight()
{
    return getTextHeight(nullptr);
}

double poi::sl::draw::DrawTextShape::getTextHeight(::java::awt::Graphics2D* oldGraphics)
{
    auto img = new ::java::awt::image::BufferedImage(int32_t(1), int32_t(1), ::java::awt::image::BufferedImage::TYPE_INT_RGB);
    auto graphics = npc(img)->createGraphics();
    if(oldGraphics != nullptr) {
        npc(graphics)->addRenderingHints(npc(oldGraphics)->getRenderingHints());
        npc(graphics)->setTransform(npc(oldGraphics)->getTransform());
    }
    npc(DrawFactory::getInstance(graphics))->fixFonts(graphics);
    return drawParagraphs(graphics, 0, 0);
}

poi::sl::usermodel::TextShape* poi::sl::draw::DrawTextShape::getShape()
{
    return java_cast< ::poi::sl::usermodel::TextShape* >(shape);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawTextShape::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTextShape", 36);
    return c;
}

java::lang::Class* poi::sl::draw::DrawTextShape::getClass0()
{
    return class_();
}

