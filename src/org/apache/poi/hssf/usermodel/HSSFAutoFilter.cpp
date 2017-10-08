// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFAutoFilter.java
#include <org/apache/poi/hssf/usermodel/HSSFAutoFilter.hpp>

#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>

poi::hssf::usermodel::HSSFAutoFilter::HSSFAutoFilter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFAutoFilter::HSSFAutoFilter(HSSFSheet* sheet) 
    : HSSFAutoFilter(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet);
}

void poi::hssf::usermodel::HSSFAutoFilter::ctor(HSSFSheet* sheet)
{
    super::ctor();
    _sheet = sheet;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFAutoFilter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFAutoFilter", 44);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFAutoFilter::getClass0()
{
    return class_();
}

