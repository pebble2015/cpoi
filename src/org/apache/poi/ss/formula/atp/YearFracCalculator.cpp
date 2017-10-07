// Generated from /POI/java/org/apache/poi/ss/formula/atp/YearFracCalculator.java
#include <org/apache/poi/ss/formula/atp/YearFracCalculator.hpp>

#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Calendar.hpp>
#include <org/apache/poi/ss/formula/atp/YearFracCalculator_SimpleDate.hpp>
#include <org/apache/poi/ss/formula/eval/ErrorEval.hpp>
#include <org/apache/poi/ss/formula/eval/EvaluationException.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::formula::atp::YearFracCalculator::YearFracCalculator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::formula::atp::YearFracCalculator::YearFracCalculator() 
    : YearFracCalculator(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::MS_PER_HOUR;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::MS_PER_DAY;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::DAYS_PER_NORMAL_YEAR;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::DAYS_PER_LEAP_YEAR;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::LONG_MONTH_LEN;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::SHORT_MONTH_LEN;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::SHORT_FEB_LEN;

constexpr int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::LONG_FEB_LEN;

void org::apache::poi::ss::formula::atp::YearFracCalculator::ctor()
{
    super::ctor();
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::calculate(double pStartDateVal, double pEndDateVal, int32_t basis) /* throws(EvaluationException) */
{
    clinit();
    if(basis < 0 || basis >= 5) {
        throw new ::org::apache::poi::ss::formula::eval::EvaluationException(::org::apache::poi::ss::formula::eval::ErrorEval::NUM_ERROR());
    }
    auto startDateVal = static_cast< int32_t >(::java::lang::Math::floor(pStartDateVal));
    auto endDateVal = static_cast< int32_t >(::java::lang::Math::floor(pEndDateVal));
    if(startDateVal == endDateVal) {
        return 0;
    }
    if(startDateVal > endDateVal) {
        auto temp = startDateVal;
        startDateVal = endDateVal;
        endDateVal = temp;
    }
    switch (basis) {
    case int32_t(0):
        return basis0(startDateVal, endDateVal);
    case int32_t(1):
        return basis1(startDateVal, endDateVal);
    case int32_t(2):
        return basis2(startDateVal, endDateVal);
    case int32_t(3):
        return basis3(startDateVal, endDateVal);
    case int32_t(4):
        return basis4(startDateVal, endDateVal);
    }

    throw new ::java::lang::IllegalStateException(u"cannot happen"_j);
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::basis0(int32_t startDateVal, int32_t endDateVal)
{
    clinit();
    auto startDate = createDate(startDateVal);
    auto endDate = createDate(endDateVal);
    auto date1day = npc(startDate)->day;
    auto date2day = npc(endDate)->day;
    if(date1day == LONG_MONTH_LEN && date2day == LONG_MONTH_LEN) {
        date1day = SHORT_MONTH_LEN;
        date2day = SHORT_MONTH_LEN;
    } else if(date1day == LONG_MONTH_LEN) {
        date1day = SHORT_MONTH_LEN;
    } else if(date1day == SHORT_MONTH_LEN && date2day == LONG_MONTH_LEN) {
        date2day = SHORT_MONTH_LEN;
    } else if(npc(startDate)->month == 2 && isLastDayOfMonth(startDate)) {
        date1day = SHORT_MONTH_LEN;
        if(npc(endDate)->month == 2 && isLastDayOfMonth(endDate)) {
            date2day = SHORT_MONTH_LEN;
        }
    }
    return calculateAdjusted(startDate, endDate, date1day, date2day);
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::basis1(int32_t startDateVal, int32_t endDateVal)
{
    clinit();
    auto startDate = createDate(startDateVal);
    auto endDate = createDate(endDateVal);
    double yearLength;
    if(isGreaterThanOneYear(startDate, endDate)) {
        yearLength = averageYearLength(npc(startDate)->year, npc(endDate)->year);
    } else if(shouldCountFeb29(startDate, endDate)) {
        yearLength = DAYS_PER_LEAP_YEAR;
    } else {
        yearLength = DAYS_PER_NORMAL_YEAR;
    }
    return dateDiff(npc(startDate)->tsMilliseconds, npc(endDate)->tsMilliseconds) / yearLength;
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::basis2(int32_t startDateVal, int32_t endDateVal)
{
    clinit();
    return (endDateVal - startDateVal) / 360.0;
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::basis3(double startDateVal, double endDateVal)
{
    clinit();
    return (endDateVal - startDateVal) / 365.0;
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::basis4(int32_t startDateVal, int32_t endDateVal)
{
    clinit();
    auto startDate = createDate(startDateVal);
    auto endDate = createDate(endDateVal);
    auto date1day = npc(startDate)->day;
    auto date2day = npc(endDate)->day;
    if(date1day == LONG_MONTH_LEN) {
        date1day = SHORT_MONTH_LEN;
    }
    if(date2day == LONG_MONTH_LEN) {
        date2day = SHORT_MONTH_LEN;
    }
    return calculateAdjusted(startDate, endDate, date1day, date2day);
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::calculateAdjusted(YearFracCalculator_SimpleDate* startDate, YearFracCalculator_SimpleDate* endDate, int32_t date1day, int32_t date2day)
{
    clinit();
    double dayCount = (npc(endDate)->year - npc(startDate)->year) * int32_t(360) + (npc(endDate)->month - npc(startDate)->month) * SHORT_MONTH_LEN + (date2day - date1day) * int32_t(1);
    return dayCount / int32_t(360);
}

bool org::apache::poi::ss::formula::atp::YearFracCalculator::isLastDayOfMonth(YearFracCalculator_SimpleDate* date)
{
    clinit();
    if(npc(date)->day < SHORT_FEB_LEN) {
        return false;
    }
    return npc(date)->day == getLastDayOfMonth(date);
}

int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::getLastDayOfMonth(YearFracCalculator_SimpleDate* date)
{
    clinit();
    switch (npc(date)->month) {
    case int32_t(1):
    case int32_t(3):
    case int32_t(5):
    case int32_t(7):
    case int32_t(8):
    case int32_t(10):
    case int32_t(12):
        return LONG_MONTH_LEN;
    case int32_t(4):
    case int32_t(6):
    case int32_t(9):
    case int32_t(11):
        return SHORT_MONTH_LEN;
    }

    if(isLeapYear(npc(date)->year)) {
        return LONG_FEB_LEN;
    }
    return SHORT_FEB_LEN;
}

bool org::apache::poi::ss::formula::atp::YearFracCalculator::shouldCountFeb29(YearFracCalculator_SimpleDate* start, YearFracCalculator_SimpleDate* end)
{
    clinit();
    if(isLeapYear(npc(start)->year)) {
        if(npc(start)->year == npc(end)->year) {
            return true;
        }
        switch (npc(start)->month) {
        case YearFracCalculator_SimpleDate::JANUARY:
        case YearFracCalculator_SimpleDate::FEBRUARY:
            return true;
        }

        return false;
    }
    if(isLeapYear(npc(end)->year)) {
        switch (npc(end)->month) {
        case YearFracCalculator_SimpleDate::JANUARY:
            return false;
        case YearFracCalculator_SimpleDate::FEBRUARY:
            break;
        default:
            return true;
        }

        return npc(end)->day == LONG_FEB_LEN;
    }
    return false;
}

int32_t org::apache::poi::ss::formula::atp::YearFracCalculator::dateDiff(int64_t startDateMS, int64_t endDateMS)
{
    clinit();
    auto msDiff = endDateMS - startDateMS;
    auto remainderHours = static_cast< int32_t >(((msDiff % MS_PER_DAY) / MS_PER_HOUR));
    switch (remainderHours) {
    case int32_t(0):
        break;
    case int32_t(1):
    case int32_t(23):
    default:
        throw new ::java::lang::RuntimeException(::java::lang::StringBuilder().append(u"Unexpected date diff between "_j)->append(startDateMS)
            ->append(u" and "_j)
            ->append(endDateMS)->toString());
    }

    return static_cast< int32_t >((0.5 + (static_cast< double >(msDiff) / MS_PER_DAY)));
}

double org::apache::poi::ss::formula::atp::YearFracCalculator::averageYearLength(int32_t startYear, int32_t endYear)
{
    clinit();
    auto dayCount = int32_t(0);
    for (auto i = startYear; i <= endYear; i++) {
        dayCount += DAYS_PER_NORMAL_YEAR;
        if(isLeapYear(i)) {
            dayCount++;
        }
    }
    double numberOfYears = endYear - startYear + int32_t(1);
    return dayCount / numberOfYears;
}

bool org::apache::poi::ss::formula::atp::YearFracCalculator::isLeapYear(int32_t i)
{
    clinit();
    if(i % int32_t(4) != 0) {
        return false;
    }
    if(i % int32_t(400) == 0) {
        return true;
    }
    if(i % int32_t(100) == 0) {
        return false;
    }
    return true;
}

bool org::apache::poi::ss::formula::atp::YearFracCalculator::isGreaterThanOneYear(YearFracCalculator_SimpleDate* start, YearFracCalculator_SimpleDate* end)
{
    clinit();
    if(npc(start)->year == npc(end)->year) {
        return false;
    }
    if(npc(start)->year + int32_t(1) != npc(end)->year) {
        return true;
    }
    if(npc(start)->month > npc(end)->month) {
        return false;
    }
    if(npc(start)->month < npc(end)->month) {
        return true;
    }
    return npc(start)->day < npc(end)->day;
}

org::apache::poi::ss::formula::atp::YearFracCalculator_SimpleDate* org::apache::poi::ss::formula::atp::YearFracCalculator::createDate(int32_t dayCount)
{
    clinit();
    auto cal = ::org::apache::poi::util::LocaleUtil::getLocaleCalendar(::org::apache::poi::util::LocaleUtil::TIMEZONE_UTC());
    ::org::apache::poi::ss::usermodel::DateUtil::setCalendar(cal, dayCount, 0, false, false);
    return new YearFracCalculator_SimpleDate(cal);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::formula::atp::YearFracCalculator::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.formula.atp.YearFracCalculator", 48);
    return c;
}

java::lang::Class* org::apache::poi::ss::formula::atp::YearFracCalculator::getClass0()
{
    return class_();
}

