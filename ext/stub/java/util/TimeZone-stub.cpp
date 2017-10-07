// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/TimeZone.hpp>

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

extern void unimplemented_(const char16_t* name);
java::util::TimeZone::TimeZone(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::TimeZone::TimeZone()
    : TimeZone(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

bool& java::util::TimeZone::$assertionsDisabled()
{
    clinit();
    return $assertionsDisabled_;
}
bool java::util::TimeZone::$assertionsDisabled_;
java::lang::String*& java::util::TimeZone::GMT_ID()
{
    clinit();
    return GMT_ID_;
}
java::lang::String* java::util::TimeZone::GMT_ID_;
constexpr int32_t java::util::TimeZone::GMT_ID_LENGTH;
constexpr int32_t java::util::TimeZone::LONG;
java::util::TimeZone*& java::util::TimeZone::NO_TIMEZONE()
{
    clinit();
    return NO_TIMEZONE_;
}
java::util::TimeZone* java::util::TimeZone::NO_TIMEZONE_;
constexpr int32_t java::util::TimeZone::ONE_DAY;
constexpr int32_t java::util::TimeZone::ONE_HOUR;
constexpr int32_t java::util::TimeZone::ONE_MINUTE;
constexpr int32_t java::util::TimeZone::SHORT;
std::atomic< java::util::TimeZone* >& java::util::TimeZone::defaultTimeZone()
{
    clinit();
    return defaultTimeZone_;
}
std::atomic< java::util::TimeZone* > java::util::TimeZone::defaultTimeZone_;
std::atomic< java::util::TimeZone* >& java::util::TimeZone::mainAppContextDefault()
{
    clinit();
    return mainAppContextDefault_;
}
std::atomic< java::util::TimeZone* > java::util::TimeZone::mainAppContextDefault_;
constexpr int64_t java::util::TimeZone::serialVersionUID;

void ::java::util::TimeZone::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::TimeZone::ctor()");
}

java::lang::Object* java::util::TimeZone::clone()
{ /* stub */
    unimplemented_(u"java::lang::Object* java::util::TimeZone::clone()");
    return 0;
}

java::lang::StringArray* java::util::TimeZone::getAvailableIDs()
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* java::util::TimeZone::getAvailableIDs()");
    return 0;
}

java::lang::StringArray* java::util::TimeZone::getAvailableIDs(int32_t rawOffset)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::StringArray* java::util::TimeZone::getAvailableIDs(int32_t rawOffset)");
    return 0;
}

int32_t java::util::TimeZone::getDSTSavings()
{ /* stub */
    unimplemented_(u"int32_t java::util::TimeZone::getDSTSavings()");
    return 0;
}

java::util::TimeZone* java::util::TimeZone::getDefault()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::TimeZone* java::util::TimeZone::getDefault()");
    return 0;
}

java::util::TimeZone* java::util::TimeZone::getDefaultRef()
{ /* stub */
    clinit();
    unimplemented_(u"java::util::TimeZone* java::util::TimeZone::getDefaultRef()");
    return 0;
}

java::lang::String* java::util::TimeZone::getDisplayName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::TimeZone::getDisplayName()");
    return 0;
}

java::lang::String* java::util::TimeZone::getDisplayName(Locale* locale)
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::TimeZone::getDisplayName(Locale* locale)");
    return 0;
}

java::lang::String* java::util::TimeZone::getDisplayName(bool daylight, int32_t style)
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::TimeZone::getDisplayName(bool daylight, int32_t style)");
    return 0;
}

java::lang::String* java::util::TimeZone::getDisplayName(bool daylight, int32_t style, Locale* locale)
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::TimeZone::getDisplayName(bool daylight, int32_t style, Locale* locale)");
    return 0;
}

/* private: java::lang::StringArray* java::util::TimeZone::getDisplayNames(::java::lang::String* id, Locale* locale) */
java::lang::String* java::util::TimeZone::getID()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::TimeZone::getID()");
    return 0;
}

int32_t java::util::TimeZone::getOffset(int64_t date)
{ /* stub */
    unimplemented_(u"int32_t java::util::TimeZone::getOffset(int64_t date)");
    return 0;
}

int32_t java::util::TimeZone::getOffsets(int64_t date, ::int32_tArray* offsets)
{ /* stub */
    unimplemented_(u"int32_t java::util::TimeZone::getOffsets(int64_t date, ::int32_tArray* offsets)");
    return 0;
}

java::util::TimeZone* java::util::TimeZone::getTimeZone(::java::lang::String* ID)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::TimeZone* java::util::TimeZone::getTimeZone(::java::lang::String* ID)");
    return 0;
}

java::util::TimeZone* java::util::TimeZone::getTimeZone(::java::time::ZoneId* zoneId)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::TimeZone* java::util::TimeZone::getTimeZone(::java::time::ZoneId* zoneId)");
    return 0;
}

/* private: java::util::TimeZone* java::util::TimeZone::getTimeZone(::java::lang::String* ID, bool fallback) */
bool java::util::TimeZone::hasSameRules(TimeZone* other)
{ /* stub */
    unimplemented_(u"bool java::util::TimeZone::hasSameRules(TimeZone* other)");
    return 0;
}

bool java::util::TimeZone::observesDaylightTime()
{ /* stub */
    unimplemented_(u"bool java::util::TimeZone::observesDaylightTime()");
    return 0;
}

/* private: java::util::TimeZone* java::util::TimeZone::parseCustomTimeZone(::java::lang::String* id) */
void java::util::TimeZone::setDefault(TimeZone* zone)
{ /* stub */
    clinit();
    unimplemented_(u"void java::util::TimeZone::setDefault(TimeZone* zone)");
}

/* private: java::util::TimeZone* java::util::TimeZone::setDefaultZone() */
void java::util::TimeZone::setID(::java::lang::String* ID)
{ /* stub */
    unimplemented_(u"void java::util::TimeZone::setID(::java::lang::String* ID)");
}

java::time::ZoneId* java::util::TimeZone::toZoneId()
{ /* stub */
    unimplemented_(u"java::time::ZoneId* java::util::TimeZone::toZoneId()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::TimeZone::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.TimeZone", 18);
    return c;
}

java::lang::Class* java::util::TimeZone::getClass0()
{
    return class_();
}

