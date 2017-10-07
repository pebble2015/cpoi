// Generated from /POI/java/org/apache/poi/ss/formula/functions/LogicalFunction.java
#include <org/apache/poi/ss/formula/functions/LogicalFunction.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_1.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_2.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_3.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_4.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_5.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_6.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_7.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_8.hpp>
#include <org/apache/poi/ss/formula/functions/LogicalFunction_9.hpp>

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

org::apache::poi::ss::formula::functions::LogicalFunction::LogicalFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::LogicalFunction::LogicalFunction()
    : LogicalFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::LogicalFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    ::org::apache::poi::ss::formula::eval::ValueEval* ve;
    try {
        ve = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        ve = npc(e)->getErrorEval();
    }
    return ::org::apache::poi::ss::formula::eval::BoolEval::valueOf(evaluate(ve));
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISLOGICAL()
{
    clinit();
    return ISLOGICAL_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISLOGICAL_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISNONTEXT()
{
    clinit();
    return ISNONTEXT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISNONTEXT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISNUMBER()
{
    clinit();
    return ISNUMBER_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISNUMBER_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISTEXT()
{
    clinit();
    return ISTEXT_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISTEXT_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISBLANK()
{
    clinit();
    return ISBLANK_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISBLANK_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISERROR()
{
    clinit();
    return ISERROR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISERROR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISERR()
{
    clinit();
    return ISERR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISERR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISNA()
{
    clinit();
    return ISNA_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISNA_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::LogicalFunction::ISREF()
{
    clinit();
    return ISREF_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::LogicalFunction::ISREF_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::LogicalFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.LogicalFunction", 51);
    return c;
}

void org::apache::poi::ss::formula::functions::LogicalFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        ISLOGICAL_ = new LogicalFunction_1();
        ISNONTEXT_ = new LogicalFunction_2();
        ISNUMBER_ = new LogicalFunction_3();
        ISTEXT_ = new LogicalFunction_4();
        ISBLANK_ = new LogicalFunction_5();
        ISERROR_ = new LogicalFunction_6();
        ISERR_ = new LogicalFunction_7();
        ISNA_ = new LogicalFunction_8();
        ISREF_ = new LogicalFunction_9();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::LogicalFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::LogicalFunction::getClass0()
{
    return class_();
}

