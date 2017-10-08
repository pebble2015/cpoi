// Generated from /POI/java/org/apache/poi/ss/usermodel/DateUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/regex/fwd-POI.hpp>
#include <org/apache/poi/ss/formula/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::ss::usermodel::DateUtil
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

public:
    static constexpr int32_t SECONDS_PER_MINUTE { int32_t(60) };
    static constexpr int32_t MINUTES_PER_HOUR { int32_t(60) };
    static constexpr int32_t HOURS_PER_DAY { int32_t(24) };
    static constexpr int32_t SECONDS_PER_DAY { int32_t(86400) };

private:
    static constexpr int32_t BAD_DATE { int32_t(-1) };

public:
    static constexpr int64_t DAY_MILLISECONDS { int64_t(86400000LL) };

private:
    static ::java::util::regex::Pattern* TIME_SEPARATOR_PATTERN_;
    static ::java::util::regex::Pattern* date_ptrn1_;
    static ::java::util::regex::Pattern* date_ptrn2_;
    static ::java::util::regex::Pattern* date_ptrn3a_;
    static ::java::util::regex::Pattern* date_ptrn3b_;
    static ::java::util::regex::Pattern* date_ptrn4_;
    static ::java::util::regex::Pattern* date_ptrn5_;

public:
    static double getExcelDate(::java::util::Date* date);
    static double getExcelDate(::java::util::Date* date, bool use1904windowing);
    static double getExcelDate(::java::util::Calendar* date, bool use1904windowing);

private:
    static double internalGetExcelDate(::java::util::Calendar* date, bool use1904windowing);

public:
    static ::java::util::Date* getJavaDate(double date, ::java::util::TimeZone* tz);
    static ::java::util::Date* getJavaDate(double date);
    static ::java::util::Date* getJavaDate(double date, bool use1904windowing, ::java::util::TimeZone* tz);
    static ::java::util::Date* getJavaDate(double date, bool use1904windowing, ::java::util::TimeZone* tz, bool roundSeconds);
    static ::java::util::Date* getJavaDate(double date, bool use1904windowing);
    static void setCalendar(::java::util::Calendar* calendar, int32_t wholeDays, int32_t millisecondsInDay, bool use1904windowing, bool roundSeconds);
    static ::java::util::Calendar* getJavaCalendar(double date);
    static ::java::util::Calendar* getJavaCalendar(double date, bool use1904windowing);
    static ::java::util::Calendar* getJavaCalendarUTC(double date, bool use1904windowing);
    static ::java::util::Calendar* getJavaCalendar(double date, bool use1904windowing, ::java::util::TimeZone* timeZone);
    static ::java::util::Calendar* getJavaCalendar(double date, bool use1904windowing, ::java::util::TimeZone* timeZone, bool roundSeconds);

private:
    static ::java::lang::ThreadLocal* lastFormatIndex_;
    static ::java::lang::ThreadLocal* lastFormatString_;
    static ::java::lang::ThreadLocal* lastCachedResult_;
    static bool isCached(::java::lang::String* formatString, int32_t formatIndex);
    static void cache(::java::lang::String* formatString, int32_t formatIndex, bool cached);

public:
    static bool isADateFormat(ExcelNumberFormat* numFmt);
    static bool isADateFormat(int32_t formatIndex, ::java::lang::String* formatString);
    static bool isInternalDateFormat(int32_t format);
    static bool isCellDateFormatted(Cell* cell);
    static bool isCellDateFormatted(Cell* cell, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator);
    static bool isCellInternalDateFormatted(Cell* cell);
    static bool isValidExcelDate(double value);

public: /* protected */
    static int32_t absoluteDay(::java::util::Calendar* cal, bool use1904windowing);

private:
    static int32_t daysInPriorYears(int32_t yr, bool use1904windowing);
    static ::java::util::Calendar* dayStart(::java::util::Calendar* cal);

public:
    static double convertTime(::java::lang::String* timeStr);

private:
    static double convertTimeInternal(::java::lang::String* timeStr) /* throws(FormatException) */;

public:
    static ::java::util::Date* parseYYYYMMDDDate(::java::lang::String* dateStr);

private:
    static ::java::util::Date* parseYYYYMMDDDateInternal(::java::lang::String* timeStr) /* throws(FormatException) */;
    static int32_t parseInt(::java::lang::String* strVal, ::java::lang::String* fieldName, int32_t rangeMax) /* throws(FormatException) */;
    static int32_t parseInt(::java::lang::String* strVal, ::java::lang::String* fieldName, int32_t lowerLimit, int32_t upperLimit) /* throws(FormatException) */;

    // Generated

public: /* protected */
    DateUtil();
protected:
    DateUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::java::util::regex::Pattern*& TIME_SEPARATOR_PATTERN();
    static ::java::util::regex::Pattern*& date_ptrn1();
    static ::java::util::regex::Pattern*& date_ptrn2();
    static ::java::util::regex::Pattern*& date_ptrn3a();
    static ::java::util::regex::Pattern*& date_ptrn3b();
    static ::java::util::regex::Pattern*& date_ptrn4();
    static ::java::util::regex::Pattern*& date_ptrn5();
    static ::java::lang::ThreadLocal*& lastFormatIndex();
    static ::java::lang::ThreadLocal*& lastFormatString();
    static ::java::lang::ThreadLocal*& lastCachedResult();
    virtual ::java::lang::Class* getClass0();
    friend class DateUtil_1;
    friend class DateUtil_FormatException;
};
