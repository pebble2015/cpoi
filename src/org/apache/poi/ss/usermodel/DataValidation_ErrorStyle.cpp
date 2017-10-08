// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidation.java
#include <org/apache/poi/ss/usermodel/DataValidation_ErrorStyle.hpp>

poi::ss::usermodel::DataValidation_ErrorStyle::DataValidation_ErrorStyle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataValidation_ErrorStyle::DataValidation_ErrorStyle()
    : DataValidation_ErrorStyle(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::ss::usermodel::DataValidation_ErrorStyle::STOP;

constexpr int32_t poi::ss::usermodel::DataValidation_ErrorStyle::WARNING;

constexpr int32_t poi::ss::usermodel::DataValidation_ErrorStyle::INFO;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataValidation_ErrorStyle::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataValidation.ErrorStyle", 53);
    return c;
}

java::lang::Class* poi::ss::usermodel::DataValidation_ErrorStyle::getClass0()
{
    return class_();
}

