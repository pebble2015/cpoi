// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Calendar_CalendarAccessControlContext.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Calendar_CalendarAccessControlContext::Calendar_CalendarAccessControlContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::security::AccessControlContext*& java::util::Calendar_CalendarAccessControlContext::INSTANCE()
{
    clinit();
    return INSTANCE_;
}
java::security::AccessControlContext* java::util::Calendar_CalendarAccessControlContext::INSTANCE_;

/* private: void ::java::util::Calendar_CalendarAccessControlContext::ctor() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Calendar_CalendarAccessControlContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Calendar.CalendarAccessControlContext", 47);
    return c;
}

java::lang::Class* java::util::Calendar_CalendarAccessControlContext::getClass0()
{
    return class_();
}

