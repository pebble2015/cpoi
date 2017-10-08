// Generated from /POI/java/org/apache/poi/ss/format/CellNumberFormatter.java
#include <org/apache/poi/ss/format/CellNumberFormatter_Special.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>

poi::ss::format::CellNumberFormatter_Special::CellNumberFormatter_Special(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellNumberFormatter_Special::CellNumberFormatter_Special(char16_t ch, int32_t pos) 
    : CellNumberFormatter_Special(*static_cast< ::default_init_tag* >(0))
{
    ctor(ch,pos);
}

void poi::ss::format::CellNumberFormatter_Special::ctor(char16_t ch, int32_t pos)
{
    super::ctor();
    this->ch = ch;
    this->pos = pos;
}

java::lang::String* poi::ss::format::CellNumberFormatter_Special::toString()
{
    return ::java::lang::StringBuilder().append(u"'"_j)->append(ch)
        ->append(u"' @ "_j)
        ->append(pos)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellNumberFormatter_Special::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellNumberFormatter.Special", 52);
    return c;
}

java::lang::Class* poi::ss::format::CellNumberFormatter_Special::getClass0()
{
    return class_();
}

