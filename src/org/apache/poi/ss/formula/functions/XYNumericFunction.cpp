// Generated from /POI/java/org/apache/poi/ss/formula/functions/XYNumericFunction.java
#include <org/apache/poi/ss/formula/functions/XYNumericFunction.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_Accumulator.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_AreaValueArray.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_RefValueArray.hpp>
#include <org/apache/poi/ss/formula/functions/XYNumericFunction_SingleCellValueArray.hpp>

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

org::apache::poi::ss::formula::functions::XYNumericFunction::XYNumericFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::XYNumericFunction::XYNumericFunction()
    : XYNumericFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::XYNumericFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    double result;
    try {
        auto vvX = createValueVector(arg0);
        auto vvY = createValueVector(arg1);
        auto size = npc(vvX)->getSize();
        if(size == 0 || npc(vvY)->getSize() != size) {
            return ::org::apache::poi::ss::formula::eval::ErrorEval::NA();
        }
        result = evaluateInternal(vvX, vvY, size);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
}

double org::apache::poi::ss::formula::functions::XYNumericFunction::evaluateInternal(LookupUtils_ValueVector* x, LookupUtils_ValueVector* y, int32_t size) /* throws(EvaluationException) */
{
    auto acc = createAccumulator();
    ::org::apache::poi::ss::formula::eval::ErrorEval* firstXerr = nullptr;
    ::org::apache::poi::ss::formula::eval::ErrorEval* firstYerr = nullptr;
    auto accumlatedSome = false;
    auto result = 0.0;
    for (auto i = int32_t(0); i < size; i++) {
        auto vx = npc(x)->getItem(i);
        auto vy = npc(y)->getItem(i);
        if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(vx) != nullptr) {
            if(firstXerr == nullptr) {
                firstXerr = java_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(vx);
                continue;
            }
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(vy) != nullptr) {
            if(firstYerr == nullptr) {
                firstYerr = java_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(vy);
                continue;
            }
        }
        if(dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(vx) != nullptr && dynamic_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(vy) != nullptr) {
            accumlatedSome = true;
            auto nx = java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(vx);
            auto ny = java_cast< ::org::apache::poi::ss::formula::eval::NumberEval* >(vy);
            result += npc(acc)->accumulate(npc(nx)->getNumberValue(), npc(ny)->getNumberValue());
        } else {
        }
    }
    if(firstXerr != nullptr) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(firstXerr);
    }
    if(firstYerr != nullptr) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(firstYerr);
    }
    if(!accumlatedSome) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::DIV_ZERO());
    }
    return result;
}

org::apache::poi::ss::formula::functions::LookupUtils_ValueVector* org::apache::poi::ss::formula::functions::XYNumericFunction::createValueVector(::org::apache::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */
{
    clinit();
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(arg) != nullptr) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(java_cast< ::org::apache::poi::ss::formula::eval::ErrorEval* >(arg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::TwoDEval* >(arg) != nullptr) {
        return new XYNumericFunction_AreaValueArray(java_cast< ::org::apache::poi::ss::formula::TwoDEval* >(arg));
    }
    if(dynamic_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
        return new XYNumericFunction_RefValueArray(java_cast< ::org::apache::poi::ss::formula::eval::RefEval* >(arg));
    }
    return new XYNumericFunction_SingleCellValueArray(arg);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::XYNumericFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.XYNumericFunction", 53);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::XYNumericFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::XYNumericFunction::getClass0()
{
    return class_();
}

