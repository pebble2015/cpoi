// Generated from /POI/java/org/apache/poi/ss/formula/EvaluationConditionalFormatRule.java
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_checkFilter_2.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Collections.hpp>
#include <java/util/HashSet.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule_ValueAndFormat.hpp>
#include <org/apache/poi/ss/formula/EvaluationConditionalFormatRule.hpp>

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

poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_2::EvaluationConditionalFormatRule_checkFilter_2(EvaluationConditionalFormatRule *EvaluationConditionalFormatRule_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , EvaluationConditionalFormatRule_this(EvaluationConditionalFormatRule_this)
{
    clinit();
    ctor();
}

java::util::Set* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_2::evaluate(::java::util::List* allValues)
{
    auto values = allValues;
    ::java::util::Collections::sort(values);
    ::java::util::Set* const unique = new ::java::util::HashSet();
    for (auto i = int32_t(0); i < npc(values)->size(); i++) {
        auto const v = java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(npc(values)->get(i));
        if((i < npc(values)->size() - int32_t(1) && npc(v)->equals(static_cast< ::java::lang::Object* >(java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(npc(values)->get(i + int32_t(1)))))) || (i > 0 && i == npc(values)->size() - int32_t(1) && npc(v)->equals(static_cast< ::java::lang::Object* >(java_cast< EvaluationConditionalFormatRule_ValueAndFormat* >(npc(values)->get(i - int32_t(1))))))) {
            i++;
            continue;
        }
        npc(unique)->add(static_cast< ::java::lang::Object* >(v));
    }
    return unique;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* poi::ss::formula::EvaluationConditionalFormatRule_checkFilter_2::getClass0()
{
    return class_();
}

