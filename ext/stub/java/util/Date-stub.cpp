// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Date.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Date::Date(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Date::Date()
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Date::Date(int64_t date)
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor(date);
}

java::util::Date::Date(::java::lang::String* s)
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

java::util::Date::Date(int32_t year, int32_t month, int32_t date)
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor(year, month, date);
}

java::util::Date::Date(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min)
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor(year, month, date, hrs, min);
}

java::util::Date::Date(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec)
    : Date(*static_cast< ::default_init_tag* >(0))
{
    ctor(year, month, date, hrs, min, sec);
}

int32_t& java::util::Date::defaultCenturyStart()
{
    clinit();
    return defaultCenturyStart_;
}
int32_t java::util::Date::defaultCenturyStart_;
sun::util::calendar::BaseCalendar*& java::util::Date::gcal()
{
    clinit();
    return gcal_;
}
sun::util::calendar::BaseCalendar* java::util::Date::gcal_;
sun::util::calendar::BaseCalendar*& java::util::Date::jcal()
{
    clinit();
    return jcal_;
}
sun::util::calendar::BaseCalendar* java::util::Date::jcal_;
constexpr int64_t java::util::Date::serialVersionUID;
int32_tArray*& java::util::Date::ttb()
{
    clinit();
    return ttb_;
}
int32_tArray* java::util::Date::ttb_;
java::lang::StringArray*& java::util::Date::wtb()
{
    clinit();
    return wtb_;
}
java::lang::StringArray* java::util::Date::wtb_;

void ::java::util::Date::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Date::ctor()");
}

void ::java::util::Date::ctor(int64_t date)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Date::ctor(int64_t date)");
}

void ::java::util::Date::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Date::ctor(::java::lang::String* s)");
}

void ::java::util::Date::ctor(int32_t year, int32_t month, int32_t date)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Date::ctor(int32_t year, int32_t month, int32_t date)");
}

void ::java::util::Date::ctor(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Date::ctor(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min)");
}

void ::java::util::Date::ctor(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Date::ctor(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec)");
}

int64_t java::util::Date::UTC(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec)
{ /* stub */
    clinit();
    unimplemented_(u"int64_t java::util::Date::UTC(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec)");
    return 0;
}

bool java::util::Date::after(Date* when)
{ /* stub */
    unimplemented_(u"bool java::util::Date::after(Date* when)");
    return 0;
}

bool java::util::Date::before(Date* when)
{ /* stub */
    unimplemented_(u"bool java::util::Date::before(Date* when)");
    return 0;
}

java::lang::Object* java::util::Date::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::Date::clone()");
    return 0;
}

int32_t java::util::Date::compareTo(Date* anotherDate)
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::compareTo(Date* anotherDate)");
    return 0;
}

int32_t java::util::Date::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< Date* >(o));
}

/* private: java::lang::StringBuilder* java::util::Date::convertToAbbr(::java::lang::StringBuilder* sb, ::java::lang::String* name) */
bool java::util::Date::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::util::Date::equals(::java::lang::Object* obj)");
    return 0;
}

java::util::Date* java::util::Date::from(::java::time::Instant* instant)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::Date* java::util::Date::from(::java::time::Instant* instant)");
    return 0;
}

/* private: sun::util::calendar::BaseCalendar_Date* java::util::Date::getCalendarDate() */
/* private: sun::util::calendar::BaseCalendar* java::util::Date::getCalendarSystem(int32_t year) */
/* private: sun::util::calendar::BaseCalendar* java::util::Date::getCalendarSystem(int64_t utc) */
/* private: sun::util::calendar::BaseCalendar* java::util::Date::getCalendarSystem(::sun::util::calendar::BaseCalendar_Date* cdate) */
int32_t java::util::Date::getDate()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getDate()");
    return 0;
}

int32_t java::util::Date::getDay()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getDay()");
    return 0;
}

int32_t java::util::Date::getHours()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getHours()");
    return 0;
}

/* private: sun::util::calendar::BaseCalendar* java::util::Date::getJulianCalendar() */
int64_t java::util::Date::getMillisOf(Date* date)
{ /* stub */
    clinit();
    unimplemented_(u"int64_t java::util::Date::getMillisOf(Date* date)");
    return 0;
}

int32_t java::util::Date::getMinutes()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getMinutes()");
    return 0;
}

int32_t java::util::Date::getMonth()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getMonth()");
    return 0;
}

int32_t java::util::Date::getSeconds()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getSeconds()");
    return 0;
}

int64_t java::util::Date::getTime()
{ /* stub */
    unimplemented_(u"int64_t java::util::Date::getTime()");
    return 0;
}

/* private: int64_t java::util::Date::getTimeImpl() */
int32_t java::util::Date::getTimezoneOffset()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getTimezoneOffset()");
    return 0;
}

int32_t java::util::Date::getYear()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::getYear()");
    return 0;
}

int32_t java::util::Date::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::Date::hashCode()");
    return 0;
}

/* private: sun::util::calendar::BaseCalendar_Date* java::util::Date::normalize() */
/* private: sun::util::calendar::BaseCalendar_Date* java::util::Date::normalize(::sun::util::calendar::BaseCalendar_Date* date) */
int64_t java::util::Date::parse(::java::lang::String* s)
{ /* stub */
    clinit();
    unimplemented_(u"int64_t java::util::Date::parse(::java::lang::String* s)");
    return 0;
}

/* private: void java::util::Date::readObject(::java::io::ObjectInputStream* s) */
void java::util::Date::setDate(int32_t date)
{ /* stub */
    unimplemented_(u"void java::util::Date::setDate(int32_t date)");
}

void java::util::Date::setHours(int32_t hours)
{ /* stub */
    unimplemented_(u"void java::util::Date::setHours(int32_t hours)");
}

void java::util::Date::setMinutes(int32_t minutes)
{ /* stub */
    unimplemented_(u"void java::util::Date::setMinutes(int32_t minutes)");
}

void java::util::Date::setMonth(int32_t month)
{ /* stub */
    unimplemented_(u"void java::util::Date::setMonth(int32_t month)");
}

void java::util::Date::setSeconds(int32_t seconds)
{ /* stub */
    unimplemented_(u"void java::util::Date::setSeconds(int32_t seconds)");
}

void java::util::Date::setTime(int64_t time)
{ /* stub */
    unimplemented_(u"void java::util::Date::setTime(int64_t time)");
}

void java::util::Date::setYear(int32_t year)
{ /* stub */
    unimplemented_(u"void java::util::Date::setYear(int32_t year)");
}

java::lang::String* java::util::Date::toGMTString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Date::toGMTString()");
    return 0;
}

java::time::Instant* java::util::Date::toInstant()
{ /* stub */
    unimplemented_(u"java::time::Instant* java::util::Date::toInstant()");
    return 0;
}

java::lang::String* java::util::Date::toLocaleString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Date::toLocaleString()");
    return 0;
}

java::lang::String* java::util::Date::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Date::toString()");
    return 0;
}

/* private: void java::util::Date::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Date::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Date", 14);
    return c;
}

java::lang::Class* java::util::Date::getClass0()
{
    return class_();
}

