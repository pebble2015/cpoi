// Generated from /POI/java/org/apache/poi/ss/formula/functions/WeekdayFunc.java
#include <org/apache/poi/ss/formula/functions/WeekdayFunc.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/MissingArgEval.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::functions::WeekdayFunc::WeekdayFunc(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::WeekdayFunc::WeekdayFunc() 
    : WeekdayFunc(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::Function*& poi::ss::formula::functions::WeekdayFunc::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::WeekdayFunc::instance_;

void poi::ss::formula::functions::WeekdayFunc::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::WeekdayFunc::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    try {
        if(npc(args)->length < 1 || npc(args)->length > 2) {
            return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
        }
        auto serialDateVE = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(0)], srcRowIndex, srcColumnIndex);
        auto serialDate = ::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(serialDateVE);
        if(!::poi::ss::usermodel::DateUtil::isValidExcelDate(serialDate)) {
            return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
        auto date = ::poi::ss::usermodel::DateUtil::getJavaCalendar(serialDate, false);
        auto weekday = npc(date)->get(::java::util::Calendar::DAY_OF_WEEK);
        auto returnOption = int32_t(1);
        if(npc(args)->length == 2) {
            auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue((*args)[int32_t(1)], srcRowIndex, srcColumnIndex);
            if(ve == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::MissingArgEval::instance()) || ve == static_cast< ::poi::ss::formula::eval::ValueEval* >(::poi::ss::formula::eval::BlankEval::instance())) {
                return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
            }
            returnOption = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
            if(returnOption == 2) {
                returnOption = 11;
            }
        }
        double result;
        if(returnOption == 1) {
            result = weekday;
        } else if(returnOption == 3) {
            result = (weekday + int32_t(6) - int32_t(1)) % int32_t(7);
        } else if(returnOption >= 11 && returnOption <= 17) {
            result = (weekday + int32_t(6) - (returnOption - int32_t(10))) % int32_t(7) + int32_t(1);
        } else {
            return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
        }
        return new ::poi::ss::formula::eval::NumberEval(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::WeekdayFunc::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.WeekdayFunc", 47);
    return c;
}

void poi::ss::formula::functions::WeekdayFunc::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new WeekdayFunc();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::WeekdayFunc::getClass0()
{
    return class_();
}

