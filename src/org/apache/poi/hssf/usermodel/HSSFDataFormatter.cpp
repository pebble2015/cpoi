// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataFormatter.java
#include <org/apache/poi/hssf/usermodel/HSSFDataFormatter.hpp>

#include <org/apache/poi/util/LocaleUtil.hpp>

org::apache::poi::hssf::usermodel::HSSFDataFormatter::HSSFDataFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFDataFormatter::HSSFDataFormatter(::java::util::Locale* locale) 
    : HSSFDataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

org::apache::poi::hssf::usermodel::HSSFDataFormatter::HSSFDataFormatter() 
    : HSSFDataFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::hssf::usermodel::HSSFDataFormatter::ctor(::java::util::Locale* locale)
{
    super::ctor(locale);
}

void org::apache::poi::hssf::usermodel::HSSFDataFormatter::ctor()
{
    ctor(::org::apache::poi::util::LocaleUtil::getUserLocale());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDataFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDataFormatter", 47);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDataFormatter::getClass0()
{
    return class_();
}

