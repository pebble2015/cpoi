// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java
#include <org/apache/poi/ss/formula/functions/TextFunction_LeftRight.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction.hpp>

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

org::apache::poi::ss::formula::functions::TextFunction_LeftRight::TextFunction_LeftRight(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::TextFunction_LeftRight::TextFunction_LeftRight(bool isLeft) 
    : TextFunction_LeftRight(*static_cast< ::default_init_tag* >(0))
{
    ctor(isLeft);
}

org::apache::poi::ss::formula::eval::ValueEval*& org::apache::poi::ss::formula::functions::TextFunction_LeftRight::DEFAULT_ARG1()
{
    clinit();
    return DEFAULT_ARG1_;
}
org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_LeftRight::DEFAULT_ARG1_;

void org::apache::poi::ss::formula::functions::TextFunction_LeftRight::ctor(bool isLeft)
{
    super::ctor();
    _isLeft = isLeft;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_LeftRight::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    return evaluate(srcRowIndex, srcColumnIndex, arg0, DEFAULT_ARG1_);
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_LeftRight::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    ::java::lang::String* arg;
    int32_t index;
    try {
        arg = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        index = TextFunction::evaluateIntArg(arg1, srcRowIndex, srcColumnIndex);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(index < 0) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    ::java::lang::String* result;
    if(_isLeft) {
        result = npc(arg)->substring(0, ::java::lang::Math::min(npc(arg)->length(), index));
    } else {
        result = npc(arg)->substring(::java::lang::Math::max(int32_t(0), npc(arg)->length() - index));
    }
    return new ::org::apache::poi::ss::formula::eval::StringEval(result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::TextFunction_LeftRight::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.TextFunction.LeftRight", 58);
    return c;
}

void org::apache::poi::ss::formula::functions::TextFunction_LeftRight::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_ARG1_ = new ::org::apache::poi::ss::formula::eval::NumberEval(1.0);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::TextFunction_LeftRight::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::TextFunction_LeftRight::getClass0()
{
    return class_();
}

