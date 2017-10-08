// Generated from /POI/java/org/apache/poi/ss/formula/functions/PPMT.java
#include <org/apache/poi/ss/formula/functions/PPMT.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/Finance.hpp>
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

poi::ss::formula::functions::PPMT::PPMT(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::PPMT::PPMT()
    : PPMT(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

double poi::ss::formula::functions::PPMT::eval(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    if(npc(args)->length < 4)
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());

    double result;
    auto v1 = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], srcCellRow, srcCellCol);
    auto v2 = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], srcCellRow, srcCellCol);
    auto v3 = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(2)], srcCellRow, srcCellCol);
    auto v4 = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(3)], srcCellRow, srcCellCol);
    auto interestRate = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v1);
    auto period = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(v2);
    auto numberPayments = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(v3);
    auto PV = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v4);
    result = Finance::ppmt(interestRate, period, numberPayments, PV);
    checkValue(result);
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::PPMT::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.PPMT", 40);
    return c;
}

java::lang::Class* poi::ss::formula::functions::PPMT::getClass0()
{
    return class_();
}

