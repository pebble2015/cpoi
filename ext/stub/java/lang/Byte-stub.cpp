// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/lang/Byte.hpp>

extern void unimplemented_(const char16_t* name);
java::lang::Byte::Byte(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::lang::Byte::Byte(int8_t value)
    : Byte(*static_cast< ::default_init_tag* >(0))
{
    ctor(value);
}

java::lang::Byte::Byte(String* s)
    : Byte(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

constexpr int32_t java::lang::Byte::BYTES;
constexpr int8_t java::lang::Byte::MAX_VALUE;
constexpr int8_t java::lang::Byte::MIN_VALUE;
constexpr int32_t java::lang::Byte::SIZE;
java::lang::Class*& java::lang::Byte::TYPE()
{
    clinit();
    return TYPE_;
}
java::lang::Class* java::lang::Byte::TYPE_;
constexpr int64_t java::lang::Byte::serialVersionUID;

void ::java::lang::Byte::ctor(int8_t value)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::Byte::ctor(int8_t value)");
}

void ::java::lang::Byte::ctor(String* s)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::lang::Byte::ctor(String* s)");
}

int8_t java::lang::Byte::byteValue()
{ /* stub */
    unimplemented_(u"int8_t java::lang::Byte::byteValue()");
    return 0;
}

int32_t java::lang::Byte::compare(int8_t x, int8_t y)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::lang::Byte::compare(int8_t x, int8_t y)");
    return 0;
}

int32_t java::lang::Byte::compareTo(Byte* anotherByte)
{ /* stub */
    unimplemented_(u"int32_t java::lang::Byte::compareTo(Byte* anotherByte)");
    return 0;
}

int32_t java::lang::Byte::compareTo(Object* o)
{ 
    return compareTo(dynamic_cast< Byte* >(o));
}

java::lang::Byte* java::lang::Byte::decode(String* nm)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Byte* java::lang::Byte::decode(String* nm)");
    return 0;
}

double java::lang::Byte::doubleValue()
{ /* stub */
    unimplemented_(u"double java::lang::Byte::doubleValue()");
    return 0;
}

bool java::lang::Byte::equals(Object* obj)
{ /* stub */
    unimplemented_(u"bool java::lang::Byte::equals(Object* obj)");
    return 0;
}

float java::lang::Byte::floatValue()
{ /* stub */
    unimplemented_(u"float java::lang::Byte::floatValue()");
    return 0;
}

int32_t java::lang::Byte::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::lang::Byte::hashCode()");
    return 0;
}

int32_t java::lang::Byte::hashCode(int8_t value)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::lang::Byte::hashCode(int8_t value)");
    return 0;
}

int32_t java::lang::Byte::intValue()
{ /* stub */
    unimplemented_(u"int32_t java::lang::Byte::intValue()");
    return 0;
}

int64_t java::lang::Byte::longValue()
{ /* stub */
    unimplemented_(u"int64_t java::lang::Byte::longValue()");
    return 0;
}

int8_t java::lang::Byte::parseByte(String* s)
{ /* stub */
    clinit();
    unimplemented_(u"int8_t java::lang::Byte::parseByte(String* s)");
    return 0;
}

int8_t java::lang::Byte::parseByte(String* s, int32_t radix)
{ /* stub */
    clinit();
    unimplemented_(u"int8_t java::lang::Byte::parseByte(String* s, int32_t radix)");
    return 0;
}

int16_t java::lang::Byte::shortValue()
{ /* stub */
    unimplemented_(u"int16_t java::lang::Byte::shortValue()");
    return 0;
}

java::lang::String* java::lang::Byte::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::lang::Byte::toString()");
    return 0;
}

java::lang::String* java::lang::Byte::toString(int8_t b)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::String* java::lang::Byte::toString(int8_t b)");
    return 0;
}

int32_t java::lang::Byte::toUnsignedInt(int8_t x)
{ /* stub */
    clinit();
    unimplemented_(u"int32_t java::lang::Byte::toUnsignedInt(int8_t x)");
    return 0;
}

int64_t java::lang::Byte::toUnsignedLong(int8_t x)
{ /* stub */
    clinit();
    unimplemented_(u"int64_t java::lang::Byte::toUnsignedLong(int8_t x)");
    return 0;
}

java::lang::Byte* java::lang::Byte::valueOf(int8_t b)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Byte* java::lang::Byte::valueOf(int8_t b)");
    return 0;
}

java::lang::Byte* java::lang::Byte::valueOf(String* s)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Byte* java::lang::Byte::valueOf(String* s)");
    return 0;
}

java::lang::Byte* java::lang::Byte::valueOf(String* s, int32_t radix)
{ /* stub */
    clinit();
    unimplemented_(u"java::lang::Byte* java::lang::Byte::valueOf(String* s, int32_t radix)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::lang::Byte::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.lang.Byte", 14);
    return c;
}

java::lang::Class* java::lang::Byte::getClass0()
{
    return class_();
}

