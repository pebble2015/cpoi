// Generated from /POI/java/org/apache/poi/ss/formula/atp/YearFracCalculator.java
#include <org/apache/poi/ss/formula/atp/YearFracCalculator_SimpleDate.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::YearFracCalculator_SimpleDate(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::YearFracCalculator_SimpleDate(::java::util::Calendar* cal) 
    : YearFracCalculator_SimpleDate(*static_cast< ::default_init_tag* >(0))
{
    ctor(cal);
}

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::JANUARY;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::FEBRUARY;

void org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::ctor(::java::util::Calendar* cal)
{
    super::ctor();
    year = npc(cal)->get(::java::util::Calendar::YEAR);
    month = npc(cal)->get(::java::util::Calendar::MONTH) + int32_t(1);
    day = npc(cal)->get(::java::util::Calendar::DAY_OF_MONTH);
    tsMilliseconds = npc(cal)->getTimeInMillis();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.YearFracCalculator.SimpleDate", 59);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate::getClass0()
{
    return class_();
}

