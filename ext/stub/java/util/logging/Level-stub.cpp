// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/logging/Level.hpp>

extern void unimplemented_(const char16_t* name);
java::util::logging::Level::Level(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Level::Level(::java::lang::String* name, int32_t value)
    : Level(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, value);
}

java::util::logging::Level::Level(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName)
    : Level(*static_cast< ::default_init_tag* >(0))
{
    ctor(name, value, resourceBundleName);
}

java::util::logging::Level*& java::util::logging::Level::ALL()
{
    clinit();
    return ALL_;
}
java::util::logging::Level* java::util::logging::Level::ALL_;
java::util::logging::Level*& java::util::logging::Level::CONFIG()
{
    clinit();
    return CONFIG_;
}
java::util::logging::Level* java::util::logging::Level::CONFIG_;
java::util::logging::Level*& java::util::logging::Level::FINE()
{
    clinit();
    return FINE_;
}
java::util::logging::Level* java::util::logging::Level::FINE_;
java::util::logging::Level*& java::util::logging::Level::FINER()
{
    clinit();
    return FINER_;
}
java::util::logging::Level* java::util::logging::Level::FINER_;
java::util::logging::Level*& java::util::logging::Level::FINEST()
{
    clinit();
    return FINEST_;
}
java::util::logging::Level* java::util::logging::Level::FINEST_;
java::util::logging::Level*& java::util::logging::Level::INFO()
{
    clinit();
    return INFO_;
}
java::util::logging::Level* java::util::logging::Level::INFO_;
java::util::logging::Level*& java::util::logging::Level::OFF()
{
    clinit();
    return OFF_;
}
java::util::logging::Level* java::util::logging::Level::OFF_;
java::util::logging::Level*& java::util::logging::Level::SEVERE()
{
    clinit();
    return SEVERE_;
}
java::util::logging::Level* java::util::logging::Level::SEVERE_;
java::util::logging::Level*& java::util::logging::Level::WARNING()
{
    clinit();
    return WARNING_;
}
java::util::logging::Level* java::util::logging::Level::WARNING_;
java::lang::String*& java::util::logging::Level::defaultBundle()
{
    clinit();
    return defaultBundle_;
}
java::lang::String* java::util::logging::Level::defaultBundle_;
constexpr int64_t java::util::logging::Level::serialVersionUID;

void ::java::util::logging::Level::ctor(::java::lang::String* name, int32_t value)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::logging::Level::ctor(::java::lang::String* name, int32_t value)");
}

void ::java::util::logging::Level::ctor(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::logging::Level::ctor(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName)");
}

/* private: void ::java::util::logging::Level::ctor(::java::lang::String* name, int32_t value, ::java::lang::String* resourceBundleName, bool visible) */
/* private: java::lang::String* java::util::logging::Level::computeLocalizedLevelName(::java::util::Locale* newLocale) */
bool java::util::logging::Level::equals(::java::lang::Object* ox)
{ /* stub */
    unimplemented_(u"bool java::util::logging::Level::equals(::java::lang::Object* ox)");
    return 0;
}

java::util::logging::Level* java::util::logging::Level::findLevel(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Level* java::util::logging::Level::findLevel(::java::lang::String* name)");
    return 0;
}

java::lang::String* java::util::logging::Level::getCachedLocalizedLevelName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::logging::Level::getCachedLocalizedLevelName()");
    return 0;
}

java::lang::String* java::util::logging::Level::getLevelName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::logging::Level::getLevelName()");
    return 0;
}

java::lang::String* java::util::logging::Level::getLocalizedLevelName()
{ /* stub */
return localizedLevelName ; /* getter */
}

java::lang::String* java::util::logging::Level::getLocalizedName()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::logging::Level::getLocalizedName()");
    return 0;
}

java::lang::String* java::util::logging::Level::getName()
{ /* stub */
return name ; /* getter */
}

java::lang::String* java::util::logging::Level::getResourceBundleName()
{ /* stub */
return resourceBundleName ; /* getter */
}

int32_t java::util::logging::Level::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::util::logging::Level::hashCode()");
    return 0;
}

int32_t java::util::logging::Level::intValue()
{ /* stub */
    unimplemented_(u"int32_t java::util::logging::Level::intValue()");
    return 0;
}

java::util::logging::Level* java::util::logging::Level::parse(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Level* java::util::logging::Level::parse(::java::lang::String* name)");
    return 0;
}

/* private: java::lang::Object* java::util::logging::Level::readResolve() */
java::lang::String* java::util::logging::Level::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::logging::Level::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Level::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Level", 23);
    return c;
}

java::lang::Class* java::util::logging::Level::getClass0()
{
    return class_();
}

