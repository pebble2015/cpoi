// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/HashMap_EntrySpliterator.hpp>

extern void unimplemented_(const char16_t* name);
java::util::HashMap_EntrySpliterator::HashMap_EntrySpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::HashMap_EntrySpliterator::HashMap_EntrySpliterator(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
    : HashMap_EntrySpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(m, origin, fence, est, expectedModCount);
}


void ::java::util::HashMap_EntrySpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::HashMap_EntrySpliterator::ctor(HashMap* m, int32_t origin, int32_t fence, int32_t est, int32_t expectedModCount)");
}

int32_t java::util::HashMap_EntrySpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::HashMap_EntrySpliterator::characteristics()");
    return 0;
}

void java::util::HashMap_EntrySpliterator::forEachRemaining(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"void java::util::HashMap_EntrySpliterator::forEachRemaining(::java::util::function::Consumer* action)");
}

bool java::util::HashMap_EntrySpliterator::tryAdvance(::java::util::function::Consumer* action)
{ /* stub */
    unimplemented_(u"bool java::util::HashMap_EntrySpliterator::tryAdvance(::java::util::function::Consumer* action)");
    return 0;
}

java::util::HashMap_EntrySpliterator* java::util::HashMap_EntrySpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::HashMap_EntrySpliterator* java::util::HashMap_EntrySpliterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::HashMap_EntrySpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.HashMap.EntrySpliterator", 34);
    return c;
}

int64_t java::util::HashMap_EntrySpliterator::estimateSize()
{
    return HashMap_HashMapSpliterator::estimateSize();
}

java::lang::Class* java::util::HashMap_EntrySpliterator::getClass0()
{
    return class_();
}

