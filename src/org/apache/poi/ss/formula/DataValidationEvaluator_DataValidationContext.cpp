// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_DataValidationContext.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/usermodel/DataValidation.hpp>
#include <org/apache/poi/ss/usermodel/DataValidationConstraint.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <org/apache/poi/ss/util/CellReference.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::DataValidationEvaluator_DataValidationContext::DataValidationEvaluator_DataValidationContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::DataValidationEvaluator_DataValidationContext::DataValidationEvaluator_DataValidationContext(::poi::ss::usermodel::DataValidation* dv, DataValidationEvaluator* dve, ::poi::ss::util::CellRangeAddressBase* region, ::poi::ss::util::CellReference* target) 
    : DataValidationEvaluator_DataValidationContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(dv,dve,region,target);
}

void poi::ss::formula::DataValidationEvaluator_DataValidationContext::ctor(::poi::ss::usermodel::DataValidation* dv, DataValidationEvaluator* dve, ::poi::ss::util::CellRangeAddressBase* region, ::poi::ss::util::CellReference* target)
{
    super::ctor();
    this->dv = dv;
    this->dve = dve;
    this->region = region;
    this->target = target;
}

poi::ss::usermodel::DataValidation* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getValidation()
{
    return dv;
}

poi::ss::formula::DataValidationEvaluator* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getEvaluator()
{
    return dve;
}

poi::ss::util::CellRangeAddressBase* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getRegion()
{
    return region;
}

poi::ss::util::CellReference* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getTarget()
{
    return target;
}

int32_t poi::ss::formula::DataValidationEvaluator_DataValidationContext::getOffsetColumns()
{
    return npc(target)->getCol() - npc(region)->getFirstColumn();
}

int32_t poi::ss::formula::DataValidationEvaluator_DataValidationContext::getOffsetRows()
{
    return npc(target)->getRow() - npc(region)->getFirstRow();
}

int32_t poi::ss::formula::DataValidationEvaluator_DataValidationContext::getSheetIndex()
{
    return npc(npc(dve)->getWorkbookEvaluator())->getSheetIndex(npc(target)->getSheetName());
}

java::lang::String* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getFormula1()
{
    return npc(npc(dv)->getValidationConstraint())->getFormula1();
}

java::lang::String* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getFormula2()
{
    return npc(npc(dv)->getValidationConstraint())->getFormula2();
}

int32_t poi::ss::formula::DataValidationEvaluator_DataValidationContext::getOperator()
{
    return npc(npc(dv)->getValidationConstraint())->getOperator();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator_DataValidationContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.DataValidationEvaluator.DataValidationContext", 71);
    return c;
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator_DataValidationContext::getClass0()
{
    return class_();
}

