// Generated from /POI/java/org/apache/poi/ss/formula/functions/Rate.java
#include <org/apache/poi/ss/formula/functions/Rate.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
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

org::apache::poi::ss::formula::functions::Rate::Rate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Rate::Rate()
    : Rate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::util::POILogger*& org::apache::poi::ss::formula::functions::Rate::LOG()
{
    clinit();
    return LOG_;
}
org::apache::poi::util::POILogger* org::apache::poi::ss::formula::functions::Rate::LOG_;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Rate::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    if(npc(args)->length < 3) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    double periods, payment, present_val, future_val = int32_t(0), type = int32_t(0), estimate = 0.1, rate;
    try {
        auto v1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], srcRowIndex, srcColumnIndex);
        auto v2 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], srcRowIndex, srcColumnIndex);
        auto v3 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(2)], srcRowIndex, srcColumnIndex);
        ::org::apache::poi::ss::formula::eval::ValueEval* v4 = nullptr;
        if(npc(args)->length >= 4)
            v4 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(3)], srcRowIndex, srcColumnIndex);

        ::org::apache::poi::ss::formula::eval::ValueEval* v5 = nullptr;
        if(npc(args)->length >= 5)
            v5 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(4)], srcRowIndex, srcColumnIndex);

        ::org::apache::poi::ss::formula::eval::ValueEval* v6 = nullptr;
        if(npc(args)->length >= 6)
            v6 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(5)], srcRowIndex, srcColumnIndex);

        periods = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v1);
        payment = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v2);
        present_val = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v3);
        if(npc(args)->length >= 4)
            future_val = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v4);

        if(npc(args)->length >= 5)
            type = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v5);

        if(npc(args)->length >= 6)
            estimate = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v6);

        rate = calculateRate(periods, payment, present_val, future_val, type, estimate);
        checkValue(rate);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        npc(LOG_)->log(::org::apache::poi::util::POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(u"Can't evaluate rate function"_j), static_cast< ::java::lang::Object* >(e)}));
        return npc(e)->getErrorEval();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(rate);
}

double org::apache::poi::ss::formula::functions::Rate::calculateRate(double nper, double pmt, double pv, double fv, double type, double guess)
{
    auto FINANCIAL_MAX_ITERATIONS = int32_t(20);
    auto FINANCIAL_PRECISION = 1.0E-7;
    double y, y0, y1, x0, x1 = int32_t(0), f = int32_t(0), i = int32_t(0);
    auto rate = guess;
    if(::java::lang::Math::abs(rate) < FINANCIAL_PRECISION) {
        y = pv * (int32_t(1) + nper * rate) + pmt * (int32_t(1) + rate * type) * nper + fv;
    } else {
        f = ::java::lang::Math::exp(nper * ::java::lang::Math::log(int32_t(1) + rate));
        y = pv * f + pmt * (int32_t(1) / rate + type) * (f - int32_t(1)) + fv;
    }
    y0 = pv + pmt * nper + fv;
    y1 = pv * f + pmt * (int32_t(1) / rate + type) * (f - int32_t(1)) + fv;
    i = x0 = 0.0;
    x1 = rate;
    while ((::java::lang::Math::abs(y0 - y1) > FINANCIAL_PRECISION) && (i < FINANCIAL_MAX_ITERATIONS)) {
        rate = (y1 * x0 - y0 * x1) / (y1 - y0);
        x0 = x1;
        x1 = rate;
        if(::java::lang::Math::abs(rate) < FINANCIAL_PRECISION) {
            y = pv * (int32_t(1) + nper * rate) + pmt * (int32_t(1) + rate * type) * nper + fv;
        } else {
            f = ::java::lang::Math::exp(nper * ::java::lang::Math::log(int32_t(1) + rate));
            y = pv * f + pmt * (int32_t(1) / rate + type) * (f - int32_t(1)) + fv;
        }
        y0 = y1;
        y1 = y;
        ++i;
    }
    return rate;
}

void org::apache::poi::ss::formula::functions::Rate::checkValue(double result) /* throws(EvaluationException) */
{
    clinit();
    if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Rate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Rate", 40);
    return c;
}

void org::apache::poi::ss::formula::functions::Rate::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LOG_ = ::org::apache::poi::util::POILogFactory::getLogger(static_cast< ::java::lang::Class* >(Rate::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::Rate::getClass0()
{
    return class_();
}

