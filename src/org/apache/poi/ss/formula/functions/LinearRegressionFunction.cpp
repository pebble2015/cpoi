// Generated from /POI/java/org/apache/poi/ss/formula/functions/LinearRegressionFunction.java
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_AreaValueArray.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_FUNCTION.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_RefValueArray.hpp>
#include <org/apache/poi/ss/formula/functions/LinearRegressionFunction_SingleCellValueArray.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>

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

poi::ss::formula::functions::LinearRegressionFunction::LinearRegressionFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::LinearRegressionFunction::LinearRegressionFunction(LinearRegressionFunction_FUNCTION* function) 
    : LinearRegressionFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(function);
}

void poi::ss::formula::functions::LinearRegressionFunction::ctor(LinearRegressionFunction_FUNCTION* function)
{
    super::ctor();
    this->function = function;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LinearRegressionFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    double result;
    try {
        auto vvY = createValueVector(arg0);
        auto vvX = createValueVector(arg1);
        auto size = npc(vvX)->getSize();
        if(size == 0 || npc(vvY)->getSize() != size) {
            return ::poi::ss::formula::eval::ErrorEval::NA();
        }
        result = evaluateInternal(vvX, vvY, size);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

double poi::ss::formula::functions::LinearRegressionFunction::evaluateInternal(LookupUtils_ValueVector* x, LookupUtils_ValueVector* y, int32_t size) /* throws(EvaluationException) */
{
    ::poi::ss::formula::eval::ErrorEval* firstXerr = nullptr;
    ::poi::ss::formula::eval::ErrorEval* firstYerr = nullptr;
    auto accumlatedSome = false;
    double sumx = 0.0, sumy = 0.0;
    for (auto i = int32_t(0); i < size; i++) {
        auto vx = npc(x)->getItem(i);
        auto vy = npc(y)->getItem(i);
        if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(vx) != nullptr) {
            if(firstXerr == nullptr) {
                firstXerr = java_cast< ::poi::ss::formula::eval::ErrorEval* >(vx);
                continue;
            }
        }
        if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(vy) != nullptr) {
            if(firstYerr == nullptr) {
                firstYerr = java_cast< ::poi::ss::formula::eval::ErrorEval* >(vy);
                continue;
            }
        }
        if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(vx) != nullptr && dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(vy) != nullptr) {
            accumlatedSome = true;
            auto nx = java_cast< ::poi::ss::formula::eval::NumberEval* >(vx);
            auto ny = java_cast< ::poi::ss::formula::eval::NumberEval* >(vy);
            sumx += npc(nx)->getNumberValue();
            sumy += npc(ny)->getNumberValue();
        } else {
        }
    }
    auto xbar = sumx / size;
    auto ybar = sumy / size;
    double xxbar = 0.0, xybar = 0.0;
    for (auto i = int32_t(0); i < size; i++) {
        auto vx = npc(x)->getItem(i);
        auto vy = npc(y)->getItem(i);
        if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(vx) != nullptr) {
            if(firstXerr == nullptr) {
                firstXerr = java_cast< ::poi::ss::formula::eval::ErrorEval* >(vx);
                continue;
            }
        }
        if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(vy) != nullptr) {
            if(firstYerr == nullptr) {
                firstYerr = java_cast< ::poi::ss::formula::eval::ErrorEval* >(vy);
                continue;
            }
        }
        if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(vx) != nullptr && dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(vy) != nullptr) {
            auto nx = java_cast< ::poi::ss::formula::eval::NumberEval* >(vx);
            auto ny = java_cast< ::poi::ss::formula::eval::NumberEval* >(vy);
            xxbar += (npc(nx)->getNumberValue() - xbar) * (npc(nx)->getNumberValue() - xbar);
            xybar += (npc(nx)->getNumberValue() - xbar) * (npc(ny)->getNumberValue() - ybar);
        } else {
        }
    }
    auto beta1 = xybar / xxbar;
    auto beta0 = ybar - beta1 * xbar;
    if(firstXerr != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(firstXerr);
    }
    if(firstYerr != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(firstYerr);
    }
    if(!accumlatedSome) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::DIV_ZERO());
    }
    if(function == LinearRegressionFunction_FUNCTION::INTERCEPT) {
        return beta0;
    } else {
        return beta1;
    }
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::LinearRegressionFunction::createValueVector(::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::poi::ss::formula::eval::ErrorEval* >(arg) != nullptr) {
        throw new ::poi::ss::formula::eval::EvaluationException(java_cast< ::poi::ss::formula::eval::ErrorEval* >(arg));
    }
    if(dynamic_cast< ::poi::ss::formula::TwoDEval* >(arg) != nullptr) {
        return new LinearRegressionFunction_AreaValueArray(java_cast< ::poi::ss::formula::TwoDEval* >(arg));
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
        return new LinearRegressionFunction_RefValueArray(java_cast< ::poi::ss::formula::eval::RefEval* >(arg));
    }
    return new LinearRegressionFunction_SingleCellValueArray(arg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LinearRegressionFunction", 60);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::LinearRegressionFunction::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::LinearRegressionFunction::getClass0()
{
    return class_();
}

