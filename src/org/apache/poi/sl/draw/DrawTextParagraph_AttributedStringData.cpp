// Generated from /POI/java/org/apache/poi/sl/draw/DrawTextParagraph.java
#include <org/apache/poi/sl/draw/DrawTextParagraph_AttributedStringData.hpp>

#include <java/lang/Object.hpp>
#include <java/text/AttributedCharacterIterator_Attribute.hpp>

poi::sl::draw::DrawTextParagraph_AttributedStringData::DrawTextParagraph_AttributedStringData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::sl::draw::DrawTextParagraph_AttributedStringData::DrawTextParagraph_AttributedStringData(::java::text::AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex) 
    : DrawTextParagraph_AttributedStringData(*static_cast< ::default_init_tag* >(0))
{
    ctor(attribute,value,beginIndex,endIndex);
}

void poi::sl::draw::DrawTextParagraph_AttributedStringData::ctor(::java::text::AttributedCharacterIterator_Attribute* attribute, ::java::lang::Object* value, int32_t beginIndex, int32_t endIndex)
{
    super::ctor();
    this->attribute = attribute;
    this->value = value;
    this->beginIndex = beginIndex;
    this->endIndex = endIndex;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::sl::draw::DrawTextParagraph_AttributedStringData::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.sl.draw.DrawTextParagraph.AttributedStringData", 61);
    return c;
}

java::lang::Class* poi::sl::draw::DrawTextParagraph_AttributedStringData::getClass0()
{
    return class_();
}

