// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java

#pragma once

#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/sl/draw/fwd-POI.hpp>
#include <java/text/AttributedCharacterIterator_Attribute.hpp>

struct default_init_tag;

class poi::sl::draw::DrawTextParagraph_XlinkAttribute
    : public ::java::text::AttributedCharacterIterator_Attribute
{

public:
    typedef ::java::text::AttributedCharacterIterator_Attribute super;
protected:
    void ctor(::java::lang::String* name);

public: /* protected */
    ::java::lang::Object* readResolve() /* throws(InvalidObjectException) */ override;

    // Generated

public: /* package */
    DrawTextParagraph_XlinkAttribute(::java::lang::String* name);
protected:
    DrawTextParagraph_XlinkAttribute(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class DrawTextParagraph;
    friend class DrawTextParagraph_AttributedStringData;
    friend class DrawTextParagraph_getParagraphShape_1;
};
