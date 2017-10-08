// Generated from /POI/java/org/apache/poi/ss/format/CellFormat.java
#include <org/apache/poi/ss/format/CellFormat_createGeneralFormat_1.hpp>

#include <java/lang/String.hpp>
#include <org/apache/poi/ss/format/CellFormatResult.hpp>
#include <org/apache/poi/ss/format/CellGeneralFormatter.hpp>

poi::ss::format::CellFormat_createGeneralFormat_1::CellFormat_createGeneralFormat_1(::java::util::Locale* locale_, ::java::util::Locale* locale, ::java::lang::String* format)
    : super(*static_cast< ::default_init_tag* >(0))
    , locale(locale_)
{
    clinit();
    ctor(locale, format);
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat_createGeneralFormat_1::apply(::java::lang::Object* value)
{
    auto text = (new CellGeneralFormatter(locale))->format(value);
    return new CellFormatResult(true, text, nullptr);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormat_createGeneralFormat_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat_createGeneralFormat_1::apply(::poi::ss::usermodel::Cell* c)
{
    return super::apply(c);
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat_createGeneralFormat_1::apply(::javax::swing::JLabel* label, ::java::lang::Object* value)
{
    return super::apply(label, value);
}

poi::ss::format::CellFormatResult* poi::ss::format::CellFormat_createGeneralFormat_1::apply(::javax::swing::JLabel* label, ::poi::ss::usermodel::Cell* c)
{
    return super::apply(label, c);
}

java::lang::Class* poi::ss::format::CellFormat_createGeneralFormat_1::getClass0()
{
    return class_();
}

