// Generated from /POI/java/org/apache/poi/ss/formula/functions/EOMonth.java
#include <org/apache/poi/ss/formula/functions/EOMonth.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/ss/formula/OperationEvaluationContext.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
#include <org/apache/poi/ss/formula/functions/NumericFunction.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
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

org::apache::poi::ss::formula::functions::EOMonth::EOMonth(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::functions::EOMonth::EOMonth()
    : EOMonth(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::formula::functions::FreeRefFunction*& org::apache::poi::ss::formula::functions::EOMonth::instance()
{
    clinit();
    return instance_;
}
org::apache::poi::ss::formula::functions::FreeRefFunction* org::apache::poi::ss::formula::functions::EOMonth::instance_;

org::apache::poi::ss::formula::eval::ValueEval* org::apache::poi::ss::formula::functions::EOMonth::evaluate(::org::apache::poi::ss::formula::eval::ValueEvalArray* args, ::org::apache::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 2) {
        return ::org::apache::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        auto startDateAsNumber = NumericFunction::singleOperandEvaluate((*args)[int32_t(0)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex());
        auto months = static_cast< int32_t >(NumericFunction::singleOperandEvaluate((*args)[int32_t(1)], npc(ec)->getRowIndex(), npc(ec)->getColumnIndex()));
        if(startDateAsNumber >= 0.0 && startDateAsNumber < 1.0) {
            startDateAsNumber = 1.0;
        }
        auto startDate = ::org::apache::poi::ss::usermodel::DateUtil::getJavaDate(startDateAsNumber, false);
        auto cal = ::org::apache::poi::util::LocaleUtil::getLocaleCalendar();
        npc(cal)->setTime(startDate);
        npc(cal)->clear(::java::util::Calendar::HOUR);
        npc(cal)->set(::java::util::Calendar::HOUR_OF_DAY, 0);
        npc(cal)->clear(::java::util::Calendar::MINUTE);
        npc(cal)->clear(::java::util::Calendar::SECOND);
        npc(cal)->clear(::java::util::Calendar::MILLISECOND);
        npc(cal)->add(::java::util::Calendar::MONTH, months + int32_t(1));
        npc(cal)->set(::java::util::Calendar::DAY_OF_MONTH, 1);
        npc(cal)->add(::java::util::Calendar::DAY_OF_MONTH, -int32_t(1));
        return new ::org::apache::poi::ss::formula::eval::NumberEval(::org::apache::poi::ss::usermodel::DateUtil::getExcelDate(npc(cal)->getTime()));
    } catch (::org::apache::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::functions::EOMonth::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.EOMonth", 43);
    return c;
}

void org::apache::poi::ss::formula::functions::EOMonth::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new EOMonth();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::formula::functions::EOMonth::getClass0()
{
    return class_();
}

