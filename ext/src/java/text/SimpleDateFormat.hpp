// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/concurrent/fwd-POI.hpp>
#include <java/text/DateFormat.hpp>

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

    namespace text
    {
typedef ::SubArray< ::java::text::AttributedCharacterIterator_Attribute, ::java::lang::ObjectArray, ::java::io::SerializableArray > AttributedCharacterIterator_AttributeArray;
typedef ::SubArray< ::java::text::Format_Field, AttributedCharacterIterator_AttributeArray > Format_FieldArray;
typedef ::SubArray< ::java::text::DateFormat_Field, Format_FieldArray > DateFormat_FieldArray;
    } // text

    namespace lang
    {
typedef ::SubArray< ::java::lang::StringArray, CloneableArray, ::java::io::SerializableArray > StringArrayArray;
    } // lang
} // java

struct default_init_tag;

class java::text::SimpleDateFormat
    : public DateFormat
{

public:
    typedef DateFormat super;

private:
    static bool $assertionsDisabled_;
    static ::java::lang::String* GMT_;
    static constexpr int32_t MILLIS_PER_MINUTE { int32_t(60000) };
    static ::int32_tArray* PATTERN_INDEX_TO_CALENDAR_FIELD_;
    static ::int32_tArray* PATTERN_INDEX_TO_DATE_FORMAT_FIELD_;
    static DateFormat_FieldArray* PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID_;
    static ::int32_tArray* REST_OF_STYLES_;
    static constexpr int32_t TAG_QUOTE_ASCII_CHAR { int32_t(100) };
    static constexpr int32_t TAG_QUOTE_CHARS { int32_t(101) };
    static ::java::util::concurrent::ConcurrentMap* cachedNumberFormatData_;
    ::char16_tArray* compiledPattern {  };

public: /* package */
    static constexpr int32_t currentSerialVersion { int32_t(1) };

private:
    ::java::util::Date* defaultCenturyStart {  };
    int32_t defaultCenturyStartYear {  };
    bool forceStandaloneForm {  };
    DateFormatSymbols* formatData {  };
    bool hasFollowingMinusSign {  };
    ::java::util::Locale* locale {  };
    char16_t minusSign {  };
    NumberFormat* originalNumberFormat {  };
    ::java::lang::String* originalNumberPattern {  };
    ::java::lang::String* pattern {  };
    int32_t serialVersionOnStream {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(4774881970558875024LL) };
    bool useDateFormatSymbols_ {  };

private:
    char16_t zeroDigit {  };

protected:
    void ctor();
    void ctor(::java::lang::String* pattern);
    void ctor(::java::lang::String* pattern, ::java::util::Locale* locale);
    void ctor(::java::lang::String* pattern, DateFormatSymbols* formatSymbols);

public:
    virtual void applyLocalizedPattern(::java::lang::String* pattern);
    virtual void applyPattern(::java::lang::String* pattern);
    /*void applyPatternImpl(::java::lang::String* pattern); (private) */
    /*void checkNegativeNumberExpression(); (private) */
    ::java::lang::Object* clone() override;
    /*::char16_tArray* compile(::java::lang::String* pattern); (private) */
    /*static void encode(int32_t tag, int32_t length, ::java::lang::StringBuilder* buffer); (private) */
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, FieldPosition* pos) override;
    /*::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, Format_FieldDelegate* delegate); (private) */
    AttributedCharacterIterator* formatToCharacterIterator(::java::lang::Object* obj) override;
    virtual ::java::util::Date* get2DigitYearStart();
    virtual DateFormatSymbols* getDateFormatSymbols();
    /*::java::util::Map* getDisplayNamesMap(int32_t field, ::java::util::Locale* locale); (private) */
    int32_t hashCode() override;
    /*void initialize(::java::util::Locale* loc); (private) */
    /*void initializeCalendar(::java::util::Locale* loc); (private) */
    /*void initializeDefaultCentury(); (private) */
    /*bool isDigit(char16_t c); (private) */
    /*bool matchDSTString(::java::lang::String* text, int32_t start, int32_t zoneIndex, int32_t standardIndex, ::java::lang::StringArrayArray* zoneStrings); (private) */
    /*int32_t matchString(::java::lang::String* text, int32_t start, int32_t field, ::java::lang::StringArray* data, CalendarBuilder* calb); (private) */
    /*int32_t matchString(::java::lang::String* text, int32_t start, int32_t field, ::java::util::Map* data, CalendarBuilder* calb); (private) */
    /*int32_t matchZoneString(::java::lang::String* text, int32_t start, ::java::lang::StringArray* zoneNames); (private) */
    ::java::util::Date* parse(::java::lang::String* text, ParsePosition* pos) override;
    /*void parseAmbiguousDatesAsAfter(::java::util::Date* startDate); (private) */
    /*void readObject(::java::io::ObjectInputStream* stream); (private) */
    virtual void set2DigitYearStart(::java::util::Date* startDate);
    virtual void setDateFormatSymbols(DateFormatSymbols* newFormatSymbols);
    /*void subFormat(int32_t patternCharIndex, int32_t count, Format_FieldDelegate* delegate, ::java::lang::StringBuffer* buffer, bool useDateFormatSymbols); (private) */
    /*int32_t subParse(::java::lang::String* text, int32_t start, int32_t patternCharIndex, int32_t count, bool obeyCount, ::boolArray* ambiguousYear, ParsePosition* origPos, bool useFollowingMinusSignAsDelimiter, CalendarBuilder* calb); (private) */
    /*int32_t subParseNumericZone(::java::lang::String* text, int32_t start, int32_t sign, int32_t count, bool colon, CalendarBuilder* calb); (private) */
    /*int32_t subParseZoneString(::java::lang::String* text, int32_t start, CalendarBuilder* calb); (private) */
    virtual ::java::lang::String* toLocalizedPattern();
    virtual ::java::lang::String* toPattern();
    /*::java::lang::String* translatePattern(::java::lang::String* pattern, ::java::lang::String* from, ::java::lang::String* to); (private) */
    /*bool useDateFormatSymbols(); (private) */
    /*void zeroPaddingNumber(int32_t value, int32_t minDigits, int32_t maxDigits, ::java::lang::StringBuffer* buffer); (private) */

    // Generated
    SimpleDateFormat();
    SimpleDateFormat(::java::lang::String* pattern);
    SimpleDateFormat(::java::lang::String* pattern, ::java::util::Locale* locale);
    SimpleDateFormat(::java::lang::String* pattern, DateFormatSymbols* formatSymbols);
protected:
    SimpleDateFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::String* format(::java::util::Date* date);
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, FieldPosition* fieldPosition);
    virtual ::java::util::Date* parse(::java::lang::String* source);
    ::java::lang::String* format(::java::lang::Object* obj);

public: /* package */
    static bool& $assertionsDisabled();

private:
    static ::java::lang::String*& GMT();
    static ::int32_tArray*& PATTERN_INDEX_TO_CALENDAR_FIELD();
    static ::int32_tArray*& PATTERN_INDEX_TO_DATE_FORMAT_FIELD();
    static DateFormat_FieldArray*& PATTERN_INDEX_TO_DATE_FORMAT_FIELD_ID();
    static ::int32_tArray*& REST_OF_STYLES();
    static ::java::util::concurrent::ConcurrentMap*& cachedNumberFormatData();
    virtual ::java::lang::Class* getClass0();
};
