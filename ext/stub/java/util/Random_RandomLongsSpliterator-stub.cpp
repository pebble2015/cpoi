// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Random_RandomLongsSpliterator.hpp>

#include <java/util/function/LongConsumer.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Random_RandomLongsSpliterator::Random_RandomLongsSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Random_RandomLongsSpliterator::Random_RandomLongsSpliterator(Random* rng, int64_t index, int64_t fence, int64_t origin, int64_t bound)
    : Random_RandomLongsSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(rng, index, fence, origin, bound);
}


void ::java::util::Random_RandomLongsSpliterator::ctor(Random* rng, int64_t index, int64_t fence, int64_t origin, int64_t bound)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Random_RandomLongsSpliterator::ctor(Random* rng, int64_t index, int64_t fence, int64_t origin, int64_t bound)");
}

int32_t java::util::Random_RandomLongsSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::Random_RandomLongsSpliterator::characteristics()");
    return 0;
}

int64_t java::util::Random_RandomLongsSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::Random_RandomLongsSpliterator::estimateSize()");
    return 0;
}

void java::util::Random_RandomLongsSpliterator::forEachRemaining(::java::util::function::LongConsumer* consumer)
{ /* stub */
    unimplemented_(u"void java::util::Random_RandomLongsSpliterator::forEachRemaining(::java::util::function::LongConsumer* consumer)");
}

void java::util::Random_RandomLongsSpliterator::forEachRemaining(::java::lang::Object* action)
{ 
    forEachRemaining(dynamic_cast< ::java::util::function::LongConsumer* >(action));
}

bool java::util::Random_RandomLongsSpliterator::tryAdvance(::java::util::function::LongConsumer* consumer)
{ /* stub */
    unimplemented_(u"bool java::util::Random_RandomLongsSpliterator::tryAdvance(::java::util::function::LongConsumer* consumer)");
    return 0;
}

bool java::util::Random_RandomLongsSpliterator::tryAdvance(::java::lang::Object* action)
{ 
    return tryAdvance(dynamic_cast< ::java::util::function::LongConsumer* >(action));
}

java::util::Random_RandomLongsSpliterator* java::util::Random_RandomLongsSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::Random_RandomLongsSpliterator* java::util::Random_RandomLongsSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Random_RandomLongsSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Random.RandomLongsSpliterator", 39);
    return c;
}

void java::util::Random_RandomLongsSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{
    forEachRemaining(action);
}

bool java::util::Random_RandomLongsSpliterator::tryAdvance(::java::util::function::Consumer* action)
{
    return tryAdvance(action);
}

java::lang::Class* java::util::Random_RandomLongsSpliterator::getClass0()
{
    return class_();
}

