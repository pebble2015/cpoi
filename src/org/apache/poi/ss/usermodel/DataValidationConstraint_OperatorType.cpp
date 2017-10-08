// Generated from /POI/java/org/apache/poi/ss/usermodel/DataValidationConstraint.java
#include <org/apache/poi/ss/usermodel/DataValidationConstraint_OperatorType.hpp>

#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/String.hpp>

poi::ss::usermodel::DataValidationConstraint_OperatorType::DataValidationConstraint_OperatorType(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DataValidationConstraint_OperatorType::DataValidationConstraint_OperatorType() 
    : DataValidationConstraint_OperatorType(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::usermodel::DataValidationConstraint_OperatorType::ctor()
{
    super::ctor();
}

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::BETWEEN;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::NOT_BETWEEN;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::EQUAL;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::NOT_EQUAL;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::GREATER_THAN;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::LESS_THAN;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::GREATER_OR_EQUAL;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::LESS_OR_EQUAL;

constexpr int32_t poi::ss::usermodel::DataValidationConstraint_OperatorType::IGNORED;

void poi::ss::usermodel::DataValidationConstraint_OperatorType::validateSecondArg(int32_t comparisonOperator, ::java::lang::String* paramValue)
{
    clinit();
    switch (comparisonOperator) {
    case BETWEEN:
    case NOT_BETWEEN:
        if(paramValue == nullptr) {
            throw new ::java::lang::IllegalArgumentException(u"expr2 must be supplied for 'between' comparisons"_j);
        }
    }

}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DataValidationConstraint_OperatorType::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DataValidationConstraint.OperatorType", 65);
    return c;
}

java::lang::Class* poi::ss::usermodel::DataValidationConstraint_OperatorType::getClass0()
{
    return class_();
}

