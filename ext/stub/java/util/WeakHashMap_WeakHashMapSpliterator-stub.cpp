// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/WeakHashMap_WeakHashMapSpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::WeakHashMap_WeakHashMapSpliterator::WeakHashMap_WeakHashMapSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::WeakHashMap_WeakHashMapSpliterator::WeakHashMap_WeakHashMapSpliterator(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : WeakHashMap_WeakHashMapSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::WeakHashMap_WeakHashMapSpliterator::ctor(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::WeakHashMap_WeakHashMapSpliterator::ctor(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int64_t java::util::WeakHashMap_WeakHashMapSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::WeakHashMap_WeakHashMapSpliterator::estimateSize()");
    return 0;
}

int32_t java::util::WeakHashMap_WeakHashMapSpliterator::getFence()
{ /* stub */
return fence ; /* getter */
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::WeakHashMap_WeakHashMapSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.WeakHashMap.WeakHashMapSpliterator", 44);
    return c;
}

java::lang::Class* java::util::WeakHashMap_WeakHashMapSpliterator::getClass0()
{
    return class_();
}

