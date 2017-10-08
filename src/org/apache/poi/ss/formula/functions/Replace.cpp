// Generated from /POI/java/org/apache/poi/ss/formula/functions/Replace.java
#include <org/apache/poi/ss/formula/functions/Replace.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

poi::ss::formula::functions::Replace::Replace(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Replace::Replace()
    : Replace(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Replace::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2, ::poi::ss::formula::eval::ValueEval* arg3)
{
    ::java::lang::String* oldStr;
    int32_t startNum;
    int32_t numChars;
    ::java::lang::String* newStr;
    try {
        oldStr = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        startNum = TextFunction::evaluateIntArg(arg1, srcRowIndex, srcColumnIndex);
        numChars = TextFunction::evaluateIntArg(arg2, srcRowIndex, srcColumnIndex);
        newStr = TextFunction::evaluateStringArg(arg3, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(startNum < 1 || numChars < 0) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto strBuff = new ::java::lang::StringBuffer(oldStr);
    if(startNum <= npc(oldStr)->length() && numChars != 0) {
        npc(strBuff)->delete_(startNum - int32_t(1), startNum - int32_t(1) + numChars);
    }
    if(startNum > npc(strBuff)->length()) {
        npc(strBuff)->append(newStr);
    } else {
        npc(strBuff)->insert(startNum - int32_t(1), newStr);
    }
    return new ::poi::ss::formula::eval::StringEval(npc(strBuff)->toString());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Replace::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Replace", 43);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Replace::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Replace::getClass0()
{
    return class_();
}

