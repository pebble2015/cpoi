// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/font/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::awt::font::LineBreakMeasurer final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::java::text::BreakIterator* breakIter {  };
    CharArrayIterator* charIter {  };
    int32_t limit {  };
    TextMeasurer* measurer {  };
    int32_t pos {  };
    int32_t start {  };

protected:
    void ctor(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc);
    void ctor(::java::text::AttributedCharacterIterator* text, ::java::text::BreakIterator* breakIter, FontRenderContext* frc);

public:
    void deleteChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t deletePos);
    int32_t getPosition();
    void insertChar(::java::text::AttributedCharacterIterator* newParagraph, int32_t insertPos);
    TextLayout* nextLayout(float wrappingWidth);
    TextLayout* nextLayout(float wrappingWidth, int32_t offsetLimit, bool requireNextWord);
    int32_t nextOffset(float wrappingWidth);
    int32_t nextOffset(float wrappingWidth, int32_t offsetLimit, bool requireNextWord);
    void setPosition(int32_t newPosition);

    // Generated
    LineBreakMeasurer(::java::text::AttributedCharacterIterator* text, FontRenderContext* frc);
    LineBreakMeasurer(::java::text::AttributedCharacterIterator* text, ::java::text::BreakIterator* breakIter, FontRenderContext* frc);
protected:
    LineBreakMeasurer(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
