// Generated from /POI/java/org/apache/poi/ss/formula/functions/CalendarFieldFunction.java
#include <org/apache/poi/ss/formula/functions/CalendarFieldFunction.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/OperandResolver.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>

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

org::apache::poi::ss::formula::functions::CalendarFieldFunction::CalendarFieldFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::CalendarFieldFunction::CalendarFieldFunction(int32_t dateFieldId) 
    : CalendarFieldFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(dateFieldId);
}

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::CalendarFieldFunction::YEAR()
{
    clinit();
    return YEAR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::CalendarFieldFunction::YEAR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::CalendarFieldFunction::MONTH()
{
    clinit();
    return MONTH_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::CalendarFieldFunction::MONTH_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::CalendarFieldFunction::DAY()
{
    clinit();
    return DAY_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::CalendarFieldFunction::DAY_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::CalendarFieldFunction::HOUR()
{
    clinit();
    return HOUR_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::CalendarFieldFunction::HOUR_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::CalendarFieldFunction::MINUTE()
{
    clinit();
    return MINUTE_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::CalendarFieldFunction::MINUTE_;

org::apache::poi::ss::formula::functions::Function*& org::apache::poi::ss::formula::functions::CalendarFieldFunction::SECOND()
{
    clinit();
    return SECOND_;
}
org::apache::poi::ss::formula::functions::Function* org::apache::poi::ss::formula::functions::CalendarFieldFunction::SECOND_;

void org::apache::poi::ss::formula::functions::CalendarFieldFunction::ctor(int32_t dateFieldId)
{
    super::ctor();
    _dateFieldId = dateFieldId;
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::CalendarFieldFunction::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex, ::org::apache::poi::ss::formula::eval::ValueEval* arg0)
{
    double val;
    try {
        auto ve = ::org::apache::poi::ss::formula::eval::OperandResolver::getSingleValue(arg0, srcRowIndex, srcColumnIndex);
        val = ::org::apache::poi::ss::formula::eval::OperandResolver::coerceValueToDouble(ve);
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
    if(val < 0) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR();
    }
    return new ::org::apache::poi::ss::formula::eval::NumberEval(static_cast< double >(getCalField(val)));
}

int32_t org::apache::poi::ss::formula::functions::CalendarFieldFunction::getCalField(double serialDate)
{
    if((static_cast< int32_t >(serialDate)) == 0) {
        switch (_dateFieldId) {
        case ::java::util::Calendar::YEAR:
            return 1900;
        case ::java::util::Calendar::MONTH:
            return 1;
        case ::java::util::Calendar::DAY_OF_MONTH:
            return 0;
        }

    }
    auto c = ::org::apache::poi::ss::usermodel::DateUtil::getJavaCalendarUTC(serialDate + 0.4995 / ::org::apache::poi::ss::usermodel::DateUtil::SECONDS_PER_DAY, false);
    auto result = npc(c)->get(_dateFieldId);
    if(_dateFieldId == ::java::util::Calendar::MONTH) {
        result++;
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::CalendarFieldFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.CalendarFieldFunction", 57);
    return c;
}

void org::apache::poi::ss::formula::functions::CalendarFieldFunction::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        YEAR_ = new CalendarFieldFunction(::java::util::Calendar::YEAR);
        MONTH_ = new CalendarFieldFunction(::java::util::Calendar::MONTH);
        DAY_ = new CalendarFieldFunction(::java::util::Calendar::DAY_OF_MONTH);
        HOUR_ = new CalendarFieldFunction(::java::util::Calendar::HOUR_OF_DAY);
        MINUTE_ = new CalendarFieldFunction(::java::util::Calendar::MINUTE);
        SECOND_ = new CalendarFieldFunction(::java::util::Calendar::SECOND);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::CalendarFieldFunction::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* org::apache::poi::ss::formula::functions::CalendarFieldFunction::getClass0()
{
    return class_();
}

