// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class java::awt::font::GlyphVector
    : public virtual ::java::lang::Object
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t FLAG_COMPLEX_GLYPHS { int32_t(8) };
    static constexpr int32_t FLAG_HAS_POSITION_ADJUSTMENTS { int32_t(2) };
    static constexpr int32_t FLAG_HAS_TRANSFORMS { int32_t(1) };
    static constexpr int32_t FLAG_MASK { int32_t(15) };
    static constexpr int32_t FLAG_RUN_RTL { int32_t(4) };

protected:
    void ctor();

public:
    virtual bool equals(GlyphVector* set) = 0;
    virtual ::java::awt::Font* getFont() = 0;
    virtual FontRenderContext* getFontRenderContext() = 0;
    virtual int32_t getGlyphCharIndex(int32_t glyphIndex);
    virtual ::int32_tArray* getGlyphCharIndices(int32_t beginGlyphIndex, int32_t numEntries, ::int32_tArray* codeReturn);
    virtual int32_t getGlyphCode(int32_t glyphIndex) = 0;
    virtual ::int32_tArray* getGlyphCodes(int32_t beginGlyphIndex, int32_t numEntries, ::int32_tArray* codeReturn) = 0;
    virtual GlyphJustificationInfo* getGlyphJustificationInfo(int32_t glyphIndex) = 0;
    virtual ::java::awt::Shape* getGlyphLogicalBounds(int32_t glyphIndex) = 0;
    virtual GlyphMetrics* getGlyphMetrics(int32_t glyphIndex) = 0;
    virtual ::java::awt::Shape* getGlyphOutline(int32_t glyphIndex) = 0;
    virtual ::java::awt::Shape* getGlyphOutline(int32_t glyphIndex, float x, float y);
    virtual ::java::awt::Rectangle* getGlyphPixelBounds(int32_t index, FontRenderContext* renderFRC, float x, float y);
    virtual ::java::awt::geom::Point2D* getGlyphPosition(int32_t glyphIndex) = 0;
    virtual ::floatArray* getGlyphPositions(int32_t beginGlyphIndex, int32_t numEntries, ::floatArray* positionReturn) = 0;
    virtual ::java::awt::geom::AffineTransform* getGlyphTransform(int32_t glyphIndex) = 0;
    virtual ::java::awt::Shape* getGlyphVisualBounds(int32_t glyphIndex) = 0;
    virtual int32_t getLayoutFlags();
    virtual ::java::awt::geom::Rectangle2D* getLogicalBounds() = 0;
    virtual int32_t getNumGlyphs() = 0;
    virtual ::java::awt::Shape* getOutline() = 0;
    virtual ::java::awt::Shape* getOutline(float x, float y) = 0;
    virtual ::java::awt::Rectangle* getPixelBounds(FontRenderContext* renderFRC, float x, float y);
    virtual ::java::awt::geom::Rectangle2D* getVisualBounds() = 0;
    virtual void performDefaultLayout() = 0;
    virtual void setGlyphPosition(int32_t glyphIndex, ::java::awt::geom::Point2D* newPos) = 0;
    virtual void setGlyphTransform(int32_t glyphIndex, ::java::awt::geom::AffineTransform* newTX) = 0;

    // Generated
    GlyphVector();
protected:
    GlyphVector(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
