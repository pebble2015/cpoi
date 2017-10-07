// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/Short_ShortCache.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::Short_ShortCache::Short_ShortCache(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::ShortArray*& java::lang::Short_ShortCache::cache()
{
    clinit();
    return cache_;
}
java::lang::ShortArray* java::lang::Short_ShortCache::cache_;

/* private: void ::java::lang::Short_ShortCache::ctor() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Short_ShortCache::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Short.ShortCache", 26);
    return c;
}

java::lang::Class* java::lang::Short_ShortCache::getClass0()
{
    return class_();
}

