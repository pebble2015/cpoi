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
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace formula
                {
                    namespace eval
                    {
typedef ::SubArray< ::org::apache::poi::ss::formula::eval::ValueEval, ::java::lang::ObjectArray > ValueEvalArray;
                    } // eval
                } // formula
            } // ss
        } // poi
    } // apache
} // org

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::functions::PPMT::PPMT(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::PPMT::PPMT()
    : PPMT(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

double org::apache::poi::ss::formula::functions::PPMT::eval(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    if(npc(args)->length < 4)
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());

    double result;
    auto v1 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], srcCellRow, srcCellCol);
    auto v2 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], srcCellRow, srcCellCol);
    auto v3 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(2)], srcCellRow, srcCellCol);
    auto v4 = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(3)], srcCellRow, srcCellCol);
    auto interestRate = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v1);
    auto period = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToInt(v2);
    auto numberPayments = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToInt(v3);
    auto PV = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(v4);
    result = Finance::ppmt(interestRate, period, numberPayments, PV);
    checkValue(result);
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::PPMT::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.PPMT", 40);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::functions::PPMT::getClass0()
{
    return class_();
}

