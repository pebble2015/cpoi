// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Calendar.hpp>

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
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Locale, ::java::lang::ObjectArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > LocaleArray;
    } // util
} // java

extern void unimplemented_(const char16_t* name);
java::util::Calendar::Calendar(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Calendar::Calendar()
    : Calendar(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Calendar::Calendar(TimeZone* zone, Locale* aLocale)
    : Calendar(*static_cast< ::default_init_tag* >(0))
{
    ctor(zone, aLocale);
}

bool& java::util::Calendar::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::util::Calendar::$assertionsDisabled_;
constexpr int32_t java::util::Calendar::ALL_FIELDS;
constexpr int32_t java::util::Calendar::ALL_STYLES;
constexpr int32_t java::util::Calendar::AM;
constexpr int32_t java::util::Calendar::AM_PM;
constexpr int32_t java::util::Calendar::AM_PM_MASK;
constexpr int32_t java::util::Calendar::APRIL;
constexpr int32_t java::util::Calendar::AUGUST;
constexpr int32_t java::util::Calendar::COMPUTED;
constexpr int32_t java::util::Calendar::DATE;
constexpr int32_t java::util::Calendar::DATE_MASK;
constexpr int32_t java::util::Calendar::DAY_OF_MONTH;
constexpr int32_t java::util::Calendar::DAY_OF_MONTH_MASK;
constexpr int32_t java::util::Calendar::DAY_OF_WEEK;
constexpr int32_t java::util::Calendar::DAY_OF_WEEK_IN_MONTH;
constexpr int32_t java::util::Calendar::DAY_OF_WEEK_IN_MONTH_MASK;
constexpr int32_t java::util::Calendar::DAY_OF_WEEK_MASK;
constexpr int32_t java::util::Calendar::DAY_OF_YEAR;
constexpr int32_t java::util::Calendar::DAY_OF_YEAR_MASK;
constexpr int32_t java::util::Calendar::DECEMBER;
constexpr int32_t java::util::Calendar::DST_OFFSET;
constexpr int32_t java::util::Calendar::DST_OFFSET_MASK;
constexpr int32_t java::util::Calendar::ERA;
constexpr int32_t java::util::Calendar::ERA_MASK;
constexpr int32_t java::util::Calendar::FEBRUARY;
constexpr int32_t java::util::Calendar::FIELD_COUNT;
java::lang::StringArray*& java::util::Calendar::FIELD_NAME()
{
    clinit();
    return FIELD_NAME_;
}
java::lang::StringArray* java::util::Calendar::FIELD_NAME_;
constexpr int32_t java::util::Calendar::FRIDAY;
constexpr int32_t java::util::Calendar::HOUR;
constexpr int32_t java::util::Calendar::HOUR_MASK;
constexpr int32_t java::util::Calendar::HOUR_OF_DAY;
constexpr int32_t java::util::Calendar::HOUR_OF_DAY_MASK;
constexpr int32_t java::util::Calendar::JANUARY;
constexpr int32_t java::util::Calendar::JULY;
constexpr int32_t java::util::Calendar::JUNE;
constexpr int32_t java::util::Calendar::LONG;
constexpr int32_t java::util::Calendar::LONG_FORMAT;
constexpr int32_t java::util::Calendar::LONG_STANDALONE;
constexpr int32_t java::util::Calendar::MARCH;
constexpr int32_t java::util::Calendar::MAY;
constexpr int32_t java::util::Calendar::MILLISECOND;
constexpr int32_t java::util::Calendar::MILLISECOND_MASK;
constexpr int32_t java::util::Calendar::MINIMUM_USER_STAMP;
constexpr int32_t java::util::Calendar::MINUTE;
constexpr int32_t java::util::Calendar::MINUTE_MASK;
constexpr int32_t java::util::Calendar::MONDAY;
constexpr int32_t java::util::Calendar::MONTH;
constexpr int32_t java::util::Calendar::MONTH_MASK;
constexpr int32_t java::util::Calendar::NARROW_FORMAT;
constexpr int32_t java::util::Calendar::NARROW_STANDALONE;
constexpr int32_t java::util::Calendar::NOVEMBER;
constexpr int32_t java::util::Calendar::OCTOBER;
constexpr int32_t java::util::Calendar::PM;
constexpr int32_t java::util::Calendar::SATURDAY;
constexpr int32_t java::util::Calendar::SECOND;
constexpr int32_t java::util::Calendar::SECOND_MASK;
constexpr int32_t java::util::Calendar::SEPTEMBER;
constexpr int32_t java::util::Calendar::SHORT;
constexpr int32_t java::util::Calendar::SHORT_FORMAT;
constexpr int32_t java::util::Calendar::SHORT_STANDALONE;
constexpr int32_t java::util::Calendar::STANDALONE_MASK;
constexpr int32_t java::util::Calendar::SUNDAY;
constexpr int32_t java::util::Calendar::THURSDAY;
constexpr int32_t java::util::Calendar::TUESDAY;
constexpr int32_t java::util::Calendar::UNDECIMBER;
constexpr int32_t java::util::Calendar::UNSET;
constexpr int32_t java::util::Calendar::WEDNESDAY;
constexpr int32_t java::util::Calendar::WEEK_OF_MONTH;
constexpr int32_t java::util::Calendar::WEEK_OF_MONTH_MASK;
constexpr int32_t java::util::Calendar::WEEK_OF_YEAR;
constexpr int32_t java::util::Calendar::WEEK_OF_YEAR_MASK;
constexpr int32_t java::util::Calendar::YEAR;
constexpr int32_t java::util::Calendar::YEAR_MASK;
constexpr int32_t java::util::Calendar::ZONE_OFFSET;
constexpr int32_t java::util::Calendar::ZONE_OFFSET_MASK;
java::util::concurrent::ConcurrentMap*& java::util::Calendar::cachedLocaleData()
{
    clinit();
    return cachedLocaleData_;
}
java::util::concurrent::ConcurrentMap* java::util::Calendar::cachedLocaleData_;
constexpr int32_t java::util::Calendar::currentSerialVersion;
constexpr int64_t java::util::Calendar::serialVersionUID;

void ::java::util::Calendar::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Calendar::ctor()");
}

void ::java::util::Calendar::ctor(TimeZone* zone, Locale* aLocale)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Calendar::ctor(TimeZone* zone, Locale* aLocale)");
}

/* private: void java::util::Calendar::adjustStamp() */
bool java::util::Calendar::after(::java::lang::Object* when)
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::after(::java::lang::Object* when)");
    return 0;
}

/* private: int32_t java::util::Calendar::aggregateStamp(int32_t stamp_a, int32_t stamp_b) */
/* private: void java::util::Calendar::appendValue(::java::lang::StringBuilder* sb, ::java::lang::String* item, bool valid, int64_t value) */
bool java::util::Calendar::before(::java::lang::Object* when)
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::before(::java::lang::Object* when)");
    return 0;
}

bool java::util::Calendar::checkDisplayNameParams(int32_t field, int32_t style, int32_t minStyle, int32_t maxStyle, Locale* locale, int32_t fieldMask)
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::checkDisplayNameParams(int32_t field, int32_t style, int32_t minStyle, int32_t maxStyle, Locale* locale, int32_t fieldMask)");
    return 0;
}

void java::util::Calendar::clear()
{ /* stub */
    unimplemented_(u"void java::util::Calendar::clear()");
}

void java::util::Calendar::clear(int32_t field)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::clear(int32_t field)");
}

java::lang::Object* java::util::Calendar::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Calendar::clone()");
    return 0;
}

int32_t java::util::Calendar::compareTo(Calendar* anotherCalendar)
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::compareTo(Calendar* anotherCalendar)");
    return 0;
}

int32_t java::util::Calendar::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< Calendar* >(o));
}

/* private: int32_t java::util::Calendar::compareTo(int64_t t) */
void java::util::Calendar::complete()
{ /* stub */
    unimplemented_(u"void java::util::Calendar::complete()");
}

/* private: java::util::Calendar* java::util::Calendar::createCalendar(TimeZone* zone, Locale* aLocale) */
bool java::util::Calendar::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::equals(::java::lang::Object* obj)");
    return 0;
}

int32_t java::util::Calendar::get(int32_t field)
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::get(int32_t field)");
    return 0;
}

int32_t java::util::Calendar::getActualMaximum(int32_t field)
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::getActualMaximum(int32_t field)");
    return 0;
}

int32_t java::util::Calendar::getActualMinimum(int32_t field)
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::getActualMinimum(int32_t field)");
    return 0;
}

java::util::Set* java::util::Calendar::getAvailableCalendarTypes()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Set* java::util::Calendar::getAvailableCalendarTypes()");
    return 0;
}

java::util::LocaleArray* java::util::Calendar::getAvailableLocales()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::LocaleArray* java::util::Calendar::getAvailableLocales()");
    return 0;
}

int32_t java::util::Calendar::getBaseStyle(int32_t style)
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::getBaseStyle(int32_t style)");
    return 0;
}

java::lang::String* java::util::Calendar::getCalendarType()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Calendar::getCalendarType()");
    return 0;
}

java::lang::String* java::util::Calendar::getDisplayName(int32_t field, int32_t style, Locale* locale)
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Calendar::getDisplayName(int32_t field, int32_t style, Locale* locale)");
    return 0;
}

java::util::Map* java::util::Calendar::getDisplayNames(int32_t field, int32_t style, Locale* locale)
{ /* stub */
    unimplemented_(u"java::util::Map* java::util::Calendar::getDisplayNames(int32_t field, int32_t style, Locale* locale)");
    return 0;
}

/* private: java::util::Map* java::util::Calendar::getDisplayNamesImpl(int32_t field, int32_t style, Locale* locale) */
java::lang::String* java::util::Calendar::getFieldName(int32_t field)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::util::Calendar::getFieldName(int32_t field)");
    return 0;
}

/* private: java::lang::StringArray* java::util::Calendar::getFieldStrings(int32_t field, int32_t style, ::java::text::DateFormatSymbols* symbols) */
int32_t java::util::Calendar::getFirstDayOfWeek()
{ /* stub */
return firstDayOfWeek ; /* getter */
}

java::util::Calendar* java::util::Calendar::getInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Calendar* java::util::Calendar::getInstance()");
    return 0;
}

java::util::Calendar* java::util::Calendar::getInstance(TimeZone* zone)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Calendar* java::util::Calendar::getInstance(TimeZone* zone)");
    return 0;
}

java::util::Calendar* java::util::Calendar::getInstance(Locale* aLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Calendar* java::util::Calendar::getInstance(Locale* aLocale)");
    return 0;
}

java::util::Calendar* java::util::Calendar::getInstance(TimeZone* zone, Locale* aLocale)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Calendar* java::util::Calendar::getInstance(TimeZone* zone, Locale* aLocale)");
    return 0;
}

/* private: int64_t java::util::Calendar::getMillisOf(Calendar* calendar) */
int32_t java::util::Calendar::getMinimalDaysInFirstWeek()
{ /* stub */
return minimalDaysInFirstWeek ; /* getter */
}

int32_t java::util::Calendar::getSetStateFields()
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::getSetStateFields()");
    return 0;
}

java::util::Date* java::util::Calendar::getTime()
{ /* stub */
}

int64_t java::util::Calendar::getTimeInMillis()
{ /* stub */
    unimplemented_(u"int64_t java::util::Calendar::getTimeInMillis()");
    return 0;
}

java::util::TimeZone* java::util::Calendar::getTimeZone()
{ /* stub */
    unimplemented_(u"java::util::TimeZone* java::util::Calendar::getTimeZone()");
    return 0;
}

int32_t java::util::Calendar::getWeekYear()
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::getWeekYear()");
    return 0;
}

int32_t java::util::Calendar::getWeeksInWeekYear()
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::getWeeksInWeekYear()");
    return 0;
}

java::util::TimeZone* java::util::Calendar::getZone()
{ /* stub */
return zone ; /* getter */
}

int32_t java::util::Calendar::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::hashCode()");
    return 0;
}

int32_t java::util::Calendar::internalGet(int32_t field)
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::internalGet(int32_t field)");
    return 0;
}

void java::util::Calendar::internalSet(int32_t field, int32_t value)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::internalSet(int32_t field, int32_t value)");
}

/* private: void java::util::Calendar::invalidateWeekFields() */
bool java::util::Calendar::isExternallySet(int32_t field)
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::isExternallySet(int32_t field)");
    return 0;
}

bool java::util::Calendar::isFieldSet(int32_t fieldMask, int32_t field)
{ /* stub */
    clinit();
    unimplemented_(u"bool java::util::Calendar::isFieldSet(int32_t fieldMask, int32_t field)");
    return 0;
}

bool java::util::Calendar::isFullyNormalized()
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::isFullyNormalized()");
    return 0;
}

bool java::util::Calendar::isLenient()
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::isLenient()");
    return 0;
}

/* private: bool java::util::Calendar::isNarrowFormatStyle(int32_t style) */
/* private: bool java::util::Calendar::isNarrowStyle(int32_t style) */
bool java::util::Calendar::isPartiallyNormalized()
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::isPartiallyNormalized()");
    return 0;
}

bool java::util::Calendar::isSet(int32_t field)
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::isSet(int32_t field)");
    return 0;
}

/* private: bool java::util::Calendar::isStandaloneStyle(int32_t style) */
bool java::util::Calendar::isWeekDateSupported()
{ /* stub */
    unimplemented_(u"bool java::util::Calendar::isWeekDateSupported()");
    return 0;
}

/* private: void java::util::Calendar::readObject(::java::io::ObjectInputStream* stream) */
void java::util::Calendar::roll(int32_t field, int32_t amount)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::roll(int32_t field, int32_t amount)");
}

int32_t java::util::Calendar::selectFields()
{ /* stub */
    unimplemented_(u"int32_t java::util::Calendar::selectFields()");
    return 0;
}

void java::util::Calendar::set(int32_t field, int32_t value)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::set(int32_t field, int32_t value)");
}

void java::util::Calendar::set(int32_t year, int32_t month, int32_t date)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::set(int32_t year, int32_t month, int32_t date)");
}

void java::util::Calendar::set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute)");
}

void java::util::Calendar::set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute, int32_t second)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute, int32_t second)");
}

void java::util::Calendar::setFieldsComputed(int32_t fieldMask)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setFieldsComputed(int32_t fieldMask)");
}

void java::util::Calendar::setFieldsNormalized(int32_t fieldMask)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setFieldsNormalized(int32_t fieldMask)");
}

void java::util::Calendar::setFirstDayOfWeek(int32_t value)
{ /* stub */
    this->firstDayOfWeek = value; /* setter */
}

void java::util::Calendar::setLenient(bool lenient)
{ /* stub */
    this->lenient = lenient; /* setter */
}

void java::util::Calendar::setMinimalDaysInFirstWeek(int32_t value)
{ /* stub */
    this->minimalDaysInFirstWeek = value; /* setter */
}

void java::util::Calendar::setTime(Date* date)
{ /* stub */
}

void java::util::Calendar::setTimeInMillis(int64_t millis)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setTimeInMillis(int64_t millis)");
}

void java::util::Calendar::setTimeZone(TimeZone* value)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setTimeZone(TimeZone* value)");
}

void java::util::Calendar::setUnnormalized()
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setUnnormalized()");
}

/* private: void java::util::Calendar::setWeekCountData(Locale* desiredLocale) */
void java::util::Calendar::setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek)");
}

void java::util::Calendar::setZoneShared(bool shared)
{ /* stub */
    unimplemented_(u"void java::util::Calendar::setZoneShared(bool shared)");
}

java::time::Instant* java::util::Calendar::toInstant()
{ /* stub */
    unimplemented_(u"java::time::Instant* java::util::Calendar::toInstant()");
    return 0;
}

/* private: int32_t java::util::Calendar::toStandaloneStyle(int32_t style) */
java::lang::String* java::util::Calendar::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Calendar::toString()");
    return 0;
}

/* private: void java::util::Calendar::updateTime() */
/* private: void java::util::Calendar::writeObject(::java::io::ObjectOutputStream* stream) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Calendar::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Calendar", 18);
    return c;
}

java::lang::Class* java::util::Calendar::getClass0()
{
    return class_();
}

