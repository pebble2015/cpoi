// Generated from /POI/java/org/apache/poi/ss/formula/functions/Dec2Bin.java
#include <org/apache/poi/ss/formula/functions/Dec2Bin.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::Dec2Bin::Dec2Bin(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Dec2Bin::Dec2Bin()
    : Dec2Bin(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::Dec2Bin::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::Dec2Bin::instance_;

constexpr int64_t org::apache::poi::ss::formula::functions::Dec2Bin::MIN_VALUE;

constexpr int64_t org::apache::poi::ss::formula::functions::Dec2Bin::MAX_VALUE;

constexpr int32_t org::apache::poi::ss::formula::functions::Dec2Bin::DEFAULT_PLACES_VALUE;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Bin::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* numberVE, ::org::apache::poi::ss::formula::eval::ValueEval* placesVE)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* veText1;
    try {
        veText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(numberVE, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto strText1 = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(veText1);
    auto number = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(strText1);
    if(number == nullptr) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(npc(number)->longValue() < MIN_VALUE || npc(number)->longValue() > MAX_VALUE) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    int32_t placesNumber;
    if((npc(number))->doubleValue() < 0 || placesVE == nullptr) {
        placesNumber = DEFAULT_PLACES_VALUE;
    } else {
        ::org::apache::poi::ss::formula::eval::ValueEval* placesValueEval;
        try {
            placesValueEval = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(placesVE, srcRowIndex, srcColumnIndex);
        } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
            return npc(e)->getErrorEval();
        }
        auto placesStr = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToString(placesValueEval);
        auto placesNumberDouble = ::org::apache::poi::ss::formula::eval::OperandResolver::parseDouble(placesStr);
        if(placesNumberDouble == nullptr) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        placesNumber = npc(placesNumberDouble)->intValue();
        if(placesNumber < 0 || placesNumber == 0) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
    }
    auto binary = ::java::lang::Integer::toBinaryString(npc(number)->intValue());
    if(npc(binary)->length() > DEFAULT_PLACES_VALUE) {
        binary = npc(binary)->substring(npc(binary)->length() - DEFAULT_PLACES_VALUE, npc(binary)->length());
    }
    if(npc(binary)->length() > placesNumber) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(binary);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Bin::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* numberVE)
{
    return this->evaluate(srcRowIndex, srcColumnIndex, numberVE, static_cast< ::org::apache::poi::ss::formula::eval::ValueEval* >(nullptr));
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Bin::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length == 1) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
    }
    if(npc(args)->length == 2) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)]);
    }
    return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Dec2Bin::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Dec2Bin", 43);
    return c;
}

void org::apache::poi::ss::formula::functions::Dec2Bin::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Dec2Bin();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Dec2Bin::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Dec2Bin::getClass0()
{
    return class_();
}

