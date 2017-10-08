// Generated from /POI/java/org/apache/poi/ss/formula/eval/TwoOperandNumericOperation.java
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

poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::TwoOperandNumericOperation_SubtractEvalClass(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::TwoOperandNumericOperation_SubtractEvalClass() 
    : TwoOperandNumericOperation_SubtractEvalClass(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::ctor()
{
    super::ctor();
}

double poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::evaluate(double d0, double d1)
{
    return d0 - d1;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.eval.TwoOperandNumericOperation.SubtractEvalClass", 75);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ValueEval* arg0, ValueEval* arg1)
{
    return super::evaluate(srcRowIndex, srcColumnIndex, arg0, arg1);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::evaluate(ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::eval::TwoOperandNumericOperation_SubtractEvalClass::getClass0()
{
    return class_();
}

