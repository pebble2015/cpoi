// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/util/Random.hpp>

extern void unimplemented_(const char16_t* name);
java::util::Random::Random(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::util::Random::Random()
    : Random(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::util::Random::Random(int64_t seed)
    : Random(*static_cast< ::default_init_tag* >(0))
{
    ctor(seed);
}

java::lang::String*& java::util::Random::BadBound()
{
    clinit();
    return BadBound_;
}
java::lang::String* java::util::Random::BadBound_;
java::lang::String*& java::util::Random::BadRange()
{
    clinit();
    return BadRange_;
}
java::lang::String* java::util::Random::BadRange_;
java::lang::String*& java::util::Random::BadSize()
{
    clinit();
    return BadSize_;
}
java::lang::String* java::util::Random::BadSize_;
constexpr double java::util::Random::DOUBLE_UNIT;
constexpr int64_t java::util::Random::addend;
constexpr int64_t java::util::Random::mask;
constexpr int64_t java::util::Random::multiplier;
int64_t& java::util::Random::seedOffset()
{
    clinit();
    return seedOffset_;
}
int64_t java::util::Random::seedOffset_;
java::util::concurrent::atomic::AtomicLong*& java::util::Random::seedUniquifier_()
{
    clinit();
    return seedUniquifier__;
}
java::util::concurrent::atomic::AtomicLong* java::util::Random::seedUniquifier__;
java::io::ObjectStreamFieldArray*& java::util::Random::serialPersistentFields()
{
    clinit();
    return serialPersistentFields_;
}
java::io::ObjectStreamFieldArray* java::util::Random::serialPersistentFields_;
constexpr int64_t java::util::Random::serialVersionUID;
sun::misc::Unsafe*& java::util::Random::unsafe()
{
    clinit();
    return unsafe_;
}
sun::misc::Unsafe* java::util::Random::unsafe_;

void ::java::util::Random::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Random::ctor()");
}

void ::java::util::Random::ctor(int64_t seed)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::util::Random::ctor(int64_t seed)");
}

java::util::stream::DoubleStream* java::util::Random::doubles()
{ /* stub */
    unimplemented_(u"java::util::stream::DoubleStream* java::util::Random::doubles()");
    return 0;
}

java::util::stream::DoubleStream* java::util::Random::doubles(int64_t streamSize)
{ /* stub */
    unimplemented_(u"java::util::stream::DoubleStream* java::util::Random::doubles(int64_t streamSize)");
    return 0;
}

java::util::stream::DoubleStream* java::util::Random::doubles(double randomNumberOrigin, double randomNumberBound)
{ /* stub */
    unimplemented_(u"java::util::stream::DoubleStream* java::util::Random::doubles(double randomNumberOrigin, double randomNumberBound)");
    return 0;
}

java::util::stream::DoubleStream* java::util::Random::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound)
{ /* stub */
    unimplemented_(u"java::util::stream::DoubleStream* java::util::Random::doubles(int64_t streamSize, double randomNumberOrigin, double randomNumberBound)");
    return 0;
}

/* private: int64_t java::util::Random::initialScramble(int64_t seed) */
double java::util::Random::internalNextDouble(double origin, double bound)
{ /* stub */
    unimplemented_(u"double java::util::Random::internalNextDouble(double origin, double bound)");
    return 0;
}

int32_t java::util::Random::internalNextInt(int32_t origin, int32_t bound)
{ /* stub */
    unimplemented_(u"int32_t java::util::Random::internalNextInt(int32_t origin, int32_t bound)");
    return 0;
}

int64_t java::util::Random::internalNextLong(int64_t origin, int64_t bound)
{ /* stub */
    unimplemented_(u"int64_t java::util::Random::internalNextLong(int64_t origin, int64_t bound)");
    return 0;
}

java::util::stream::IntStream* java::util::Random::ints()
{ /* stub */
    unimplemented_(u"java::util::stream::IntStream* java::util::Random::ints()");
    return 0;
}

java::util::stream::IntStream* java::util::Random::ints(int64_t streamSize)
{ /* stub */
    unimplemented_(u"java::util::stream::IntStream* java::util::Random::ints(int64_t streamSize)");
    return 0;
}

java::util::stream::IntStream* java::util::Random::ints(int32_t randomNumberOrigin, int32_t randomNumberBound)
{ /* stub */
    unimplemented_(u"java::util::stream::IntStream* java::util::Random::ints(int32_t randomNumberOrigin, int32_t randomNumberBound)");
    return 0;
}

java::util::stream::IntStream* java::util::Random::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound)
{ /* stub */
    unimplemented_(u"java::util::stream::IntStream* java::util::Random::ints(int64_t streamSize, int32_t randomNumberOrigin, int32_t randomNumberBound)");
    return 0;
}

java::util::stream::LongStream* java::util::Random::longs()
{ /* stub */
    unimplemented_(u"java::util::stream::LongStream* java::util::Random::longs()");
    return 0;
}

java::util::stream::LongStream* java::util::Random::longs(int64_t streamSize)
{ /* stub */
    unimplemented_(u"java::util::stream::LongStream* java::util::Random::longs(int64_t streamSize)");
    return 0;
}

java::util::stream::LongStream* java::util::Random::longs(int64_t randomNumberOrigin, int64_t randomNumberBound)
{ /* stub */
    unimplemented_(u"java::util::stream::LongStream* java::util::Random::longs(int64_t randomNumberOrigin, int64_t randomNumberBound)");
    return 0;
}

java::util::stream::LongStream* java::util::Random::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound)
{ /* stub */
    unimplemented_(u"java::util::stream::LongStream* java::util::Random::longs(int64_t streamSize, int64_t randomNumberOrigin, int64_t randomNumberBound)");
    return 0;
}

int32_t java::util::Random::next(int32_t bits)
{ /* stub */
    unimplemented_(u"int32_t java::util::Random::next(int32_t bits)");
    return 0;
}

bool java::util::Random::nextBoolean()
{ /* stub */
    unimplemented_(u"bool java::util::Random::nextBoolean()");
    return 0;
}

void java::util::Random::nextBytes(::int8_tArray* bytes)
{ /* stub */
    unimplemented_(u"void java::util::Random::nextBytes(::int8_tArray* bytes)");
}

double java::util::Random::nextDouble()
{ /* stub */
    unimplemented_(u"double java::util::Random::nextDouble()");
    return 0;
}

float java::util::Random::nextFloat()
{ /* stub */
    unimplemented_(u"float java::util::Random::nextFloat()");
    return 0;
}

double java::util::Random::nextGaussian()
{ /* stub */
    unimplemented_(u"double java::util::Random::nextGaussian()");
    return 0;
}

int32_t java::util::Random::nextInt()
{ /* stub */
    unimplemented_(u"int32_t java::util::Random::nextInt()");
    return 0;
}

int32_t java::util::Random::nextInt(int32_t bound)
{ /* stub */
    unimplemented_(u"int32_t java::util::Random::nextInt(int32_t bound)");
    return 0;
}

int64_t java::util::Random::nextLong()
{ /* stub */
    unimplemented_(u"int64_t java::util::Random::nextLong()");
    return 0;
}

/* private: void java::util::Random::readObject(::java::io::ObjectInputStream* s) */
/* private: void java::util::Random::resetSeed(int64_t seedVal) */
/* private: int64_t java::util::Random::seedUniquifier() */
void java::util::Random::setSeed(int64_t seed)
{ /* stub */
}

/* private: void java::util::Random::writeObject(::java::io::ObjectOutputStream* s) */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::util::Random::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.util.Random", 16);
    return c;
}

java::lang::Class* java::util::Random::getClass0()
{
    return class_();
}

