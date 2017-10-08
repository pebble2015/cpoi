// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java
#include <org/apache/poi/ss/formula/functions/TextFunction_SearchFind.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
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

poi::ss::formula::functions::TextFunction_SearchFind::TextFunction_SearchFind(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::TextFunction_SearchFind::TextFunction_SearchFind(bool isCaseSensitive) 
    : TextFunction_SearchFind(*static_cast< ::default_init_tag* >(0))
{
    ctor(isCaseSensitive);
}

void poi::ss::formula::functions::TextFunction_SearchFind::ctor(bool isCaseSensitive)
{
    super::ctor();
    _isCaseSensitive = isCaseSensitive;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_SearchFind::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    try {
        auto needle = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        auto haystack = TextFunction::evaluateStringArg(arg1, srcRowIndex, srcColumnIndex);
        return eval(haystack, needle, 0);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_SearchFind::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    try {
        auto needle = TextFunction::evaluateStringArg(arg0, srcRowIndex, srcColumnIndex);
        auto haystack = TextFunction::evaluateStringArg(arg1, srcRowIndex, srcColumnIndex);
        auto startpos = TextFunction::evaluateIntArg(arg2, srcRowIndex, srcColumnIndex) - int32_t(1);
        if(startpos < 0) {
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        return eval(haystack, needle, startpos);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_SearchFind::eval(::java::lang::String* haystack, ::java::lang::String* needle, int32_t startIndex)
{
    int32_t result;
    if(_isCaseSensitive) {
        result = npc(haystack)->indexOf(needle, startIndex);
    } else {
        result = npc(npc(haystack)->toUpperCase(::java::util::Locale::ROOT()))->indexOf(npc(needle)->toUpperCase(::java::util::Locale::ROOT()), startIndex);
    }
    if(result == -int32_t(1)) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(result + int32_t(1)));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::TextFunction_SearchFind::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.TextFunction.SearchFind", 59);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_SearchFind::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::TextFunction_SearchFind::getClass0()
{
    return class_();
}

