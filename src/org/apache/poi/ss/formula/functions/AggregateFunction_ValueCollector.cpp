// Generated from /POI/java/org/apache/poi/ss/formula/functions/AggregateFunction.java
#include <org/apache/poi/ss/formula/functions/AggregateFunction_ValueCollector.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <Array.hpp>

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

poi::ss::formula::functions::AggregateFunction_ValueCollector::AggregateFunction_ValueCollector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::AggregateFunction_ValueCollector::AggregateFunction_ValueCollector() 
    : AggregateFunction_ValueCollector(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::AggregateFunction_ValueCollector*& poi::ss::formula::functions::AggregateFunction_ValueCollector::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::AggregateFunction_ValueCollector* poi::ss::formula::functions::AggregateFunction_ValueCollector::instance_;

void poi::ss::formula::functions::AggregateFunction_ValueCollector::ctor()
{
    super::ctor(false, false);
}

doubleArray* poi::ss::formula::functions::AggregateFunction_ValueCollector::collectValues(::poi::ss::formula::eval::ValueEvalArray*/*...*/ operands) /* throws(EvaluationException) */
{
    clinit();
    return npc(instance_)->getNumberArray_(operands);
}

double poi::ss::formula::functions::AggregateFunction_ValueCollector::evaluate(::doubleArray* values)
{
    throw new ::java::lang::IllegalStateException(u"should not be called"_j);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::AggregateFunction_ValueCollector::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.AggregateFunction.ValueCollector", 68);
    return c;
}

void poi::ss::formula::functions::AggregateFunction_ValueCollector::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new AggregateFunction_ValueCollector();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::AggregateFunction_ValueCollector::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol)
{
    return super::evaluate(args, srcCellRow, srcCellCol);
}

java::lang::Class* poi::ss::formula::functions::AggregateFunction_ValueCollector::getClass0()
{
    return class_();
}

