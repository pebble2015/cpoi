// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java
#include <org/apache/poi/ss/formula/functions/TextFunction_8.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction.hpp>

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

poi::ss::formula::functions::TextFunction_8::TextFunction_8()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_8::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    ::java::lang::String* text;
    int32_t startCharNum;
    int32_t numChars;
    try {
        text = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        startCharNum = TextFunction::evaluateIntArg(arg1, srcRowIndex, srcColumnIndex);
        numChars = TextFunction::evaluateIntArg(arg2, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    auto startIx = startCharNum - int32_t(1);
    if(startIx < 0) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    if(numChars < 0) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto len = npc(text)->length();
    if(numChars < 0 || startIx > len) {
        return new ::poi::ss::formula::eval::StringEval(u""_j);
    }
    auto endIx = ::java::lang::Math::min(startIx + numChars, len);
    auto result = npc(text)->substring(startIx, endIx);
    return new ::poi::ss::formula::eval::StringEval(result);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::TextFunction_8::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_8::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::TextFunction_8::getClass0()
{
    return class_();
}

