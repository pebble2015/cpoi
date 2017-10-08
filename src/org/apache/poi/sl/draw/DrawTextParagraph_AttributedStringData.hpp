// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::sl::draw::DrawTextParagraph_AttributedStringData
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    ::java::text::AttributedCharacterIterator_Attribute* attribute {  };
    ::java::lang::Object* value {  };
    int32_t beginIndex {  }, endIndex {  };
protected:
    void ctor(::java::text::AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex);

    // Generated

public: /* package */
    DrawTextParagraph_AttributedStringData(::java::text::AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex);
protected:
    DrawTextParagraph_AttributedStringData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawTextParagraph;
    friend class DrawTextParagraph_XlinkAttribute;
    friend class DrawTextParagraph_getParagraphShape_1;
};
