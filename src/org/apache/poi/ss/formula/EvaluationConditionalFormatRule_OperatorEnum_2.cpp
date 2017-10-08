// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_OperatorEnum_2.hpp>

#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_2::EvaluationConditionalFormatRule_OperatorEnum_2(::java::lang::String* name, int ordinal)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor(name, ordinal);
}

/* <C extends Comparable<C>> */bool poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_2::isValid(::java::lang::Comparable* cellValue, ::java::lang::Comparable* v1, ::java::lang::Comparable* v2)
{
    return npc(cellValue)->compareTo(v1) >= 0 && npc(cellValue)->compareTo(v2) <= 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_OperatorEnum_2::getClass0()
{
    return class_();
}

