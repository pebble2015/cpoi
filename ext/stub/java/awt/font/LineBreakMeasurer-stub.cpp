// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/awt/font/LineBreakMeasurer.hpp>

extern void unimplemented_(const char16_t* name);
java::awt::font::LineBreakMeasurer::LineBreakMeasurer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::awt::font::LineBreakMeasurer::LineBreakMeasurer(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc)
    : LineBreakMeasurer(*static_cast< ::default_init_tag* >(0))
{
    ctor(text, frc);
}

java::awt::font::LineBreakMeasurer::LineBreakMeasurer(::java::text::AttributedCharacterIterator* text, ::java::text::BreakIterator* breakIter, FontRenderContext* frc)
    : LineBreakMeasurer(*static_cast< ::default_init_tag* >(0))
{
    ctor(text, breakIter, frc);
}


void ::java::awt::font::LineBreakMeasurer::ctor(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::LineBreakMeasurer::ctor(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc)");
}

void ::java::awt::font::LineBreakMeasurer::ctor(::java::text::AttributedCharacterIterator* text, ::java::text::BreakIterator* breakIter, FontRenderContext* frc)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::awt::font::LineBreakMeasurer::ctor(::java::text::AttributedCharacterIterator* text, ::java::text::BreakIterator* breakIter, FontRenderContext* frc)");
}

void java::awt::font::LineBreakMeasurer::deleteChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t deletePos)
{ /* stub */
    unimplemented_(u"void java::awt::font::LineBreakMeasurer::deleteChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t deletePos)");
}

int32_t java::awt::font::LineBreakMeasurer::getPosition()
{ /* stub */
    unimplemented_(u"int32_t java::awt::font::LineBreakMeasurer::getPosition()");
    return 0;
}

void java::awt::font::LineBreakMeasurer::insertChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t insertPos)
{ /* stub */
    unimplemented_(u"void java::awt::font::LineBreakMeasurer::insertChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t insertPos)");
}

java::awt::font::TextLayout* java::awt::font::LineBreakMeasurer::nextLayout(float wrappingWidth)
{ /* stub */
    unimplemented_(u"java::awt::font::TextLayout* java::awt::font::LineBreakMeasurer::nextLayout(float wrappingWidth)");
    return 0;
}

java::awt::font::TextLayout* java::awt::font::LineBreakMeasurer::nextLayout(float wrappingWidth, int32_t offsetLimit, bool requireNextWord)
{ /* stub */
    unimplemented_(u"java::awt::font::TextLayout* java::awt::font::LineBreakMeasurer::nextLayout(float wrappingWidth, int32_t offsetLimit, bool requireNextWord)");
    return 0;
}

int32_t java::awt::font::LineBreakMeasurer::nextOffset(float wrappingWidth)
{ /* stub */
    unimplemented_(u"int32_t java::awt::font::LineBreakMeasurer::nextOffset(float wrappingWidth)");
    return 0;
}

int32_t java::awt::font::LineBreakMeasurer::nextOffset(float wrappingWidth, int32_t offsetLimit, bool requireNextWord)
{ /* stub */
    unimplemented_(u"int32_t java::awt::font::LineBreakMeasurer::nextOffset(float wrappingWidth, int32_t offsetLimit, bool requireNextWord)");
    return 0;
}

void java::awt::font::LineBreakMeasurer::setPosition(int32_t newPosition)
{ /* stub */
    unimplemented_(u"void java::awt::font::LineBreakMeasurer::setPosition(int32_t newPosition)");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::awt::font::LineBreakMeasurer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.awt.font.LineBreakMeasurer", 31);
    return c;
}

java::lang::Class* java::awt::font::LineBreakMeasurer::getClass0()
{
    return class_();
}

