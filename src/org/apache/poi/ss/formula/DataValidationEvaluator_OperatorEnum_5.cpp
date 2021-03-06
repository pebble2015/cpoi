// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_5.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::DataValidationEvaluator_OperatorEnum_5::DataValidationEvaluator_OperatorEnum_5(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool poi::ss::formula::DataValidationEvaluator_OperatorEnum_5::isValid(::java::lang::Double* cellValue, ::java::lang::Double* v1, ::java::lang::Double* v2)
{
    return npc(cellValue)->compareTo(v1) > 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator_OperatorEnum_5::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator_OperatorEnum_5::getClass0()
{
    return class_();
}

