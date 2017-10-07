// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class java::util::Calendar_Builder
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t NFIELDS { int32_t(18) };
    static constexpr int32_t WEEK_YEAR { int32_t(17) };
    ::int32_tArray* fields {  };
    int32_t firstDayOfWeek {  };
    int64_t instant {  };
    bool lenient {  };
    Locale* locale {  };
    int32_t maxFieldIndex {  };
    int32_t minimalDaysInFirstWeek {  };
    int32_t nextStamp {  };
    ::java::lang::String* type {  };
    TimeZone* zone {  };

protected:
    void ctor();
    /*void allocateFields(); (private) */

public:
    virtual Calendar* build();
    /*void internalSet(int32_t field, int32_t value); (private) */
    /*bool isInstantSet(); (private) */
    /*bool isSet(int32_t index); (private) */
    /*bool isValidWeekParameter(int32_t value); (private) */
    virtual Calendar_Builder* set(int32_t field, int32_t value);
    virtual Calendar_Builder* setCalendarType(::java::lang::String* type);
    virtual Calendar_Builder* setDate(int32_t year, int32_t month, int32_t dayOfMonth);
    virtual Calendar_Builder* setFields(::int32_tArray* fieldValuePairs);
    virtual Calendar_Builder* setInstant(int64_t instant);
    virtual Calendar_Builder* setInstant(Date* instant);
    virtual Calendar_Builder* setLenient(bool lenient);
    virtual Calendar_Builder* setLocale(Locale* locale);
    virtual Calendar_Builder* setTimeOfDay(int32_t hourOfDay, int32_t minute, int32_t second);
    virtual Calendar_Builder* setTimeOfDay(int32_t hourOfDay, int32_t minute, int32_t second, int32_t millis);
    virtual Calendar_Builder* setTimeZone(TimeZone* zone);
    virtual Calendar_Builder* setWeekDate(int32_t weekYear, int32_t weekOfYear, int32_t dayOfWeek);
    virtual Calendar_Builder* setWeekDefinition(int32_t firstDayOfWeek, int32_t minimalDaysInFirstWeek);

    // Generated
    Calendar_Builder();
protected:
    Calendar_Builder(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
