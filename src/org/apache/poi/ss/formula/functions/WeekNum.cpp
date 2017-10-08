// Generated from /POI/java/org/apache/poi/ss/formula/functions/WeekNum.java
#include <org/apache/poi/ss/formula/functions/WeekNum.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
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

poi::ss::formula::functions::WeekNum::WeekNum(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::WeekNum::WeekNum()
    : WeekNum(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::WeekNum::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::WeekNum::instance_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::WeekNum::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::poi::ss::formula::eval::ValueEval* serialNumVE, ::poi::ss::formula::eval::ValueEval* returnTypeVE)
{
    double serialNum;
    try {
        serialNum = NumericFunction::singleOperandEvaluate(serialNumVE, srcRowIndex, srcColumnIndex);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    auto serialNumCalendar = ::poi::util::LocaleUtil::getLocaleCalendar();
    npc(serialNumCalendar)->setTime(::poi::ss::usermodel::DateUtil::getJavaDate(serialNum, false));
    int32_t returnType;
    try {
        auto ve = ::poi::ss::formula::eval::OperandResolver::getSingleValue(returnTypeVE, srcRowIndex, srcColumnIndex);
        returnType = ::poi::ss::formula::eval::OperandResolver::coerceValueToInt(ve);
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    if(returnType != 1 && returnType != 2) {
        return ::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::poi::ss::formula::eval::NumberEval(static_cast< double >(this->getWeekNo(serialNumCalendar, returnType)));
}

int32_t poi::ss::formula::functions::WeekNum::getWeekNo(::java::util::Calendar* cal, int32_t weekStartOn)
{
    if(weekStartOn == 1) {
        npc(cal)->setFirstDayOfWeek(::java::util::Calendar::SUNDAY);
    } else {
        npc(cal)->setFirstDayOfWeek(::java::util::Calendar::MONDAY);
    }
    return npc(cal)->get(::java::util::Calendar::WEEK_OF_YEAR);
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::WeekNum::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length == 2) {
        return evaluate(npc(ec)->getRowIndex(), npc(ec)->getColumnIndex(), (*args)[int32_t(0)], (*args)[int32_t(1)]);
    }
    return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::WeekNum::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.WeekNum", 43);
    return c;
}

void poi::ss::formula::functions::WeekNum::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new WeekNum();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::WeekNum::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::WeekNum::getClass0()
{
    return class_();
}

