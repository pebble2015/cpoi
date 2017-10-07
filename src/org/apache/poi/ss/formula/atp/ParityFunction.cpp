// Generated from /POI/java/org/apache/poi/ss/formula/atp/ParityFunction.java
#include <org/apache/poi/ss/formula/atp/ParityFunction.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
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

org::apache::poi::ss::formula::atp::ParityFunction::ParityFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::ParityFunction::ParityFunction(int32_t desiredParity) 
    : ParityFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(desiredParity);
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::atp::ParityFunction::IS_EVEN()
{
    clinit();
    return IS_EVEN_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::atp::ParityFunction::IS_EVEN_;

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::atp::ParityFunction::IS_ODD()
{
    clinit();
    return IS_ODD_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::atp::ParityFunction::IS_ODD_;

void org::apache::poi::ss::formula::atp::ParityFunction::ctor(int32_t desiredParity)
{
    super::ctor();
    _desiredParity = desiredParity;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::atp::ParityFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 1) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    int32_t val;
    try {
        val = evaluateArgParity((*args)[int32_t(0)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return ::org::apache::poi::ss::formula::eval::BoolEval::valueOf(val == _desiredParity);
}

int32_t org::apache::poi::ss::formula::atp::ParityFunction::evaluateArgParity(::org::apache::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, static_cast< int16_t >(srcCellCol));
    auto d = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
    if(d < 0) {
        d = -d;
    }
    auto v = static_cast< int64_t >(::java::lang::Math::floor(d));
    return static_cast< int32_t >((v & int32_t(1)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::ParityFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.ParityFunction", 44);
    return c;
}

void org::apache::poi::ss::formula::atp::ParityFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        IS_EVEN_ = new ParityFunction(int32_t(0));
        IS_ODD_ = new ParityFunction(int32_t(1));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::atp::ParityFunction::getClass0()
{
    return class_();
}

