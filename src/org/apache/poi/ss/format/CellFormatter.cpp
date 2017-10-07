// Generated from /POI/java/org/apache/poi/ss/format/CellFormatter.java
#include <org/apache/poi/ss/format/CellFormatter.hpp>

#include <java/lang/Class.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Locale.hpp>
#include <java/util/logging/Logger.hpp>
#include <org/apache/poi/util/LocaleUtil.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::ss::format::CellFormatter::CellFormatter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::ss::format::CellFormatter::CellFormatter(::java::lang::String* format) 
    : CellFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(format);
}

org::apache::poi::ss::format::CellFormatter::CellFormatter(::java::util::Locale* locale, ::java::lang::String* format) 
    : CellFormatter(*static_cast< ::default_init_tag* >(0))
{
    ctor(locale,format);
}

void org::apache::poi::ss::format::CellFormatter::ctor(::java::lang::String* format)
{
    ctor(::org::apache::poi::util::LocaleUtil::getUserLocale(), format);
}

void org::apache::poi::ss::format::CellFormatter::ctor(::java::util::Locale* locale, ::java::lang::String* format)
{
    super::ctor();
    this->locale = locale;
    this->format_ = format;
}

java::util::logging::Logger*& org::apache::poi::ss::format::CellFormatter::logger()
{
    clinit();
    return logger_;
}
java::util::logging::Logger* org::apache::poi::ss::format::CellFormatter::logger_;

java::lang::String* org::apache::poi::ss::format::CellFormatter::format(::java::lang::Object* value)
{
    auto sb = new ::java::lang::StringBuffer();
    formatValue(sb, value);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ss::format::CellFormatter::simpleFormat(::java::lang::Object* value)
{
    auto sb = new ::java::lang::StringBuffer();
    simpleValue(sb, value);
    return npc(sb)->toString();
}

java::lang::String* org::apache::poi::ss::format::CellFormatter::quote(::java::lang::String* str)
{
    clinit();
    return ::java::lang::StringBuilder().append(u'"')->append(str)
        ->append(u'"')->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::ss::format::CellFormatter::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.ss.format.CellFormatter", 38);
    return c;
}

void org::apache::poi::ss::format::CellFormatter::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = ::java::util::logging::Logger::getLogger(npc(CellFormatter::class_())->getName());
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::ss::format::CellFormatter::getClass0()
{
    return class_();
}

