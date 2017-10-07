// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Random_RandomIntsSpliterator.hpp>

#include <java/util/function/IntConsumer.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Random_RandomIntsSpliterator::Random_RandomIntsSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Random_RandomIntsSpliterator::Random_RandomIntsSpliterator(Random* rng, int64_t index, int64_t fence, int32_t origin, int32_t bound)
    : Random_RandomIntsSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(rng, index, fence, origin, bound);
}


void ::java::util::Random_RandomIntsSpliterator::ctor(Random* rng, int64_t index, int64_t fence, int32_t origin, int32_t bound)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Random_RandomIntsSpliterator::ctor(Random* rng, int64_t index, int64_t fence, int32_t origin, int32_t bound)");
}

int32_t java::util::Random_RandomIntsSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::Random_RandomIntsSpliterator::characteristics()");
    return 0;
}

int64_t java::util::Random_RandomIntsSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::Random_RandomIntsSpliterator::estimateSize()");
    return 0;
}

void java::util::Random_RandomIntsSpliterator::forEachRemaining(::java::util::function::IntConsumer* consumer)
{ /* stub */
    unimplemented_(u"void java::util::Random_RandomIntsSpliterator::forEachRemaining(::java::util::function::IntConsumer* consumer)");
}

void java::util::Random_RandomIntsSpliterator::forEachRemaining(::java::lang::Object* action)
{ 
    forEachRemaining(dynamic_cast< ::java::util::function::IntConsumer* >(action));
}

bool java::util::Random_RandomIntsSpliterator::tryAdvance(::java::util::function::IntConsumer* consumer)
{ /* stub */
    unimplemented_(u"bool java::util::Random_RandomIntsSpliterator::tryAdvance(::java::util::function::IntConsumer* consumer)");
    return 0;
}

bool java::util::Random_RandomIntsSpliterator::tryAdvance(::java::lang::Object* action)
{ 
    return tryAdvance(dynamic_cast< ::java::util::function::IntConsumer* >(action));
}

java::util::Random_RandomIntsSpliterator* java::util::Random_RandomIntsSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::Random_RandomIntsSpliterator* java::util::Random_RandomIntsSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Random_RandomIntsSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Random.RandomIntsSpliterator", 38);
    return c;
}

void java::util::Random_RandomIntsSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{
    forEachRemaining(action);
}

bool java::util::Random_RandomIntsSpliterator::tryAdvance(::java::util::function::Consumer* action)
{
    return tryAdvance(action);
}

java::lang::Class* java::util::Random_RandomIntsSpliterator::getClass0()
{
    return class_();
}

