// Generated from /POI/java/org/apache/poi/ss/format/CellDateFormatter.java
#include <org/apache/poi/ss/format/CellDateFormatter.hpp>

#include <java/lang/Appendable.hpp>
#include <java/lang/Character.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Double.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/CharacterIterator.hpp>
#include <java/text/DateFormat_Field.hpp>
#include <java/text/DateFormat.hpp>
#include <java/text/SimpleDateFormat.hpp>
#include <java/util/Calendar.hpp>
#include <java/util/Date.hpp>
#include <java/util/Formatter.hpp>
#include <java/util/Locale.hpp>
#include <org/apache/poi/ss/format/CellDateFormatter_DatePartHandler.hpp>
#include <org/apache/poi/ss/format/CellFormatPart.hpp>
#include <org/apache/poi/ss/format/CellFormatType.hpp>
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
extern void lock(::java::lang::Object *);
extern void unlock(::java::lang::Object *);

namespace
{
    struct synchronized
    {
        synchronized(::java::lang::Object *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        ::java::lang::Object *o;
    };
}
org::apache::poi::ss::format::CellDateFormatter::CellDateFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellDateFormatter::CellDateFormatter(::java::lang::String* format) 
    : CellDateFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

org::apache::poi::ss::format::CellDateFormatter::CellDateFormatter(::java::util::Locale* locale, ::java::lang::String* format) 
    : CellDateFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,format);
}

void org::apache::poi::ss::format::CellDateFormatter::init()
{
    EXCEL_EPOCH_CAL = ::org::apache::poi::util::LocaleUtil::getLocaleCalendar(1904, 0, 1);
}

org::apache::poi::ss::format::CellDateFormatter*& org::apache::poi::ss::format::CellDateFormatter::SIMPLE_DATE()
{
    clinit();
    return SIMPLE_DATE_;
}
org::apache::poi::ss::format::CellDateFormatter* org::apache::poi::ss::format::CellDateFormatter::SIMPLE_DATE_;

void org::apache::poi::ss::format::CellDateFormatter::ctor(::java::lang::String* format)
{
    ctor(::org::apache::poi::util::LocaleUtil::getUserLocale(), format);
}

void org::apache::poi::ss::format::CellDateFormatter::ctor(::java::util::Locale* locale, ::java::lang::String* format)
{
    super::ctor(format);
    init();
    auto partHandler = new CellDateFormatter_DatePartHandler(this);
    auto descBuf = CellFormatPart::parseFormat(format, CellFormatType::DATE, partHandler);
    npc(partHandler)->finish(descBuf);
    auto ptrn = npc(npc(descBuf)->toString())->replaceAll(u"((y)(?!y))(?<!yy)"_j, u"yy"_j);
    dateFmt = new ::java::text::SimpleDateFormat(ptrn, locale);
    npc(dateFmt)->setTimeZone(::org::apache::poi::util::LocaleUtil::getUserTimeZone());
}

void org::apache::poi::ss::format::CellDateFormatter::formatValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    if(value == nullptr)
        value = ::java::lang::Double::valueOf(0.0);

    if(dynamic_cast< ::java::lang::Number* >(value) != nullptr) {
        auto num = java_cast< ::java::lang::Number* >(value);
        auto v = npc(num)->longValue();
        if(v == 0LL) {
            value = npc(EXCEL_EPOCH_CAL)->getTime();
        } else {
            auto c = java_cast< ::java::util::Calendar* >(npc(EXCEL_EPOCH_CAL)->clone());
            npc(c)->add(::java::util::Calendar::SECOND, static_cast< int32_t >((v / int32_t(1000))));
            npc(c)->add(::java::util::Calendar::MILLISECOND, static_cast< int32_t >((v % int32_t(1000))));
            value = npc(c)->getTime();
        }
    }
    auto it = npc(dateFmt)->formatToCharacterIterator(value);
    auto doneAm = false;
    auto doneMillis = false;
    npc(it)->first();
    for (auto ch = npc(it)->first(); ch != ::java::text::CharacterIterator::DONE; ch = npc(it)->next()) {
        if(npc(it)->getAttribute(::java::text::DateFormat_Field::MILLISECOND()) != nullptr) {
            if(!doneMillis) {
                auto dateObj = java_cast< ::java::util::Date* >(value);
                auto pos = npc(toAppendTo)->length();
                auto formatter = new ::java::util::Formatter(static_cast< ::java::lang::Appendable* >(toAppendTo), ::java::util::Locale::ROOT());
                {
                    auto finally0 = finally([&] {
                        npc(formatter)->close();
                    });
                    {
                        auto msecs = npc(dateObj)->getTime() % int32_t(1000);
                        npc(formatter)->format(locale, sFmt, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::Double::valueOf(msecs / 1000.0))}));
                    }
                }

                npc(toAppendTo)->delete_(pos, pos + int32_t(2));
                doneMillis = true;
            }
        } else if(npc(it)->getAttribute(::java::text::DateFormat_Field::AM_PM()) != nullptr) {
            if(!doneAm) {
                if(showAmPm) {
                    if(amPmUpper) {
                        npc(toAppendTo)->append(::java::lang::Character::toUpperCase(ch));
                        if(showM)
                            npc(toAppendTo)->append(u'M');

                    } else {
                        npc(toAppendTo)->append(::java::lang::Character::toLowerCase(ch));
                        if(showM)
                            npc(toAppendTo)->append(u'm');

                    }
                }
                doneAm = true;
            }
        } else {
            npc(toAppendTo)->append(ch);
        }
    }
}

void org::apache::poi::ss::format::CellDateFormatter::simpleValue(::java::lang::StringBuffer* toAppendTo, ::java::lang::Object* value)
{
    {
        synchronized synchronized_0(CellDateFormatter::class_());
        {
            if(SIMPLE_DATE_ == nullptr || !npc(npc(SIMPLE_DATE_)->EXCEL_EPOCH_CAL)->equals(static_cast< ::java::lang::Object* >(EXCEL_EPOCH_CAL))) {
                SIMPLE_DATE_ = new CellDateFormatter(u"mm/d/y"_j);
            }
        }
    }
    npc(SIMPLE_DATE_)->formatValue(toAppendTo, value);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellDateFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellDateFormatter", 42);
    return c;
}

void org::apache::poi::ss::format::CellDateFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        SIMPLE_DATE_ = nullptr;
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::format::CellDateFormatter::getClass0()
{
    return class_();
}

