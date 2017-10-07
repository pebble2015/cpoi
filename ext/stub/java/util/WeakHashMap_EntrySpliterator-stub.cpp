// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/WeakHashMap_EntrySpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::WeakHashMap_EntrySpliterator::WeakHashMap_EntrySpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::WeakHashMap_EntrySpliterator::WeakHashMap_EntrySpliterator(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : WeakHashMap_EntrySpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::WeakHashMap_EntrySpliterator::ctor(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::WeakHashMap_EntrySpliterator::ctor(WeakHashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::WeakHashMap_EntrySpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::WeakHashMap_EntrySpliterator::characteristics()");
    return 0;
}

void java::util::WeakHashMap_EntrySpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::WeakHashMap_EntrySpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::WeakHashMap_EntrySpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::WeakHashMap_EntrySpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::WeakHashMap_EntrySpliterator* java::util::WeakHashMap_EntrySpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::WeakHashMap_EntrySpliterator* java::util::WeakHashMap_EntrySpliterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::WeakHashMap_EntrySpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.WeakHashMap.EntrySpliterator", 38);
    return c;
}

int64_t java::util::WeakHashMap_EntrySpliterator::estimateSize()
{
    return WeakHashMap_WeakHashMapSpliterator::estimateSize();
}

java::lang::Class* java::util::WeakHashMap_EntrySpliterator::getClass0()
{
    return class_();
}

