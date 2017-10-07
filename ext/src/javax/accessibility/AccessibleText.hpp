// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/awt/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <javax/accessibility/fwd-POI.hpp>
#include <javax/swing/text/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct javax::accessibility::AccessibleText
    : public virtual ::java::lang::Object
{
    static constexpr int32_t CHARACTER { int32_t(1) };
    static constexpr int32_t SENTENCE { int32_t(3) };
    static constexpr int32_t WORD { int32_t(2) };

    virtual ::java::lang::String* getAfterIndex(int32_t part, int32_t index) = 0;
    virtual ::java::lang::String* getAtIndex(int32_t part, int32_t index) = 0;
    virtual ::java::lang::String* getBeforeIndex(int32_t part, int32_t index) = 0;
    virtual int32_t getCaretPosition() = 0;
    virtual int32_t getCharCount() = 0;
    virtual ::javax::swing::text::AttributeSet* getCharacterAttribute(int32_t i) = 0;
    virtual ::java::awt::Rectangle* getCharacterBounds(int32_t i) = 0;
    virtual int32_t getIndexAtPoint(::java::awt::Point* p) = 0;
    virtual ::java::lang::String* getSelectedText() = 0;
    virtual int32_t getSelectionEnd() = 0;
    virtual int32_t getSelectionStart() = 0;

    // Generated
    static ::java::lang::Class *class_();
};
