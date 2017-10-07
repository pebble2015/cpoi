// Generated from /POI/java/org/apache/poi/ss/formula/functions/Subtotal.java
#include <org/apache/poi/ss/formula/functions/Subtotal.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Arrays.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <org/apache/poi/ss/formula/LazyRefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedException.hpp>
#include <org/apache/poi/ss/formula/eval/NotImplementedFunctionException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/AggregateFunction.hpp>
#include <org/apache/poi/ss/formula/functions/Count.hpp>
#include <org/apache/poi/ss/formula/functions/Counta.hpp>
#include <org/apache/poi/ss/formula/functions/Function.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

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

org::apache::poi::ss::formula::functions::Subtotal::Subtotal(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Subtotal::Subtotal()
    : Subtotal(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::Subtotal::findFunction(int32_t functionCode) /* throws(EvaluationException) */
{
    clinit();
    switch (functionCode) {
    case int32_t(1):
        return AggregateFunction::subtotalInstance(AggregateFunction::AVERAGE());
    case int32_t(2):
        return Count::subtotalInstance();
    case int32_t(3):
        return Counta::subtotalInstance();
    case int32_t(4):
        return AggregateFunction::subtotalInstance(AggregateFunction::MAX());
    case int32_t(5):
        return AggregateFunction::subtotalInstance(AggregateFunction::MIN());
    case int32_t(6):
        return AggregateFunction::subtotalInstance(AggregateFunction::PRODUCT());
    case int32_t(7):
        return AggregateFunction::subtotalInstance(AggregateFunction::STDEV());
    case int32_t(8):
        throw new ::org::apache::poi::ss::formula::eval::NotImplementedFunctionException(u"STDEVP"_j);
    case int32_t(9):
        return AggregateFunction::subtotalInstance(AggregateFunction::SUM());
    case int32_t(10):
        throw new ::org::apache::poi::ss::formula::eval::NotImplementedFunctionException(u"VAR"_j);
    case int32_t(11):
        throw new ::org::apache::poi::ss::formula::eval::NotImplementedFunctionException(u"VARP"_j);
    }

    if(functionCode > 100 && functionCode < 112) {
        throw new ::org::apache::poi::ss::formula::eval::NotImplementedException(u"SUBTOTAL - with 'exclude hidden values' option"_j);
    }
    throw ::org::apache::poi::ss::formula::eval::EvaluationException::invalidValue();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Subtotal::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    auto nInnerArgs = npc(args)->length - int32_t(1);
    if(nInnerArgs < 1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    Function* innerFunc;
    try {
        auto ve = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], srcRowIndex, srcColumnIndex);
        auto functionCode = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
        innerFunc = findFunction(functionCode);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    ::java::util::List* const list = new ::java::util::ArrayList(static_cast< ::java::util::Collection* >(npc(::java::util::Arrays::asList(args))->subList(1, npc(args)->length)));
    auto it = npc(list)->iterator();
    while (npc(it)->hasNext()) {
        auto eval = java_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(npc(it)->next());
        if(dynamic_cast< ::org::apache::poi::ss::formula::LazyRefEval* >(eval) != nullptr) {
            auto lazyRefEval = java_cast< ::org::apache::poi::ss::formula::LazyRefEval* >(eval);
            if(npc(lazyRefEval)->isSubTotal()) {
                npc(it)->remove();
            }
        }
    }
    return npc(innerFunc)->evaluate(java_cast< ::org::apache::poi::ss::formula::eval::ValueEvalArray* >(npc(list)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ::org::apache::poi::ss::formula::eval::ValueEvalArray(npc(list)->size())))), srcRowIndex, srcColumnIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Subtotal::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Subtotal", 44);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::Subtotal::getClass0()
{
    return class_();
}

