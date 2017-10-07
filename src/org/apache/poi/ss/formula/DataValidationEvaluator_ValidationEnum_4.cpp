// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_4.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellType.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_4::DataValidationEvaluator_ValidationEnum_4(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_4::isValidValue(::org::apache::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    if(!DataValidationEvaluator::isType(cell, ::org::apache::poi::ss::usermodel::CellType::STRING))
        return false;

    auto v = npc(cell)->getStringCellValue();
    return isValidNumericValue(::java::lang::Double::valueOf(static_cast< double >(npc(v)->length())), context);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_4::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::DataValidationEvaluator_ValidationEnum_4::getClass0()
{
    return class_();
}

