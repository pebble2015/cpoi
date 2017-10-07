// Generated from /POI/java/org/apache/poi/ss/format/CellGeneralFormatter.java
#include <org/apache/poi/ss/format/CellGeneralFormatter.hpp>

#include <java/lang/Appendable.hpp>
#include <java/lang/Boolean.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/Formatter.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>
#include <ObjectArray.hpp>

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
org::apache::poi::ss::format::CellGeneralFormatter::CellGeneralFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellGeneralFormatter::CellGeneralFormatter() 
    : CellGeneralFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::ss::format::CellGeneralFormatter::CellGeneralFormatter(::java::util::Locale* locale) 
    : CellGeneralFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale);
}

void org::apache::poi::ss::format::CellGeneralFormatter::ctor()
{
    ctor(::org::apache::poi::util::LocaleUtil::getUserLocale());
}

void org::apache::poi::ss::format::CellGeneralFormatter::ctor(::java::util::Locale* locale)
{
    super::ctor(locale, u"General"_j);
}

void org::apache::poi::ss::format::CellGeneralFormatter::formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
        auto val = npc((java_cast< ::java::lang::Number* >(value)))->doubleValue();
        if(val == 0) {
            npc(toAppendTo)->append(u'0');
            return;
        }
        ::java::lang::String* fmt;
        auto exp = ::java::lang::Math::log10(::java::lang::Math::abs(val));
        auto stripZeros = true;
        if(exp > 10 || exp < -int32_t(9))
            fmt = u"%1.5E"_j;
        else if(static_cast< int64_t >(val) != val)
            fmt = u"%1.9f"_j;
        else {
            fmt = u"%1.0f"_j;
            stripZeros = false;
        }
        auto formatter = new ::java::util::Formatter(static_cast< ::java::lang::Appendable* >(toAppendTo), locale);
        {
            auto finally0 = finally([&] {
                npc(formatter)->close();
            });
            {
                npc(formatter)->format(locale, fmt, new ::java::lang::ObjectArray({value}));
            }
        }

        if(stripZeros) {
            int32_t removeFrom;
            if(npc(fmt)->endsWith(u"E"_j))
                removeFrom = npc(toAppendTo)->lastIndexOf(u"E"_j) - int32_t(1);
            else
                removeFrom = npc(toAppendTo)->length() - int32_t(1);
            while (npc(toAppendTo)->charAt(removeFrom) == u'0') {
                npc(toAppendTo)->deleteCharAt(removeFrom--);
            }
            if(npc(toAppendTo)->charAt(removeFrom) == u'.') {
                npc(toAppendTo)->deleteCharAt(removeFrom--);
            }
        }
    } else if(dynamic_cast< ::java::lang::Boolean* >(value) != nullptr) {
        npc(toAppendTo)->append(npc(npc(value)->toString())->toUpperCase(::java::util::Locale::ROOT()));
    } else {
        npc(toAppendTo)->append(value);
    }
}

void org::apache::poi::ss::format::CellGeneralFormatter::simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    formatValue(toAppendTo, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellGeneralFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellGeneralFormatter", 45);
    return c;
}

java::lang::Class* org::apache::poi::ss::format::CellGeneralFormatter::getClass0()
{
    return class_();
}

