// Generated from /POI/java/org/apache/poi/util/SystemOutLogger.java
#include <org/apache/poi/util/SystemOutLogger.hpp>

#include <java/io/PrintStream.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/SecurityException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/System.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

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

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::util::SystemOutLogger::SystemOutLogger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::util::SystemOutLogger::SystemOutLogger()
    : SystemOutLogger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void org::apache::poi::util::SystemOutLogger::initialize(::java::lang::String* cat)
{
    this->_cat = cat;
}

void org::apache::poi::util::SystemOutLogger::_log(int32_t level, ::java::lang::Object* obj1)
{
    _log(level, obj1, static_cast< ::java::lang::Throwable* >(nullptr));
}

void org::apache::poi::util::SystemOutLogger::_log(int32_t level, ::java::lang::Object* obj1, ::java::lang::Throwable* exception)
{
    if(check(level)) {
        npc(::java::lang::System::out())->println(::java::lang::StringBuilder().append(u"["_j)->append(_cat)
            ->append(u"]"_j)
            ->append((*LEVEL_STRINGS_SHORT())[::java::lang::Math::min(npc(LEVEL_STRINGS_SHORT())->length - int32_t(1), level)])
            ->append(u" "_j)
            ->append(static_cast< ::java::lang::Object* >(obj1))->toString());
        if(exception != nullptr) {
            npc(exception)->printStackTrace(::java::lang::System::out());
        }
    }
}

bool org::apache::poi::util::SystemOutLogger::check(int32_t level)
{
    int32_t currentLevel;
    try {
        currentLevel = ::java::lang::Integer::parseInt(::java::lang::System::getProperty(u"poi.log.level"_j, ::java::lang::StringBuilder().append(WARN)->append(u""_j)->toString()));
    } catch (::java::lang::SecurityException* e) {
        currentLevel = POILogger::DEBUG;
    }
    return level >= currentLevel;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::util::SystemOutLogger::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.SystemOutLogger", 35);
    return c;
}

java::lang::Class* org::apache::poi::util::SystemOutLogger::getClass0()
{
    return class_();
}

