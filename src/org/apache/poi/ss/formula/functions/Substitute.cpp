// Generated from /POI/java/org/apache/poi/ss/formula/functions/Substitute.java
#include <org/apache/poi/ss/formula/functions/Substitute.hpp>

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

poi::ss::formula::functions::Substitute::Substitute(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Substitute::Substitute()
    : Substitute(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Substitute::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    ::java::lang::String* result;
    try {
        auto oldStr = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        auto searchStr = TextFunction::evaluateStringArg(arg1, srcRowIndex, srcColumnIndex);
        auto newStr = TextFunction::evaluateStringArg(arg2, srcRowIndex, srcColumnIndex);
        result = replaceAllOccurrences(oldStr, searchStr, newStr);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::StringEval(result);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Substitute::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2, ::poi::ss::formula::eval::ValueEval* arg3)
{
    ::java::lang::String* result;
    try {
        auto oldStr = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        auto searchStr = TextFunction::evaluateStringArg(arg1, srcRowIndex, srcColumnIndex);
        auto newStr = TextFunction::evaluateStringArg(arg2, srcRowIndex, srcColumnIndex);
        auto instanceNumber = TextFunction::evaluateIntArg(arg3, srcRowIndex, srcColumnIndex);
        if(instanceNumber < 1) {
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        result = replaceOneOccurrence(oldStr, searchStr, newStr, instanceNumber);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::StringEval(result);
}

java::lang::String* poi::ss::formula::functions::Substitute::replaceAllOccurrences(::java::lang::String* oldStr, ::java::lang::String* searchStr, ::java::lang::String* newStr)
{
    clinit();
    auto sb = new ::java::lang::StringBuffer();
    auto startIndex = int32_t(0);
    auto nextMatch = -int32_t(1);
    while (true) {
        nextMatch = npc(oldStr)->indexOf(searchStr, startIndex);
        if(nextMatch < 0) {
            npc(sb)->append(npc(oldStr)->substring(startIndex));
            return npc(sb)->toString();
        }
        npc(sb)->append(npc(oldStr)->substring(startIndex, nextMatch));
        npc(sb)->append(newStr);
        startIndex = nextMatch + npc(searchStr)->length();
    }
}

java::lang::String* poi::ss::formula::functions::Substitute::replaceOneOccurrence(::java::lang::String* oldStr, ::java::lang::String* searchStr, ::java::lang::String* newStr, int32_t instanceNumber)
{
    clinit();
    if(npc(searchStr)->length() < 1) {
        return oldStr;
    }
    auto startIndex = int32_t(0);
    auto nextMatch = -int32_t(1);
    auto count = int32_t(0);
    while (true) {
        nextMatch = npc(oldStr)->indexOf(searchStr, startIndex);
        if(nextMatch < 0) {
            return oldStr;
        }
        count++;
        if(count == instanceNumber) {
            auto sb = new ::java::lang::StringBuffer(npc(oldStr)->length() + npc(newStr)->length());
            npc(sb)->append(npc(oldStr)->substring(0, nextMatch));
            npc(sb)->append(newStr);
            npc(sb)->append(npc(oldStr)->substring(nextMatch + npc(searchStr)->length()));
            return npc(sb)->toString();
        }
        startIndex = nextMatch + npc(searchStr)->length();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Substitute::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Substitute", 46);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Substitute::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Substitute::getClass0()
{
    return class_();
}

