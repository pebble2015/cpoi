// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/awt/geom/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/font/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace awt
    {
typedef ::SubArray< ::java::awt::Shape, ::java::lang::ObjectArray > ShapeArray;
    } // awt
} // java

struct default_init_tag;

class java::awt::font::TextLayout final
    : public virtual ::java::lang::Object
    , public ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr float ALREADY_JUSTIFIED { -53.9f };
    static TextLayout_CaretPolicy* DEFAULT_CARET_POLICY_;
    int8_t baseline {  };
    ::floatArray* baselineOffsets {  };
    ::java::awt::geom::Rectangle2D* boundsRect {  };
    bool cacheIsValid {  };
    bool caretsInLigaturesAreAllowed {  };
    int32_t characterCount {  };
    static float dx_;
    static float dy_;
    int32_t hashCodeCache {  };
    bool isVerticalLine {  };
    float justifyRatio {  };
    TextLine_TextLineMetrics* lineMetrics {  };
    ::java::awt::geom::Rectangle2D* naturalBounds {  };
    TextLine* textLine {  };
    float visibleAdvance {  };

protected:
    void ctor(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc);
    void ctor(::java::lang::String* string, ::java::awt::Font* font, FontRenderContext* frc);
    void ctor(::java::lang::String* string, ::java::util::Map* attributes, FontRenderContext* frc);
    void ctor(TextLine* textLine, int8_t baseline, ::floatArray* baselineOffsets, float justifyRatio);
    /*::java::awt::geom::GeneralPath* boundingShape(::doubleArray* path0, ::doubleArray* path1); (private) */
    /*void buildCache(); (private) */
    /*::java::awt::geom::GeneralPath* caretBoundingShape(int32_t caret0, int32_t caret1, ::java::awt::geom::Rectangle2D* bounds); (private) */
    /*bool caretIsValid(int32_t caret); (private) */
    /*TextHitInfo* caretToHit(int32_t caret); (private) */
    /*float caretToPointDistance(::floatArray* caretInfo, float x, float y); (private) */
    /*void checkTextHit(TextHitInfo* hit); (private) */

public: /* protected */
    ::java::lang::Object* clone() override;

public:
    void draw(::java::awt::Graphics2D* g2, float x, float y);
    /*void ensureCache(); (private) */
    bool equals(::java::lang::Object* obj) override;
    bool equals(TextLayout* rhs);
    /*void fastInit(::char16_tArray* chars, ::java::awt::Font* font, ::java::util::Map* attrs, FontRenderContext* frc); (private) */
    float getAdvance();
    float getAscent();
    int8_t getBaseline();

public: /* package */
    static int8_t getBaselineFromGraphic(GraphicAttribute* graphic);

public:
    ::floatArray* getBaselineOffsets();
    ::java::awt::Shape* getBlackBoxBounds(int32_t firstEndpoint, int32_t secondEndpoint);
    ::java::awt::geom::Rectangle2D* getBounds();
    ::floatArray* getCaretInfo(TextHitInfo* hit);
    ::floatArray* getCaretInfo(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds);
    /*::floatArray* getCaretInfo(int32_t caret, ::java::awt::geom::Rectangle2D* bounds, ::floatArray* info); (private) */
    /*::floatArray* getCaretInfoTestInternal(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds); (private) */
    /*::doubleArray* getCaretPath(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds); (private) */
    /*::doubleArray* getCaretPath(int32_t caret, ::java::awt::geom::Rectangle2D* bounds, bool clipToBounds); (private) */
    ::java::awt::Shape* getCaretShape(TextHitInfo* hit);
    ::java::awt::Shape* getCaretShape(TextHitInfo* hit, ::java::awt::geom::Rectangle2D* bounds);
    ::java::awt::ShapeArray* getCaretShapes(int32_t offset);
    ::java::awt::ShapeArray* getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds);
    ::java::awt::ShapeArray* getCaretShapes(int32_t offset, ::java::awt::geom::Rectangle2D* bounds, TextLayout_CaretPolicy* policy);
    int32_t getCharacterCount();
    int8_t getCharacterLevel(int32_t index);
    float getDescent();
    TextLayout* getJustifiedLayout(float justificationWidth);
    LayoutPath* getLayoutPath();
    float getLeading();
    ::java::awt::Shape* getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint);
    ::java::awt::Shape* getLogicalHighlightShape(int32_t firstEndpoint, int32_t secondEndpoint, ::java::awt::geom::Rectangle2D* bounds);
    ::int32_tArray* getLogicalRangesForVisualSelection(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint);
    /*::java::awt::geom::Rectangle2D* getNaturalBounds(); (private) */
    TextHitInfo* getNextLeftHit(TextHitInfo* hit);
    TextHitInfo* getNextLeftHit(int32_t offset);
    TextHitInfo* getNextLeftHit(int32_t offset, TextLayout_CaretPolicy* policy);
    TextHitInfo* getNextRightHit(TextHitInfo* hit);
    TextHitInfo* getNextRightHit(int32_t offset);
    TextHitInfo* getNextRightHit(int32_t offset, TextLayout_CaretPolicy* policy);
    ::java::awt::Shape* getOutline(::java::awt::geom::AffineTransform* tx);
    ::java::awt::Rectangle* getPixelBounds(FontRenderContext* frc, float x, float y);
    /*TextHitInfo* getStrongHit(TextHitInfo* hit1, TextHitInfo* hit2); (private) */

public: /* package */
    TextLine* getTextLineForTesting();

public:
    float getVisibleAdvance();
    ::java::awt::Shape* getVisualHighlightShape(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint);
    ::java::awt::Shape* getVisualHighlightShape(TextHitInfo* firstEndpoint, TextHitInfo* secondEndpoint, ::java::awt::geom::Rectangle2D* bounds);
    TextHitInfo* getVisualOtherHit(TextHitInfo* hit);

public: /* protected */
    void handleJustify(float justificationWidth);

public:
    int32_t hashCode() override;
    TextHitInfo* hitTestChar(float x, float y);
    TextHitInfo* hitTestChar(float x, float y, ::java::awt::geom::Rectangle2D* bounds);
    /*int32_t hitToCaret(TextHitInfo* hit); (private) */
    void hitToPoint(TextHitInfo* hit, ::java::awt::geom::Point2D* point);
    bool isLeftToRight();
    bool isVertical();
    /*::java::awt::geom::GeneralPath* leftShape(::java::awt::geom::Rectangle2D* bounds); (private) */
    /*void paragraphInit(int8_t aBaseline, ::sun::font::CoreMetrics* lm, ::java::util::Map* paragraphAttrs, ::char16_tArray* text); (private) */
    /*static ::java::awt::geom::GeneralPath* pathToShape(::doubleArray* path, bool close, ::sun::font::LayoutPathImpl* lp); (private) */
    /*::java::awt::geom::GeneralPath* rightShape(::java::awt::geom::Rectangle2D* bounds); (private) */
    /*static int32_t sameBaselineUpTo(::java::awt::Font* font, ::char16_tArray* text, int32_t start, int32_t limit); (private) */
    /*static ::java::awt::Font* singleFont(::char16_tArray* text, int32_t start, int32_t limit, ::java::util::Map* attributes); (private) */
    /*void standardInit(::java::text::AttributedCharacterIterator* text, ::char16_tArray* chars, FontRenderContext* frc); (private) */
    ::java::lang::String* toString() override;

    // Generated
    TextLayout(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc);
    TextLayout(::java::lang::String* string, ::java::awt::Font* font, FontRenderContext* frc);
    TextLayout(::java::lang::String* string, ::java::util::Map* attributes, FontRenderContext* frc);

public: /* package */
    TextLayout(TextLine* textLine, int8_t baseline, ::floatArray* baselineOffsets, float justifyRatio);
protected:
    TextLayout(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static TextLayout_CaretPolicy*& DEFAULT_CARET_POLICY();

private:
    static float& dx();
    static float& dy();
    virtual ::java::lang::Class* getClass0();
};
