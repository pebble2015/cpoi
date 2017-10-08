// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java
#include <org/apache/poi/ss/format/CellFormatType_1.hpp>

#include <org/apache/poi/ss/format/CellGeneralFormatter.hpp>

poi::ss::format::CellFormatType_1::CellFormatType_1(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool poi::ss::format::CellFormatType_1::isSpecial(char16_t ch)
{
    return false;
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatType_1::formatter(::java::lang::String* pattern)
{
    return new CellGeneralFormatter();
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatType_1::formatter(::java::util::Locale* locale, ::java::lang::String* pattern)
{
    return new CellGeneralFormatter(locale);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormatType_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::format::CellFormatType_1::getClass0()
{
    return class_();
}

