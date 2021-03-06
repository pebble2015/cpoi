// Generated from /POI/java/org/apache/poi/ss/formula/functions/Vlookup.java
#include <org/apache/poi/ss/formula/functions/Vlookup.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/TwoDEval.hpp>
#include <org/apache/poi/ss/formula/eval/BoolEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils_ValueVector.hpp>
#include <org/apache/poi/ss/formula/functions/LookupUtils.hpp>

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

poi::ss::formula::functions::Vlookup::Vlookup(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Vlookup::Vlookup()
    : Vlookup(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval*& poi::ss::formula::functions::Vlookup::DEFAULT_ARG3()
{
    clinit();
    return DEFAULT_ARG3_;
}
poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Vlookup::DEFAULT_ARG3_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Vlookup::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    return evaluate(srcRowIndex, srcColumnIndex, arg0, arg1, arg2, DEFAULT_ARG3_);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Vlookup::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* lookup_value, ::poi::ss::formula::eval::ValueEval* table_array, ::poi::ss::formula::eval::ValueEval* col_index, ::poi::ss::formula::eval::ValueEval* range_lookup)
{
    try {
        auto lookupValue = ::poi::ss::formula::eval::OperandResolver::getSingleValue(lookup_value, srcRowIndex, srcColumnIndex);
        auto tableArray_ = LookupUtils::resolveTableArrayArg(table_array);
        auto isRangeLookup = LookupUtils::resolveRangeLookupArg(range_lookup, srcRowIndex, srcColumnIndex);
        auto rowIndex = LookupUtils::lookupIndexOfValue(lookupValue, LookupUtils::createColumnVector(tableArray_, 0), isRangeLookup);
        auto colIndex = LookupUtils::resolveRowOrColIndexArg(col_index, srcRowIndex, srcColumnIndex);
        auto resultCol = createResultColumnVector(tableArray_, colIndex);
        return npc(resultCol)->getItem(rowIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

poi::ss::formula::functions::LookupUtils_ValueVector* poi::ss::formula::functions::Vlookup::createResultColumnVector(::poi::ss::formula::TwoDEval* tableArray_, int32_t colIndex) /* throws(EvaluationException) */
{
    if(colIndex >= npc(tableArray_)->getWidth()) {
        throw ::poi::ss::formula::eval::EvaluationException::invalidRef();
    }
    return LookupUtils::createColumnVector(tableArray_, colIndex);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Vlookup::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Vlookup", 43);
    return c;
}

void poi::ss::formula::functions::Vlookup::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        DEFAULT_ARG3_ = ::poi::ss::formula::eval::BoolEval::TRUE();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Vlookup::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Vlookup::getClass0()
{
    return class_();
}

