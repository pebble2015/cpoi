// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/util/concurrent/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>

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

struct default_init_tag;

class java::text::DateFormatSymbols
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

public: /* package */
    static constexpr int32_t PATTERN_AM_PM { int32_t(14) };
    static constexpr int32_t PATTERN_DAY_OF_MONTH { int32_t(3) };
    static constexpr int32_t PATTERN_DAY_OF_WEEK { int32_t(9) };
    static constexpr int32_t PATTERN_DAY_OF_WEEK_IN_MONTH { int32_t(11) };
    static constexpr int32_t PATTERN_DAY_OF_YEAR { int32_t(10) };
    static constexpr int32_t PATTERN_ERA { int32_t(0) };
    static constexpr int32_t PATTERN_HOUR0 { int32_t(16) };
    static constexpr int32_t PATTERN_HOUR1 { int32_t(15) };
    static constexpr int32_t PATTERN_HOUR_OF_DAY0 { int32_t(5) };
    static constexpr int32_t PATTERN_HOUR_OF_DAY1 { int32_t(4) };
    static constexpr int32_t PATTERN_ISO_DAY_OF_WEEK { int32_t(20) };
    static constexpr int32_t PATTERN_ISO_ZONE { int32_t(21) };
    static constexpr int32_t PATTERN_MILLISECOND { int32_t(8) };
    static constexpr int32_t PATTERN_MINUTE { int32_t(6) };
    static constexpr int32_t PATTERN_MONTH { int32_t(2) };
    static constexpr int32_t PATTERN_MONTH_STANDALONE { int32_t(22) };
    static constexpr int32_t PATTERN_SECOND { int32_t(7) };
    static constexpr int32_t PATTERN_WEEK_OF_MONTH { int32_t(13) };
    static constexpr int32_t PATTERN_WEEK_OF_YEAR { int32_t(12) };
    static constexpr int32_t PATTERN_WEEK_YEAR { int32_t(19) };
    static constexpr int32_t PATTERN_YEAR { int32_t(1) };
    static constexpr int32_t PATTERN_ZONE_NAME { int32_t(17) };
    static constexpr int32_t PATTERN_ZONE_VALUE { int32_t(18) };
    ::java::lang::StringArray* ampms {  };
    std::atomic< int32_t > cachedHashCode {  };

private:
    static ::java::util::concurrent::ConcurrentMap* cachedInstances_;

public: /* package */
    ::java::lang::StringArray* eras {  };
    bool isZoneStringsSet {  };

private:
    int32_t lastZoneIndex {  };

public: /* package */
    ::java::lang::String* localPatternChars {  };
    ::java::util::Locale* locale {  };
    static constexpr int32_t millisPerHour { int32_t(3600000) };
    ::java::lang::StringArray* months {  };

private:
    static ::java::lang::String* patternChars_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(-5987973545549424702LL) };
    ::java::lang::StringArray* shortMonths {  };
    ::java::lang::StringArray* shortWeekdays {  };
    ::java::lang::StringArray* weekdays {  };
    ::java::lang::StringArrayArray* zoneStrings {  };

protected:
    void ctor();
    void ctor(::java::util::Locale* locale);
    /*void ctor(bool flag); (private) */

public:
    ::java::lang::Object* clone() override;
    /*void copyMembers(DateFormatSymbols* src, DateFormatSymbols* dst); (private) */
    bool equals(::java::lang::Object* obj) override;
    virtual ::java::lang::StringArray* getAmPmStrings();
    static ::java::util::LocaleArray* getAvailableLocales();
    virtual ::java::lang::StringArray* getEras();
    static DateFormatSymbols* getInstance();
    static DateFormatSymbols* getInstance(::java::util::Locale* locale);

public: /* package */
    static DateFormatSymbols* getInstanceRef(::java::util::Locale* locale);

public:
    virtual ::java::lang::String* getLocalPatternChars();
    virtual ::java::lang::StringArray* getMonths();
    /*static DateFormatSymbols* getProviderInstance(::java::util::Locale* locale); (private) */
    virtual ::java::lang::StringArray* getShortMonths();
    virtual ::java::lang::StringArray* getShortWeekdays();
    virtual ::java::lang::StringArray* getWeekdays();

public: /* package */
    int32_t getZoneIndex(::java::lang::String* ID);

public:
    virtual ::java::lang::StringArrayArray* getZoneStrings();
    /*::java::lang::StringArrayArray* getZoneStringsImpl(bool needsCopy); (private) */

public: /* package */
    ::java::lang::StringArrayArray* getZoneStringsWrapper();

public:
    int32_t hashCode() override;
    /*void initializeData(::java::util::Locale* locale); (private) */
    /*bool isSubclassObject(); (private) */
    virtual void setAmPmStrings(::java::lang::StringArray* newAmpms);
    virtual void setEras(::java::lang::StringArray* newEras);
    virtual void setLocalPatternChars(::java::lang::String* newLocalPatternChars);
    virtual void setMonths(::java::lang::StringArray* newMonths);
    virtual void setShortMonths(::java::lang::StringArray* newShortMonths);
    virtual void setShortWeekdays(::java::lang::StringArray* newShortWeekdays);
    virtual void setWeekdays(::java::lang::StringArray* newWeekdays);
    virtual void setZoneStrings(::java::lang::StringArrayArray* newZoneStrings);
    /*static ::java::lang::StringArray* toOneBasedArray_(::java::lang::StringArray* src); (private) */
    /*void writeObject(::java::io::ObjectOutputStream* stream); (private) */

    // Generated
    DateFormatSymbols();
    DateFormatSymbols(::java::util::Locale* locale);
protected:
    DateFormatSymbols(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    static ::java::util::concurrent::ConcurrentMap*& cachedInstances();

public: /* package */
    static ::java::lang::String*& patternChars();

private:
    virtual ::java::lang::Class* getClass0();
};
