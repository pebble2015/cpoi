// Generated from /POI/java/org/apache/poi/ss/format/CellFormatType.java
#include <org/apache/poi/ss/format/CellFormatType_3.hpp>

#include <java/lang/Character.hpp>
#include <org/apache/poi/ss/format/CellDateFormatter.hpp>

org::apache::poi::ss::format::CellFormatType_3::CellFormatType_3(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool org::apache::poi::ss::format::CellFormatType_3::isSpecial(char16_t ch)
{
    return ch == u'\'' || (ch <= u'' && ::java::lang::Character::isLetter(ch));
}

org::apache::poi::ss::format::CellFormatter* org::apache::poi::ss::format::CellFormatType_3::formatter(::java::lang::String* pattern)
{
    return new CellDateFormatter(pattern);
}

org::apache::poi::ss::format::CellFormatter* org::apache::poi::ss::format::CellFormatType_3::formatter(::java::util::Locale* locale, ::java::lang::String* pattern)
{
    return new CellDateFormatter(locale, pattern);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellFormatType_3::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::format::CellFormatType_3::getClass0()
{
    return class_();
}

