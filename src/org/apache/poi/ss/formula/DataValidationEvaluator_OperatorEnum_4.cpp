// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_OperatorEnum_4.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::DataValidationEvaluator_OperatorEnum_4::DataValidationEvaluator_OperatorEnum_4(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool org::apache::poi::ss::formula::DataValidationEvaluator_OperatorEnum_4::isValid(::java::lang::Double* cellValue, ::java::lang::Double* v1, ::java::lang::Double* v2)
{
    return npc(cellValue)->compareTo(v1) != 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_OperatorEnum_4::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_OperatorEnum_4::getClass0()
{
    return class_();
}

