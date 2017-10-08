// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.hpp>

#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_1.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_2.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_3.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_4.hpp>
#include <org/apache/poi/ss/formula/eval/TwoOperandNumericOperation_SubtractEvalClass.hpp>
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

poi::ss::formula::eval::TwoOperandNumericOperation::TwoOperandNumericOperation(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::TwoOperandNumericOperation::TwoOperandNumericOperation()
    : TwoOperandNumericOperation(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

double poi::ss::formula::eval::TwoOperandNumericOperation::singleOperandEvaluate(ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    auto ve = OperandResolver::getSingleValue(arg, srcCellRow, srcCellCol);
    return OperandResolver::coerceValueToDouble(ve);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::TwoOperandNumericOperation::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    double result;
    try {
        auto d0 = singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        auto d1 = singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        result = evaluate(d0, d1);
        if(result == 0.0) {
            if(!(dynamic_cast< TwoOperandNumericOperation_SubtractEvalClass* >(this) != nullptr)) {
                return NumberEval::ZERO();
            }
        }
        if(::java::lang::Double::isNaN(result) || ::java::lang::Double::isInfinite(result)) {
            return ErrorEval::NUM_ERROR();
        }
    } catch (EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new NumberEval(result);
}

poi::ss::formula::functions::Function*& poi::ss::formula::eval::TwoOperandNumericOperation::AddEval()
{
    clinit();
    return AddEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::TwoOperandNumericOperation::AddEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::TwoOperandNumericOperation::DivideEval()
{
    clinit();
    return DivideEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::TwoOperandNumericOperation::DivideEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::TwoOperandNumericOperation::MultiplyEval()
{
    clinit();
    return MultiplyEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::TwoOperandNumericOperation::MultiplyEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::TwoOperandNumericOperation::PowerEval()
{
    clinit();
    return PowerEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::TwoOperandNumericOperation::PowerEval_;

poi::ss::formula::functions::Function*& poi::ss::formula::eval::TwoOperandNumericOperation::SubtractEval()
{
    clinit();
    return SubtractEval_;
}
poi::ss::formula::functions::Function* poi::ss::formula::eval::TwoOperandNumericOperation::SubtractEval_;

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::TwoOperandNumericOperation::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.TwoOperandNumericOperation", 57);
    return c;
}

void poi::ss::formula::eval::TwoOperandNumericOperation::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        AddEval_ = new TwoOperandNumericOperation_1();
        DivideEval_ = new TwoOperandNumericOperation_2();
        MultiplyEval_ = new TwoOperandNumericOperation_3();
        PowerEval_ = new TwoOperandNumericOperation_4();
        SubtractEval_ = new TwoOperandNumericOperation_SubtractEvalClass();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::TwoOperandNumericOperation::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::eval::TwoOperandNumericOperation::getClass0()
{
    return class_();
}

