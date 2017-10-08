// Generated from /POI/java/org/apache/poi/ss/formula/functions/DateFunc.java
#include <org/apache/poi/ss/formula/functions/DateFunc.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>

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

poi::ss::formula::functions::DateFunc::DateFunc(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::DateFunc::DateFunc() 
    : DateFunc(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::Function*& poi::ss::formula::functions::DateFunc::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::Function* poi::ss::formula::functions::DateFunc::instance_;

void poi::ss::formula::functions::DateFunc::ctor()
{
    super::ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DateFunc::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* arg0, ::poi::ss::formula::eval::ValueEval* arg1, ::poi::ss::formula::eval::ValueEval* arg2)
{
    double result;
    try {
        auto d0 = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        auto d1 = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        auto d2 = NumericFunction::singleOperandEvaluate(arg2, srcRowIndex, srcColumnIndex);
        result = evaluate(getYear(d0), static_cast< int32_t >((d1 - int32_t(1))), static_cast< int32_t >(d2));
        NumericFunction::checkValue(result);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    return new ::poi::ss::formula::eval::NumberEval(result);
}

double poi::ss::formula::functions::DateFunc::evaluate(int32_t year, int32_t month, int32_t pDay) /* throws(EvaluationException) */
{
    clinit();
    if(year < 0) {
        throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
    }
    while (month < 0) {
        year--;
        month += 12;
    }
    if(year == 1900 && month == ::java::util::Calendar::FEBRUARY && pDay == 29) {
        return 60.0;
    }
    auto day = pDay;
    if(year == 1900) {
        if((month == ::java::util::Calendar::JANUARY && day >= 60) || (month == ::java::util::Calendar::FEBRUARY && day >= 30)) {
            day--;
        }
    }
    auto c = ::poi::util::LocaleUtil::getLocaleCalendar(year, month, day);
    if(pDay < 0 && npc(c)->get(::java::util::Calendar::YEAR) == 1900 && month > ::java::util::Calendar::FEBRUARY && npc(c)->get(::java::util::Calendar::MONTH) < ::java::util::Calendar::MARCH) {
        npc(c)->add(::java::util::Calendar::DATE, 1);
    }
    auto use1904windowing = false;
    return ::poi::ss::usermodel::DateUtil::getExcelDate(npc(c)->getTime(), use1904windowing);
}

int32_t poi::ss::formula::functions::DateFunc::getYear(double d)
{
    clinit();
    auto year = static_cast< int32_t >(d);
    if(year < 0) {
        return -int32_t(1);
    }
    return year < 1900 ? int32_t(1900) + year : year;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::DateFunc::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.DateFunc", 44);
    return c;
}

void poi::ss::formula::functions::DateFunc::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new DateFunc();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::DateFunc::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::DateFunc::getClass0()
{
    return class_();
}

