// Generated from /POI/java/org/apache/poi/ss/formula/atp/RandBetween.java
#include <org/apache/poi/ss/formula/atp/RandBetween.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::atp::RandBetween::RandBetween(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::RandBetween::RandBetween() 
    : RandBetween(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::atp::RandBetween::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::atp::RandBetween::instance_;

void poi::ss::formula::atp::RandBetween::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::atp::RandBetween::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    double bottom, top;
    if(npc(args)->length != 2) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        bottom = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        top = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        if(bottom > top) {
            return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    bottom = ::java::lang::Math::ceil(bottom);
    top = ::java::lang::Math::floor(top);
    if(bottom > top) {
        top = bottom;
    }
    return new ::poi::ss::formula::eval::NumberEval((bottom + static_cast< int32_t >((::java::lang::Math::random() * ((top - bottom) + int32_t(1))))));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::RandBetween::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.RandBetween", 41);
    return c;
}

void poi::ss::formula::atp::RandBetween::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new RandBetween();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::RandBetween::getClass0()
{
    return class_();
}

