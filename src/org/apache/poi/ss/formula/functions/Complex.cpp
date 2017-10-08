// Generated from /POI/java/org/apache/poi/ss/formula/functions/Complex.java
#include <org/apache/poi/ss/formula/functions/Complex.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Complex::Complex(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Complex::Complex()
    : Complex(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::Complex::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::Complex::instance_;

java::lang::String*& poi::ss::formula::functions::Complex::DEFAULT_SUFFIX()
{
    clinit();
    return DEFAULT_SUFFIX_;
}
java::lang::String* poi::ss::formula::functions::Complex::DEFAULT_SUFFIX_;

java::lang::String*& poi::ss::formula::functions::Complex::SUPPORTED_SUFFIX()
{
    clinit();
    return SUPPORTED_SUFFIX_;
}
java::lang::String* poi::ss::formula::functions::Complex::SUPPORTED_SUFFIX_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Complex::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* real_num, ::poi::ss::formula::eval::ValueEval* i_num)
{
    return this->evaluate(srcRowIndex, srcColumnIndex, real_num, i_num, static_cast< ::poi::ss::formula::eval::ValueEval* >(new ::poi::ss::formula::eval::StringEval(DEFAULT_SUFFIX_)));
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Complex::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* real_num, ::poi::ss::formula::eval::ValueEval* i_num, ::poi::ss::formula::eval::ValueEval* suffix)
{
    ::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::poi::ss::formula::eval::OperandResolver::getSingleValue(real_num, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    double realNum = int32_t(0);
    try {
        realNum = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(veText1);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    ::poi::ss::formula::eval::ValueEval* veINum;
    try {
        veINum = ::poi::ss::formula::eval::OperandResolver::getSingleValue(i_num, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    double realINum = int32_t(0);
    try {
        realINum = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(veINum);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto suffixValue = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(suffix);
    if(npc(suffixValue)->length() == 0) {
        suffixValue = DEFAULT_SUFFIX_;
    }
    if(npc(suffixValue)->equals(static_cast< ::java::lang::Object* >(npc(DEFAULT_SUFFIX_)->toUpperCase(::java::util::Locale::ROOT()))) || npc(suffixValue)->equals(static_cast< ::java::lang::Object* >(npc(SUPPORTED_SUFFIX_)->toUpperCase(::java::util::Locale::ROOT())))) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(!(npc(suffixValue)->equals(static_cast< ::java::lang::Object* >(DEFAULT_SUFFIX_)) || npc(suffixValue)->equals(static_cast< ::java::lang::Object* >(SUPPORTED_SUFFIX_)))) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto strb = new ::java::lang::StringBuffer(u""_j);
    if(realNum != 0) {
        if(isDoubleAnInt(realNum)) {
            npc(strb)->append(static_cast< int32_t >(realNum));
        } else {
            npc(strb)->append(realNum);
        }
    }
    if(realINum != 0) {
        if(npc(strb)->length() != 0) {
            if(realINum > 0) {
                npc(strb)->append(u"+"_j);
            }
        }
        if(realINum != 1 && realINum != -int32_t(1)) {
            if(isDoubleAnInt(realINum)) {
                npc(strb)->append(static_cast< int32_t >(realINum));
            } else {
                npc(strb)->append(realINum);
            }
        }
        npc(strb)->append(suffixValue);
    }
    return new ::poi::ss::formula::eval::StringEval(npc(strb)->toString());
}

bool poi::ss::formula::functions::Complex::isDoubleAnInt(double number)
{
    return (number == ::java::lang::Math::floor(number)) && !::java::lang::Double::isInfinite(number);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Complex::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length == 2) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)]);
    }
    if(npc(args)->length == 3) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)], (*args)[int32_t(2)]);
    }
    return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Complex::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Complex", 43);
    return c;
}

void poi::ss::formula::functions::Complex::clinit()
{
struct string_init_ {
    string_init_() {
    DEFAULT_SUFFIX_ = u"i"_j;
    SUPPORTED_SUFFIX_ = u"j"_j;
    }
};

    static string_init_ string_init_instance;

    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Complex();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Complex::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Complex::getClass0()
{
    return class_();
}

