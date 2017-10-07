// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/Font.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace text
    {
typedef ::SubArray< ::java::text::AttributedCharacterIterator_Attribute, ::java::lang::ObjectArray, ::java::io::SerializableArray > AttributedCharacterIterator_AttributeArray;
    } // text
} // java

extern void unimplemented_(const char16_t* name);
java::awt::Font::Font(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::Font::Font(::java::util::Map* attributes)
    : Font(*static_cast< ::default_init_tag* >(0))
{
    ctor(attributes);
}

java::awt::Font::Font(Font* font)
    : Font(*static_cast< ::default_init_tag* >(0))
{
    ctor(font);
}

java::awt::Font::Font(::java::lang::String* name, int32_t style, int32_t size)
    : Font(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, style, size);
}

constexpr int32_t java::awt::Font::BOLD;
constexpr int32_t java::awt::Font::CENTER_BASELINE;
java::lang::String*& java::awt::Font::DIALOG()
{
    clinit();
    return DIALOG_;
}
java::lang::String* java::awt::Font::DIALOG_;
java::lang::String*& java::awt::Font::DIALOG_INPUT()
{
    clinit();
    return DIALOG_INPUT_;
}
java::lang::String* java::awt::Font::DIALOG_INPUT_;
int32_t& java::awt::Font::EXTRA_MASK()
{
    clinit();
    return EXTRA_MASK_;
}
int32_t java::awt::Font::EXTRA_MASK_;
constexpr int32_t java::awt::Font::HANGING_BASELINE;
constexpr int32_t java::awt::Font::ITALIC;
constexpr int32_t java::awt::Font::LAYOUT_LEFT_TO_RIGHT;
int32_t& java::awt::Font::LAYOUT_MASK()
{
    clinit();
    return LAYOUT_MASK_;
}
int32_t java::awt::Font::LAYOUT_MASK_;
constexpr int32_t java::awt::Font::LAYOUT_NO_LIMIT_CONTEXT;
constexpr int32_t java::awt::Font::LAYOUT_NO_START_CONTEXT;
constexpr int32_t java::awt::Font::LAYOUT_RIGHT_TO_LEFT;
java::lang::String*& java::awt::Font::MONOSPACED()
{
    clinit();
    return MONOSPACED_;
}
java::lang::String* java::awt::Font::MONOSPACED_;
constexpr int32_t java::awt::Font::PLAIN;
int32_t& java::awt::Font::PRIMARY_MASK()
{
    clinit();
    return PRIMARY_MASK_;
}
int32_t java::awt::Font::PRIMARY_MASK_;
int32_t& java::awt::Font::RECOGNIZED_MASK()
{
    clinit();
    return RECOGNIZED_MASK_;
}
int32_t java::awt::Font::RECOGNIZED_MASK_;
constexpr int32_t java::awt::Font::ROMAN_BASELINE;
java::lang::String*& java::awt::Font::SANS_SERIF()
{
    clinit();
    return SANS_SERIF_;
}
java::lang::String* java::awt::Font::SANS_SERIF_;
int32_t& java::awt::Font::SECONDARY_MASK()
{
    clinit();
    return SECONDARY_MASK_;
}
int32_t java::awt::Font::SECONDARY_MASK_;
java::lang::String*& java::awt::Font::SERIF()
{
    clinit();
    return SERIF_;
}
java::lang::String* java::awt::Font::SERIF_;
constexpr int32_t java::awt::Font::TRUETYPE_FONT;
constexpr int32_t java::awt::Font::TYPE1_FONT;
java::awt::geom::AffineTransform*& java::awt::Font::identityTx()
{
    clinit();
    return identityTx_;
}
java::awt::geom::AffineTransform* java::awt::Font::identityTx_;
constexpr int64_t java::awt::Font::serialVersionUID;
floatArray*& java::awt::Font::ssinfo()
{
    clinit();
    return ssinfo_;
}
floatArray* java::awt::Font::ssinfo_;

void ::java::awt::Font::ctor(::java::util::Map* attributes)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Font::ctor(::java::util::Map* attributes)");
}

void ::java::awt::Font::ctor(Font* font)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Font::ctor(Font* font)");
}

void ::java::awt::Font::ctor(::java::lang::String* name, int32_t style, int32_t size)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::Font::ctor(::java::lang::String* name, int32_t style, int32_t size)");
}

/* private: void ::java::awt::Font::ctor(::java::lang::String* name, int32_t style, float sizePts) */
/* private: void ::java::awt::Font::ctor(::java::io::File* fontFile, int32_t fontFormat, bool isCopy, ::sun::font::CreatedFontTracker* tracker) */
/* private: void ::java::awt::Font::ctor(::java::lang::String* name, int32_t style, float sizePts, bool created, ::sun::font::Font2DHandle* handle) */
/* private: void ::java::awt::Font::ctor(::sun::font::AttributeValues* values, ::java::lang::String* oldName, int32_t oldStyle, bool created, ::sun::font::Font2DHandle* handle) */
/* private: void java::awt::Font::applyStyle(int32_t style, ::sun::font::AttributeValues* values) */
/* private: void java::awt::Font::applyTransform(::java::awt::geom::AffineTransform* trans, ::sun::font::AttributeValues* values) */
bool java::awt::Font::canDisplay(char16_t c)
{ /* stub */
    unimplemented_(u"bool java::awt::Font::canDisplay(char16_t c)");
    return 0;
}

bool java::awt::Font::canDisplay(int32_t codePoint)
{ /* stub */
    unimplemented_(u"bool java::awt::Font::canDisplay(int32_t codePoint)");
    return 0;
}

int32_t java::awt::Font::canDisplayUpTo(::java::lang::String* str)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Font::canDisplayUpTo(::java::lang::String* str)");
    return 0;
}

int32_t java::awt::Font::canDisplayUpTo(::char16_tArray* text, int32_t start, int32_t limit)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Font::canDisplayUpTo(::char16_tArray* text, int32_t start, int32_t limit)");
    return 0;
}

int32_t java::awt::Font::canDisplayUpTo(::java::text::CharacterIterator* iter, int32_t start, int32_t limit)
{ /* stub */
    unimplemented_(u"int32_t java::awt::Font::canDisplayUpTo(::java::text::CharacterIterator* iter, int32_t start, int32_t limit)");
    return 0;
}

java::awt::Font* java::awt::Font::createFont(int32_t fontFormat, ::java::io::InputStream* fontStream)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Font* java::awt::Font::createFont(int32_t fontFormat, ::java::io::InputStream* fontStream)");
    return 0;
}

java::awt::Font* java::awt::Font::createFont(int32_t fontFormat, ::java::io::File* fontFile)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Font* java::awt::Font::createFont(int32_t fontFormat, ::java::io::File* fontFile)");
    return 0;
}

/* private: java::awt::Font* java::awt::Font::createFont0(int32_t fontFormat, ::java::io::InputStream* fontStream, ::sun::font::CreatedFontTracker* tracker) */
java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::lang::String* str)
{ /* stub */
    unimplemented_(u"java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::lang::String* str)");
    return 0;
}

java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::char16_tArray* chars)
{ /* stub */
    unimplemented_(u"java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::char16_tArray* chars)");
    return 0;
}

java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::text::CharacterIterator* ci)
{ /* stub */
    unimplemented_(u"java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::text::CharacterIterator* ci)");
    return 0;
}

java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::int32_tArray* glyphCodes)
{ /* stub */
    unimplemented_(u"java::awt::font::GlyphVector* java::awt::Font::createGlyphVector(::java::awt::font::FontRenderContext* frc, ::int32_tArray* glyphCodes)");
    return 0;
}

java::awt::Font* java::awt::Font::decode(::java::lang::String* str)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Font* java::awt::Font::decode(::java::lang::String* str)");
    return 0;
}

/* private: sun::font::FontLineMetrics* java::awt::Font::defaultLineMetrics(::java::awt::font::FontRenderContext* frc) */
java::awt::Font* java::awt::Font::deriveFont(float size)
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Font::deriveFont(float size)");
    return 0;
}

java::awt::Font* java::awt::Font::deriveFont(::java::awt::geom::AffineTransform* trans)
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Font::deriveFont(::java::awt::geom::AffineTransform* trans)");
    return 0;
}

java::awt::Font* java::awt::Font::deriveFont(int32_t style)
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Font::deriveFont(int32_t style)");
    return 0;
}

java::awt::Font* java::awt::Font::deriveFont(::java::util::Map* attributes)
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Font::deriveFont(::java::util::Map* attributes)");
    return 0;
}

java::awt::Font* java::awt::Font::deriveFont(int32_t style, float size)
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Font::deriveFont(int32_t style, float size)");
    return 0;
}

java::awt::Font* java::awt::Font::deriveFont(int32_t style, ::java::awt::geom::AffineTransform* trans)
{ /* stub */
    unimplemented_(u"java::awt::Font* java::awt::Font::deriveFont(int32_t style, ::java::awt::geom::AffineTransform* trans)");
    return 0;
}

bool java::awt::Font::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::awt::Font::equals(::java::lang::Object* obj)");
    return 0;
}

/* private: sun::font::AttributeValues* java::awt::Font::getAttributeValues() */
java::util::Map* java::awt::Font::getAttributes()
{ /* stub */
    unimplemented_(u"java::util::Map* java::awt::Font::getAttributes()");
    return 0;
}

java::text::AttributedCharacterIterator_AttributeArray* java::awt::Font::getAvailableAttributes()
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator_AttributeArray* java::awt::Font::getAvailableAttributes()");
    return 0;
}

int8_t java::awt::Font::getBaselineFor(char16_t c)
{ /* stub */
    unimplemented_(u"int8_t java::awt::Font::getBaselineFor(char16_t c)");
    return 0;
}

java::lang::String* java::awt::Font::getFamily()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::getFamily()");
    return 0;
}

java::lang::String* java::awt::Font::getFamily(::java::util::Locale* l)
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::getFamily(::java::util::Locale* l)");
    return 0;
}

java::lang::String* java::awt::Font::getFamily_NoClientCode()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::getFamily_NoClientCode()");
    return 0;
}

java::awt::Font* java::awt::Font::getFont(::java::util::Map* attributes)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Font* java::awt::Font::getFont(::java::util::Map* attributes)");
    return 0;
}

java::awt::Font* java::awt::Font::getFont(::java::lang::String* nm)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Font* java::awt::Font::getFont(::java::lang::String* nm)");
    return 0;
}

java::awt::Font* java::awt::Font::getFont(::java::lang::String* nm, Font* font)
{ /* stub */
    clinit();
    unimplemented_(u"java::awt::Font* java::awt::Font::getFont(::java::lang::String* nm, Font* font)");
    return 0;
}

/* private: sun::font::Font2D* java::awt::Font::getFont2D() */
java::lang::String* java::awt::Font::getFontName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::getFontName()");
    return 0;
}

java::lang::String* java::awt::Font::getFontName(::java::util::Locale* l)
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::getFontName(::java::util::Locale* l)");
    return 0;
}

float java::awt::Font::getItalicAngle()
{ /* stub */
    unimplemented_(u"float java::awt::Font::getItalicAngle()");
    return 0;
}

/* private: float java::awt::Font::getItalicAngle(::java::awt::font::FontRenderContext* frc) */
java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::java::lang::String* str, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::java::lang::String* str, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::java::lang::String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::java::lang::String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::char16_tArray* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::char16_tArray* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::font::LineMetrics* java::awt::Font::getLineMetrics(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::Font::getMaxCharBounds(::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::Font::getMaxCharBounds(::java::awt::font::FontRenderContext* frc)");
    return 0;
}

int32_t java::awt::Font::getMissingGlyphCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Font::getMissingGlyphCode()");
    return 0;
}

java::lang::String* java::awt::Font::getName()
{ /* stub */
return name ; /* getter */
}

int32_t java::awt::Font::getNumGlyphs()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Font::getNumGlyphs()");
    return 0;
}

java::lang::String* java::awt::Font::getPSName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::getPSName()");
    return 0;
}

java::awt::peer::FontPeer* java::awt::Font::getPeer()
{ /* stub */
return peer ; /* getter */
}

java::awt::peer::FontPeer* java::awt::Font::getPeer_NoClientCode()
{ /* stub */
    unimplemented_(u"java::awt::peer::FontPeer* java::awt::Font::getPeer_NoClientCode()");
    return 0;
}

int32_t java::awt::Font::getSize()
{ /* stub */
return size ; /* getter */
}

float java::awt::Font::getSize2D()
{ /* stub */
    unimplemented_(u"float java::awt::Font::getSize2D()");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::java::lang::String* str, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::java::lang::String* str, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::java::lang::String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::java::lang::String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::char16_tArray* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::char16_tArray* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)
{ /* stub */
    unimplemented_(u"java::awt::geom::Rectangle2D* java::awt::Font::getStringBounds(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc)");
    return 0;
}

int32_t java::awt::Font::getStyle()
{ /* stub */
return style ; /* getter */
}

java::awt::geom::AffineTransform* java::awt::Font::getTransform()
{ /* stub */
    unimplemented_(u"java::awt::geom::AffineTransform* java::awt::Font::getTransform()");
    return 0;
}

bool java::awt::Font::hasLayoutAttributes()
{ /* stub */
    unimplemented_(u"bool java::awt::Font::hasLayoutAttributes()");
    return 0;
}

/* private: bool java::awt::Font::hasTempPermission() */
bool java::awt::Font::hasUniformLineMetrics()
{ /* stub */
    unimplemented_(u"bool java::awt::Font::hasUniformLineMetrics()");
    return 0;
}

int32_t java::awt::Font::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::awt::Font::hashCode()");
    return 0;
}

/* private: void java::awt::Font::initFromValues(::sun::font::AttributeValues* values) */
bool java::awt::Font::isBold()
{ /* stub */
    unimplemented_(u"bool java::awt::Font::isBold()");
    return 0;
}

bool java::awt::Font::isItalic()
{ /* stub */
    unimplemented_(u"bool java::awt::Font::isItalic()");
    return 0;
}

bool java::awt::Font::isPlain()
{ /* stub */
    unimplemented_(u"bool java::awt::Font::isPlain()");
    return 0;
}

bool java::awt::Font::isTransformed()
{ /* stub */
    unimplemented_(u"bool java::awt::Font::isTransformed()");
    return 0;
}

java::awt::font::GlyphVector* java::awt::Font::layoutGlyphVector(::java::awt::font::FontRenderContext* frc, ::char16_tArray* text, int32_t start, int32_t limit, int32_t flags)
{ /* stub */
    unimplemented_(u"java::awt::font::GlyphVector* java::awt::Font::layoutGlyphVector(::java::awt::font::FontRenderContext* frc, ::char16_tArray* text, int32_t start, int32_t limit, int32_t flags)");
    return 0;
}

/* private: void java::awt::Font::readObject(::java::io::ObjectInputStream* s) */
java::lang::String* java::awt::Font::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::awt::Font::toString()");
    return 0;
}

/* private: void java::awt::Font::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::Font::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.Font", 13);
    return c;
}

java::lang::Class* java::awt::Font::getClass0()
{
    return class_();
}

