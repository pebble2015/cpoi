// Generated from /POI/java/org/apache/poi/ss/usermodel/DateUtil.java
#include <org/apache/poi/ss/usermodel/DateUtil.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/NumberFormatException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Short.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/ThreadLocal.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <java/util/TimeZone.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/usermodel/Cell.hpp>
#include <org/apache/poi/ss/usermodel/CellStyle.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil_1.hpp>
#include <org/apache/poi/ss/usermodel/DateUtil_FormatException.hpp>
#include <org/apache/poi/ss/usermodel/ExcelNumberFormat.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

poi::ss::usermodel::DateUtil::DateUtil(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::usermodel::DateUtil::DateUtil() 
    : DateUtil(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void poi::ss::usermodel::DateUtil::ctor()
{
    super::ctor();
}

constexpr int32_t poi::ss::usermodel::DateUtil::SECONDS_PER_MINUTE;

constexpr int32_t poi::ss::usermodel::DateUtil::MINUTES_PER_HOUR;

constexpr int32_t poi::ss::usermodel::DateUtil::HOURS_PER_DAY;

constexpr int32_t poi::ss::usermodel::DateUtil::SECONDS_PER_DAY;

constexpr int32_t poi::ss::usermodel::DateUtil::BAD_DATE;

constexpr int64_t poi::ss::usermodel::DateUtil::DAY_MILLISECONDS;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::TIME_SEPARATOR_PATTERN()
{
    clinit();
    return TIME_SEPARATOR_PATTERN_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::TIME_SEPARATOR_PATTERN_;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::date_ptrn1()
{
    clinit();
    return date_ptrn1_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::date_ptrn1_;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::date_ptrn2()
{
    clinit();
    return date_ptrn2_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::date_ptrn2_;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::date_ptrn3a()
{
    clinit();
    return date_ptrn3a_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::date_ptrn3a_;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::date_ptrn3b()
{
    clinit();
    return date_ptrn3b_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::date_ptrn3b_;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::date_ptrn4()
{
    clinit();
    return date_ptrn4_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::date_ptrn4_;

java::util::regex::Pattern*& poi::ss::usermodel::DateUtil::date_ptrn5()
{
    clinit();
    return date_ptrn5_;
}
java::util::regex::Pattern* poi::ss::usermodel::DateUtil::date_ptrn5_;

double poi::ss::usermodel::DateUtil::getExcelDate(::java::util::Date* date)
{
    clinit();
    return getExcelDate(date, false);
}

double poi::ss::usermodel::DateUtil::getExcelDate(::java::util::Date* date, bool use1904windowing)
{
    clinit();
    auto calStart = ::poi::util::LocaleUtil::getLocaleCalendar();
    npc(calStart)->setTime(date);
    return internalGetExcelDate(calStart, use1904windowing);
}

double poi::ss::usermodel::DateUtil::getExcelDate(::java::util::Calendar* date, bool use1904windowing)
{
    clinit();
    return internalGetExcelDate(java_cast< ::java::util::Calendar* >(npc(date)->clone()), use1904windowing);
}

double poi::ss::usermodel::DateUtil::internalGetExcelDate(::java::util::Calendar* date, bool use1904windowing)
{
    clinit();
    if((!use1904windowing && npc(date)->get(::java::util::Calendar::YEAR) < 1900) || (use1904windowing && npc(date)->get(::java::util::Calendar::YEAR) < 1904)) {
        return BAD_DATE;
    }
    auto fraction = (((npc(date)->get(::java::util::Calendar::HOUR_OF_DAY) * int32_t(60) + npc(date)->get(::java::util::Calendar::MINUTE)) * int32_t(60) + npc(date)->get(::java::util::Calendar::SECOND)) * int32_t(1000) + npc(date)->get(::java::util::Calendar::MILLISECOND)) / static_cast< double >(DAY_MILLISECONDS);
    auto calStart = dayStart(date);
    auto value = fraction + absoluteDay(calStart, use1904windowing);
    if(!use1904windowing && value >= 60) {
        value++;
    } else if(use1904windowing) {
        value--;
    }
    return value;
}

java::util::Date* poi::ss::usermodel::DateUtil::getJavaDate(double date, ::java::util::TimeZone* tz)
{
    clinit();
    return getJavaDate(date, false, tz, false);
}

java::util::Date* poi::ss::usermodel::DateUtil::getJavaDate(double date)
{
    clinit();
    return getJavaDate(date, false, nullptr, false);
}

java::util::Date* poi::ss::usermodel::DateUtil::getJavaDate(double date, bool use1904windowing, ::java::util::TimeZone* tz)
{
    clinit();
    return getJavaDate(date, use1904windowing, tz, false);
}

java::util::Date* poi::ss::usermodel::DateUtil::getJavaDate(double date, bool use1904windowing, ::java::util::TimeZone* tz, bool roundSeconds)
{
    clinit();
    auto calendar = getJavaCalendar(date, use1904windowing, tz, roundSeconds);
    return calendar == nullptr ? static_cast< ::java::util::Date* >(nullptr) : npc(calendar)->getTime();
}

java::util::Date* poi::ss::usermodel::DateUtil::getJavaDate(double date, bool use1904windowing)
{
    clinit();
    return getJavaDate(date, use1904windowing, nullptr, false);
}

void poi::ss::usermodel::DateUtil::setCalendar(::java::util::Calendar* calendar, int32_t wholeDays, int32_t millisecondsInDay, bool use1904windowing, bool roundSeconds)
{
    clinit();
    auto startYear = int32_t(1900);
    auto dayAdjust = -int32_t(1);
    if(use1904windowing) {
        startYear = 1904;
        dayAdjust = 1;
    } else if(wholeDays < 61) {
        dayAdjust = 0;
    }
    npc(calendar)->set(startYear, 0, wholeDays + dayAdjust, 0, 0, 0);
    npc(calendar)->set(::java::util::Calendar::MILLISECOND, millisecondsInDay);
    if(npc(calendar)->get(::java::util::Calendar::MILLISECOND) == 0) {
        npc(calendar)->clear(::java::util::Calendar::MILLISECOND);
    }
    if(roundSeconds) {
        npc(calendar)->add(::java::util::Calendar::MILLISECOND, 500);
        npc(calendar)->clear(::java::util::Calendar::MILLISECOND);
    }
}

java::util::Calendar* poi::ss::usermodel::DateUtil::getJavaCalendar(double date)
{
    clinit();
    return getJavaCalendar(date, false, static_cast< ::java::util::TimeZone* >(nullptr), false);
}

java::util::Calendar* poi::ss::usermodel::DateUtil::getJavaCalendar(double date, bool use1904windowing)
{
    clinit();
    return getJavaCalendar(date, use1904windowing, static_cast< ::java::util::TimeZone* >(nullptr), false);
}

java::util::Calendar* poi::ss::usermodel::DateUtil::getJavaCalendarUTC(double date, bool use1904windowing)
{
    clinit();
    return getJavaCalendar(date, use1904windowing, ::poi::util::LocaleUtil::TIMEZONE_UTC(), false);
}

java::util::Calendar* poi::ss::usermodel::DateUtil::getJavaCalendar(double date, bool use1904windowing, ::java::util::TimeZone* timeZone)
{
    clinit();
    return getJavaCalendar(date, use1904windowing, timeZone, false);
}

java::util::Calendar* poi::ss::usermodel::DateUtil::getJavaCalendar(double date, bool use1904windowing, ::java::util::TimeZone* timeZone, bool roundSeconds)
{
    clinit();
    if(!isValidExcelDate(date)) {
        return nullptr;
    }
    auto wholeDays = static_cast< int32_t >(::java::lang::Math::floor(date));
    auto millisecondsInDay = static_cast< int32_t >(((date - wholeDays) * DAY_MILLISECONDS + 0.5));
    ::java::util::Calendar* calendar;
    if(timeZone != nullptr) {
        calendar = ::poi::util::LocaleUtil::getLocaleCalendar(timeZone);
    } else {
        calendar = ::poi::util::LocaleUtil::getLocaleCalendar();
    }
    setCalendar(calendar, wholeDays, millisecondsInDay, use1904windowing, roundSeconds);
    return calendar;
}

java::lang::ThreadLocal*& poi::ss::usermodel::DateUtil::lastFormatIndex()
{
    clinit();
    return lastFormatIndex_;
}
java::lang::ThreadLocal* poi::ss::usermodel::DateUtil::lastFormatIndex_;

java::lang::ThreadLocal*& poi::ss::usermodel::DateUtil::lastFormatString()
{
    clinit();
    return lastFormatString_;
}
java::lang::ThreadLocal* poi::ss::usermodel::DateUtil::lastFormatString_;

java::lang::ThreadLocal*& poi::ss::usermodel::DateUtil::lastCachedResult()
{
    clinit();
    return lastCachedResult_;
}
java::lang::ThreadLocal* poi::ss::usermodel::DateUtil::lastCachedResult_;

bool poi::ss::usermodel::DateUtil::isCached(::java::lang::String* formatString, int32_t formatIndex)
{
    clinit();
    auto cachedFormatString = java_cast< ::java::lang::String* >(npc(lastFormatString_)->get());
    return cachedFormatString != nullptr && formatIndex == (npc(java_cast< ::java::lang::Integer* >(npc(lastFormatIndex_)->get())))->intValue() && npc(formatString)->equals(static_cast< ::java::lang::Object* >(cachedFormatString));
}

void poi::ss::usermodel::DateUtil::cache(::java::lang::String* formatString, int32_t formatIndex, bool cached)
{
    clinit();
    npc(lastFormatIndex_)->set(::java::lang::Integer::valueOf(formatIndex));
    npc(lastFormatString_)->set(formatString);
    npc(lastCachedResult_)->set(::java::lang::Boolean::valueOf(cached));
}

bool poi::ss::usermodel::DateUtil::isADateFormat(ExcelNumberFormat* numFmt)
{
    clinit();
    if(numFmt == nullptr)
        return false;

    return isADateFormat(npc(numFmt)->getIdx(), npc(numFmt)->getFormat());
}

bool poi::ss::usermodel::DateUtil::isADateFormat(int32_t formatIndex, ::java::lang::String* formatString)
{
    clinit();
    if(isInternalDateFormat(formatIndex)) {
        cache(formatString, formatIndex, true);
        return true;
    }
    if(formatString == nullptr || npc(formatString)->length() == 0) {
        return false;
    }
    if(isCached(formatString, formatIndex)) {
        return (npc(java_cast< ::java::lang::Boolean* >(npc(lastCachedResult_)->get())))->booleanValue();
    }
    auto fs = formatString;
    auto const length = npc(fs)->length();
    auto sb = new ::java::lang::StringBuilder(length);
    for (auto i = int32_t(0); i < length; i++) {
        auto c = npc(fs)->charAt(i);
        if(i < length - int32_t(1)) {
            auto nc = npc(fs)->charAt(i + int32_t(1));
            if(c == u'\\') {
                switch (nc) {
                case u'-':
                case u',':
                case u'.':
                case u' ':
                case u'\\':
                    continue;
                }

            } else if(c == u';' && nc == u'@') {
                i++;
                continue;
            }
        }
        npc(sb)->append(c);
    }
    fs = npc(sb)->toString();
    if(npc(npc(date_ptrn4_)->matcher(fs))->matches()) {
        cache(formatString, formatIndex, true);
        return true;
    }
    fs = npc(npc(date_ptrn5_)->matcher(fs))->replaceAll(u""_j);
    fs = npc(npc(date_ptrn1_)->matcher(fs))->replaceAll(u""_j);
    fs = npc(npc(date_ptrn2_)->matcher(fs))->replaceAll(u""_j);
    auto const separatorIndex = npc(fs)->indexOf(static_cast< int32_t >(u';'));
    if(0 < separatorIndex && separatorIndex < npc(fs)->length() - int32_t(1)) {
        fs = npc(fs)->substring(0, separatorIndex);
    }
    if(!npc(npc(date_ptrn3a_)->matcher(fs))->find()) {
        return false;
    }
    auto result = npc(npc(date_ptrn3b_)->matcher(fs))->matches();
    cache(formatString, formatIndex, result);
    return result;
}

bool poi::ss::usermodel::DateUtil::isInternalDateFormat(int32_t format)
{
    clinit();
    switch (format) {
    case int32_t(14):
    case int32_t(15):
    case int32_t(16):
    case int32_t(17):
    case int32_t(18):
    case int32_t(19):
    case int32_t(20):
    case int32_t(21):
    case int32_t(22):
    case int32_t(45):
    case int32_t(46):
    case int32_t(47):
        return true;
    }

    return false;
}

bool poi::ss::usermodel::DateUtil::isCellDateFormatted(Cell* cell)
{
    clinit();
    return isCellDateFormatted(cell, nullptr);
}

bool poi::ss::usermodel::DateUtil::isCellDateFormatted(Cell* cell, ::poi::ss::formula::ConditionalFormattingEvaluator* cfEvaluator)
{
    clinit();
    if(cell == nullptr)
        return false;

    auto bDate = false;
    auto d = npc(cell)->getNumericCellValue();
    if(DateUtil::isValidExcelDate(d)) {
        auto nf = ExcelNumberFormat::from(cell, cfEvaluator);
        if(nf == nullptr)
            return false;

        bDate = isADateFormat(nf);
    }
    return bDate;
}

bool poi::ss::usermodel::DateUtil::isCellInternalDateFormatted(Cell* cell)
{
    clinit();
    if(cell == nullptr)
        return false;

    auto bDate = false;
    auto d = npc(cell)->getNumericCellValue();
    if(DateUtil::isValidExcelDate(d)) {
        auto style = npc(cell)->getCellStyle();
        int32_t i = npc(style)->getDataFormat();
        bDate = isInternalDateFormat(i);
    }
    return bDate;
}

bool poi::ss::usermodel::DateUtil::isValidExcelDate(double value)
{
    clinit();
    return (value > -::java::lang::Double::MIN_VALUE);
}

int32_t poi::ss::usermodel::DateUtil::absoluteDay(::java::util::Calendar* cal, bool use1904windowing)
{
    clinit();
    return npc(cal)->get(::java::util::Calendar::DAY_OF_YEAR) + daysInPriorYears(npc(cal)->get(::java::util::Calendar::YEAR), use1904windowing);
}

int32_t poi::ss::usermodel::DateUtil::daysInPriorYears(int32_t yr, bool use1904windowing)
{
    clinit();
    if((!use1904windowing && yr < 1900) || (use1904windowing && yr < 1904)) {
        throw new ::java::lang::IllegalArgumentException(u"'year' must be 1900 or greater"_j);
    }
    auto yr1 = yr - int32_t(1);
    auto leapDays = yr1 / int32_t(4) - yr1 / int32_t(100) + yr1 / int32_t(400) - int32_t(460);
    return int32_t(365) * (yr - (use1904windowing ? int32_t(1904) : int32_t(1900))) + leapDays;
}

java::util::Calendar* poi::ss::usermodel::DateUtil::dayStart(::java::util::Calendar* cal)
{
    clinit();
    npc(cal)->get(::java::util::Calendar::HOUR_OF_DAY);
    npc(cal)->set(::java::util::Calendar::HOUR_OF_DAY, 0);
    npc(cal)->set(::java::util::Calendar::MINUTE, 0);
    npc(cal)->set(::java::util::Calendar::SECOND, 0);
    npc(cal)->set(::java::util::Calendar::MILLISECOND, 0);
    npc(cal)->get(::java::util::Calendar::HOUR_OF_DAY);
    return cal;
}

double poi::ss::usermodel::DateUtil::convertTime(::java::lang::String* timeStr)
{
    clinit();
    try {
        return convertTimeInternal(timeStr);
    } catch (DateUtil_FormatException* e) {
        auto msg = ::java::lang::StringBuilder().append(u"Bad time format '"_j)->append(timeStr)
            ->append(u"' expected 'HH:MM' or 'HH:MM:SS' - "_j)
            ->append(npc(e)->getMessage())->toString();
        throw new ::java::lang::IllegalArgumentException(msg);
    }
}

double poi::ss::usermodel::DateUtil::convertTimeInternal(::java::lang::String* timeStr) /* throws(FormatException) */
{
    clinit();
    auto len = npc(timeStr)->length();
    if(len < 4 || len > 8) {
        throw new DateUtil_FormatException(u"Bad length"_j);
    }
    auto parts = npc(TIME_SEPARATOR_PATTERN_)->split(timeStr);
    ::java::lang::String* secStr;
    switch (npc(parts)->length) {
    case int32_t(2):
        secStr = u"00"_j;
        break;
    case int32_t(3):
        secStr = (*parts)[int32_t(2)];
        break;
    default:
        throw new DateUtil_FormatException(::java::lang::StringBuilder().append(u"Expected 2 or 3 fields but got ("_j)->append(npc(parts)->length)
            ->append(u")"_j)->toString());
    }

    auto hourStr = (*parts)[int32_t(0)];
    auto minStr = (*parts)[int32_t(1)];
    auto hours = parseInt(hourStr, u"hour"_j, HOURS_PER_DAY);
    auto minutes = parseInt(minStr, u"minute"_j, MINUTES_PER_HOUR);
    auto seconds = parseInt(secStr, u"second"_j, SECONDS_PER_MINUTE);
    double totalSeconds = seconds + (minutes + (hours) * int32_t(60)) * int32_t(60);
    return totalSeconds / (SECONDS_PER_DAY);
}

java::util::Date* poi::ss::usermodel::DateUtil::parseYYYYMMDDDate(::java::lang::String* dateStr)
{
    clinit();
    try {
        return parseYYYYMMDDDateInternal(dateStr);
    } catch (DateUtil_FormatException* e) {
        auto msg = ::java::lang::StringBuilder().append(u"Bad time format "_j)->append(dateStr)
            ->append(u" expected 'YYYY/MM/DD' - "_j)
            ->append(npc(e)->getMessage())->toString();
        throw new ::java::lang::IllegalArgumentException(msg);
    }
}

java::util::Date* poi::ss::usermodel::DateUtil::parseYYYYMMDDDateInternal(::java::lang::String* timeStr) /* throws(FormatException) */
{
    clinit();
    if(npc(timeStr)->length() != 10) {
        throw new DateUtil_FormatException(u"Bad length"_j);
    }
    auto yearStr = npc(timeStr)->substring(0, 4);
    auto monthStr = npc(timeStr)->substring(5, 7);
    auto dayStr = npc(timeStr)->substring(8, 10);
    auto year = parseInt(yearStr, u"year"_j, ::java::lang::Short::MIN_VALUE, ::java::lang::Short::MAX_VALUE);
    auto month = parseInt(monthStr, u"month"_j, 1, 12);
    auto day = parseInt(dayStr, u"day"_j, 1, 31);
    auto cal = ::poi::util::LocaleUtil::getLocaleCalendar(year, month - int32_t(1), day);
    return npc(cal)->getTime();
}

int32_t poi::ss::usermodel::DateUtil::parseInt(::java::lang::String* strVal, ::java::lang::String* fieldName, int32_t rangeMax) /* throws(FormatException) */
{
    clinit();
    return parseInt(strVal, fieldName, 0, rangeMax - int32_t(1));
}

int32_t poi::ss::usermodel::DateUtil::parseInt(::java::lang::String* strVal, ::java::lang::String* fieldName, int32_t lowerLimit, int32_t upperLimit) /* throws(FormatException) */
{
    clinit();
    int32_t result;
    try {
        result = ::java::lang::Integer::parseInt(strVal);
    } catch (::java::lang::NumberFormatException* e) {
        throw new DateUtil_FormatException(::java::lang::StringBuilder().append(u"Bad int format '"_j)->append(strVal)
            ->append(u"' for "_j)
            ->append(fieldName)
            ->append(u" field"_j)->toString());
    }
    if(result < lowerLimit || result > upperLimit) {
        throw new DateUtil_FormatException(::java::lang::StringBuilder().append(fieldName)->append(u" value ("_j)
            ->append(result)
            ->append(u") is outside the allowable range(0.."_j)
            ->append(upperLimit)
            ->append(u")"_j)->toString());
    }
    return result;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::usermodel::DateUtil::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.usermodel.DateUtil", 36);
    return c;
}

void poi::ss::usermodel::DateUtil::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        TIME_SEPARATOR_PATTERN_ = ::java::util::regex::Pattern::compile(u":"_j);
        date_ptrn1_ = ::java::util::regex::Pattern::compile(u"^\\[\\$\\-.*?\\]"_j);
        date_ptrn2_ = ::java::util::regex::Pattern::compile(u"^\\[[a-zA-Z]+\\]"_j);
        date_ptrn3a_ = ::java::util::regex::Pattern::compile(u"[yYmMdDhHsS]"_j);
        date_ptrn3b_ = ::java::util::regex::Pattern::compile(u"^[\\[\\]yYmMdDhHsS\\-T/\u5e74\u6708\u65e5,. :\"\\\\]+0*[ampAMP/]*$"_j);
        date_ptrn4_ = ::java::util::regex::Pattern::compile(u"^\\[([hH]+|[mM]+|[sS]+)\\]"_j);
        date_ptrn5_ = ::java::util::regex::Pattern::compile(u"^\\[DBNum(1|2|3)\\]"_j);
        lastFormatIndex_ = new DateUtil_1();
        lastFormatString_ = new ::java::lang::ThreadLocal();
        lastCachedResult_ = new ::java::lang::ThreadLocal();
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::usermodel::DateUtil::getClass0()
{
    return class_();
}

