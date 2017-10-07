// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/DateFormatSymbols.hpp>

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

    namespace lang
    {
typedef ::SubArray< ::java::lang::StringArray, CloneableArray, ::java::io::SerializableArray > StringArrayArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);
java::text::DateFormatSymbols::DateFormatSymbols(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::DateFormatSymbols::DateFormatSymbols()
    : DateFormatSymbols(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::text::DateFormatSymbols::DateFormatSymbols(::java::util::Locale* locale)
    : DateFormatSymbols(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

constexpr int32_t java::text::DateFormatSymbols::PATTERN_AM_PM;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_DAY_OF_MONTH;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_DAY_OF_WEEK;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_DAY_OF_WEEK_IN_MONTH;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_DAY_OF_YEAR;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_ERA;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_HOUR0;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_HOUR1;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_HOUR_OF_DAY0;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_HOUR_OF_DAY1;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_ISO_DAY_OF_WEEK;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_ISO_ZONE;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_MILLISECOND;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_MINUTE;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_MONTH;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_MONTH_STANDALONE;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_SECOND;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_WEEK_OF_MONTH;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_WEEK_OF_YEAR;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_WEEK_YEAR;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_YEAR;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_ZONE_NAME;
constexpr int32_t java::text::DateFormatSymbols::PATTERN_ZONE_VALUE;
java::util::concurrent::ConcurrentMap*& java::text::DateFormatSymbols::cachedInstances()
{
    clinit();
    return cachedInstances_;
}
java::util::concurrent::ConcurrentMap* java::text::DateFormatSymbols::cachedInstances_;
constexpr int32_t java::text::DateFormatSymbols::millisPerHour;
java::lang::String*& java::text::DateFormatSymbols::patternChars()
{
    clinit();
    return patternChars_;
}
java::lang::String* java::text::DateFormatSymbols::patternChars_;
constexpr int64_t java::text::DateFormatSymbols::serialVersionUID;

void ::java::text::DateFormatSymbols::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DateFormatSymbols::ctor()");
}

void ::java::text::DateFormatSymbols::ctor(::java::util::Locale* locale)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::DateFormatSymbols::ctor(::java::util::Locale* locale)");
}

/* private: void ::java::text::DateFormatSymbols::ctor(bool flag) */
java::lang::Object* java::text::DateFormatSymbols::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::DateFormatSymbols::clone()");
    return 0;
}

/* private: void java::text::DateFormatSymbols::copyMembers(DateFormatSymbols* src, DateFormatSymbols* dst) */
bool java::text::DateFormatSymbols::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::text::DateFormatSymbols::equals(::java::lang::Object* obj)");
    return 0;
}

java::lang::StringArray* java::text::DateFormatSymbols::getAmPmStrings()
{ /* stub */
    unimplemented_(u"java::lang::StringArray* java::text::DateFormatSymbols::getAmPmStrings()");
    return 0;
}

java::util::LocaleArray* java::text::DateFormatSymbols::getAvailableLocales()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::LocaleArray* java::text::DateFormatSymbols::getAvailableLocales()");
    return 0;
}

java::lang::StringArray* java::text::DateFormatSymbols::getEras()
{ /* stub */
return eras ; /* getter */
}

java::text::DateFormatSymbols* java::text::DateFormatSymbols::getInstance()
{ /* stub */
    clinit();
    unimplemented_(u"java::text::DateFormatSymbols* java::text::DateFormatSymbols::getInstance()");
    return 0;
}

java::text::DateFormatSymbols* java::text::DateFormatSymbols::getInstance(::java::util::Locale* locale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::DateFormatSymbols* java::text::DateFormatSymbols::getInstance(::java::util::Locale* locale)");
    return 0;
}

java::text::DateFormatSymbols* java::text::DateFormatSymbols::getInstanceRef(::java::util::Locale* locale)
{ /* stub */
    clinit();
    unimplemented_(u"java::text::DateFormatSymbols* java::text::DateFormatSymbols::getInstanceRef(::java::util::Locale* locale)");
    return 0;
}

java::lang::String* java::text::DateFormatSymbols::getLocalPatternChars()
{ /* stub */
return localPatternChars ; /* getter */
}

java::lang::StringArray* java::text::DateFormatSymbols::getMonths()
{ /* stub */
return months ; /* getter */
}

/* private: java::text::DateFormatSymbols* java::text::DateFormatSymbols::getProviderInstance(::java::util::Locale* locale) */
java::lang::StringArray* java::text::DateFormatSymbols::getShortMonths()
{ /* stub */
return shortMonths ; /* getter */
}

java::lang::StringArray* java::text::DateFormatSymbols::getShortWeekdays()
{ /* stub */
return shortWeekdays ; /* getter */
}

java::lang::StringArray* java::text::DateFormatSymbols::getWeekdays()
{ /* stub */
return weekdays ; /* getter */
}

int32_t java::text::DateFormatSymbols::getZoneIndex(::java::lang::String* ID)
{ /* stub */
    unimplemented_(u"int32_t java::text::DateFormatSymbols::getZoneIndex(::java::lang::String* ID)");
    return 0;
}

java::lang::StringArrayArray* java::text::DateFormatSymbols::getZoneStrings()
{ /* stub */
return zoneStrings ; /* getter */
}

/* private: java::lang::StringArrayArray* java::text::DateFormatSymbols::getZoneStringsImpl(bool needsCopy) */
java::lang::StringArrayArray* java::text::DateFormatSymbols::getZoneStringsWrapper()
{ /* stub */
    unimplemented_(u"java::lang::StringArrayArray* java::text::DateFormatSymbols::getZoneStringsWrapper()");
    return 0;
}

int32_t java::text::DateFormatSymbols::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::text::DateFormatSymbols::hashCode()");
    return 0;
}

/* private: void java::text::DateFormatSymbols::initializeData(::java::util::Locale* locale) */
/* private: bool java::text::DateFormatSymbols::isSubclassObject() */
void java::text::DateFormatSymbols::setAmPmStrings(::java::lang::StringArray* newAmpms)
{ /* stub */
    unimplemented_(u"void java::text::DateFormatSymbols::setAmPmStrings(::java::lang::StringArray* newAmpms)");
}

void java::text::DateFormatSymbols::setEras(::java::lang::StringArray* newEras)
{ /* stub */
    this->eras = newEras; /* setter */
}

void java::text::DateFormatSymbols::setLocalPatternChars(::java::lang::String* newLocalPatternChars)
{ /* stub */
    this->localPatternChars = newLocalPatternChars; /* setter */
}

void java::text::DateFormatSymbols::setMonths(::java::lang::StringArray* newMonths)
{ /* stub */
    this->months = newMonths; /* setter */
}

void java::text::DateFormatSymbols::setShortMonths(::java::lang::StringArray* newShortMonths)
{ /* stub */
    this->shortMonths = newShortMonths; /* setter */
}

void java::text::DateFormatSymbols::setShortWeekdays(::java::lang::StringArray* newShortWeekdays)
{ /* stub */
    this->shortWeekdays = newShortWeekdays; /* setter */
}

void java::text::DateFormatSymbols::setWeekdays(::java::lang::StringArray* newWeekdays)
{ /* stub */
    this->weekdays = newWeekdays; /* setter */
}

void java::text::DateFormatSymbols::setZoneStrings(::java::lang::StringArrayArray* newZoneStrings)
{ /* stub */
    this->zoneStrings = newZoneStrings; /* setter */
}

/* private: java::lang::StringArray* java::text::DateFormatSymbols::toOneBasedArray_(::java::lang::StringArray* src) */
/* private: void java::text::DateFormatSymbols::writeObject(::java::io::ObjectOutputStream* stream) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::DateFormatSymbols::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.DateFormatSymbols", 27);
    return c;
}

java::lang::Class* java::text::DateFormatSymbols::getClass0()
{
    return class_();
}

