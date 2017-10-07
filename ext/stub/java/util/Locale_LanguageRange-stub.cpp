// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Locale_LanguageRange.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Locale_LanguageRange::Locale_LanguageRange(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Locale_LanguageRange::Locale_LanguageRange(::java::lang::String* range)
    : Locale_LanguageRange(*static_cast< ::default_init_tag* >(0))
{
    ctor(range);
}

java::util::Locale_LanguageRange::Locale_LanguageRange(::java::lang::String* range, double weight)
    : Locale_LanguageRange(*static_cast< ::default_init_tag* >(0))
{
    ctor(range, weight);
}

constexpr double java::util::Locale_LanguageRange::MAX_WEIGHT;
constexpr double java::util::Locale_LanguageRange::MIN_WEIGHT;

void ::java::util::Locale_LanguageRange::ctor(::java::lang::String* range)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Locale_LanguageRange::ctor(::java::lang::String* range)");
}

void ::java::util::Locale_LanguageRange::ctor(::java::lang::String* range, double weight)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Locale_LanguageRange::ctor(::java::lang::String* range, double weight)");
}

bool java::util::Locale_LanguageRange::equals(::java::lang::Object* obj)
{ /* stub */
    unimplemented_(u"bool java::util::Locale_LanguageRange::equals(::java::lang::Object* obj)");
    return 0;
}

java::lang::String* java::util::Locale_LanguageRange::getRange()
{ /* stub */
return range ; /* getter */
}

double java::util::Locale_LanguageRange::getWeight()
{ /* stub */
return weight ; /* getter */
}

int32_t java::util::Locale_LanguageRange::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::Locale_LanguageRange::hashCode()");
    return 0;
}

/* private: bool java::util::Locale_LanguageRange::isSubtagIllFormed(::java::lang::String* subtag, bool isFirstSubtag) */
java::util::List* java::util::Locale_LanguageRange::mapEquivalents(List* priorityList, Map* map)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::List* java::util::Locale_LanguageRange::mapEquivalents(List* priorityList, Map* map)");
    return 0;
}

java::util::List* java::util::Locale_LanguageRange::parse(::java::lang::String* ranges)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::List* java::util::Locale_LanguageRange::parse(::java::lang::String* ranges)");
    return 0;
}

java::util::List* java::util::Locale_LanguageRange::parse(::java::lang::String* ranges, Map* map)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::List* java::util::Locale_LanguageRange::parse(::java::lang::String* ranges, Map* map)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Locale_LanguageRange::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Locale.LanguageRange", 30);
    return c;
}

java::lang::Class* java::util::Locale_LanguageRange::getClass0()
{
    return class_();
}

