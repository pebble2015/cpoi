// Generated from /POI/java/org/apache/poi/ss/formula/atp/MRound.java
#include <org/apache/poi/ss/formula/atp/MRound.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
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

poi::ss::formula::atp::MRound::MRound(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::MRound::MRound() 
    : MRound(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::atp::MRound::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::atp::MRound::instance_;

void poi::ss::formula::atp::MRound::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::atp::MRound::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    double number, multiple, result;
    if(npc(args)->length != 2) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        number = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        multiple = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        if(multiple == 0.0) {
            result = 0.0;
        } else {
            if(number * multiple < 0) {
                throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
            }
            result = multiple * ::java::lang::Math::round(number / multiple);
        }
        ::poi::ss::formula::functions::NumericFunction::checkValue(result);
        return new ::poi::ss::formula::eval::NumberEval(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::MRound::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.MRound", 36);
    return c;
}

void poi::ss::formula::atp::MRound::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new MRound();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::MRound::getClass0()
{
    return class_();
}

