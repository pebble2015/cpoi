// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/time/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/concurrent/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>

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

struct default_init_tag;

class java::util::Calendar
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;

public: /* package */
    static constexpr int32_t ALL_FIELDS { int32_t(131071) };

public:
    static constexpr int32_t ALL_STYLES { int32_t(0) };
    static constexpr int32_t AM { int32_t(0) };
    static constexpr int32_t AM_PM { int32_t(9) };

public: /* package */
    static constexpr int32_t AM_PM_MASK { int32_t(512) };

public:
    static constexpr int32_t APRIL { int32_t(3) };
    static constexpr int32_t AUGUST { int32_t(7) };

private:
    static constexpr int32_t COMPUTED { int32_t(1) };

public:
    static constexpr int32_t DATE { int32_t(5) };

public: /* package */
    static constexpr int32_t DATE_MASK { int32_t(32) };

public:
    static constexpr int32_t DAY_OF_MONTH { int32_t(5) };

public: /* package */
    static constexpr int32_t DAY_OF_MONTH_MASK { int32_t(32) };

public:
    static constexpr int32_t DAY_OF_WEEK { int32_t(7) };
    static constexpr int32_t DAY_OF_WEEK_IN_MONTH { int32_t(8) };

public: /* package */
    static constexpr int32_t DAY_OF_WEEK_IN_MONTH_MASK { int32_t(256) };
    static constexpr int32_t DAY_OF_WEEK_MASK { int32_t(128) };

public:
    static constexpr int32_t DAY_OF_YEAR { int32_t(6) };

public: /* package */
    static constexpr int32_t DAY_OF_YEAR_MASK { int32_t(64) };

public:
    static constexpr int32_t DECEMBER { int32_t(11) };
    static constexpr int32_t DST_OFFSET { int32_t(16) };

public: /* package */
    static constexpr int32_t DST_OFFSET_MASK { int32_t(65536) };

public:
    static constexpr int32_t ERA { int32_t(0) };

public: /* package */
    static constexpr int32_t ERA_MASK { int32_t(1) };

public:
    static constexpr int32_t FEBRUARY { int32_t(1) };
    static constexpr int32_t FIELD_COUNT { int32_t(17) };

private:
    static ::java::lang::StringArray* FIELD_NAME_;

public:
    static constexpr int32_t FRIDAY { int32_t(6) };
    static constexpr int32_t HOUR { int32_t(10) };

public: /* package */
    static constexpr int32_t HOUR_MASK { int32_t(1024) };

public:
    static constexpr int32_t HOUR_OF_DAY { int32_t(11) };

public: /* package */
    static constexpr int32_t HOUR_OF_DAY_MASK { int32_t(2048) };

public:
    static constexpr int32_t JANUARY { int32_t(0) };
    static constexpr int32_t JULY { int32_t(6) };
    static constexpr int32_t JUNE { int32_t(5) };
    static constexpr int32_t LONG { int32_t(2) };
    static constexpr int32_t LONG_FORMAT { int32_t(2) };
    static constexpr int32_t LONG_STANDALONE { int32_t(32770) };
    static constexpr int32_t MARCH { int32_t(2) };
    static constexpr int32_t MAY { int32_t(4) };
    static constexpr int32_t MILLISECOND { int32_t(14) };

public: /* package */
    static constexpr int32_t MILLISECOND_MASK { int32_t(16384) };

private:
    static constexpr int32_t MINIMUM_USER_STAMP { int32_t(2) };

public:
    static constexpr int32_t MINUTE { int32_t(12) };

public: /* package */
    static constexpr int32_t MINUTE_MASK { int32_t(4096) };

public:
    static constexpr int32_t MONDAY { int32_t(2) };
    static constexpr int32_t MONTH { int32_t(2) };

public: /* package */
    static constexpr int32_t MONTH_MASK { int32_t(4) };

public:
    static constexpr int32_t NARROW_FORMAT { int32_t(4) };
    static constexpr int32_t NARROW_STANDALONE { int32_t(32772) };
    static constexpr int32_t NOVEMBER { int32_t(10) };
    static constexpr int32_t OCTOBER { int32_t(9) };
    static constexpr int32_t PM { int32_t(1) };
    static constexpr int32_t SATURDAY { int32_t(7) };
    static constexpr int32_t SECOND { int32_t(13) };

public: /* package */
    static constexpr int32_t SECOND_MASK { int32_t(8192) };

public:
    static constexpr int32_t SEPTEMBER { int32_t(8) };
    static constexpr int32_t SHORT { int32_t(1) };
    static constexpr int32_t SHORT_FORMAT { int32_t(1) };
    static constexpr int32_t SHORT_STANDALONE { int32_t(32769) };

public: /* package */
    static constexpr int32_t STANDALONE_MASK { int32_t(32768) };

public:
    static constexpr int32_t SUNDAY { int32_t(1) };
    static constexpr int32_t THURSDAY { int32_t(5) };
    static constexpr int32_t TUESDAY { int32_t(3) };
    static constexpr int32_t UNDECIMBER { int32_t(12) };

private:
    static constexpr int32_t UNSET { int32_t(0) };

public:
    static constexpr int32_t WEDNESDAY { int32_t(4) };
    static constexpr int32_t WEEK_OF_MONTH { int32_t(4) };

public: /* package */
    static constexpr int32_t WEEK_OF_MONTH_MASK { int32_t(16) };

public:
    static constexpr int32_t WEEK_OF_YEAR { int32_t(3) };

public: /* package */
    static constexpr int32_t WEEK_OF_YEAR_MASK { int32_t(8) };

public:
    static constexpr int32_t YEAR { int32_t(1) };

public: /* package */
    static constexpr int32_t YEAR_MASK { int32_t(2) };

public:
    static constexpr int32_t ZONE_OFFSET { int32_t(15) };

public: /* package */
    static constexpr int32_t ZONE_OFFSET_MASK { int32_t(32768) };
    bool areAllFieldsSet {  };

public: /* protected */
    bool areFieldsSet {  };

private:
    static ::java::util::concurrent::ConcurrentMap* cachedLocaleData_;

public: /* package */
    static constexpr int32_t currentSerialVersion { int32_t(1) };

public: /* protected */
    ::int32_tArray* fields {  };

private:
    int32_t firstDayOfWeek {  };

public: /* protected */
    ::boolArray* isSet_ {  };
    bool isTimeSet {  };

private:
    bool lenient {  };
    int32_t minimalDaysInFirstWeek {  };
    int32_t nextStamp {  };
    int32_t serialVersionOnStream {  };

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-1807547505821590642LL) };

private:
    bool sharedZone {  };
    ::int32_tArray* stamp {  };

public: /* protected */
    int64_t time {  };

private:
    TimeZone* zone {  };

protected:
    void ctor();
    void ctor(TimeZone* zone, Locale* aLocale);

public:
    virtual void add(int32_t field, int32_t amount) = 0;
    /*void adjustStamp(); (private) */
    virtual bool after(::java::lang::Object* when);
    /*static int32_t aggregateStamp(int32_t stamp_a, int32_t stamp_b); (private) */
    /*static void appendValue(::java::lang::StringBuilder* sb, ::java::lang::String* item, bool valid, int64_t value); (private) */
    virtual bool before(::java::lang::Object* when);

public: /* package */
    virtual bool checkDisplayNameParams(int32_t field, int32_t style, int32_t minStyle, int32_t maxStyle, Locale* locale, int32_t fieldMask);

public:
    void clear();
    void clear(int32_t field);
    ::java::lang::Object* clone() override;
    virtual int32_t compareTo(Calendar* anotherCalendar);
    /*int32_t compareTo(int64_t t); (private) */

public: /* protected */
    virtual void complete();
    virtual void computeFields() = 0;
    virtual void computeTime() = 0;
    /*static Calendar* createCalendar(TimeZone* zone, Locale* aLocale); (private) */

public:
    bool equals(::java::lang::Object* obj) override;
    virtual int32_t get(int32_t field);
    virtual int32_t getActualMaximum(int32_t field);
    virtual int32_t getActualMinimum(int32_t field);
    static Set* getAvailableCalendarTypes();
    static LocaleArray* getAvailableLocales();

public: /* package */
    virtual int32_t getBaseStyle(int32_t style);

public:
    virtual ::java::lang::String* getCalendarType();
    virtual ::java::lang::String* getDisplayName(int32_t field, int32_t style, Locale* locale);
    virtual Map* getDisplayNames(int32_t field, int32_t style, Locale* locale);
    /*Map* getDisplayNamesImpl(int32_t field, int32_t style, Locale* locale); (private) */

public: /* package */
    static ::java::lang::String* getFieldName(int32_t field);
    /*::java::lang::StringArray* getFieldStrings(int32_t field, int32_t style, ::java::text::DateFormatSymbols* symbols); (private) */

public:
    virtual int32_t getFirstDayOfWeek();
    virtual int32_t getGreatestMinimum(int32_t field) = 0;
    static Calendar* getInstance();
    static Calendar* getInstance(TimeZone* zone);
    static Calendar* getInstance(Locale* aLocale);
    static Calendar* getInstance(TimeZone* zone, Locale* aLocale);
    virtual int32_t getLeastMaximum(int32_t field) = 0;
    virtual int32_t getMaximum(int32_t field) = 0;
    /*static int64_t getMillisOf(Calendar* calendar); (private) */
    virtual int32_t getMinimalDaysInFirstWeek();
    virtual int32_t getMinimum(int32_t field) = 0;

public: /* package */
    int32_t getSetStateFields();

public:
    Date* getTime();
    virtual int64_t getTimeInMillis();
    virtual TimeZone* getTimeZone();
    virtual int32_t getWeekYear();
    virtual int32_t getWeeksInWeekYear();

public: /* package */
    virtual TimeZone* getZone();

public:
    int32_t hashCode() override;

public: /* protected */
    int32_t internalGet(int32_t field);

public: /* package */
    void internalSet(int32_t field, int32_t value);
    /*void invalidateWeekFields(); (private) */
    bool isExternallySet(int32_t field);
    static bool isFieldSet(int32_t fieldMask, int32_t field);
    bool isFullyNormalized();

public:
    virtual bool isLenient();
    /*bool isNarrowFormatStyle(int32_t style); (private) */
    /*bool isNarrowStyle(int32_t style); (private) */

public: /* package */
    bool isPartiallyNormalized();

public:
    bool isSet(int32_t field);
    /*bool isStandaloneStyle(int32_t style); (private) */
    virtual bool isWeekDateSupported();
    /*void readObject(::java::io::ObjectInputStream* stream); (private) */
    virtual void roll(int32_t field, bool up) = 0;
    virtual void roll(int32_t field, int32_t amount);

public: /* package */
    int32_t selectFields();

public:
    virtual void set(int32_t field, int32_t value);
    void set(int32_t year, int32_t month, int32_t date);
    void set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute);
    void set(int32_t year, int32_t month, int32_t date, int32_t hourOfDay, int32_t minute, int32_t second);

public: /* package */
    void setFieldsComputed(int32_t fieldMask);
    void setFieldsNormalized(int32_t fieldMask);

public:
    virtual void setFirstDayOfWeek(int32_t value);
    virtual void setLenient(bool lenient);
    virtual void setMinimalDaysInFirstWeek(int32_t value);
    void setTime(Date* date);
    virtual void setTimeInMillis(int64_t millis);
    virtual void setTimeZone(TimeZone* value);

public: /* package */
    void setUnnormalized();
    /*void setWeekCountData(Locale* desiredLocale); (private) */

public:
    virtual void setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek);

public: /* package */
    virtual void setZoneShared(bool shared);

public:
    ::java::time::Instant* toInstant();
    /*int32_t toStandaloneStyle(int32_t style); (private) */
    ::java::lang::String* toString() override;
    /*void updateTime(); (private) */
    /*void writeObject(::java::io::ObjectOutputStream* stream); (private) */

    // Generated

public: /* protected */
    Calendar();
    Calendar(TimeZone* zone, Locale* aLocale);
protected:
    Calendar(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

public: /* package */
    static bool& $assertionsDisabled();

private:
    static ::java::lang::StringArray*& FIELD_NAME();
    static ::java::util::concurrent::ConcurrentMap*& cachedLocaleData();
    virtual ::java::lang::Class* getClass0();
};
