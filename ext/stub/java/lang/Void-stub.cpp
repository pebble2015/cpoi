// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/Void.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::Void::Void(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Class*& java::lang::Void::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Void::TYPE_;

/* private: void ::java::lang::Void::ctor() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Void::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Void", 14);
    return c;
}

java::lang::Class* java::lang::Void::getClass0()
{
    return class_();
}

