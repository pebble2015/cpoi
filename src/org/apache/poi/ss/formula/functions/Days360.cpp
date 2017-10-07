// Generated from /POI/java/org/apache/poi/ss/formula/functions/Days360.java
#include <org/apache/poi/ss/formula/functions/Days360.hpp>

#include <java/lang/Boolean.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <Array.hpp>

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

org::apache::poi::ss::formula::functions::Days360::Days360(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::Days360::Days360()
    : Days360(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Days360::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1)
{
    try {
        auto d0 = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        auto d1 = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(evaluate(d0, d1, false));
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Days360::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0, ::org::apache::poi::ss::formula::eval::ValueEval* arg1, ::org::apache::poi::ss::formula::eval::ValueEval* arg2)
{
    try {
        auto d0 = NumericFunction::singleOperandEvaluate(arg0, srcRowIndex, srcColumnIndex);
        auto d1 = NumericFunction::singleOperandEvaluate(arg1, srcRowIndex, srcColumnIndex);
        auto ve = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg2, srcRowIndex, srcColumnIndex);
        auto method = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToBoolean(ve, false);
        return new ::org::apache::poi::ss::formula::eval::NumberEval(evaluate(d0, d1, method != nullptr && npc(method)->booleanValue()));
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

double org::apache::poi::ss::formula::functions::Days360::evaluate(double d0, double d1, bool method)
{
    clinit();
    auto realStart = getDate(d0);
    auto realEnd = getDate(d1);
    auto startingDate = getStartingDate(realStart, method);
    auto endingDate = getEndingDate(realEnd, startingDate, method);
    return ((*endingDate)[int32_t(0)] * int32_t(360) + (*endingDate)[int32_t(1)] * int32_t(30) + (*endingDate)[int32_t(2)]) - ((*startingDate)[int32_t(0)] * int32_t(360) + (*startingDate)[int32_t(1)] * int32_t(30) + (*startingDate)[int32_t(2)]);
}

java::util::Calendar* org::apache::poi::ss::formula::functions::Days360::getDate(double date)
{
    clinit();
    auto processedDate = ::org::apache::poi::util::LocaleUtil::getLocaleCalendar();
    npc(processedDate)->setTime(::org::apache::poi::ss::usermodel::DateUtil::getJavaDate(date, false));
    return processedDate;
}

int32_tArray* org::apache::poi::ss::formula::functions::Days360::getStartingDate(::java::util::Calendar* realStart, bool method)
{
    clinit();
    auto yyyy = npc(realStart)->get(::java::util::Calendar::YEAR);
    auto mm = npc(realStart)->get(::java::util::Calendar::MONTH);
    auto dd = ::java::lang::Math::min(int32_t(30), npc(realStart)->get(::java::util::Calendar::DAY_OF_MONTH));
    if(!method && isLastDayOfMonth(realStart))
        dd = 30;

    return new ::int32_tArray({
        yyyy
        , mm
        , dd
    });
}

int32_tArray* org::apache::poi::ss::formula::functions::Days360::getEndingDate(::java::util::Calendar* realEnd, ::int32_tArray* startingDate, bool method)
{
    clinit();
    auto yyyy = npc(realEnd)->get(::java::util::Calendar::YEAR);
    auto mm = npc(realEnd)->get(::java::util::Calendar::MONTH);
    auto dd = ::java::lang::Math::min(int32_t(30), npc(realEnd)->get(::java::util::Calendar::DAY_OF_MONTH));
    if(!method && npc(realEnd)->get(::java::util::Calendar::DAY_OF_MONTH) == 31) {
        if((*startingDate)[int32_t(2)] < 30) {
            npc(realEnd)->set(::java::util::Calendar::DAY_OF_MONTH, 1);
            npc(realEnd)->add(::java::util::Calendar::MONTH, 1);
            yyyy = npc(realEnd)->get(::java::util::Calendar::YEAR);
            mm = npc(realEnd)->get(::java::util::Calendar::MONTH);
            dd = 1;
        } else {
            dd = 30;
        }
    }
    return new ::int32_tArray({
        yyyy
        , mm
        , dd
    });
}

bool org::apache::poi::ss::formula::functions::Days360::isLastDayOfMonth(::java::util::Calendar* date)
{
    clinit();
    auto dayOfMonth = npc(date)->get(::java::util::Calendar::DAY_OF_MONTH);
    auto lastDayOfMonth = npc(date)->getActualMaximum(::java::util::Calendar::DAY_OF_MONTH);
    return (dayOfMonth == lastDayOfMonth);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::Days360::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Days360", 43);
    return c;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::Days360::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::Days360::getClass0()
{
    return class_();
}

