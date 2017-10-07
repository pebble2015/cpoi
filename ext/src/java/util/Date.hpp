// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/time/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <sun/util/calendar/fwd-POI.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::String, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

struct default_init_tag;

class java::util::Date
    : public virtual ::java::lang::Object
    , public virtual ::java::io::Serializable
    , public virtual ::java::lang::Cloneable
    , public virtual ::java::lang::Comparable
{

public:
    typedef ::java::lang::Object super;

private:
    ::sun::util::calendar::BaseCalendar_Date* cdate {  };
    static int32_t defaultCenturyStart_;
    int64_t fastTime {  };
    static ::sun::util::calendar::BaseCalendar* gcal_;
    static ::sun::util::calendar::BaseCalendar* jcal_;
    static constexpr int64_t serialVersionUID { int64_t(7523967970034938905LL) };
    static ::int32_tArray* ttb_;
    static ::java::lang::StringArray* wtb_;

protected:
    void ctor();
    void ctor(int64_t date);
    void ctor(::java::lang::String* s);
    void ctor(int32_t year, int32_t month, int32_t date);
    void ctor(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min);
    void ctor(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec);

public:
    static int64_t UTC(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec);
    virtual bool after(Date* when);
    virtual bool before(Date* when);
    ::java::lang::Object* clone() override;
    virtual int32_t compareTo(Date* anotherDate);
    /*static ::java::lang::StringBuilder* convertToAbbr(::java::lang::StringBuilder* sb, ::java::lang::String* name); (private) */
    bool equals(::java::lang::Object* obj) override;
    static Date* from(::java::time::Instant* instant);
    /*::sun::util::calendar::BaseCalendar_Date* getCalendarDate(); (private) */
    /*static ::sun::util::calendar::BaseCalendar* getCalendarSystem(int32_t year); (private) */
    /*static ::sun::util::calendar::BaseCalendar* getCalendarSystem(int64_t utc); (private) */
    /*static ::sun::util::calendar::BaseCalendar* getCalendarSystem(::sun::util::calendar::BaseCalendar_Date* cdate); (private) */
    virtual int32_t getDate();
    virtual int32_t getDay();
    virtual int32_t getHours();
    /*static ::sun::util::calendar::BaseCalendar* getJulianCalendar(); (private) */

public: /* package */
    static int64_t getMillisOf(Date* date);

public:
    virtual int32_t getMinutes();
    virtual int32_t getMonth();
    virtual int32_t getSeconds();
    virtual int64_t getTime();
    /*int64_t getTimeImpl(); (private) */
    virtual int32_t getTimezoneOffset();
    virtual int32_t getYear();
    int32_t hashCode() override;
    /*::sun::util::calendar::BaseCalendar_Date* normalize(); (private) */
    /*::sun::util::calendar::BaseCalendar_Date* normalize(::sun::util::calendar::BaseCalendar_Date* date); (private) */
    static int64_t parse(::java::lang::String* s);
    /*void readObject(::java::io::ObjectInputStream* s); (private) */
    virtual void setDate(int32_t date);
    virtual void setHours(int32_t hours);
    virtual void setMinutes(int32_t minutes);
    virtual void setMonth(int32_t month);
    virtual void setSeconds(int32_t seconds);
    virtual void setTime(int64_t time);
    virtual void setYear(int32_t year);
    virtual ::java::lang::String* toGMTString();
    virtual ::java::time::Instant* toInstant();
    virtual ::java::lang::String* toLocaleString();
    ::java::lang::String* toString() override;
    /*void writeObject(::java::io::ObjectOutputStream* s); (private) */

    // Generated
    Date();
    Date(int64_t date);
    Date(::java::lang::String* s);
    Date(int32_t year, int32_t month, int32_t date);
    Date(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min);
    Date(int32_t year, int32_t month, int32_t date, int32_t hrs, int32_t min, int32_t sec);
protected:
    Date(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t compareTo(::java::lang::Object* o) override;

private:
    static int32_t& defaultCenturyStart();
    static ::sun::util::calendar::BaseCalendar*& gcal();
    static ::sun::util::calendar::BaseCalendar*& jcal();
    static ::int32_tArray*& ttb();
    static ::java::lang::StringArray*& wtb();
    virtual ::java::lang::Class* getClass0();
};
