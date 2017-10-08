// Generated from /POI/java/org/apache/poi/hssf/OldExcelFormatException.java
#include <org/apache/poi/hssf/OldExcelFormatException.hpp>

poi::hssf::OldExcelFormatException::OldExcelFormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::OldExcelFormatException::OldExcelFormatException(::java::lang::String* s) 
    : OldExcelFormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

void poi::hssf::OldExcelFormatException::ctor(::java::lang::String* s)
{
    super::ctor(s);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::OldExcelFormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.OldExcelFormatException", 43);
    return c;
}

java::lang::Class* poi::hssf::OldExcelFormatException::getClass0()
{
    return class_();
}

