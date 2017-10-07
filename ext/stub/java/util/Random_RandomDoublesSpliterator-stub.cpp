// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Random_RandomDoublesSpliterator.hpp>

#include <java/util/function/DoubleConsumer.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Random_RandomDoublesSpliterator::Random_RandomDoublesSpliterator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Random_RandomDoublesSpliterator::Random_RandomDoublesSpliterator(Random* rng, int64_t index, int64_t fence, double origin, double bound)
    : Random_RandomDoublesSpliterator(*static_cast< ::default_init_tag* >(0))
{
    ctor(rng, index, fence, origin, bound);
}


void ::java::util::Random_RandomDoublesSpliterator::ctor(Random* rng, int64_t index, int64_t fence, double origin, double bound)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Random_RandomDoublesSpliterator::ctor(Random* rng, int64_t index, int64_t fence, double origin, double bound)");
}

int32_t java::util::Random_RandomDoublesSpliterator::characteristics()
{ /* stub */
    unimplemented_(u"int32_t java::util::Random_RandomDoublesSpliterator::characteristics()");
    return 0;
}

int64_t java::util::Random_RandomDoublesSpliterator::estimateSize()
{ /* stub */
    unimplemented_(u"int64_t java::util::Random_RandomDoublesSpliterator::estimateSize()");
    return 0;
}

void java::util::Random_RandomDoublesSpliterator::forEachRemaining(::java::util::function::DoubleConsumer* consumer)
{ /* stub */
    unimplemented_(u"void java::util::Random_RandomDoublesSpliterator::forEachRemaining(::java::util::function::DoubleConsumer* consumer)");
}

void java::util::Random_RandomDoublesSpliterator::forEachRemaining(::java::lang::Object* action)
{ 
    forEachRemaining(dynamic_cast< ::java::util::function::DoubleConsumer* >(action));
}

bool java::util::Random_RandomDoublesSpliterator::tryAdvance(::java::util::function::DoubleConsumer* consumer)
{ /* stub */
    unimplemented_(u"bool java::util::Random_RandomDoublesSpliterator::tryAdvance(::java::util::function::DoubleConsumer* consumer)");
    return 0;
}

bool java::util::Random_RandomDoublesSpliterator::tryAdvance(::java::lang::Object* action)
{ 
    return tryAdvance(dynamic_cast< ::java::util::function::DoubleConsumer* >(action));
}

java::util::Random_RandomDoublesSpliterator* java::util::Random_RandomDoublesSpliterator::trySplit()
{ /* stub */
    unimplemented_(u"java::util::Random_RandomDoublesSpliterator* java::util::Random_RandomDoublesSpliterator::trySplit()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Random_RandomDoublesSpliterator::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Random.RandomDoublesSpliterator", 41);
    return c;
}

void java::util::Random_RandomDoublesSpliterator::forEachRemaining(::java::util::function::Consumer* action)
{
    forEachRemaining(action);
}

bool java::util::Random_RandomDoublesSpliterator::tryAdvance(::java::util::function::Consumer* action)
{
    return tryAdvance(action);
}

java::lang::Class* java::util::Random_RandomDoublesSpliterator::getClass0()
{
    return class_();
}

