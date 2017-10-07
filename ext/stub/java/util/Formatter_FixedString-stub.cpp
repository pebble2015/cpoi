// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Formatter_FixedString.hpp>

#include <java/util/Formatter.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Formatter_FixedString::Formatter_FixedString(Formatter *Formatter_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , Formatter_this(Formatter_this)
{
    clinit();
}

java::util::Formatter_FixedString::Formatter_FixedString(Formatter *Formatter_this, ::java::lang::String* s)
    : Formatter_FixedString(Formatter_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}


void ::java::util::Formatter_FixedString::ctor(::java::lang::String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Formatter_FixedString::ctor(::java::lang::String* s)");
}

int32_t java::util::Formatter_FixedString::index()
{ /* stub */
    unimplemented_(u"int32_t java::util::Formatter_FixedString::index()");
    return 0;
}

void java::util::Formatter_FixedString::print(::java::lang::Object* arg, Locale* l)
{ /* stub */
    unimplemented_(u"void java::util::Formatter_FixedString::print(::java::lang::Object* arg, Locale* l)");
}

java::lang::String* java::util::Formatter_FixedString::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::util::Formatter_FixedString::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Formatter_FixedString::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Formatter.FixedString", 31);
    return c;
}

java::lang::Class* java::util::Formatter_FixedString::getClass0()
{
    return class_();
}

