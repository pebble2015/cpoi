// Generated from /POI/java/org/apache/poi/ss/formula/functions/FactDouble.java
#include <org/apache/poi/ss/formula/functions/FactDouble.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/util/HashMap.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::FactDouble::FactDouble(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::FactDouble::FactDouble()
    : FactDouble(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::FactDouble::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::FactDouble::instance_;

java::util::HashMap*& poi::ss::formula::functions::FactDouble::cache()
{
    clinit();
    return cache_;
}
java::util::HashMap* poi::ss::formula::functions::FactDouble::cache_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FactDouble::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* numberVE)
{
    int32_t number;
    try {
        number = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(numberVE);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(number < 0) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(npc(factorial(number))->longValue()));
}

java::math::BigInteger* poi::ss::formula::functions::FactDouble::factorial(int32_t n)
{
    clinit();
    if(n == 0 || n < 0) {
        return ::java::math::BigInteger::ONE();
    }
    if(npc(cache_)->containsKey(::java::lang::Integer::valueOf(n))) {
        return java_cast< ::java::math::BigInteger* >(npc(cache_)->get(::java::lang::Integer::valueOf(n)));
    }
    auto result = npc(::java::math::BigInteger::valueOf(static_cast< int64_t >(n)))->multiply(factorial(n - int32_t(2)));
    npc(cache_)->put(::java::lang::Integer::valueOf(n), static_cast< ::java::lang::Object* >(result));
    return result;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FactDouble::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 1) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::FactDouble::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.FactDouble", 46);
    return c;
}

void poi::ss::formula::functions::FactDouble::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new FactDouble();
        cache_ = new ::java::util::HashMap();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::FactDouble::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::FactDouble::getClass0()
{
    return class_();
}

