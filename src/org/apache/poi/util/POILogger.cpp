// Generated from /POI/java/org/apache/poi/util/POILogger.java
#include <org/apache/poi/util/POILogger.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/lang/Throwable.hpp>
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

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::util::POILogger::POILogger(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::POILogger::POILogger() 
    : POILogger(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

constexpr int32_t poi::util::POILogger::DEBUG;

constexpr int32_t poi::util::POILogger::INFO;

constexpr int32_t poi::util::POILogger::WARN;

constexpr int32_t poi::util::POILogger::ERROR;

constexpr int32_t poi::util::POILogger::FATAL;

java::lang::StringArray*& poi::util::POILogger::LEVEL_STRINGS_SHORT()
{
    clinit();
    return LEVEL_STRINGS_SHORT_;
}
java::lang::StringArray* poi::util::POILogger::LEVEL_STRINGS_SHORT_;

java::lang::StringArray*& poi::util::POILogger::LEVEL_STRINGS()
{
    clinit();
    return LEVEL_STRINGS_;
}
java::lang::StringArray* poi::util::POILogger::LEVEL_STRINGS_;

void poi::util::POILogger::ctor()
{
    super::ctor();
}

void poi::util::POILogger::log(int32_t level, ::java::lang::ObjectArray*/*...*/ objs)
{
    if(!check(level))
        return;

    auto sb = new ::java::lang::StringBuilder(int32_t(32));
    ::java::lang::Throwable* lastEx = nullptr;
    for (auto i = int32_t(0); i < npc(objs)->length; i++) {
        if(i == npc(objs)->length - int32_t(1) && dynamic_cast< ::java::lang::Throwable* >((*objs)[i]) != nullptr) {
            lastEx = java_cast< ::java::lang::Throwable* >((*objs)[i]);
        } else {
            npc(sb)->append((*objs)[i]);
        }
    }
    auto msg = npc(sb)->toString();
    msg = npc(msg)->replaceAll(u"[\r\n]+"_j, u" "_j);
    if(lastEx == nullptr) {
        _log(level, msg);
    } else {
        _log(level, msg, lastEx);
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::POILogger::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.POILogger", 29);
    return c;
}

void poi::util::POILogger::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        LEVEL_STRINGS_SHORT_ = (new ::java::lang::StringArray({
            u"?"_j
            , u"D"_j
            , u"?"_j
            , u"I"_j
            , u"?"_j
            , u"W"_j
            , u"?"_j
            , u"E"_j
            , u"?"_j
            , u"F"_j
            , u"?"_j
        }));
        LEVEL_STRINGS_ = (new ::java::lang::StringArray({
            u"?0?"_j
            , u"DEBUG"_j
            , u"?2?"_j
            , u"INFO"_j
            , u"?4?"_j
            , u"WARN"_j
            , u"?6?"_j
            , u"ERROR"_j
            , u"?8?"_j
            , u"FATAL"_j
            , u"?10+?"_j
        }));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::POILogger::getClass0()
{
    return class_();
}

