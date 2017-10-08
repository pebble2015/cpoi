// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataFormatter.java
#include <org/apache/poi/hssf/usermodel/HSSFDataFormatter.hpp>

#include <org/apache/poi/util/LocaleUtil.hpp>

poi::hssf::usermodel::HSSFDataFormatter::HSSFDataFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFDataFormatter::HSSFDataFormatter(::java::util::Locale* locale) 
    : HSSFDataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

poi::hssf::usermodel::HSSFDataFormatter::HSSFDataFormatter() 
    : HSSFDataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::hssf::usermodel::HSSFDataFormatter::ctor(::java::util::Locale* locale)
{
    super::ctor(locale);
}

void poi::hssf::usermodel::HSSFDataFormatter::ctor()
{
    ctor(::poi::util::LocaleUtil::getUserLocale());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFDataFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDataFormatter", 47);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFDataFormatter::getClass0()
{
    return class_();
}

