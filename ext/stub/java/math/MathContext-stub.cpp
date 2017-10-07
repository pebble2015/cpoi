// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/math/MathContext.hpp>

extern void unimplemented_(const char16_t* name);
java::math::MathContext::MathContext(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::math::MathContext::MathContext(int32_t setPrecision)
    : MathContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(setPrecision);
}

java::math::MathContext::MathContext(::java::lang::String* val)
    : MathContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(val);
}

java::math::MathContext::MathContext(int32_t setPrecision, RoundingMode* setRoundingMode)
    : MathContext(*static_cast< ::default_init_tag* >(0))
{
    ctor(setPrecision, setRoundingMode);
}

java::math::MathContext*& java::math::MathContext::DECIMAL128()
{
    clinit();
    return DECIMAL128_;
}
java::math::MathContext* java::math::MathContext::DECIMAL128_;
java::math::MathContext*& java::math::MathContext::DECIMAL32()
{
    clinit();
    return DECIMAL32_;
}
java::math::MathContext* java::math::MathContext::DECIMAL32_;
java::math::MathContext*& java::math::MathContext::DECIMAL64()
{
    clinit();
    return DECIMAL64_;
}
java::math::MathContext* java::math::MathContext::DECIMAL64_;
constexpr int32_t java::math::MathContext::DEFAULT_DIGITS;
java::math::RoundingMode*& java::math::MathContext::DEFAULT_ROUNDINGMODE()
{
    clinit();
    return DEFAULT_ROUNDINGMODE_;
}
java::math::RoundingMode* java::math::MathContext::DEFAULT_ROUNDINGMODE_;
constexpr int32_t java::math::MathContext::MIN_DIGITS;
java::math::MathContext*& java::math::MathContext::UNLIMITED()
{
    clinit();
    return UNLIMITED_;
}
java::math::MathContext* java::math::MathContext::UNLIMITED_;
constexpr int64_t java::math::MathContext::serialVersionUID;

void ::java::math::MathContext::ctor(int32_t setPrecision)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::MathContext::ctor(int32_t setPrecision)");
}

void ::java::math::MathContext::ctor(::java::lang::String* val)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::MathContext::ctor(::java::lang::String* val)");
}

void ::java::math::MathContext::ctor(int32_t setPrecision, RoundingMode* setRoundingMode)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::math::MathContext::ctor(int32_t setPrecision, RoundingMode* setRoundingMode)");
}

bool java::math::MathContext::equals(::java::lang::Object* x)
{ /* stub */
    unimplemented_(u"bool java::math::MathContext::equals(::java::lang::Object* x)");
    return 0;
}

int32_t java::math::MathContext::getPrecision()
{ /* stub */
return precision ; /* getter */
}

java::math::RoundingMode* java::math::MathContext::getRoundingMode()
{ /* stub */
return roundingMode ; /* getter */
}

int32_t java::math::MathContext::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::math::MathContext::hashCode()");
    return 0;
}

/* private: void java::math::MathContext::readObject(::java::io::ObjectInputStream* s) */
java::lang::String* java::math::MathContext::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::math::MathContext::toString()");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::math::MathContext::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.math.MathContext", 21);
    return c;
}

java::lang::Class* java::math::MathContext::getClass0()
{
    return class_();
}

