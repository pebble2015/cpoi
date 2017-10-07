// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/logging/Logger_SystemLoggerHelper.hpp>

extern void unimplemented_(const char16_t* name);
java::util::logging::Logger_SystemLoggerHelper::Logger_SystemLoggerHelper(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

bool& java::util::logging::Logger_SystemLoggerHelper::disableCallerCheck()
{
    clinit();
    return disableCallerCheck_;
}
bool java::util::logging::Logger_SystemLoggerHelper::disableCallerCheck_;

/* private: void ::java::util::logging::Logger_SystemLoggerHelper::ctor() */
/* private: bool java::util::logging::Logger_SystemLoggerHelper::getBooleanProperty(::java::lang::String* key) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::logging::Logger_SystemLoggerHelper::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.logging.Logger.SystemLoggerHelper", 43);
    return c;
}

java::lang::Class* java::util::logging::Logger_SystemLoggerHelper::getClass0()
{
    return class_();
}

