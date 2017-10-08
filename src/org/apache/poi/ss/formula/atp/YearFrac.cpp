// Generated from /POI/java/org/apache/poi/ss/formula/atp/YearFrac.java
#include <org/apache/poi/ss/formula/atp/YearFrac.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/atp/DateParser.hpp>
#include <org/apache/poi/ss/formula/atp/YearFracCalculator.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/StringEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
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

poi::ss::formula::atp::YearFrac::YearFrac(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::YearFrac::YearFrac() 
    : YearFrac(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::atp::YearFrac::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::atp::YearFrac::instance_;

void poi::ss::formula::atp::YearFrac::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::atp::YearFrac::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    auto srcCellRow = npc(ec)->getRowIndex();
    auto srcCellCol = npc(ec)->getColumnIndex();
    double result;
    try {
        auto basis = int32_t(0);
        switch (npc(args)->length) {
        case int32_t(3):
            basis = evaluateIntArg((*args)[int32_t(2)], srcCellRow, srcCellCol);
        case int32_t(2):
            break;
        default:
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }

        auto startDateVal = evaluateDateArg((*args)[int32_t(0)], srcCellRow, srcCellCol);
        auto endDateVal = evaluateDateArg((*args)[int32_t(1)], srcCellRow, srcCellCol);
        result = YearFracCalculator::calculate(startDateVal, endDateVal, basis);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

double poi::ss::formula::atp::YearFrac::evaluateDateArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, static_cast< int16_t >(srcCellCol));
    if(dynamic_cast< ::poi::ss::formula::eval::StringEval* >(ve) != nullptr) {
        auto strVal = npc((java_cast< ::poi::ss::formula::eval::StringEval* >(ve)))->getStringValue();
        auto dVal = ::poi::ss::formula::eval::OperandResolver::parseDouble(strVal);
        if(dVal != nullptr) {
            return npc(dVal)->doubleValue();
        }
        auto date = DateParser::parseDate(strVal);
        return ::poi::ss::usermodel::DateUtil::getExcelDate(date, false);
    }
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
}

int32_t poi::ss::formula::atp::YearFrac::evaluateIntArg(::poi::ss::formula::eval::ValueEval* arg, int32_t srcCellRow, int32_t srcCellCol) /* throws(EvaluationException) */
{
    clinit();
    auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(arg, srcCellRow, static_cast< int16_t >(srcCellCol));
    return ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::YearFrac::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.YearFrac", 38);
    return c;
}

void poi::ss::formula::atp::YearFrac::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new YearFrac();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::YearFrac::getClass0()
{
    return class_();
}

