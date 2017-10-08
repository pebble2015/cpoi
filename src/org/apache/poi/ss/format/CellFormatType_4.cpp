// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java
#include <org/apache/poi/ss/format/CellFormatType_4.hpp>

#include <org/apache/poi/ss/format/CellElapsedFormatter.hpp>

poi::ss::format::CellFormatType_4::CellFormatType_4(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool poi::ss::format::CellFormatType_4::isSpecial(char16_t ch)
{
    return false;
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatType_4::formatter(::java::lang::String* pattern)
{
    return new CellElapsedFormatter(pattern);
}

poi::ss::format::CellFormatter* poi::ss::format::CellFormatType_4::formatter(::java::util::Locale* locale, ::java::lang::String* pattern)
{
    return new CellElapsedFormatter(pattern);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellFormatType_4::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::format::CellFormatType_4::getClass0()
{
    return class_();
}

