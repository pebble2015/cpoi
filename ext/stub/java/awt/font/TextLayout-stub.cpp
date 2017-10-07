// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/font/TextLayout.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::Shape, ::java::lang::ObjectArray > ShapeArray;
    } // awt
} // java

extern void unimplemented_(const char16_t* name);
java::awt::font::TextLayout::TextLayout(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::font::TextLayout::TextLayout(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc)
    : TextLayout(*static_cast< ::default_init_tag* >(0))
{
    ctor(text, frc);
}

java::awt::font::TextLayout::TextLayout(::java::lang::String* string, ::java::awt::Font* font, FontRenderContext* frc)
    : TextLayout(*static_cast< ::default_init_tag* >(0))
{
    ctor(string, font, frc);
}

java::awt::font::TextLayout::TextLayout(::java::lang::String* string, ::java::util::Map* attributes, FontRenderContext* frc)
    : TextLayout(*static_cast< ::default_init_tag* >(0))
{
    ctor(string, attributes, frc);
}

java::awt::font::TextLayout::TextLayout(TextLine* textLine, int8_t baseline, ::floatArray* baselineOffsets, float justifyRatio)
    : TextLayout(*static_cast< ::default_init_tag* >(0))
{
    ctor(textLine, baseline, baselineOffsets, justifyRatio);
}

constexpr float java::awt::font::TextLayout::ALREADY_JUSTIFIED;
java::awt::font::TextLayout_CaretPolicy*& java::awt::font::TextLayout::DEFAULT_CARET_POLICY()
{
    clinit();
    return DEFAULT_CARET_POLICY_;
}
java::awt::font::TextLayout_CaretPolicy* java::awt::font::TextLayout::DEFAULT_CARET_POLICY_;
float& java::awt::font::TextLayout::dx()
{
    clinit();
    return dx_;
}
float java::awt::font::TextLayout::dx_;
float& java::awt::font::TextLayout::dy()
{
    clinit();
    return dy_;
}
float java::awt::font::TextLayout::dy_;

void ::java::awt::font::TextLayout::ctor(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::TextLayout::ctor(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc)");
}

void ::java::awt::font::TextLayout::ctor(::java::lang::String* string, ::java::awt::Font* font, FontRenderContext* frc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::TextLayout::ctor(::java::lang::String* string, ::java::awt::Font* font, FontRenderContext* frc)");
}

void ::java::awt::font::TextLayout::ctor(::java::lang::String* string, ::java::util::Map* attributes, FontRenderContext* frc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::TextLayout::ctor(::java::lang::String* string, ::java::util::Map* attributes, FontRenderContext* frc)");
}

void ::java::awt::font::TextLayout::ctor(TextLine* textLine, int8_t baseline, ::floatArray* baselineOffsets, float justifyRatio)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::TextLayout::ctor(TextLine* textLine, int8_t baseline, ::floatArray* baselineOffsets, float justifyRatio)");
}

/* private: java::awt::geom::GeneralPath* java::awt::font::TextLayout::boundingShape(::doubleArray* path0, ::doubleArray* path1) */
/* private: void java::awt::font::TextLayout::buildCache() */
/* private: java::awt::geom::GeneralPath* java::awt::font::TextLayout::caretBoundingShape(int32_t caret0, int32_t caret1, ::java::awt::geom::Rectangle2D* bounds) */
/* private: bool java::awt::font::TextLayout::caretIsValid(int32_t caret) */
/* private: java::awt::font::TextHitInfo* java::awt::font::TextLayout::caretToHit(int32_t caret) */
/* private: float java::awt::font::TextLayout::caretToPointDistance(::floatArray* caretInfo, float x, float y) */
/* private: void java::awt::font::TextLayout::checkTextHit(TextHitInfo* hit) */
java::lang::Object* java::awt::font::TextLayout::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::awt::font::TextLayout::clone()");
    return 0;
}

void java::awt::font::TextLayout::draw(::java::awt::Graphics2D* g2, float x, float y)
{ /* stub */
    unimplemented_(u"void java::awt::font::TextLayout::draw(::java::awt::Graphics2D* g2, float x, float y)");
}

/* private: void java::awt::font::TextLayout::ensureCache() */
bool java::awt::font::TextLayout::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::font::TextLayout::equals(::java::lang::Object* obj)");
    return 0;
}

bool java::awt::font::TextLayout::equals(TextLayout* rhs)
{ /* stub */
    unimplemented_(u"bool java::awt::font::TextLayout::equals(TextLayout* rhs)");
    return 0;
}

/* private: void java::awt::font::TextLayout::fastInit(::char16_tArray* chars, ::java::awt::Font* font, ::java::util::Map* attrs, FontRenderContext* frc) */
float java::awt::font::TextLayout::getAdvance()
{ /* stub */
    unimplemented_(u"float java::awt::font::TextLayout::getAdvance()");
    return 0;
}

float java::awt::font::TextLayout::getAscent()
{ /* stub */
    unimplemented_(u"float java::awt::font::TextLayout::getAscent()");
    return 0;
}

int8_t java::awt::font::TextLayout::getBaseline()
{ /* stub */
return baseline ; /* getter */
}

int8_t java::awt::font::TextLayout::getBaselineFromGraphic(GraphicAttribute* graphic)
{ /* stub */
    clinit();
    unimplemented_(u"int8_t java::awt::font::TextLayout::getBaselineFromGraphic(GraphicAttribute* graphic)");
    return 0;
}

floatArray* java::awt::font::TextLayout::getBaselineOffsets()
{ /* stub */
return baselineOffsets ; /* getter */
}

java::awt::Shape* java::awt::font::TextLayout::getBlackBoxBounds(int32_t firstEndpoint, int32_t secondEndpoint)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getBlackBoxBounds(int32_t firstEndpoint, int32_t secondEndpoint)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::font::TextLayout::getBounds()
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::font::TextLayout::getBounds()");
    return 0;
}

floatArray* java::awt::font::TextLayout::getCaretInfo(TextHitInfo* hit)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::font::TextLayout::getCaretInfo(TextHitInfo* hit)");
    return 0;
}

floatArray* java::awt::font::TextLayout::getCaretInfo(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds)
{ /* stub */
    unimplemented_(u"floatArray* java::awt::font::TextLayout::getCaretInfo(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds)");
    return 0;
}

/* private: floatArray* java::awt::font::TextLayout::getCaretInfo(int32_t caret, ::java::awt::geom::Rectangle2D* bounds, ::floatArray* info) */
/* private: floatArray* java::awt::font::TextLayout::getCaretInfoTestInternal(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds) */
/* private: doubleArray* java::awt::font::TextLayout::getCaretPath(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds) */
/* private: doubleArray* java::awt::font::TextLayout::getCaretPath(int32_t caret, ::java::awt::geom::Rectangle2D* bounds, bool clipToBounds) */
java::awt::Shape* java::awt::font::TextLayout::getCaretShape(TextHitInfo* hit)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getCaretShape(TextHitInfo* hit)");
    return 0;
}

java::awt::Shape* java::awt::font::TextLayout::getCaretShape(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getCaretShape(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds)");
    return 0;
}

java::awt::ShapeArray* java::awt::font::TextLayout::getCaretShapes(int32_t offset)
{ /* stub */
    unimplemented_(u"java::awt::ShapeArray* java::awt::font::TextLayout::getCaretShapes(int32_t offset)");
    return 0;
}

java::awt::ShapeArray* java::awt::font::TextLayout::getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds)
{ /* stub */
    unimplemented_(u"java::awt::ShapeArray* java::awt::font::TextLayout::getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds)");
    return 0;
}

java::awt::ShapeArray* java::awt::font::TextLayout::getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds, TextLayout_CaretPolicy* policy)
{ /* stub */
    unimplemented_(u"java::awt::ShapeArray* java::awt::font::TextLayout::getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds, TextLayout_CaretPolicy* policy)");
    return 0;
}

int32_t java::awt::font::TextLayout::getCharacterCount()
{ /* stub */
return characterCount ; /* getter */
}

int8_t java::awt::font::TextLayout::getCharacterLevel(int32_t index)
{ /* stub */
    unimplemented_(u"int8_t java::awt::font::TextLayout::getCharacterLevel(int32_t index)");
    return 0;
}

float java::awt::font::TextLayout::getDescent()
{ /* stub */
    unimplemented_(u"float java::awt::font::TextLayout::getDescent()");
    return 0;
}

java::awt::font::TextLayout* java::awt::font::TextLayout::getJustifiedLayout(float justificationWidth)
{ /* stub */
    unimplemented_(u"java::awt::font::TextLayout* java::awt::font::TextLayout::getJustifiedLayout(float justificationWidth)");
    return 0;
}

java::awt::font::LayoutPath* java::awt::font::TextLayout::getLayoutPath()
{ /* stub */
    unimplemented_(u"java::awt::font::LayoutPath* java::awt::font::TextLayout::getLayoutPath()");
    return 0;
}

float java::awt::font::TextLayout::getLeading()
{ /* stub */
    unimplemented_(u"float java::awt::font::TextLayout::getLeading()");
    return 0;
}

java::awt::Shape* java::awt::font::TextLayout::getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint)");
    return 0;
}

java::awt::Shape* java::awt::font::TextLayout::getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint, ::java::awt::geom::Rectangle2D* bounds)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint, ::java::awt::geom::Rectangle2D* bounds)");
    return 0;
}

int32_tArray* java::awt::font::TextLayout::getLogicalRangesForVisualSelection(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::font::TextLayout::getLogicalRangesForVisualSelection(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint)");
    return 0;
}

/* private: java::awt::geom::Rectangle2D* java::awt::font::TextLayout::getNaturalBounds() */
java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextLeftHit(TextHitInfo* hit)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextLeftHit(TextHitInfo* hit)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextLeftHit(int32_t offset)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextLeftHit(int32_t offset)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextLeftHit(int32_t offset, TextLayout_CaretPolicy* policy)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextLeftHit(int32_t offset, TextLayout_CaretPolicy* policy)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextRightHit(TextHitInfo* hit)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextRightHit(TextHitInfo* hit)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextRightHit(int32_t offset)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextRightHit(int32_t offset)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextRightHit(int32_t offset, TextLayout_CaretPolicy* policy)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getNextRightHit(int32_t offset, TextLayout_CaretPolicy* policy)");
    return 0;
}

java::awt::Shape* java::awt::font::TextLayout::getOutline(::java::awt::geom::AffineTransform* tx)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getOutline(::java::awt::geom::AffineTransform* tx)");
    return 0;
}

java::awt::Rectangle* java::awt::font::TextLayout::getPixelBounds(FontRenderContext* frc, float x, float y)
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::font::TextLayout::getPixelBounds(FontRenderContext* frc, float x, float y)");
    return 0;
}

/* private: java::awt::font::TextHitInfo* java::awt::font::TextLayout::getStrongHit(TextHitInfo* hit1, TextHitInfo* hit2) */
java::awt::font::TextLine* java::awt::font::TextLayout::getTextLineForTesting()
{ /* stub */
    unimplemented_(u"java::awt::font::TextLine* java::awt::font::TextLayout::getTextLineForTesting()");
    return 0;
}

float java::awt::font::TextLayout::getVisibleAdvance()
{ /* stub */
return visibleAdvance ; /* getter */
}

java::awt::Shape* java::awt::font::TextLayout::getVisualHighlightShape(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getVisualHighlightShape(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint)");
    return 0;
}

java::awt::Shape* java::awt::font::TextLayout::getVisualHighlightShape(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint, ::java::awt::geom::Rectangle2D* bounds)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::TextLayout::getVisualHighlightShape(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint, ::java::awt::geom::Rectangle2D* bounds)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::getVisualOtherHit(TextHitInfo* hit)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::getVisualOtherHit(TextHitInfo* hit)");
    return 0;
}

void java::awt::font::TextLayout::handleJustify(float justificationWidth)
{ /* stub */
    unimplemented_(u"void java::awt::font::TextLayout::handleJustify(float justificationWidth)");
}

int32_t java::awt::font::TextLayout::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::font::TextLayout::hashCode()");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::hitTestChar(float x, float y)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::hitTestChar(float x, float y)");
    return 0;
}

java::awt::font::TextHitInfo* java::awt::font::TextLayout::hitTestChar(float x, float y, ::java::awt::geom::Rectangle2D* bounds)
{ /* stub */
    unimplemented_(u"java::awt::font::TextHitInfo* java::awt::font::TextLayout::hitTestChar(float x, float y, ::java::awt::geom::Rectangle2D* bounds)");
    return 0;
}

/* private: int32_t java::awt::font::TextLayout::hitToCaret(TextHitInfo* hit) */
void java::awt::font::TextLayout::hitToPoint(TextHitInfo* hit, ::java::awt::geom::Point2D* point)
{ /* stub */
    unimplemented_(u"void java::awt::font::TextLayout::hitToPoint(TextHitInfo* hit, ::java::awt::geom::Point2D* point)");
}

bool java::awt::font::TextLayout::isLeftToRight()
{ /* stub */
    unimplemented_(u"bool java::awt::font::TextLayout::isLeftToRight()");
    return 0;
}

bool java::awt::font::TextLayout::isVertical()
{ /* stub */
    unimplemented_(u"bool java::awt::font::TextLayout::isVertical()");
    return 0;
}

/* private: java::awt::geom::GeneralPath* java::awt::font::TextLayout::leftShape(::java::awt::geom::Rectangle2D* bounds) */
/* private: void java::awt::font::TextLayout::paragraphInit(int8_t aBaseline, ::sun::font::CoreMetrics* lm, ::java::util::Map* paragraphAttrs, ::char16_tArray* text) */
/* private: java::awt::geom::GeneralPath* java::awt::font::TextLayout::pathToShape(::doubleArray* path, bool close, ::sun::font::LayoutPathImpl* lp) */
/* private: java::awt::geom::GeneralPath* java::awt::font::TextLayout::rightShape(::java::awt::geom::Rectangle2D* bounds) */
/* private: int32_t java::awt::font::TextLayout::sameBaselineUpTo(::java::awt::Font* font, ::char16_tArray* text, int32_t start, int32_t limit) */
/* private: java::awt::Font* java::awt::font::TextLayout::singleFont(::char16_tArray* text, int32_t start, int32_t limit, ::java::util::Map* attributes) */
/* private: void java::awt::font::TextLayout::standardInit(::java::text::AttributedCharacterIterator* text, ::char16_tArray* chars, FontRenderContext* frc) */
java::lang::String* java::awt::font::TextLayout::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::font::TextLayout::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::font::TextLayout::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.font.TextLayout", 24);
    return c;
}

java::lang::Class* java::awt::font::TextLayout::getClass0()
{
    return class_();
}

