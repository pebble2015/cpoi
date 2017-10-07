// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_1.hpp>

org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_1::DataValidationEvaluator_ValidationEnum_1(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_1::isValidValue(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    return true;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_1::getClass0()
{
    return class_();
}

