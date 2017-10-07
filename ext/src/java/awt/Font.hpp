// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/awt/peer/fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/lang/ref/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/font/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>

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

struct default_init_tag;

class java::awt::Font
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t BOLD { int32_t(1) };
    static constexpr int32_t CENTER_BASELINE { int32_t(1) };

private:
    static ::java::lang::String* DIALOG_;
    static ::java::lang::String* DIALOG_INPUT_;
    static int32_t EXTRA_MASK_;

public:
    static constexpr int32_t HANGING_BASELINE { int32_t(2) };
    static constexpr int32_t ITALIC { int32_t(2) };
    static constexpr int32_t LAYOUT_LEFT_TO_RIGHT { int32_t(0) };

private:
    static int32_t LAYOUT_MASK_;

public:
    static constexpr int32_t LAYOUT_NO_LIMIT_CONTEXT { int32_t(4) };
    static constexpr int32_t LAYOUT_NO_START_CONTEXT { int32_t(2) };
    static constexpr int32_t LAYOUT_RIGHT_TO_LEFT { int32_t(1) };

private:
    static ::java::lang::String* MONOSPACED_;

public:
    static constexpr int32_t PLAIN { int32_t(0) };

private:
    static int32_t PRIMARY_MASK_;
    static int32_t RECOGNIZED_MASK_;

public:
    static constexpr int32_t ROMAN_BASELINE { int32_t(0) };

private:
    static ::java::lang::String* SANS_SERIF_;
    static int32_t SECONDARY_MASK_;
    static ::java::lang::String* SERIF_;

public:
    static constexpr int32_t TRUETYPE_FONT { int32_t(0) };
    static constexpr int32_t TYPE1_FONT { int32_t(1) };

private:
    bool createdFont {  };
    ::java::util::Hashtable* fRequestedAttributes {  };
    ::java::lang::ref::SoftReference* flmref {  };
    ::sun::font::Font2DHandle* font2DHandle {  };
    int32_t fontSerializedDataVersion {  };
    bool hasLayoutAttributes_ {  };

public: /* package */
    int32_t hash {  };

private:
    static ::java::awt::geom::AffineTransform* identityTx_;

public: /* protected */
    ::java::lang::String* name {  };

private:
    bool nonIdentityTx {  };
    int64_t pData {  };
    ::java::awt::peer::FontPeer* peer {  };

public: /* protected */
    float pointSize {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(-4206021311591459213LL) };

public: /* protected */
    int32_t size {  };

private:
    static ::floatArray* ssinfo_;

public: /* protected */
    int32_t style {  };

private:
    ::sun::font::AttributeValues* values {  };

protected:
    void ctor(::java::util::Map* attributes);
    void ctor(Font* font);
    void ctor(::java::lang::String* name, int32_t style, int32_t size);
    /*void ctor(::java::lang::String* name, int32_t style, float sizePts); (private) */
    /*void ctor(::java::io::File* fontFile, int32_t fontFormat, bool isCopy, ::sun::font::CreatedFontTracker* tracker); (private) */
    /*void ctor(::java::lang::String* name, int32_t style, float sizePts, bool created, ::sun::font::Font2DHandle* handle); (private) */
    /*void ctor(::sun::font::AttributeValues* values, ::java::lang::String* oldName, int32_t oldStyle, bool created, ::sun::font::Font2DHandle* handle); (private) */
    /*static void applyStyle(int32_t style, ::sun::font::AttributeValues* values); (private) */
    /*static void applyTransform(::java::awt::geom::AffineTransform* trans, ::sun::font::AttributeValues* values); (private) */

public:
    virtual bool canDisplay(char16_t c);
    virtual bool canDisplay(int32_t codePoint);
    virtual int32_t canDisplayUpTo(::java::lang::String* str);
    virtual int32_t canDisplayUpTo(::char16_tArray* text, int32_t start, int32_t limit);
    virtual int32_t canDisplayUpTo(::java::text::CharacterIterator* iter, int32_t start, int32_t limit);
    static Font* createFont(int32_t fontFormat, ::java::io::InputStream* fontStream);
    static Font* createFont(int32_t fontFormat, ::java::io::File* fontFile);
    /*static Font* createFont0(int32_t fontFormat, ::java::io::InputStream* fontStream, ::sun::font::CreatedFontTracker* tracker); (private) */
    virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::lang::String* str);
    virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, ::char16_tArray* chars);
    virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, ::java::text::CharacterIterator* ci);
    virtual ::java::awt::font::GlyphVector* createGlyphVector(::java::awt::font::FontRenderContext* frc, ::int32_tArray* glyphCodes);
    static Font* decode(::java::lang::String* str);
    /*::sun::font::FontLineMetrics* defaultLineMetrics(::java::awt::font::FontRenderContext* frc); (private) */
    virtual Font* deriveFont(float size);
    virtual Font* deriveFont(::java::awt::geom::AffineTransform* trans);
    virtual Font* deriveFont(int32_t style);
    virtual Font* deriveFont(::java::util::Map* attributes);
    virtual Font* deriveFont(int32_t style, float size);
    virtual Font* deriveFont(int32_t style, ::java::awt::geom::AffineTransform* trans);
    bool equals(::java::lang::Object* obj) override;
    /*::sun::font::AttributeValues* getAttributeValues(); (private) */
    virtual ::java::util::Map* getAttributes();
    virtual ::java::text::AttributedCharacterIterator_AttributeArray* getAvailableAttributes();
    virtual int8_t getBaselineFor(char16_t c);
    virtual ::java::lang::String* getFamily();
    virtual ::java::lang::String* getFamily(::java::util::Locale* l);

public: /* package */
    ::java::lang::String* getFamily_NoClientCode();

public:
    static Font* getFont(::java::util::Map* attributes);
    static Font* getFont(::java::lang::String* nm);
    static Font* getFont(::java::lang::String* nm, Font* font);
    /*::sun::font::Font2D* getFont2D(); (private) */
    virtual ::java::lang::String* getFontName();
    virtual ::java::lang::String* getFontName(::java::util::Locale* l);
    virtual float getItalicAngle();
    /*float getItalicAngle(::java::awt::font::FontRenderContext* frc); (private) */
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::lang::String* str, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::lang::String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::char16_tArray* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::font::LineMetrics* getLineMetrics(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::geom::Rectangle2D* getMaxCharBounds(::java::awt::font::FontRenderContext* frc);
    virtual int32_t getMissingGlyphCode();
    virtual ::java::lang::String* getName();
    virtual int32_t getNumGlyphs();
    virtual ::java::lang::String* getPSName();
    virtual ::java::awt::peer::FontPeer* getPeer();

public: /* package */
    ::java::awt::peer::FontPeer* getPeer_NoClientCode();

public:
    virtual int32_t getSize();
    virtual float getSize2D();
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::lang::String* str, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::lang::String* str, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::char16_tArray* chars, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
    virtual ::java::awt::geom::Rectangle2D* getStringBounds(::java::text::CharacterIterator* ci, int32_t beginIndex, int32_t limit, ::java::awt::font::FontRenderContext* frc);
    virtual int32_t getStyle();
    virtual ::java::awt::geom::AffineTransform* getTransform();
    virtual bool hasLayoutAttributes();
    /*static bool hasTempPermission(); (private) */
    virtual bool hasUniformLineMetrics();
    int32_t hashCode() override;
    /*void initFromValues(::sun::font::AttributeValues* values); (private) */
    /*static void initIDs(); (private) */
    virtual bool isBold();
    virtual bool isItalic();
    virtual bool isPlain();
    virtual bool isTransformed();
    virtual ::java::awt::font::GlyphVector* layoutGlyphVector(::java::awt::font::FontRenderContext* frc, ::char16_tArray* text, int32_t start, int32_t limit, int32_t flags);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    ::java::lang::String* toString() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    Font(::java::util::Map* attributes);

public: /* protected */
    Font(Font* font);

public:
    Font(::java::lang::String* name, int32_t style, int32_t size);
protected:
    Font(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static ::java::lang::String*& DIALOG();
    static ::java::lang::String*& DIALOG_INPUT();

private:
    static int32_t& EXTRA_MASK();
    static int32_t& LAYOUT_MASK();

public:
    static ::java::lang::String*& MONOSPACED();

private:
    static int32_t& PRIMARY_MASK();
    static int32_t& RECOGNIZED_MASK();

public:
    static ::java::lang::String*& SANS_SERIF();

private:
    static int32_t& SECONDARY_MASK();

public:
    static ::java::lang::String*& SERIF();

private:
    static ::java::awt::geom::AffineTransform*& identityTx();
    static ::floatArray*& ssinfo();
    virtual ::java::lang::Class* getClass0();
};
