// Generated from /POI/java/org/apache/poi/ss/formula/atp/YearFracCalculator.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/ss/formula/atp/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::formula::atp::YearFracCalculator final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t MS_PER_HOUR { int32_t(3600000) };
    static constexpr int32_t MS_PER_DAY { int32_t(86400000) };
    static constexpr int32_t DAYS_PER_NORMAL_YEAR { int32_t(365) };
    static constexpr int32_t DAYS_PER_LEAP_YEAR { int32_t(366) };
    static constexpr int32_t LONG_MONTH_LEN { int32_t(31) };
    static constexpr int32_t SHORT_MONTH_LEN { int32_t(30) };
    static constexpr int32_t SHORT_FEB_LEN { int32_t(28) };
    static constexpr int32_t LONG_FEB_LEN { int32_t(29) };
protected:
    void ctor();

public:
    static double calculate(double pStartDateVal, double pEndDateVal, int32_t basis) /* throws(EvaluationException) */;
    static double basis0(int32_t startDateVal, int32_t endDateVal);
    static double basis1(int32_t startDateVal, int32_t endDateVal);
    static double basis2(int32_t startDateVal, int32_t endDateVal);
    static double basis3(double startDateVal, double endDateVal);
    static double basis4(int32_t startDateVal, int32_t endDateVal);

private:
    static double calculateAdjusted(YearFracCalculator_SimpleDate* startDate, YearFracCalculator_SimpleDate* endDate, int32_t date1day, int32_t date2day);
    static bool isLastDayOfMonth(YearFracCalculator_SimpleDate* date);
    static int32_t getLastDayOfMonth(YearFracCalculator_SimpleDate* date);
    static bool shouldCountFeb29(YearFracCalculator_SimpleDate* start, YearFracCalculator_SimpleDate* end);
    static int32_t dateDiff(int64_t startDateMS, int64_t endDateMS);
    static double averageYearLength(int32_t startYear, int32_t endYear);
    static bool isLeapYear(int32_t i);
    static bool isGreaterThanOneYear(YearFracCalculator_SimpleDate* start, YearFracCalculator_SimpleDate* end);
    static YearFracCalculator_SimpleDate* createDate(int32_t dayCount);

    // Generated
    YearFracCalculator();
protected:
    YearFracCalculator(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class YearFracCalculator_SimpleDate;
};
