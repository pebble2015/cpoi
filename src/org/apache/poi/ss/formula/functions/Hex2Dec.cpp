// Generated from /POI/java/org/apache/poi/ss/formula/functions/Hex2Dec.java
#include <org/apache/poi/ss/formula/functions/Hex2Dec.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/BaseNumberUtils.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::Hex2Dec::Hex2Dec(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Hex2Dec::Hex2Dec()
    : Hex2Dec(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::Hex2Dec::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::Hex2Dec::instance_;

constexpr int32_t poi::ss::formula::functions::Hex2Dec::HEXADECIMAL_BASE;

constexpr int32_t poi::ss::formula::functions::Hex2Dec::MAX_NUMBER_OF_PLACES;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Hex2Dec::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* numberVE)
{
    ::java::lang::String* hex;
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(numberVE) != nullptr) {
        auto re = java_cast< ::poi::ss::formula::eval::RefEval* >(numberVE);
        hex = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(npc(re)->getInnerValueEval(npc(re)->getFirstSheetIndex()));
    } else {
        hex = ::poi::ss::formula::eval::OperandResolver::coerceValueToString(numberVE);
    }
    try {
        return new ::poi::ss::formula::eval::NumberEval(BaseNumberUtils::convertToDecimal(hex, HEXADECIMAL_BASE, MAX_NUMBER_OF_PLACES));
    } catch (::java::lang::IllegalArgumentException* e) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Hex2Dec::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 1) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)]);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Hex2Dec::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Hex2Dec", 43);
    return c;
}

void poi::ss::formula::functions::Hex2Dec::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new Hex2Dec();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Hex2Dec::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Hex2Dec::getClass0()
{
    return class_();
}

