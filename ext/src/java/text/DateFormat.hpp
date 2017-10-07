// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/text/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/util/locale/provider/fwd-POI.hpp>
#include <java/text/Format.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, ::java::lang::ObjectArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang

    namespace util
    {
typedef ::SubArray< ::java::util::Locale, ::java::lang::ObjectArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > LocaleArray;
    } // util
} // java

struct default_init_tag;

class java::text::DateFormat
    : public Format
{

public:
    typedef Format super;
    static constexpr int32_t AM_PM_FIELD { int32_t(14) };
    static constexpr int32_t DATE_FIELD { int32_t(3) };
    static constexpr int32_t DAY_OF_WEEK_FIELD { int32_t(9) };
    static constexpr int32_t DAY_OF_WEEK_IN_MONTH_FIELD { int32_t(11) };
    static constexpr int32_t DAY_OF_YEAR_FIELD { int32_t(10) };
    static constexpr int32_t DEFAULT { int32_t(2) };
    static constexpr int32_t ERA_FIELD { int32_t(0) };
    static constexpr int32_t FULL { int32_t(0) };
    static constexpr int32_t HOUR0_FIELD { int32_t(16) };
    static constexpr int32_t HOUR1_FIELD { int32_t(15) };
    static constexpr int32_t HOUR_OF_DAY0_FIELD { int32_t(5) };
    static constexpr int32_t HOUR_OF_DAY1_FIELD { int32_t(4) };
    static constexpr int32_t LONG { int32_t(1) };
    static constexpr int32_t MEDIUM { int32_t(2) };
    static constexpr int32_t MILLISECOND_FIELD { int32_t(8) };
    static constexpr int32_t MINUTE_FIELD { int32_t(6) };
    static constexpr int32_t MONTH_FIELD { int32_t(2) };
    static constexpr int32_t SECOND_FIELD { int32_t(7) };
    static constexpr int32_t SHORT { int32_t(3) };
    static constexpr int32_t TIMEZONE_FIELD { int32_t(17) };
    static constexpr int32_t WEEK_OF_MONTH_FIELD { int32_t(13) };
    static constexpr int32_t WEEK_OF_YEAR_FIELD { int32_t(12) };
    static constexpr int32_t YEAR_FIELD { int32_t(1) };

public: /* protected */
    ::java::util::Calendar* calendar {  };
    NumberFormat* numberFormat {  };

private:
    static constexpr int64_t serialVersionUID { int64_t(7218322306649953788LL) };

protected:
    void ctor();

public:
    ::java::lang::Object* clone() override;
    bool equals(::java::lang::Object* obj) override;
    ::java::lang::String* format(::java::util::Date* date);
    ::java::lang::StringBuffer* format(::java::lang::Object* obj, ::java::lang::StringBuffer* toAppendTo, FieldPosition* fieldPosition) override;
    virtual ::java::lang::StringBuffer* format(::java::util::Date* date, ::java::lang::StringBuffer* toAppendTo, FieldPosition* fieldPosition) = 0;
    /*static DateFormat* get(int32_t timeStyle, int32_t dateStyle, int32_t flags, ::java::util::Locale* loc); (private) */
    /*static DateFormat* get(::sun::util::locale::provider::LocaleProviderAdapter* adapter, int32_t timeStyle, int32_t dateStyle, ::java::util::Locale* loc); (private) */
    static ::java::util::LocaleArray* getAvailableLocales();
    virtual ::java::util::Calendar* getCalendar();
    static DateFormat* getDateInstance();
    static DateFormat* getDateInstance(int32_t style);
    static DateFormat* getDateInstance(int32_t style, ::java::util::Locale* aLocale);
    static DateFormat* getDateTimeInstance();
    static DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle);
    static DateFormat* getDateTimeInstance(int32_t dateStyle, int32_t timeStyle, ::java::util::Locale* aLocale);
    static DateFormat* getInstance();
    virtual NumberFormat* getNumberFormat();
    static DateFormat* getTimeInstance();
    static DateFormat* getTimeInstance(int32_t style);
    static DateFormat* getTimeInstance(int32_t style, ::java::util::Locale* aLocale);
    virtual ::java::util::TimeZone* getTimeZone();
    int32_t hashCode() override;
    virtual bool isLenient();
    virtual ::java::util::Date* parse(::java::lang::String* source);
    virtual ::java::util::Date* parse(::java::lang::String* source, ParsePosition* pos) = 0;
    ::java::lang::Object* parseObject(::java::lang::String* source, ParsePosition* pos) override;
    virtual void setCalendar(::java::util::Calendar* newCalendar);
    virtual void setLenient(bool lenient);
    virtual void setNumberFormat(NumberFormat* newNumberFormat);
    virtual void setTimeZone(::java::util::TimeZone* zone);

    // Generated

public: /* protected */
    DateFormat();
protected:
    DateFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    ::java::lang::String* format(::java::lang::Object* obj);
    virtual ::java::lang::Object* parseObject(::java::lang::String* source);

private:
    virtual ::java::lang::Class* getClass0();
};
