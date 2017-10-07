// Generated from /POI/java/org/apache/poi/ss/formula/eval/UnaryMinusEval.java
#include <org/apache/poi/ss/formula/eval/UnaryMinusEval.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

org::apache::poi::ss::formula::eval::UnaryMinusEval::UnaryMinusEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::eval::UnaryMinusEval::UnaryMinusEval() 
    : UnaryMinusEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::eval::UnaryMinusEval::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::eval::UnaryMinusEval::instance_;

void org::apache::poi::ss::formula::eval::UnaryMinusEval::ctor()
{
    super::ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::eval::UnaryMinusEval::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0)
{
    double d;
    try {
        auto ve = OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        d = OperandResolver::coerceValueToDouble(ve);
    } catch (EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(d == 0.0) {
        return NumberEval::ZERO();
    }
    return new NumberEval(-d);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::eval::UnaryMinusEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.UnaryMinusEval", 45);
    return c;
}

void org::apache::poi::ss::formula::eval::UnaryMinusEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new UnaryMinusEval();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::eval::UnaryMinusEval::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::eval::UnaryMinusEval::getClass0()
{
    return class_();
}
