// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidationConstraint.java
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_ValidationType.hpp>

poi::ss::usermodel::DataValidationConstraint_ValidationType::DataValidationConstraint_ValidationType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataValidationConstraint_ValidationType::DataValidationConstraint_ValidationType() 
    : DataValidationConstraint_ValidationType(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::usermodel::DataValidationConstraint_ValidationType::ctor()
{
    super::ctor();
}

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::ANY;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::INTEGER;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::DECIMAL;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::LIST;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::DATE;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::TIME;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::TEXT_LENGTH;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_ValidationType::FORMULA;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataValidationConstraint_ValidationType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataValidationConstraint.ValidationType", 67);
    return c;
}

java::lang::Class* poi::ss::usermodel::DataValidationConstraint_ValidationType::getClass0()
{
    return class_();
}

