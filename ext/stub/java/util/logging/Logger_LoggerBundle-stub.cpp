// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/logging/Logger_LoggerBundle.hpp>

extern void unimplemented_(const char16_t* name);
java::util::logging::Logger_LoggerBundle::Logger_LoggerBundle(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}


/* private: void ::java::util::logging::Logger_LoggerBundle::ctor(::java::lang::String* resourceBundleName, ::java::util::ResourceBundle* bundle) */
java::util::logging::Logger_LoggerBundle* java::util::logging::Logger_LoggerBundle::get(::java::lang::String* name, ::java::util::ResourceBundle* bundle)
{ /* stub */
    clinit();
    unimplemented_(u"java::util::logging::Logger_LoggerBundle* java::util::logging::Logger_LoggerBundle::get(::java::lang::String* name, ::java::util::ResourceBundle* bundle)");
    return 0;
}

bool java::util::logging::Logger_LoggerBundle::isSystemBundle()
{ /* stub */
    unimplemented_(u"bool java::util::logging::Logger_LoggerBundle::isSystemBundle()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Logger_LoggerBundle::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Logger.LoggerBundle", 37);
    return c;
}

java::lang::Class* java::util::logging::Logger_LoggerBundle::getClass0()
{
    return class_();
}

