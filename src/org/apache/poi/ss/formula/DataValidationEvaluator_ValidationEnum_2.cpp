// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_2.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_2::DataValidationEvaluator_ValidationEnum_2(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_2::isValidValue(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    if(super::isValidValue(cell, context)) {
        auto const value = npc(cell)->getNumericCellValue();
        return npc(::java::lang::Double::valueOf(value))->compareTo(::java::lang::Double::valueOf(static_cast< double >(static_cast< int32_t >(value)))) == 0;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_2::getClass0()
{
    return class_();
}

