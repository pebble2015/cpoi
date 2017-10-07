// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/EnumSet_SerializationProxy.hpp>

extern void unimplemented_(const char16_t* name);
java::util::EnumSet_SerializationProxy::EnumSet_SerializationProxy(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::EnumSet_SerializationProxy::EnumSet_SerializationProxy(EnumSet* set)
    : EnumSet_SerializationProxy(*static_cast< ::default_init_tag* >(0))
{
    ctor(set);
}

constexpr int64_t java::util::EnumSet_SerializationProxy::serialVersionUID;

void ::java::util::EnumSet_SerializationProxy::ctor(EnumSet* set)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::EnumSet_SerializationProxy::ctor(EnumSet* set)");
}

/* private: java::lang::Object* java::util::EnumSet_SerializationProxy::readResolve() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::EnumSet_SerializationProxy::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.EnumSet.SerializationProxy", 36);
    return c;
}

java::lang::Class* java::util::EnumSet_SerializationProxy::getClass0()
{
    return class_();
}

