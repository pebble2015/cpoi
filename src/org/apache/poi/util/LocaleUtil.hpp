// Generated from /POI/java/org/apache/poi/util/LocaleUtil.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/charset/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::LocaleUtil final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
protected:
    void ctor();

private:
    static ::java::util::TimeZone* TIMEZONE_UTC_;
    static ::java::nio::charset::Charset* CHARSET_1252_;
    static ::java::lang::ThreadLocal* userTimeZone_;
    static ::java::lang::ThreadLocal* userLocale_;

public:
    static void setUserTimeZone(::java::util::TimeZone* timezone);
    static ::java::util::TimeZone* getUserTimeZone();
    static void resetUserTimeZone();
    static void setUserLocale(::java::util::Locale* locale);
    static ::java::util::Locale* getUserLocale();
    static void resetUserLocale();
    static ::java::util::Calendar* getLocaleCalendar();
    static ::java::util::Calendar* getLocaleCalendar(int32_t year, int32_t month, int32_t day);
    static ::java::util::Calendar* getLocaleCalendar(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second);
    static ::java::util::Calendar* getLocaleCalendar(::java::util::TimeZone* timeZone);
    static ::java::lang::String* getLocaleFromLCID(int32_t lcid);

    // Generated

private:
    LocaleUtil();
protected:
    LocaleUtil(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    static ::java::util::TimeZone*& TIMEZONE_UTC();
    static ::java::nio::charset::Charset*& CHARSET_1252();

private:
    static ::java::lang::ThreadLocal*& userTimeZone();
    static ::java::lang::ThreadLocal*& userLocale();
    virtual ::java::lang::Class* getClass0();
};
