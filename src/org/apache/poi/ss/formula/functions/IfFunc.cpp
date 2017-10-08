// Generated from /POI/java/org/apache/poi/ss/formula/functions/IfFunc.java
#include <org/apache/poi/ss/formula/functions/IfFunc.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::functions::IfFunc::IfFunc(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::IfFunc::IfFunc()
    : IfFunc(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::IfFunc::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    bool b;
    try {
        b = evaluateFirstArg(arg0, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(b) {
        if(arg1 == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
            return ::poi::ss::formula::eval::BlankEval::instance();
        }
        return arg1;
    }
    return ::poi::ss::formula::eval::BoolEval::FALSE();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::IfFunc::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    bool b;
    try {
        b = evaluateFirstArg(arg0, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(b) {
        if(arg1 == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
            return ::poi::ss::formula::eval::BlankEval::instance();
        }
        return arg1;
    }
    if(arg2 == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance())) {
        return ::poi::ss::formula::eval::BlankEval::instance();
    }
    return arg2;
}

bool poi::ss::formula::functions::IfFunc::evaluateFirstArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, srcCellCol);
    auto b = ::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ve, false);
    if(b == nullptr) {
        return false;
    }
    return npc(b)->booleanValue();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::IfFunc::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.IfFunc", 42);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::IfFunc::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::IfFunc::getClass0()
{
    return class_();
}

