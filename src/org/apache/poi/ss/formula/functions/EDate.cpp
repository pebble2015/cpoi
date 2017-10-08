// Generated from /POI/java/org/apache/poi/ss/formula/functions/EDate.java
#include <org/apache/poi/ss/formula/functions/EDate.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/ss/formula/eval/BlankEval.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/RefEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::EDate::EDate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::EDate::EDate()
    : EDate(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::functions::FreeRefFunction*& poi::ss::formula::functions::EDate::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::functions::FreeRefFunction* poi::ss::formula::functions::EDate::instance_;

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::EDate::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, ::poi::ss::formula::OperationEvaluationContext* ec)
{
    if(npc(args)->length != 2) {
        return ::poi::ss::formula::eval::ErrorEval::VALUE_INVALID();
    }
    try {
        auto startDateAsNumber = getValue((*args)[int32_t(0)]);
        auto offsetInMonthAsNumber = static_cast< int32_t >(getValue((*args)[int32_t(1)]));
        auto startDate = ::poi::ss::usermodel::DateUtil::getJavaDate(startDateAsNumber);
        auto calendar = ::poi::util::LocaleUtil::getLocaleCalendar();
        npc(calendar)->setTime(startDate);
        npc(calendar)->add(::java::util::Calendar::MONTH, offsetInMonthAsNumber);
        return new ::poi::ss::formula::eval::NumberEval(::poi::ss::usermodel::DateUtil::getExcelDate(npc(calendar)->getTime()));
    } catch (::poi::ss::formula::eval::EvaluationException* e) {
        return npc(e)->getErrorEval();
    }
}

double poi::ss::formula::functions::EDate::getValue(::poi::ss::formula::eval::ValueEval* arg) /* throws(EvaluationException) */
{
    if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(arg) != nullptr) {
        return npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(arg)))->getNumberValue();
    }
    if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(arg) != nullptr) {
        return 0;
    }
    if(dynamic_cast< ::poi::ss::formula::eval::RefEval* >(arg) != nullptr) {
        auto refEval = java_cast< ::poi::ss::formula::eval::RefEval* >(arg);
        if(npc(refEval)->getNumberOfSheets() > 1) {
            throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
        }
        auto innerValueEval = npc(refEval)->getInnerValueEval(npc(refEval)->getFirstSheetIndex());
        if(dynamic_cast< ::poi::ss::formula::eval::NumberEval* >(innerValueEval) != nullptr) {
            return npc((java_cast< ::poi::ss::formula::eval::NumberEval* >(innerValueEval)))->getNumberValue();
        }
        if(dynamic_cast< ::poi::ss::formula::eval::BlankEval* >(innerValueEval) != nullptr) {
            return 0;
        }
    }
    throw new ::poi::ss::formula::eval::EvaluationException(::poi::ss::formula::eval::ErrorEval::VALUE_INVALID());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::EDate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.EDate", 41);
    return c;
}

void poi::ss::formula::functions::EDate::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new EDate();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::functions::EDate::getClass0()
{
    return class_();
}

