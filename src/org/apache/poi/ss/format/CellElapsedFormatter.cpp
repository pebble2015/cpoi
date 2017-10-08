// Generated from /POI/java/org/apache/poi/ss/format/CellElapsedFormatter.java
#include <org/apache/poi/ss/format/CellElapsedFormatter.hpp>

#include <java/io/Serializable.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Long.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Formatter.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/Pattern.hpp>
#include <org/apache/poi/ss/format/CellElapsedFormatter_ElapsedPartHandler.hpp>
#include <org/apache/poi/ss/format/CellElapsedFormatter_TimeSpec.hpp>
#include <org/apache/poi/ss/format/CellFormatPart.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>
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
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< ::java::lang::Number, ObjectArray, ::java::io::SerializableArray > NumberArray;
typedef ::SubArray< ::java::lang::Long, NumberArray, ComparableArray > LongArray;
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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::ss::format::CellElapsedFormatter::CellElapsedFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::ss::format::CellElapsedFormatter::CellElapsedFormatter(::java::lang::String* pattern) 
    : CellElapsedFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern);
}

java::util::regex::Pattern*& poi::ss::format::CellElapsedFormatter::PERCENTS()
{
    clinit();
    return PERCENTS_;
}
java::util::regex::Pattern* poi::ss::format::CellElapsedFormatter::PERCENTS_;

constexpr double poi::ss::format::CellElapsedFormatter::HOUR__FACTOR;

constexpr double poi::ss::format::CellElapsedFormatter::MIN__FACTOR;

constexpr double poi::ss::format::CellElapsedFormatter::SEC__FACTOR;

void poi::ss::format::CellElapsedFormatter::ctor(::java::lang::String* pattern)
{
    super::ctor(pattern);
    specs = new ::java::util::ArrayList();
    auto desc = CellFormatPart::parseFormat(pattern, CellFormatType::ELAPSED, new CellElapsedFormatter_ElapsedPartHandler(this));
    auto it = npc(specs)->listIterator(npc(specs)->size());
    while (npc(it)->hasPrevious()) {
        auto spec = java_cast< CellElapsedFormatter_TimeSpec* >(npc(it)->previous());
        npc(desc)->replace(npc(spec)->pos, npc(spec)->pos + npc(spec)->len, ::java::lang::StringBuilder().append(u"%0"_j)->append(npc(spec)->len)
            ->append(u"d"_j)->toString());
        if(npc(spec)->type != npc(topmost)->type) {
            npc(spec)->modBy = modFor(npc(spec)->type, npc(spec)->len);
        }
    }
    printfFmt = npc(desc)->toString();
}

poi::ss::format::CellElapsedFormatter_TimeSpec* poi::ss::format::CellElapsedFormatter::assignSpec(char16_t type, int32_t pos, int32_t len)
{
    auto spec = new CellElapsedFormatter_TimeSpec(type, pos, len, factorFor(type, len));
    npc(specs)->add(static_cast< ::java::lang::Object* >(spec));
    return spec;
}

double poi::ss::format::CellElapsedFormatter::factorFor(char16_t type, int32_t len)
{
    clinit();
    switch (type) {
    case u'h':
        return HOUR__FACTOR;
    case u'm':
        return MIN__FACTOR;
    case u's':
        return SEC__FACTOR;
    case u'0':
        return SEC__FACTOR / ::java::lang::Math::pow(10, len);
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Uknown elapsed time spec: "_j)->append(type)->toString());
    }

}

double poi::ss::format::CellElapsedFormatter::modFor(char16_t type, int32_t len)
{
    clinit();
    switch (type) {
    case u'h':
        return 24;
    case u'm':
        return 60;
    case u's':
        return 60;
    case u'0':
        return ::java::lang::Math::pow(10, len);
    default:
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Uknown elapsed time spec: "_j)->append(type)->toString());
    }

}

void poi::ss::format::CellElapsedFormatter::formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    auto elapsed = npc((java_cast< ::java::lang::Number* >(value)))->doubleValue();
    if(elapsed < 0) {
        npc(toAppendTo)->append(u'-');
        elapsed = -elapsed;
    }
    ::java::lang::ObjectArray* parts = new ::java::lang::LongArray(npc(specs)->size());
    for (auto i = int32_t(0); i < npc(specs)->size(); i++) {
        parts->set(i, ::java::lang::Long::valueOf(npc(java_cast< CellElapsedFormatter_TimeSpec* >(npc(specs)->get(i)))->valueFor(elapsed)));
    }
    auto formatter = new ::java::util::Formatter(static_cast< ::java::lang::Appendable* >(toAppendTo), ::java::util::Locale::ROOT());
    {
        auto finally0 = finally([&] {
            npc(formatter)->close();
        });
        {
            npc(formatter)->format(printfFmt, parts);
        }
    }

}

void poi::ss::format::CellElapsedFormatter::simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    formatValue(toAppendTo, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::ss::format::CellElapsedFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellElapsedFormatter", 45);
    return c;
}

void poi::ss::format::CellElapsedFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        PERCENTS_ = ::java::util::regex::Pattern::compile(u"%"_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::ss::format::CellElapsedFormatter::getClass0()
{
    return class_();
}

