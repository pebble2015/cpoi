// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/ByteBuffer.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::ByteBuffer::ByteBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::ByteBuffer::ByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
    : ByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap);
}

java::nio::ByteBuffer::ByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::int8_tArray* hb, int32_t offset)
    : ByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap, hb, offset);
}


void ::java::nio::ByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::ByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)");
}

void ::java::nio::ByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::int8_tArray* hb, int32_t offset)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::ByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::int8_tArray* hb, int32_t offset)");
}

java::nio::ByteBuffer* java::nio::ByteBuffer::allocate(int32_t capacity)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::allocate(int32_t capacity)");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::allocateDirect(int32_t capacity)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::allocateDirect(int32_t capacity)");
    return 0;
}

int8_tArray* java::nio::ByteBuffer::array()
{ /* stub */
    unimplemented_(u"int8_tArray* java::nio::ByteBuffer::array()");
    return 0;
}

int32_t java::nio::ByteBuffer::arrayOffset()
{ /* stub */
    unimplemented_(u"int32_t java::nio::ByteBuffer::arrayOffset()");
    return 0;
}

/* private: int32_t java::nio::ByteBuffer::compare(int8_t x, int8_t y) */
int32_t java::nio::ByteBuffer::compareTo(ByteBuffer* that)
{ /* stub */
    unimplemented_(u"int32_t java::nio::ByteBuffer::compareTo(ByteBuffer* that)");
    return 0;
}

int32_t java::nio::ByteBuffer::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< ByteBuffer* >(o));
}

bool java::nio::ByteBuffer::equals(::java::lang::Object* ob)
{ /* stub */
    unimplemented_(u"bool java::nio::ByteBuffer::equals(::java::lang::Object* ob)");
    return 0;
}

/* private: bool java::nio::ByteBuffer::equals(int8_t x, int8_t y) */
java::nio::ByteBuffer* java::nio::ByteBuffer::get(::int8_tArray* dst)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::get(::int8_tArray* dst)");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::get(::int8_tArray* dst, int32_t offset, int32_t length)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::get(::int8_tArray* dst, int32_t offset, int32_t length)");
    return 0;
}

bool java::nio::ByteBuffer::hasArray_()
{ /* stub */
    unimplemented_(u"bool java::nio::ByteBuffer::hasArray_()");
    return 0;
}

int32_t java::nio::ByteBuffer::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::nio::ByteBuffer::hashCode()");
    return 0;
}

java::nio::ByteOrder* java::nio::ByteBuffer::order()
{ /* stub */
    unimplemented_(u"java::nio::ByteOrder* java::nio::ByteBuffer::order()");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::order(ByteOrder* bo)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::order(ByteOrder* bo)");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(ByteBuffer* src)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::put(ByteBuffer* src)");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(::int8_tArray* src)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::put(::int8_tArray* src)");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::put(::int8_tArray* src, int32_t offset, int32_t length)
{ /* stub */
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::put(::int8_tArray* src, int32_t offset, int32_t length)");
    return 0;
}

java::lang::String* java::nio::ByteBuffer::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::ByteBuffer::toString()");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::wrap(::int8_tArray* array)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::wrap(::int8_tArray* array)");
    return 0;
}

java::nio::ByteBuffer* java::nio::ByteBuffer::wrap(::int8_tArray* array, int32_t offset, int32_t length)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::ByteBuffer* java::nio::ByteBuffer::wrap(::int8_tArray* array, int32_t offset, int32_t length)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::ByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.ByteBuffer", 19);
    return c;
}

java::lang::Class* java::nio::ByteBuffer::getClass0()
{
    return class_();
}

