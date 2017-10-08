// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java
#include <org/apache/poi/sl/draw/DrawTextParagraph.hpp>

#include <java/awt/Dimension.hpp>
#include <java/awt/Font.hpp>
#include <java/awt/Graphics2D.hpp>
#include <java/awt/Paint.hpp>
#include <java/awt/font/FontRenderContext.hpp>
#include <java/awt/font/LineBreakMeasurer.hpp>
#include <java/awt/font/TextAttribute.hpp>
#include <java/awt/font/TextLayout.hpp>
#include <java/awt/geom/AffineTransform.hpp>
#include <java/awt/geom/Rectangle2D.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Float.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/AttributedString.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontGroup_FontGroupRange.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontGroup.hpp>
#include <org/apache/poi/common/usermodel/fonts/FontInfo.hpp>
#include <org/apache/poi/sl/draw/DrawFactory.hpp>
#include <org/apache/poi/sl/draw/DrawFontInfo.hpp>
#include <org/apache/poi/sl/draw/DrawFontManager.hpp>
#include <org/apache/poi/sl/draw/DrawPaint.hpp>
#include <org/apache/poi/sl/draw/DrawShape.hpp>
#include <org/apache/poi/sl/draw/DrawTextFragment.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph_getParagraphShape_1.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph_AttributedStringData.hpp>
#include <org/apache/poi/sl/draw/DrawTextParagraph_XlinkAttribute.hpp>
#include <org/apache/poi/sl/draw/Drawable_DrawableHint.hpp>
#include <org/apache/poi/sl/draw/Drawable.hpp>
#include <org/apache/poi/sl/usermodel/AutoNumberingScheme.hpp>
#include <org/apache/poi/sl/usermodel/Hyperlink.hpp>
#include <org/apache/poi/sl/usermodel/Insets2D.hpp>
#include <org/apache/poi/sl/usermodel/PaintStyle.hpp>
#include <org/apache/poi/sl/usermodel/PlaceableShape.hpp>
#include <org/apache/poi/sl/usermodel/Sheet.hpp>
#include <org/apache/poi/sl/usermodel/Slide.hpp>
#include <org/apache/poi/sl/usermodel/SlideShow.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph_BulletStyle.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph_TextAlign.hpp>
#include <org/apache/poi/sl/usermodel/TextParagraph.hpp>
#include <org/apache/poi/sl/usermodel/TextRun_FieldType.hpp>
#include <org/apache/poi/sl/usermodel/TextRun_TextCap.hpp>
#include <org/apache/poi/sl/usermodel/TextRun.hpp>
#include <org/apache/poi/sl/usermodel/TextShape_TextDirection.hpp>
#include <org/apache/poi/sl/usermodel/TextShape.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/Units.hpp>
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

poi::sl::draw::DrawTextParagraph::DrawTextParagraph(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawTextParagraph::DrawTextParagraph(::poi::sl::usermodel::TextParagraph* paragraph) 
    : DrawTextParagraph(*static_cast< ::default_init_tag* >(0))
{
    ctor(paragraph);
}

void poi::sl::draw::DrawTextParagraph::init()
{
    lines = new ::java::util::ArrayList();
}

poi::util::POILogger*& poi::sl::draw::DrawTextParagraph::LOG()
{
    clinit();
    return LOG_;
}
poi::util::POILogger* poi::sl::draw::DrawTextParagraph::LOG_;

poi::sl::draw::DrawTextParagraph_XlinkAttribute*& poi::sl::draw::DrawTextParagraph::HYPERLINK_HREF()
{
    clinit();
    return HYPERLINK_HREF_;
}
poi::sl::draw::DrawTextParagraph_XlinkAttribute* poi::sl::draw::DrawTextParagraph::HYPERLINK_HREF_;

poi::sl::draw::DrawTextParagraph_XlinkAttribute*& poi::sl::draw::DrawTextParagraph::HYPERLINK_LABEL()
{
    clinit();
    return HYPERLINK_LABEL_;
}
poi::sl::draw::DrawTextParagraph_XlinkAttribute* poi::sl::draw::DrawTextParagraph::HYPERLINK_LABEL_;

void poi::sl::draw::DrawTextParagraph::ctor(::poi::sl::usermodel::TextParagraph* paragraph)
{
    super::ctor();
    init();
    this->paragraph = paragraph;
}

void poi::sl::draw::DrawTextParagraph::setPosition(double x, double y)
{
    this->x = x;
    this->y = y;
}

double poi::sl::draw::DrawTextParagraph::getY()
{
    return y;
}

void poi::sl::draw::DrawTextParagraph::setAutoNumberingIdx(int32_t index)
{
    autoNbrIdx = index;
}

void poi::sl::draw::DrawTextParagraph::draw(::java::awt::Graphics2D* graphics)
{
    if(npc(lines)->isEmpty()) {
        return;
    }
    auto penY = y;
    auto firstLine = true;
    auto indentLevel = npc(paragraph)->getIndentLevel();
    auto leftMargin = npc(paragraph)->getLeftMargin();
    if(leftMargin == nullptr) {
        leftMargin = ::java::lang::Double::valueOf(::poi::util::Units::toPoints(int64_t(347663LL) * indentLevel));
    }
    auto indent = npc(paragraph)->getIndent();
    if(indent == nullptr) {
        indent = ::java::lang::Double::valueOf(::poi::util::Units::toPoints(int64_t(347663LL) * indentLevel));
    }
    if(isHSLF()) {
        //TODO:fix this
        //(npc(indent))->doubleValue() -= (npc(leftMargin))->doubleValue();
    }
    auto spacing = npc(paragraph)->getLineSpacing();
    if(spacing == nullptr) {
        spacing = ::java::lang::Double::valueOf(100.0);
    }
    for (auto _i = npc(lines)->iterator(); _i->hasNext(); ) {
        DrawTextFragment* line = java_cast< DrawTextFragment* >(_i->next());
        {
            double penX;
            if(firstLine) {
                if(!isEmptyParagraph()) {
                    bullet = getBullet(graphics, npc(npc(line)->getAttributedString())->getIterator());
                }
                if(bullet != nullptr) {
                    npc(bullet)->setPosition(x + (npc(leftMargin))->doubleValue() + (npc(indent))->doubleValue(), penY);
                    npc(bullet)->draw(graphics);
                    double bulletWidth = npc(npc(bullet)->getLayout())->getAdvance() + int32_t(1);
                    penX = x + ::java::lang::Math::max((npc(leftMargin))->doubleValue(), (npc(leftMargin))->doubleValue() + (npc(indent))->doubleValue() + bulletWidth);
                } else {
                    penX = x + (npc(leftMargin))->doubleValue();
                }
            } else {
                penX = x + (npc(leftMargin))->doubleValue();
            }
            auto anchor = DrawShape::getAnchor(graphics, static_cast< ::poi::sl::usermodel::PlaceableShape* >(npc(paragraph)->getParentShape()));
            auto insets = npc(npc(paragraph)->getParentShape())->getInsets();
            auto leftInset = npc(insets)->left;
            auto rightInset = npc(insets)->right;
            auto ta = npc(paragraph)->getTextAlign();
            if(ta == nullptr) {
                ta = ::poi::sl::usermodel::TextParagraph_TextAlign::LEFT;
            }
            {
                auto v = ta;
                if((v == ::poi::sl::usermodel::TextParagraph_TextAlign::CENTER)) {
                    penX += (npc(anchor)->getWidth() - npc(line)->getWidth() - leftInset- rightInset- (npc(leftMargin))->doubleValue()) / int32_t(2);
                    goto end_switch0;;
                }
                if((v == ::poi::sl::usermodel::TextParagraph_TextAlign::RIGHT)) {
                    penX += (npc(anchor)->getWidth() - npc(line)->getWidth() - leftInset- rightInset);
                    goto end_switch0;;
                }
                if((((v != ::poi::sl::usermodel::TextParagraph_TextAlign::CENTER) && (v != ::poi::sl::usermodel::TextParagraph_TextAlign::RIGHT)))) {
                    goto end_switch0;;
                }
end_switch0:;
            }

            npc(line)->setPosition(penX, penY);
            npc(line)->draw(graphics);
            if((npc(spacing))->doubleValue() > 0) {
                penY += (npc(spacing))->doubleValue() * 0.01 * npc(line)->getHeight();
            } else {
                penY += -(npc(spacing))->doubleValue();
            }
            firstLine = false;
        }
    }
    y = penY - y;
}

float poi::sl::draw::DrawTextParagraph::getFirstLineLeading()
{
    return (npc(lines)->isEmpty()) ? static_cast< float >(int32_t(0)) : npc(java_cast< DrawTextFragment* >(npc(lines)->get(0)))->getLeading();
}

float poi::sl::draw::DrawTextParagraph::getFirstLineHeight()
{
    return (npc(lines)->isEmpty()) ? static_cast< float >(int32_t(0)) : npc(java_cast< DrawTextFragment* >(npc(lines)->get(0)))->getHeight();
}

float poi::sl::draw::DrawTextParagraph::getLastLineHeight()
{
    return (npc(lines)->isEmpty()) ? static_cast< float >(int32_t(0)) : npc(java_cast< DrawTextFragment* >(npc(lines)->get(npc(lines)->size() - int32_t(1))))->getHeight();
}

bool poi::sl::draw::DrawTextParagraph::isEmptyParagraph()
{
    return (npc(lines)->isEmpty() || npc(npc(rawText)->trim())->isEmpty());
}

void poi::sl::draw::DrawTextParagraph::applyTransform(::java::awt::Graphics2D* graphics)
{
}

void poi::sl::draw::DrawTextParagraph::drawContent(::java::awt::Graphics2D* graphics)
{
}

void poi::sl::draw::DrawTextParagraph::breakText(::java::awt::Graphics2D* graphics)
{
    npc(lines)->clear();
    auto fact = DrawFactory::getInstance(graphics);
    npc(fact)->fixFonts(graphics);
    auto text = new ::java::lang::StringBuilder();
    auto at = getAttributedString(graphics, text);
    auto emptyParagraph = (npc(u""_j)->equals(static_cast< ::java::lang::Object* >(npc(npc(text)->toString())->trim())));
    auto it = npc(at)->getIterator();
    auto measurer = new ::java::awt::font::LineBreakMeasurer(it, npc(graphics)->getFontRenderContext());
    for (; ; ) {
        auto startIndex = npc(measurer)->getPosition();
        auto wrappingWidth = getWrappingWidth(npc(lines)->isEmpty(), graphics) + int32_t(1);
        if(wrappingWidth < 0) {
            wrappingWidth = 1;
        }
        auto nextBreak = npc(text)->indexOf(u"\n"_j, startIndex + int32_t(1));
        if(nextBreak == -int32_t(1)) {
            nextBreak = npc(it)->getEndIndex();
        }
        auto layout = npc(measurer)->nextLayout(static_cast< float >(wrappingWidth), nextBreak, true);
        if(layout == nullptr) {
            layout = npc(measurer)->nextLayout(static_cast< float >(wrappingWidth), nextBreak, false);
        }
        if(layout == nullptr) {
            break;
        }
        auto endIndex = npc(measurer)->getPosition();
        if(endIndex < npc(it)->getEndIndex() && npc(text)->charAt(endIndex) == u'\u000a') {
            npc(measurer)->setPosition(endIndex + int32_t(1));
        }
        auto hAlign = npc(paragraph)->getTextAlign();
        if(hAlign == ::poi::sl::usermodel::TextParagraph_TextAlign::JUSTIFY || hAlign == ::poi::sl::usermodel::TextParagraph_TextAlign::JUSTIFY_LOW) {
            layout = npc(layout)->getJustifiedLayout(static_cast< float >(wrappingWidth));
        }
        auto str = (emptyParagraph) ? static_cast< ::java::text::AttributedString* >(nullptr) : new ::java::text::AttributedString(it, startIndex, endIndex);
        auto line = npc(fact)->getTextFragment(layout, str);
        npc(lines)->add(static_cast< ::java::lang::Object* >(line));
        maxLineHeight = ::java::lang::Math::max(maxLineHeight, static_cast< double >(npc(line)->getHeight()));
        if(endIndex == npc(it)->getEndIndex()) {
            break;
        }
    }
    rawText = npc(text)->toString();
}

poi::sl::draw::DrawTextFragment* poi::sl::draw::DrawTextParagraph::getBullet(::java::awt::Graphics2D* graphics, ::java::text::AttributedCharacterIterator* firstLineAttr)
{
    auto bulletStyle = npc(paragraph)->getBulletStyle();
    if(bulletStyle == nullptr) {
        return nullptr;
    }
    ::java::lang::String* buCharacter;
    auto ans = npc(bulletStyle)->getAutoNumberingScheme();
    if(ans != nullptr) {
        buCharacter = npc(ans)->format(autoNbrIdx);
    } else {
        buCharacter = npc(bulletStyle)->getBulletCharacter();
    }
    if(buCharacter == nullptr) {
        return nullptr;
    }
    auto ps = getParagraphShape();
    auto fgPaintStyle = npc(bulletStyle)->getBulletFontColor();
    ::java::awt::Paint* fgPaint;
    if(fgPaintStyle == nullptr) {
        fgPaint = java_cast< ::java::awt::Paint* >(npc(firstLineAttr)->getAttribute(::java::awt::font::TextAttribute::FOREGROUND()));
    } else {
        fgPaint = (new DrawPaint(ps))->getPaint(graphics, fgPaintStyle);
    }
    float fontSize = (npc(java_cast< ::java::lang::Float* >(npc(firstLineAttr)->getAttribute(::java::awt::font::TextAttribute::SIZE()))))->floatValue();
    auto buSz = npc(bulletStyle)->getBulletFontSize();
    if(buSz == nullptr) {
        buSz = ::java::lang::Double::valueOf(100.0);
    }
    if((npc(buSz))->doubleValue() > 0) {
        fontSize *= (npc(buSz))->doubleValue() * 0.01;
    } else {
        fontSize = static_cast< float >(-(npc(buSz))->doubleValue());
    }
    auto buFontStr = npc(bulletStyle)->getBulletFont();
    if(buFontStr == nullptr) {
        buFontStr = npc(paragraph)->getDefaultFontFamily();
    }
    /* assert((buFontStr != nullptr)) */ ;
    ::poi::common::usermodel::fonts::FontInfo* buFont = new DrawFontInfo(buFontStr);
    auto dfm = npc(DrawFactory::getInstance(graphics))->getFontManager(graphics);
    buFont = npc(dfm)->getMappedFont(graphics, buFont);
    auto str = new ::java::text::AttributedString(npc(dfm)->mapFontCharset(graphics, buFont, buCharacter));
    npc(str)->addAttribute(::java::awt::font::TextAttribute::FOREGROUND(), fgPaint);
    npc(str)->addAttribute(::java::awt::font::TextAttribute::FAMILY(), npc(buFont)->getTypeface());
    npc(str)->addAttribute(::java::awt::font::TextAttribute::SIZE(), ::java::lang::Float::valueOf(fontSize));
    auto layout = new ::java::awt::font::TextLayout(npc(str)->getIterator(), npc(graphics)->getFontRenderContext());
    auto fact = DrawFactory::getInstance(graphics);
    return npc(fact)->getTextFragment(layout, str);
}

java::lang::String* poi::sl::draw::DrawTextParagraph::getRenderableText(::java::awt::Graphics2D* graphics, ::poi::sl::usermodel::TextRun* tr)
{
    if(npc(tr)->getFieldType() == ::poi::sl::usermodel::TextRun_FieldType::SLIDE_NUMBER) {
        auto slide = java_cast< ::poi::sl::usermodel::Slide* >(npc(graphics)->getRenderingHint(Drawable::CURRENT_SLIDE()));
        return (slide == nullptr) ? u""_j : ::java::lang::Integer::toString(npc(slide)->getSlideNumber());
    }
    auto buf = new ::java::lang::StringBuilder();
    auto cap = npc(tr)->getTextCap();
    ::java::lang::String* tabs = nullptr;
    for(auto c : *npc(npc(npc(tr)->getRawText())->toCharArray_())) {
        switch (c) {
        case u'\u0009':
            if(tabs == nullptr) {
                tabs = tab2space(tr);
            }
            npc(buf)->append(tabs);
            break;
        case u'\u000b':
            npc(buf)->append(u'\u000a');
            break;
        default:
            {
                auto v = cap;
                if((v == ::poi::sl::usermodel::TextRun_TextCap::ALL)) {
                    c = ::java::lang::Character::toUpperCase(c);
                    goto end_switch1;;
                }
                if((v == ::poi::sl::usermodel::TextRun_TextCap::SMALL)) {
                    c = ::java::lang::Character::toLowerCase(c);
                    goto end_switch1;;
                }
                if((v == ::poi::sl::usermodel::TextRun_TextCap::NONE)) {
                    goto end_switch1;;
                }
end_switch1:;
            }

            npc(buf)->append(c);
            break;
        }

    }
    return npc(buf)->toString();
}

java::lang::String* poi::sl::draw::DrawTextParagraph::tab2space(::poi::sl::usermodel::TextRun* tr)
{
    auto string = new ::java::text::AttributedString(u" "_j);
    auto fontFamily = npc(tr)->getFontFamily();
    if(fontFamily == nullptr) {
        fontFamily = u"Lucida Sans"_j;
    }
    npc(string)->addAttribute(::java::awt::font::TextAttribute::FAMILY(), fontFamily);
    auto fs = npc(tr)->getFontSize();
    if(fs == nullptr) {
        fs = ::java::lang::Double::valueOf(12.0);
    }
    npc(string)->addAttribute(::java::awt::font::TextAttribute::SIZE(), ::java::lang::Float::valueOf(npc(fs)->floatValue()));
    auto l = new ::java::awt::font::TextLayout(npc(string)->getIterator(), new ::java::awt::font::FontRenderContext(static_cast< ::java::awt::geom::AffineTransform* >(nullptr), true, true));
    double wspace = npc(l)->getAdvance();
    auto tabSz = npc(paragraph)->getDefaultTabSize();
    if(tabSz == nullptr) {
        tabSz = ::java::lang::Double::valueOf(wspace * int32_t(4));
    }
    auto numSpaces = static_cast< int32_t >(::java::lang::Math::ceil((npc(tabSz))->doubleValue() / wspace));
    auto buf = new ::java::lang::StringBuilder();
    for (auto i = int32_t(0); i < numSpaces; i++) {
        npc(buf)->append(u' ');
    }
    return npc(buf)->toString();
}

double poi::sl::draw::DrawTextParagraph::getWrappingWidth(bool firstLine, ::java::awt::Graphics2D* graphics)
{
    auto ts = npc(paragraph)->getParentShape();
    auto insets = npc(ts)->getInsets();
    auto leftInset = npc(insets)->left;
    auto rightInset = npc(insets)->right;
    auto indentLevel = npc(paragraph)->getIndentLevel();
    if(indentLevel == -int32_t(1)) {
        indentLevel = 0;
    }
    auto leftMargin = npc(paragraph)->getLeftMargin();
    if(leftMargin == nullptr) {
        leftMargin = ::java::lang::Double::valueOf(::poi::util::Units::toPoints(int64_t(347663LL) * (indentLevel + int32_t(1))));
    }
    auto indent = npc(paragraph)->getIndent();
    if(indent == nullptr) {
        indent = ::java::lang::Double::valueOf(::poi::util::Units::toPoints(int64_t(347663LL) * indentLevel));
    }
    auto rightMargin = npc(paragraph)->getRightMargin();
    if(rightMargin == nullptr) {
        rightMargin = ::java::lang::Double::valueOf(0.0);
    }
    auto anchor = DrawShape::getAnchor(graphics, static_cast< ::poi::sl::usermodel::PlaceableShape* >(ts));
    auto textDir = npc(ts)->getTextDirection();
    double width;
    if(!npc(ts)->getWordWrap()) {
        auto pageDim = npc(npc(npc(ts)->getSheet())->getSlideShow())->getPageSize();
        {
            auto v = textDir;
            if((v == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL)) {
                width = npc(pageDim)->getHeight() - npc(anchor)->getX();
                goto end_switch2;;
            } else if((v == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL_270)) {
                width = npc(anchor)->getX();
                goto end_switch2;;
            } else {
                width = npc(pageDim)->getWidth() - npc(anchor)->getX();
                goto end_switch2;;
            }
end_switch2:;
        }

    } else {
        {
            auto v = textDir;
            if((v == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL) || (v == ::poi::sl::usermodel::TextShape_TextDirection::VERTICAL_270)) {
                width = npc(anchor)->getHeight() - leftInset - rightInset- (npc(leftMargin))->doubleValue()- (npc(rightMargin))->doubleValue();
                goto end_switch3;;
            } else {
                width = npc(anchor)->getWidth() - leftInset - rightInset- (npc(leftMargin))->doubleValue()- (npc(rightMargin))->doubleValue();
                goto end_switch3;;
            }
end_switch3:;
        }

        if(firstLine && !isHSLF()) {
            if(bullet != nullptr) {
                if((npc(indent))->doubleValue() > 0) {
                    width -= (npc(indent))->doubleValue();
                }
            } else {
                if((npc(indent))->doubleValue() > 0) {
                    width -= (npc(indent))->doubleValue();
                } else if((npc(indent))->doubleValue() < 0) {
                    width += (npc(leftMargin))->doubleValue();
                }
            }
        }
    }
    return width;
}

poi::sl::usermodel::PlaceableShape* poi::sl::draw::DrawTextParagraph::getParagraphShape()
{
    return new DrawTextParagraph_getParagraphShape_1(this);
}

java::text::AttributedString* poi::sl::draw::DrawTextParagraph::getAttributedString(::java::awt::Graphics2D* graphics, ::java::lang::StringBuilder* text)
{
    ::java::util::List* attList = new ::java::util::ArrayList();
    if(text == nullptr) {
        text = new ::java::lang::StringBuilder();
    }
    auto ps = getParagraphShape();
    auto dfm = npc(DrawFactory::getInstance(graphics))->getFontManager(graphics);
    /* assert((dfm != nullptr)) */ ;
    for (auto _i = npc(paragraph)->iterator(); _i->hasNext(); ) {
        ::poi::sl::usermodel::TextRun* run = java_cast< ::poi::sl::usermodel::TextRun* >(_i->next());
        {
            auto runText = getRenderableText(graphics, run);
            if(npc(runText)->isEmpty()) {
                continue;
            }
            runText = npc(dfm)->mapFontCharset(graphics, npc(run)->getFontInfo(nullptr), runText);
            auto beginIndex = npc(text)->length();
            npc(text)->append(runText);
            auto endIndex = npc(text)->length();
            auto fgPaintStyle = npc(run)->getFontColor();
            auto fgPaint = (new DrawPaint(ps))->getPaint(graphics, fgPaintStyle);
            npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::FOREGROUND(), fgPaint, beginIndex, endIndex)));
            auto fontSz = npc(run)->getFontSize();
            if(fontSz == nullptr) {
                fontSz = npc(paragraph)->getDefaultFontSize();
            }
            npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::SIZE(), ::java::lang::Float::valueOf(npc(fontSz)->floatValue()), beginIndex, endIndex)));
            if(npc(run)->isBold()) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::WEIGHT(), ::java::awt::font::TextAttribute::WEIGHT_BOLD(), beginIndex, endIndex)));
            }
            if(npc(run)->isItalic()) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::POSTURE(), ::java::awt::font::TextAttribute::POSTURE_OBLIQUE(), beginIndex, endIndex)));
            }
            if(npc(run)->isUnderlined()) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::UNDERLINE(), ::java::awt::font::TextAttribute::UNDERLINE_ON(), beginIndex, endIndex)));
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::INPUT_METHOD_UNDERLINE(), ::java::awt::font::TextAttribute::UNDERLINE_LOW_TWO_PIXEL(), beginIndex, endIndex)));
            }
            if(npc(run)->isStrikethrough()) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::STRIKETHROUGH(), ::java::awt::font::TextAttribute::STRIKETHROUGH_ON(), beginIndex, endIndex)));
            }
            if(npc(run)->isSubscript()) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::SUPERSCRIPT(), ::java::awt::font::TextAttribute::SUPERSCRIPT_SUB(), beginIndex, endIndex)));
            }
            if(npc(run)->isSuperscript()) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::SUPERSCRIPT(), ::java::awt::font::TextAttribute::SUPERSCRIPT_SUPER(), beginIndex, endIndex)));
            }
            auto hl = npc(run)->getHyperlink();
            if(hl != nullptr) {
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(HYPERLINK_HREF_, npc(hl)->getAddress(), beginIndex, endIndex)));
                npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(HYPERLINK_LABEL_, npc(hl)->getLabel(), beginIndex, endIndex)));
            }
            processGlyphs(graphics, dfm, attList, beginIndex, run, runText);
        }
    }
    if(npc(text)->length() == 0) {
        auto fontSz = npc(paragraph)->getDefaultFontSize();
        npc(text)->append(u" "_j);
        npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::SIZE(), ::java::lang::Float::valueOf(npc(fontSz)->floatValue()), int32_t(0), int32_t(1))));
    }
    auto string = new ::java::text::AttributedString(npc(text)->toString());
    for (auto _i = npc(attList)->iterator(); _i->hasNext(); ) {
        DrawTextParagraph_AttributedStringData* asd = java_cast< DrawTextParagraph_AttributedStringData* >(_i->next());
        {
            npc(string)->addAttribute(npc(asd)->attribute, npc(asd)->value, npc(asd)->beginIndex, npc(asd)->endIndex);
        }
    }
    return string;
}

void poi::sl::draw::DrawTextParagraph::processGlyphs(::java::awt::Graphics2D* graphics, DrawFontManager* dfm, ::java::util::List* attList, int32_t beginIndex, ::poi::sl::usermodel::TextRun* run, ::java::lang::String* runText)
{
    auto ttrList = ::poi::common::usermodel::fonts::FontGroup::getFontGroupRanges(runText);
    auto rangeBegin = int32_t(0);
    for (auto _i = npc(ttrList)->iterator(); _i->hasNext(); ) {
        ::poi::common::usermodel::fonts::FontGroup_FontGroupRange* ttr = java_cast< ::poi::common::usermodel::fonts::FontGroup_FontGroupRange* >(_i->next());
        {
            auto fiRun = npc(run)->getFontInfo(npc(ttr)->getFontGroup());
            if(fiRun == nullptr) {
                fiRun = npc(run)->getFontInfo(::poi::common::usermodel::fonts::FontGroup::LATIN);
            }
            auto fiMapped = npc(dfm)->getMappedFont(graphics, fiRun);
            auto fiFallback = npc(dfm)->getFallbackFont(graphics, fiRun);
            /* assert((fiFallback != nullptr)) */ ;
            if(fiMapped == nullptr) {
                fiMapped = npc(dfm)->getMappedFont(graphics, new DrawFontInfo(npc(paragraph)->getDefaultFontFamily()));
            }
            if(fiMapped == nullptr) {
                fiMapped = fiFallback;
            }
            auto fontMapped = npc(dfm)->createAWTFont(graphics, fiMapped, 10, npc(run)->isBold(), npc(run)->isItalic());
            auto fontFallback = npc(dfm)->createAWTFont(graphics, fiFallback, 10, npc(run)->isBold(), npc(run)->isItalic());
            auto const rangeLen = npc(ttr)->getLength();
            auto partEnd = rangeBegin;
            while (partEnd < rangeBegin + rangeLen) {
                auto partBegin = partEnd;
                partEnd = nextPart(fontMapped, runText, partBegin, rangeBegin + rangeLen, true);
                if(partBegin < partEnd) {
                    npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::FAMILY(), npc(fontMapped)->getFontName(::java::util::Locale::ROOT()), beginIndex + partBegin, beginIndex + partEnd)));
                    if(npc(LOG_)->check(::poi::util::POILogger::DEBUG)) {
                        npc(LOG_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"mapped: "_j), static_cast< ::java::lang::Object* >(npc(fontMapped)->getFontName(::java::util::Locale::ROOT())), static_cast< ::java::lang::Object* >(u" "_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((beginIndex + partBegin))), static_cast< ::java::lang::Object* >(u" "_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((beginIndex + partEnd))), static_cast< ::java::lang::Object* >(u" - "_j), static_cast< ::java::lang::Object* >(npc(runText)->substring(beginIndex + partBegin, beginIndex + partEnd))}));
                    }
                }
                partBegin = partEnd;
                partEnd = nextPart(fontMapped, runText, partBegin, rangeBegin + rangeLen, false);
                if(partBegin < partEnd) {
                    npc(attList)->add(static_cast< ::java::lang::Object* >(new DrawTextParagraph_AttributedStringData(::java::awt::font::TextAttribute::FAMILY(), npc(fontFallback)->getFontName(::java::util::Locale::ROOT()), beginIndex + partBegin, beginIndex + partEnd)));
                    if(npc(LOG_)->check(::poi::util::POILogger::DEBUG)) {
                        npc(LOG_)->log(::poi::util::POILogger::DEBUG, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"fallback: "_j), static_cast< ::java::lang::Object* >(npc(fontFallback)->getFontName(::java::util::Locale::ROOT())), static_cast< ::java::lang::Object* >(u" "_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((beginIndex + partBegin))), static_cast< ::java::lang::Object* >(u" "_j), static_cast< ::java::lang::Object* >(::java::lang::Integer::valueOf((beginIndex + partEnd))), static_cast< ::java::lang::Object* >(u" - "_j), static_cast< ::java::lang::Object* >(npc(runText)->substring(beginIndex + partBegin, beginIndex + partEnd))}));
                    }
                }
            }
            rangeBegin += rangeLen;
        }
    }
}

int32_t poi::sl::draw::DrawTextParagraph::nextPart(::java::awt::Font* fontMapped, ::java::lang::String* runText, int32_t beginPart, int32_t endPart, bool isDisplayed)
{
    clinit();
    auto rIdx = beginPart;
    while (rIdx < endPart) {
        auto codepoint = npc(runText)->codePointAt(rIdx);
        if(npc(fontMapped)->canDisplay(codepoint) != isDisplayed) {
            break;
        }
        rIdx += ::java::lang::Character::charCount(codepoint);
    }
    return rIdx;
}

bool poi::sl::draw::DrawTextParagraph::isHSLF()
{
    return DrawShape::isHSLF(npc(paragraph)->getParentShape());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawTextParagraph::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTextParagraph", 40);
    return c;
}

void poi::sl::draw::DrawTextParagraph::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(DrawTextParagraph::class_()));
        HYPERLINK_HREF_ = new DrawTextParagraph_XlinkAttribute(u"href"_j);
        HYPERLINK_LABEL_ = new DrawTextParagraph_XlinkAttribute(u"label"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::sl::draw::DrawTextParagraph::getClass0()
{
    return class_();
}

