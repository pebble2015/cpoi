// Generated from /POI/java/org/apache/poi/ss/formula/functions/Today.java
#include <org/apache/poi/ss/formula/functions/Today.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/eval/NumberEval.hpp>
#include <org/apache/poi/ss/formula/eval/ValueEval.hpp>
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

poi::ss::formula::functions::Today::Today(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::functions::Today::Today()
    : Today(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Today::evaluate(int32_t srcRowIndex, int32_t srcColumnIndex)
{
    auto now = ::poi::util::LocaleUtil::getLocaleCalendar();
    npc(now)->clear(::java::util::Calendar::HOUR);
    npc(now)->set(::java::util::Calendar::HOUR_OF_DAY, 0);
    npc(now)->clear(::java::util::Calendar::MINUTE);
    npc(now)->clear(::java::util::Calendar::SECOND);
    npc(now)->clear(::java::util::Calendar::MILLISECOND);
    return new ::poi::ss::formula::eval::NumberEval(::poi::ss::usermodel::DateUtil::getExcelDate(npc(now)->getTime()));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::functions::Today::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.functions.Today", 41);
    return c;
}

poi::ss::formula::eval::ValueEval* poi::ss::formula::functions::Today::evaluate(::poi::ss::formula::eval::ValueEvalArray* args, int32_t srcRowIndex, int32_t srcColumnIndex)
{
    return super::evaluate(args, srcRowIndex, srcColumnIndex);
}

java::lang::Class* poi::ss::formula::functions::Today::getClass0()
{
    return class_();
}

