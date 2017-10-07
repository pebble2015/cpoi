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

org::apache::poi::ss::formula::atp::MRound::MRound(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::MRound::MRound() 
    : MRound(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::atp::MRound::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::atp::MRound::instance_;

void org::apache::poi::ss::formula::atp::MRound::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::atp::MRound::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    double number, multiple, result;
    if(npc(args)->length != 2) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        number = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        multiple = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        if(multiple == 0.0) {
            result = 0.0;
        } else {
            if(number * multiple < 0) {
                throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
            }
            result = multiple * ::java::lang::Math::round(number / multiple);
        }
        ::org::apache::poi::ss::formula::functions::NumericFunction::checkValue(result);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(result);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::MRound::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.MRound", 36);
    return c;
}

void org::apache::poi::ss::formula::atp::MRound::clinit()
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

java::lang::Class* org::apache::poi::ss::formula::atp::MRound::getClass0()
{
    return class_();
}

