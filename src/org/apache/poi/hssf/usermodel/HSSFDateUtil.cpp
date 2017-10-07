// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDateUtil.java
#include <org/apache/poi/hssf/usermodel/HSSFDateUtil.hpp>

#include <org/apache/poi/ss/usermodel/DateUtil.hpp>

org::apache::poi::hssf::usermodel::HSSFDateUtil::HSSFDateUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFDateUtil::HSSFDateUtil()
    : HSSFDateUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

int32_t org::apache::poi::hssf::usermodel::HSSFDateUtil::absoluteDay(::java::util::Calendar* cal, bool use1904windowing)
{
    clinit();
    return ::org::apache::poi::ss::usermodel::DateUtil::absoluteDay(cal, use1904windowing);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDateUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDateUtil", 42);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDateUtil::getClass0()
{
    return class_();
}

