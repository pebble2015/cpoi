// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_1.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Collections.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule.hpp>
#include <org/apache/poi/ss/usermodel/ConditionFilterData.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingRule.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_1::EvaluationConditionalFormatRule_checkFilter_1(EvaluationConditionalFormatRule *EvaluationConditionalFormatRule_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , EvaluationConditionalFormatRule_this(EvaluationConditionalFormatRule_this)
{
    clinit();
    ctor();
}

java::util::Set* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_1::evaluate(::java::util::List* allValues)
{
    auto values = allValues;
    auto const conf = npc(EvaluationConditionalFormatRule_this->rule)->getFilterConfiguration();
    if(!npc(conf)->getBottom()) {
        ::java::util::Collections::sort(values, ::java::util::Collections::reverseOrder());
    } else {
        ::java::util::Collections::sort(values);
    }
    auto limit = static_cast< int32_t >(npc(conf)->getRank());
    if(npc(conf)->getPercent()) {
        limit = npc(allValues)->size() * limit / int32_t(100);
    }
    if(npc(allValues)->size() <= limit) {
        return new ::java::util::HashSet(static_cast< ::java::util::Collection* >(allValues));
    }
    return new ::java::util::HashSet(static_cast< ::java::util::Collection* >(npc(allValues)->subList(0, limit)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_1::getClass0()
{
    return class_();
}

