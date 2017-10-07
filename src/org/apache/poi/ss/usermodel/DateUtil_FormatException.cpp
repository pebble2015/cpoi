// Generated from /POI/java/org/apache/poi/ss/usermodel/DateUtil.java
#include <org/apache/poi/ss/usermodel/DateUtil_FormatException.hpp>

org::apache::poi::ss::usermodel::DateUtil_FormatException::DateUtil_FormatException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::usermodel::DateUtil_FormatException::DateUtil_FormatException(::java::lang::String* msg) 
    : DateUtil_FormatException(*static_cast< ::default_init_tag* >(0))
{
    ctor(msg);
}

void org::apache::poi::ss::usermodel::DateUtil_FormatException::ctor(::java::lang::String* msg)
{
    super::ctor(msg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::usermodel::DateUtil_FormatException::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DateUtil.FormatException", 52);
    return c;
}

java::lang::Class* org::apache::poi::ss::usermodel::DateUtil_FormatException::getClass0()
{
    return class_();
}

