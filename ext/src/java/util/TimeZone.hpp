// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <atomic>
#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/time/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class java::util::TimeZone
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
{

public:
    typedef ::java::lang::Object super;

private:
    static bool $assertionsDisabled_;
    static ::java::lang::String* GMT_ID_;
    static constexpr int32_t GMT_ID_LENGTH { int32_t(3) };
    ::java::lang::String* ID {  };

public:
    static constexpr int32_t LONG { int32_t(1) };

private:
    static TimeZone* NO_TIMEZONE_;
    static constexpr int32_t ONE_DAY { int32_t(86400000) };
    static constexpr int32_t ONE_HOUR { int32_t(3600000) };
    static constexpr int32_t ONE_MINUTE { int32_t(60000) };

public:
    static constexpr int32_t SHORT { int32_t(0) };

private:
    static std::atomic< TimeZone* > defaultTimeZone_;
    static std::atomic< TimeZone* > mainAppContextDefault_;

public: /* package */
    static constexpr int64_t serialVersionUID { int64_t(3581463369166924961LL) };

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    static ::java::lang::StringArray* getAvailableIDs();
    static ::java::lang::StringArray* getAvailableIDs(int32_t rawOffset);
    virtual int32_t getDSTSavings();
    static TimeZone* getDefault();

public: /* package */
    static TimeZone* getDefaultRef();

public:
    ::java::lang::String* getDisplayName();
    ::java::lang::String* getDisplayName(Locale* locale);
    ::java::lang::String* getDisplayName(bool daylight, int32_t style);
    virtual ::java::lang::String* getDisplayName(bool daylight, int32_t style, Locale* locale);
    /*static ::java::lang::StringArray* getDisplayNames(::java::lang::String* id, Locale* locale); (private) */
    virtual ::java::lang::String* getID();
    virtual int32_t getOffset(int64_t date);
    virtual int32_t getOffset(int32_t era, int32_t year, int32_t month, int32_t day, int32_t dayOfWeek, int32_t milliseconds) = 0;

public: /* package */
    virtual int32_t getOffsets(int64_t date, ::int32_tArray* offsets);

public:
    virtual int32_t getRawOffset() = 0;
    /*static ::java::lang::String* getSystemGMTOffsetID(); (private) */
    /*static ::java::lang::String* getSystemTimeZoneID(::java::lang::String* javaHome); (private) */
    static TimeZone* getTimeZone(::java::lang::String* ID);
    static TimeZone* getTimeZone(::java::time::ZoneId* zoneId);
    /*static TimeZone* getTimeZone(::java::lang::String* ID, bool fallback); (private) */
    virtual bool hasSameRules(TimeZone* other);
    virtual bool inDaylightTime(Date* date) = 0;
    virtual bool observesDaylightTime();
    /*static TimeZone* parseCustomTimeZone(::java::lang::String* id); (private) */
    static void setDefault(TimeZone* zone);
    /*static TimeZone* setDefaultZone(); (private) */
    virtual void setID(::java::lang::String* ID);
    virtual void setRawOffset(int32_t offsetMillis) = 0;
    virtual ::java::time::ZoneId* toZoneId();
    virtual bool useDaylightTime() = 0;

    // Generated
    TimeZone();
protected:
    TimeZone(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static bool& $assertionsDisabled();
    static ::java::lang::String*& GMT_ID();
    static TimeZone*& NO_TIMEZONE();

private:
    static std::atomic< TimeZone* >& defaultTimeZone();
    static std::atomic< TimeZone* >& mainAppContextDefault();
    virtual ::java::lang::Class* getClass0();
};
