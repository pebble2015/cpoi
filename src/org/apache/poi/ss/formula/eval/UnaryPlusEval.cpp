// Generated from /POI/java/org/apache/poi/ss/formula/eval/UnaryPlusEval.java
#include <org/apache/poi/ss/formula/eval/UnaryPlusEval.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>

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

poi::ss::formula::eval::UnaryPlusEval::UnaryPlusEval(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::UnaryPlusEval::UnaryPlusEval() 
    : UnaryPlusEval(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::Function*& poi::ss::formula::eval::UnaryPlusEval::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::UnaryPlusEval::instance_;

void poi::ss::formula::eval::UnaryPlusEval::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::UnaryPlusEval::evaluate(int32_t srcCellRow, int32_t srcCellCol, ValueEval* arg0)
{
    double d;
    try {
        auto ve = OperandResolver::getSingleValue(arg0, srcCellRow, srcCellCol);
        if(dynamic_cast< StringEval* >(ve) != nullptr) {
            return ve;
        }
        d = OperandResolver::coerceValueToDouble(ve);
    } catch (EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new NumberEval(+d);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::UnaryPlusEval::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.UnaryPlusEval", 44);
    return c;
}

void poi::ss::formula::eval::UnaryPlusEval::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new UnaryPlusEval();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::UnaryPlusEval::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::eval::UnaryPlusEval::getClass0()
{
    return class_();
}

