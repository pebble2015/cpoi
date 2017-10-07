// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/font/GlyphVector.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::font::GlyphVector::GlyphVector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::font::GlyphVector::GlyphVector()
    : GlyphVector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t java::awt::font::GlyphVector::FLAG_COMPLEX_GLYPHS;
constexpr int32_t java::awt::font::GlyphVector::FLAG_HAS_POSITION_ADJUSTMENTS;
constexpr int32_t java::awt::font::GlyphVector::FLAG_HAS_TRANSFORMS;
constexpr int32_t java::awt::font::GlyphVector::FLAG_MASK;
constexpr int32_t java::awt::font::GlyphVector::FLAG_RUN_RTL;

void ::java::awt::font::GlyphVector::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::GlyphVector::ctor()");
}

int32_t java::awt::font::GlyphVector::getGlyphCharIndex(int32_t glyphIndex)
{ /* stub */
    unimplemented_(u"int32_t java::awt::font::GlyphVector::getGlyphCharIndex(int32_t glyphIndex)");
    return 0;
}

int32_tArray* java::awt::font::GlyphVector::getGlyphCharIndices(int32_t beginGlyphIndex, int32_t numEntries, ::int32_tArray* codeReturn)
{ /* stub */
    unimplemented_(u"int32_tArray* java::awt::font::GlyphVector::getGlyphCharIndices(int32_t beginGlyphIndex, int32_t numEntries, ::int32_tArray* codeReturn)");
    return 0;
}

java::awt::Shape* java::awt::font::GlyphVector::getGlyphOutline(int32_t glyphIndex, float x, float y)
{ /* stub */
    unimplemented_(u"java::awt::Shape* java::awt::font::GlyphVector::getGlyphOutline(int32_t glyphIndex, float x, float y)");
    return 0;
}

java::awt::Rectangle* java::awt::font::GlyphVector::getGlyphPixelBounds(int32_t index, FontRenderContext* renderFRC, float x, float y)
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::font::GlyphVector::getGlyphPixelBounds(int32_t index, FontRenderContext* renderFRC, float x, float y)");
    return 0;
}

int32_t java::awt::font::GlyphVector::getLayoutFlags()
{ /* stub */
    unimplemented_(u"int32_t java::awt::font::GlyphVector::getLayoutFlags()");
    return 0;
}

java::awt::Rectangle* java::awt::font::GlyphVector::getPixelBounds(FontRenderContext* renderFRC, float x, float y)
{ /* stub */
    unimplemented_(u"java::awt::Rectangle* java::awt::font::GlyphVector::getPixelBounds(FontRenderContext* renderFRC, float x, float y)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::font::GlyphVector::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.font.GlyphVector", 25);
    return c;
}

java::lang::Class* java::awt::font::GlyphVector::getClass0()
{
    return class_();
}

