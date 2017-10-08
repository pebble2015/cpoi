// Generated from /POI/java/org/apache/poi/ss/usermodel/ComparisonOperator.java
#include <org/apache/poi/ss/usermodel/ComparisonOperator.hpp>

poi::ss::usermodel::ComparisonOperator::ComparisonOperator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::ComparisonOperator::ComparisonOperator()
    : ComparisonOperator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int8_t poi::ss::usermodel::ComparisonOperator::NO_COMPARISON;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::BETWEEN;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::NOT_BETWEEN;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::EQUAL;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::NOT_EQUAL;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::GT;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::LT;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::GE;

constexpr int8_t poi::ss::usermodel::ComparisonOperator::LE;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::ComparisonOperator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.ComparisonOperator", 46);
    return c;
}

java::lang::Class* poi::ss::usermodel::ComparisonOperator::getClass0()
{
    return class_();
}

