// Generated from /POI/java/org/apache/poi/ss/format/CellFormatResult.java
#include <org/apache/poi/ss/format/CellFormatResult.hpp>

#include <java/awt/Color.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>

poi::ss::format::CellFormatResult::CellFormatResult(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellFormatResult::CellFormatResult(bool applies, ::java::lang::String* text, ::java::awt::Color* textColor)  /* throws(IllegalArgumentException) */
    : CellFormatResult(*static_cast< ::default_init_tag* >(0))
{
    ctor(applies,text,textColor);
}

void poi::ss::format::CellFormatResult::ctor(bool applies, ::java::lang::String* text, ::java::awt::Color* textColor) /* throws(IllegalArgumentException) */
{
    super::ctor();
    this->applies = applies;
    if(text == nullptr)
        throw new ::java::lang::IllegalArgumentException(u"CellFormatResult text may not be null"_j);

    this->text = text;
    this->textColor = (applies ? textColor : static_cast< ::java::awt::Color* >(nullptr));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormatResult::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellFormatResult", 41);
    return c;
}

java::lang::Class* poi::ss::format::CellFormatResult::getClass0()
{
    return class_();
}

