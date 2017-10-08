// Generated from /POI/java/org/apache/poi/ss/formula/functions/Mirr.java
#include <org/apache/poi/ss/formula/functions/Mirr.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <Array.hpp>

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

poi::ss::formula::functions::Mirr::Mirr(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Mirr::Mirr() 
    : Mirr(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::functions::Mirr::ctor()
{
    super::ctor(false, false);
}

int32_t poi::ss::formula::functions::Mirr::getMaxNumOperands()
{
    return 3;
}

double poi::ss::formula::functions::Mirr::evaluate(::doubleArray* values) /* throws(EvaluationException) */
{
    auto financeRate = (*values)[npc(values)->length - int32_t(1)];
    auto reinvestRate = (*values)[npc(values)->length - int32_t(2)];
    auto mirrValues = new ::doubleArray(npc(values)->length - int32_t(2));
    ::java::lang::System::arraycopy(values, 0, mirrValues, 0, npc(mirrValues)->length);
    auto mirrValuesAreAllNegatives = true;
    for(auto mirrValue : *npc(mirrValues)) {
        mirrValuesAreAllNegatives &= mirrValue < 0;
    }
    if(mirrValuesAreAllNegatives) {
        return -1.0;
    }
    auto mirrValuesAreAllPositives = true;
    for(auto mirrValue : *npc(mirrValues)) {
        mirrValuesAreAllPositives &= mirrValue > 0;
    }
    if(mirrValuesAreAllPositives) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::DIV_ZERO());
    }
    return mirr(mirrValues, financeRate, reinvestRate);
}

double poi::ss::formula::functions::Mirr::mirr(::doubleArray* in, double financeRate, double reinvestRate)
{
    clinit();
    double value = int32_t(0);
    auto numOfYears = npc(in)->length - int32_t(1);
    double pv = int32_t(0);
    double fv = int32_t(0);
    auto indexN = int32_t(0);
    for(auto anIn : *npc(in)) {
        if(anIn < 0) {
            pv += anIn / ::java::lang::Math::pow(int32_t(1) + financeRate + reinvestRate, indexN++);
        }
    }
    for(auto anIn : *npc(in)) {
        if(anIn > 0) {
            fv += anIn * ::java::lang::Math::pow(int32_t(1) + financeRate, numOfYears - indexN++);
        }
    }
    if(fv != 0 && pv != 0) {
        value = ::java::lang::Math::pow(-fv / pv, 1.0 / numOfYears) - int32_t(1);
    }
    return value;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Mirr::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Mirr", 40);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Mirr::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    return super::evaluate(args, srcCellRow, srcCellCol);
}

java::lang::Class* poi::ss::formula::functions::Mirr::getClass0()
{
    return class_();
}

