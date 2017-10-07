// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/charset/Charset_ExtendedProviderHolder.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::charset::Charset_ExtendedProviderHolder::Charset_ExtendedProviderHolder(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::charset::spi::CharsetProvider*& java::nio::charset::Charset_ExtendedProviderHolder::extendedProvider_()
{
    clinit();
    return extendedProvider__;
}
java::nio::charset::spi::CharsetProvider* java::nio::charset::Charset_ExtendedProviderHolder::extendedProvider__;

/* private: void ::java::nio::charset::Charset_ExtendedProviderHolder::ctor() */
/* private: java::nio::charset::spi::CharsetProvider* java::nio::charset::Charset_ExtendedProviderHolder::extendedProvider() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::charset::Charset_ExtendedProviderHolder::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.charset.Charset.ExtendedProviderHolder", 47);
    return c;
}

java::lang::Class* java::nio::charset::Charset_ExtendedProviderHolder::getClass0()
{
    return class_();
}

