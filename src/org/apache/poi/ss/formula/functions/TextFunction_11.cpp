// Generated from /POI/java/org/apache/poi/ss/formula/functions/TextFunction.java
#include <org/apache/poi/ss/formula/functions/TextFunction_11.hpp>

#include <java/lang/Exception.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/TextFunction.hpp>
#include <org/apache/poi/ss/usermodel/DataFormatter.hpp>

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

poi::ss::formula::functions::TextFunction_11::TextFunction_11()
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_11::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1)
{
    double s0;
    ::java::lang::String* s1;
    try {
        s0 = TextFunction::evaluateDoubleArg(arg0, srcRowIndex, srcColumnIndex);
        s1 = TextFunction::evaluateStringArg(arg1, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    try {
        auto formattedStr = npc(TextFunction::formatter())->formatRawCellContents(s0, -int32_t(1), s1);
        return new ::poi::ss::formula::eval::StringEval(formattedStr);
    } catch (::java::lang::Exception* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::TextFunction_11::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::TextFunction_11::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::TextFunction_11::getClass0()
{
    return class_();
}

