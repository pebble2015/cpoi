// Generated from /POI/java/org/apache/poi/ss/formula/DataValidationEvaluator.java
#include <org/apache/poi/ss/formula/DataValidationEvaluator_ValidationEnum_5.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator_DataValidationContext.hpp>
#include <org/apache/poi/ss/formula/DataValidationEvaluator.hpp>
#include <org/apache/poi/ss/formula/WorkbookEvaluator.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::DataValidationEvaluator_ValidationEnum_5::DataValidationEvaluator_ValidationEnum_5(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

bool poi::ss::formula::DataValidationEvaluator_ValidationEnum_5::isValidValue(::poi::ss::usermodel::Cell* cell, DataValidationEvaluator_DataValidationContext* context)
{
    auto comp = npc(npc(npc(context)->getEvaluator())->getWorkbookEvaluator())->evaluate(npc(context)->getFormula1(), npc(context)->getTarget(), npc(context)->getRegion());
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(comp) != nullptr) {
        comp = npc((java_cast< ::poi::ss::formula::eval::RefEval* >(comp)))->getInnerValueEval(npc((java_cast< ::poi::ss::formula::eval::RefEval* >(comp)))->getFirstSheetIndex());
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(comp) != nullptr)
        return true;

    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(comp) != nullptr)
        return false;

    if(dynamic_cast< ::poi::ss::formula::eval::BoolEval* >(comp) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::BoolEval* >(comp)))->getBooleanValue();
    }
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(comp) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(comp)))->getNumberValue() != 0;
    }
    return false;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::DataValidationEvaluator_ValidationEnum_5::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::DataValidationEvaluator_ValidationEnum_5::getClass0()
{
    return class_();
}

