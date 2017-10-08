// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_4.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/LinkedHashSet.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_ValueAndFormat.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace formula
        {
            namespace eval
            {
typedef ::SubArray< ::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
            } // eval
        } // formula
    } // ss
} // poi

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

poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_4::EvaluationConditionalFormatRule_checkFilter_4(EvaluationConditionalFormatRule *EvaluationConditionalFormatRule_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , EvaluationConditionalFormatRule_this(EvaluationConditionalFormatRule_this)
{
    clinit();
    ctor();
}

java::util::Set* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_4::evaluate(::java::util::List* allValues)
{
    auto values = allValues;
    double total = int32_t(0);
    auto pop = new ::poi::ss::formula::eval::ValueEvalArray(npc(values)->size());
    for (auto i = int32_t(0); i < npc(values)->size(); i++) {
        auto v = java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(npc(values)->get(i));
        total += npc(npc(v)->value)->doubleValue();
        pop->set(i, new ::poi::ss::formula::eval::NumberEval(npc(npc(v)->value)->doubleValue()));
    }
    ::java::util::Set* const avgSet = new ::java::util::LinkedHashSet(int32_t(1));
    npc(avgSet)->add(static_cast< ::java::lang::Object* >(new EvaluationConditionalFormatRule_ValueAndFormat(new ::java::lang::Double(npc(values)->size() == 0 ? static_cast< double >(int32_t(0)) : total / npc(values)->size()), static_cast< ::java::lang::String* >(nullptr))));
    auto const stdDev = npc(values)->size() <= 1 ? static_cast< double >(int32_t(0)) : npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(npc(::poi::ss::formula::functions::AggregateFunction::STDEV())->evaluate(pop, 0, 0))))->getNumberValue();
    npc(avgSet)->add(static_cast< ::java::lang::Object* >(new EvaluationConditionalFormatRule_ValueAndFormat(new ::java::lang::Double(stdDev), static_cast< ::java::lang::String* >(nullptr))));
    return avgSet;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_4::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_4::getClass0()
{
    return class_();
}

