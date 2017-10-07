// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/logging/Level_KnownLevel.hpp>

extern void unimplemented_(const char16_t* name);
java::util::logging::Level_KnownLevel::Level_KnownLevel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::logging::Level_KnownLevel::Level_KnownLevel(Level* l)
    : Level_KnownLevel(*static_cast< ::default_init_tag* >(0))
{
    ctor(l);
}

java::util::Map*& java::util::logging::Level_KnownLevel::intToLevels()
{
    clinit();
    return intToLevels_;
}
java::util::Map* java::util::logging::Level_KnownLevel::intToLevels_;
java::util::Map*& java::util::logging::Level_KnownLevel::nameToLevels()
{
    clinit();
    return nameToLevels_;
}
java::util::Map* java::util::logging::Level_KnownLevel::nameToLevels_;

void ::java::util::logging::Level_KnownLevel::ctor(Level* l)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::logging::Level_KnownLevel::ctor(Level* l)");
}

void java::util::logging::Level_KnownLevel::add(Level* l)
{ /* stub */
    clinit();
    unimplemented_(u"void java::util::logging::Level_KnownLevel::add(Level* l)");
}

java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::findByLocalizedLevelName(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::findByLocalizedLevelName(::java::lang::String* name)");
    return 0;
}

java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::findByName(::java::lang::String* name)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::findByName(::java::lang::String* name)");
    return 0;
}

java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::findByValue(int32_t value)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::findByValue(int32_t value)");
    return 0;
}

java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::matches(Level* l)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Level_KnownLevel* java::util::logging::Level_KnownLevel::matches(Level* l)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Level_KnownLevel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Level.KnownLevel", 34);
    return c;
}

java::lang::Class* java::util::logging::Level_KnownLevel::getClass0()
{
    return class_();
}

