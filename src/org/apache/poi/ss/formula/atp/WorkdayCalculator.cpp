// Generated from /POI/java/org/apache/poi/ss/formula/atp/WorkdayCalculator.java
#include <org/apache/poi/ss/formula/atp/WorkdayCalculator.hpp>

#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::ss::formula::atp::WorkdayCalculator::WorkdayCalculator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::formula::atp::WorkdayCalculator::WorkdayCalculator() 
    : WorkdayCalculator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::ss::formula::atp::WorkdayCalculator*& poi::ss::formula::atp::WorkdayCalculator::instance()
{
    clinit();
    return instance_;
}
poi::ss::formula::atp::WorkdayCalculator* poi::ss::formula::atp::WorkdayCalculator::instance_;

void poi::ss::formula::atp::WorkdayCalculator::ctor()
{
    super::ctor();
}

int32_t poi::ss::formula::atp::WorkdayCalculator::calculateWorkdays(double start, double end, ::doubleArray* holidays)
{
    auto saturdaysPast = this->pastDaysOfWeek(start, end, ::java::util::Calendar::SATURDAY);
    auto sundaysPast = this->pastDaysOfWeek(start, end, ::java::util::Calendar::SUNDAY);
    auto nonWeekendHolidays = this->calculateNonWeekendHolidays(start, end, holidays);
    return static_cast< int32_t >((end - start + int32_t(1))) - saturdaysPast - sundaysPast- nonWeekendHolidays;
}

java::util::Date* poi::ss::formula::atp::WorkdayCalculator::calculateWorkdays(double start, int32_t workdays, ::doubleArray* holidays)
{
    auto startDate = ::poi::ss::usermodel::DateUtil::getJavaDate(start);
    auto direction = workdays < 0 ? -int32_t(1) : int32_t(1);
    auto endDate = ::poi::util::LocaleUtil::getLocaleCalendar();
    npc(endDate)->setTime(startDate);
    auto excelEndDate = ::poi::ss::usermodel::DateUtil::getExcelDate(npc(endDate)->getTime());
    while (workdays != 0) {
        npc(endDate)->add(::java::util::Calendar::DAY_OF_YEAR, direction);
        excelEndDate += direction;
        if(npc(endDate)->get(::java::util::Calendar::DAY_OF_WEEK) != ::java::util::Calendar::SATURDAY && npc(endDate)->get(::java::util::Calendar::DAY_OF_WEEK) != ::java::util::Calendar::SUNDAY && !isHoliday(excelEndDate, holidays)) {
            workdays -= direction;
        }
    }
    return npc(endDate)->getTime();
}

int32_t poi::ss::formula::atp::WorkdayCalculator::pastDaysOfWeek(double start, double end, int32_t dayOfWeek)
{
    auto pastDaysOfWeek = int32_t(0);
    auto startDay = static_cast< int32_t >(::java::lang::Math::floor(start < end ? start : end));
    auto endDay = static_cast< int32_t >(::java::lang::Math::floor(end > start ? end : start));
    for (; startDay <= endDay; startDay++) {
        auto today = ::poi::util::LocaleUtil::getLocaleCalendar();
        npc(today)->setTime(::poi::ss::usermodel::DateUtil::getJavaDate(startDay));
        if(npc(today)->get(::java::util::Calendar::DAY_OF_WEEK) == dayOfWeek) {
            pastDaysOfWeek++;
        }
    }
    return start <= end ? pastDaysOfWeek : -pastDaysOfWeek;
}

int32_t poi::ss::formula::atp::WorkdayCalculator::calculateNonWeekendHolidays(double start, double end, ::doubleArray* holidays)
{
    auto nonWeekendHolidays = int32_t(0);
    auto startDay = start < end ? start : end;
    auto endDay = end > start ? end : start;
    for(auto holiday : *npc(holidays)) {
        if(isInARange(startDay, endDay, holiday)) {
            if(!isWeekend(holiday)) {
                nonWeekendHolidays++;
            }
        }
    }
    return start <= end ? nonWeekendHolidays : -nonWeekendHolidays;
}

bool poi::ss::formula::atp::WorkdayCalculator::isWeekend(double aDate)
{
    auto date = ::poi::util::LocaleUtil::getLocaleCalendar();
    npc(date)->setTime(::poi::ss::usermodel::DateUtil::getJavaDate(aDate));
    return npc(date)->get(::java::util::Calendar::DAY_OF_WEEK) == ::java::util::Calendar::SATURDAY || npc(date)->get(::java::util::Calendar::DAY_OF_WEEK) == ::java::util::Calendar::SUNDAY;
}

bool poi::ss::formula::atp::WorkdayCalculator::isHoliday(double aDate, ::doubleArray* holidays)
{
    for(auto holiday : *npc(holidays)) {
        if(::java::lang::Math::round(holiday) == ::java::lang::Math::round(aDate)) {
            return true;
        }
    }
    return false;
}

int32_t poi::ss::formula::atp::WorkdayCalculator::isNonWorkday(double aDate, ::doubleArray* holidays)
{
    return isWeekend(aDate) || isHoliday(aDate, holidays) ? int32_t(1) : int32_t(0);
}

bool poi::ss::formula::atp::WorkdayCalculator::isInARange(double start, double end, double aDate)
{
    return aDate >= start && aDate <= end;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::formula::atp::WorkdayCalculator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.WorkdayCalculator", 47);
    return c;
}

void poi::ss::formula::atp::WorkdayCalculator::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        instance_ = new WorkdayCalculator();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::formula::atp::WorkdayCalculator::getClass0()
{
    return class_();
}

