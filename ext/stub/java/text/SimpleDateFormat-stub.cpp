// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/text/SimpleDateFormat.hpp>

#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Date.hpp>

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
typedef ::SubArray< ::java::lang::StringArray, CloneableArray, ::java::io::SerializableArray > StringArrayArray;
    } // lang
} // java

extern void unimplemented_(const char16_t* name);
java::text::SimpleDateFormat::SimpleDateFormat(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::text::SimpleDateFormat::SimpleDateFormat()
    : SimpleDateFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::text::SimpleDateFormat::SimpleDateFormat(::java::lang::String* pattern)
    : SimpleDateFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern);
}

java::text::SimpleDateFormat::SimpleDateFormat(::java::lang::String* pattern, ::java::util::Locale* locale)
    : SimpleDateFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern, locale);
}

java::text::SimpleDateFormat::SimpleDateFormat(::java::lang::String* pattern, DateFormatSymbols* formatSymbols)
    : SimpleDateFormat(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern, formatSymbols);
}

bool& java::text::SimpleDateFormat::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::text::SimpleDateFormat::$assertionsDisabled_;
java::lang::String*& java::text::SimpleDateFormat::GMT()
{
    clinit();
    return GMT_;
}
java::lang::String* java::text::SimpleDateFormat::GMT_;
constexpr int32_t java::text::SimpleDateFormat::MILLIS_PER_MINUTE;
int32_tArray*& java::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD()
{
    clinit();
    return PATTERN_INDEX_TO_CALENDAR_FIELD_;
}
int32_tArray* java::text::SimpleDateFormat::PATTERN_INDEX_TO_CALENDAR_FIELD_;
int32_tArray*& java::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD()
{
    clinit();
    return PATTERN_INDEX_TO_DATE_FORMAT_FIELD_;
}
int32_tArray* java::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD_;
java::text::DateFormat_FieldArray*& java::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID()
{
    clinit();
    return PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID_;
}
java::text::DateFormat_FieldArray* java::text::SimpleDateFormat::PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID_;
int32_tArray*& java::text::SimpleDateFormat::REST_OF_STYLES()
{
    clinit();
    return REST_OF_STYLES_;
}
int32_tArray* java::text::SimpleDateFormat::REST_OF_STYLES_;
constexpr int32_t java::text::SimpleDateFormat::TAG_QUOTE_ASCII_CHAR;
constexpr int32_t java::text::SimpleDateFormat::TAG_QUOTE_CHARS;
java::util::concurrent::ConcurrentMap*& java::text::SimpleDateFormat::cachedNumberFormatData()
{
    clinit();
    return cachedNumberFormatData_;
}
java::util::concurrent::ConcurrentMap* java::text::SimpleDateFormat::cachedNumberFormatData_;
constexpr int32_t java::text::SimpleDateFormat::currentSerialVersion;
constexpr int64_t java::text::SimpleDateFormat::serialVersionUID;

void ::java::text::SimpleDateFormat::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::SimpleDateFormat::ctor()");
}

void ::java::text::SimpleDateFormat::ctor(::java::lang::String* pattern)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::SimpleDateFormat::ctor(::java::lang::String* pattern)");
}

void ::java::text::SimpleDateFormat::ctor(::java::lang::String* pattern, ::java::util::Locale* locale)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::SimpleDateFormat::ctor(::java::lang::String* pattern, ::java::util::Locale* locale)");
}

void ::java::text::SimpleDateFormat::ctor(::java::lang::String* pattern, DateFormatSymbols* formatSymbols)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::text::SimpleDateFormat::ctor(::java::lang::String* pattern, DateFormatSymbols* formatSymbols)");
}

void java::text::SimpleDateFormat::applyLocalizedPattern(::java::lang::String* pattern)
{ /* stub */
    unimplemented_(u"void java::text::SimpleDateFormat::applyLocalizedPattern(::java::lang::String* pattern)");
}

void java::text::SimpleDateFormat::applyPattern(::java::lang::String* pattern)
{ /* stub */
    unimplemented_(u"void java::text::SimpleDateFormat::applyPattern(::java::lang::String* pattern)");
}

/* private: void java::text::SimpleDateFormat::applyPatternImpl(::java::lang::String* pattern) */
/* private: void java::text::SimpleDateFormat::checkNegativeNumberExpression() */
java::lang::Object* java::text::SimpleDateFormat::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::text::SimpleDateFormat::clone()");
    return 0;
}

/* private: char16_tArray* java::text::SimpleDateFormat::compile(::java::lang::String* pattern) */
/* private: void java::text::SimpleDateFormat::encode(int32_t tag, int32_t length, ::java::lang::StringBuilder* buffer) */
bool java::text::SimpleDateFormat::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::text::SimpleDateFormat::equals(::java::lang::Object* obj)");
    return 0;
}

java::lang::StringBuffer* java::text::SimpleDateFormat::format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos)
{ /* stub */
    unimplemented_(u"java::lang::StringBuffer* java::text::SimpleDateFormat::format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos)");
    return 0;
}

/* private: java::lang::StringBuffer* java::text::SimpleDateFormat::format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, Format_FieldDelegate* delegate) */
java::text::AttributedCharacterIterator* java::text::SimpleDateFormat::formatToCharacterIterator(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"java::text::AttributedCharacterIterator* java::text::SimpleDateFormat::formatToCharacterIterator(::java::lang::Object* obj)");
    return 0;
}

java::util::Date* java::text::SimpleDateFormat::get2DigitYearStart()
{ /* stub */
    unimplemented_(u"java::util::Date* java::text::SimpleDateFormat::get2DigitYearStart()");
    return 0;
}

java::text::DateFormatSymbols* java::text::SimpleDateFormat::getDateFormatSymbols()
{ /* stub */
    unimplemented_(u"java::text::DateFormatSymbols* java::text::SimpleDateFormat::getDateFormatSymbols()");
    return 0;
}

/* private: java::util::Map* java::text::SimpleDateFormat::getDisplayNamesMap(int32_t field, ::java::util::Locale* locale) */
int32_t java::text::SimpleDateFormat::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::text::SimpleDateFormat::hashCode()");
    return 0;
}

/* private: void java::text::SimpleDateFormat::initialize(::java::util::Locale* loc) */
/* private: void java::text::SimpleDateFormat::initializeCalendar(::java::util::Locale* loc) */
/* private: void java::text::SimpleDateFormat::initializeDefaultCentury() */
/* private: bool java::text::SimpleDateFormat::isDigit(char16_t c) */
/* private: bool java::text::SimpleDateFormat::matchDSTString(::java::lang::String* text, int32_t start, int32_t zoneIndex, int32_t standardIndex, ::java::lang::StringArrayArray* zoneStrings) */
/* private: int32_t java::text::SimpleDateFormat::matchString(::java::lang::String* text, int32_t start, int32_t field, ::java::lang::StringArray* data, CalendarBuilder* calb) */
/* private: int32_t java::text::SimpleDateFormat::matchString(::java::lang::String* text, int32_t start, int32_t field, ::java::util::Map* data, CalendarBuilder* calb) */
/* private: int32_t java::text::SimpleDateFormat::matchZoneString(::java::lang::String* text, int32_t start, ::java::lang::StringArray* zoneNames) */
java::util::Date* java::text::SimpleDateFormat::parse(::java::lang::String* text, ParsePosition* pos)
{ /* stub */
    unimplemented_(u"java::util::Date* java::text::SimpleDateFormat::parse(::java::lang::String* text, ParsePosition* pos)");
    return 0;
}

/* private: void java::text::SimpleDateFormat::parseAmbiguousDatesAsAfter(::java::util::Date* startDate) */
/* private: void java::text::SimpleDateFormat::readObject(::java::io::ObjectInputStream* stream) */
void java::text::SimpleDateFormat::set2DigitYearStart(::java::util::Date* startDate)
{ /* stub */
    unimplemented_(u"void java::text::SimpleDateFormat::set2DigitYearStart(::java::util::Date* startDate)");
}

void java::text::SimpleDateFormat::setDateFormatSymbols(DateFormatSymbols* newFormatSymbols)
{ /* stub */
    unimplemented_(u"void java::text::SimpleDateFormat::setDateFormatSymbols(DateFormatSymbols* newFormatSymbols)");
}

/* private: void java::text::SimpleDateFormat::subFormat(int32_t patternCharIndex, int32_t count, Format_FieldDelegate* delegate, ::java::lang::StringBuffer* buffer, bool useDateFormatSymbols) */
/* private: int32_t java::text::SimpleDateFormat::subParse(::java::lang::String* text, int32_t start, int32_t patternCharIndex, int32_t count, bool obeyCount, ::boolArray* ambiguousYear, ParsePosition* origPos, bool useFollowingMinusSignAsDelimiter, CalendarBuilder* calb) */
/* private: int32_t java::text::SimpleDateFormat::subParseNumericZone(::java::lang::String* text, int32_t start, int32_t sign, int32_t count, bool colon, CalendarBuilder* calb) */
/* private: int32_t java::text::SimpleDateFormat::subParseZoneString(::java::lang::String* text, int32_t start, CalendarBuilder* calb) */
java::lang::String* java::text::SimpleDateFormat::toLocalizedPattern()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::SimpleDateFormat::toLocalizedPattern()");
    return 0;
}

java::lang::String* java::text::SimpleDateFormat::toPattern()
{ /* stub */
    unimplemented_(u"java::lang::String* java::text::SimpleDateFormat::toPattern()");
    return 0;
}

/* private: java::lang::String* java::text::SimpleDateFormat::translatePattern(::java::lang::String* pattern, ::java::lang::String* from, ::java::lang::String* to) */
/* private: bool java::text::SimpleDateFormat::useDateFormatSymbols() */
/* private: void java::text::SimpleDateFormat::zeroPaddingNumber(int32_t value, int32_t minDigits, int32_t maxDigits, ::java::lang::StringBuffer* buffer) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::text::SimpleDateFormat::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.text.SimpleDateFormat", 26);
    return c;
}

java::lang::String* java::text::SimpleDateFormat::format(::java::util::Date* date)
{
    return super::format(date);
}

java::lang::StringBuffer* java::text::SimpleDateFormat::format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, FieldPosition* fieldPosition)
{
    return super::format(obj, toAppendTo, fieldPosition);
}

java::util::Date* java::text::SimpleDateFormat::parse(::java::lang::String* source)
{
    return super::parse(source);
}

java::lang::String* java::text::SimpleDateFormat::format(::java::lang::Object* obj)
{
    return super::format(obj);
}

java::lang::Class* java::text::SimpleDateFormat::getClass0()
{
    return class_();
}

