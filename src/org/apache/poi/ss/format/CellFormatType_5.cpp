// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java
#include <org/apache/poi/ss/format/CellFormatType_5.hpp>

#include <org/apache/poi/ss/format/CellTextFormatter.hpp>

poi::ss::format::CellFormatType_5::CellFormatType_5(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool poi::ss::format::CellFormatType_5::isSpecial(char16_t ch)
{
    return false;
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatType_5::formatter(::java::lang::String* pattern)
{
    return new CellTextFormatter(pattern);
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatType_5::formatter(::java::util::Locale* locale, ::java::lang::String* pattern)
{
    return new CellTextFormatter(pattern);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormatType_5::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::format::CellFormatType_5::getClass0()
{
    return class_();
}

