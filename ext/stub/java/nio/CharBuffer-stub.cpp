// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/CharBuffer.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::CharBuffer::CharBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::CharBuffer::CharBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
    : CharBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap);
}

java::nio::CharBuffer::CharBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::char16_tArray* hb, int32_t offset)
    : CharBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap, hb, offset);
}


void ::java::nio::CharBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::CharBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)");
}

void ::java::nio::CharBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::char16_tArray* hb, int32_t offset)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::CharBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::char16_tArray* hb, int32_t offset)");
}

java::nio::CharBuffer* java::nio::CharBuffer::allocate(int32_t capacity)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::allocate(int32_t capacity)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::append(::java::lang::CharSequence* csq)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::append(::java::lang::CharSequence* csq)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::append(char16_t c)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::append(char16_t c)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::append(::java::lang::CharSequence* csq, int32_t start, int32_t end)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::append(::java::lang::CharSequence* csq, int32_t start, int32_t end)");
    return 0;
}

char16_tArray* java::nio::CharBuffer::array()
{ /* stub */
    unimplemented_(u"char16_tArray* java::nio::CharBuffer::array()");
    return 0;
}

int32_t java::nio::CharBuffer::arrayOffset()
{ /* stub */
    unimplemented_(u"int32_t java::nio::CharBuffer::arrayOffset()");
    return 0;
}

char16_t java::nio::CharBuffer::charAt(int32_t index)
{ /* stub */
    unimplemented_(u"char16_t java::nio::CharBuffer::charAt(int32_t index)");
    return 0;
}

java::util::stream::IntStream* java::nio::CharBuffer::chars()
{ /* stub */
    unimplemented_(u"java::util::stream::IntStream* java::nio::CharBuffer::chars()");
    return 0;
}

/* private: int32_t java::nio::CharBuffer::compare(char16_t x, char16_t y) */
int32_t java::nio::CharBuffer::compareTo(CharBuffer* that)
{ /* stub */
    unimplemented_(u"int32_t java::nio::CharBuffer::compareTo(CharBuffer* that)");
    return 0;
}

int32_t java::nio::CharBuffer::compareTo(::java::lang::Object* o)
{ 
    return compareTo(dynamic_cast< CharBuffer* >(o));
}

bool java::nio::CharBuffer::equals(::java::lang::Object* ob)
{ /* stub */
    unimplemented_(u"bool java::nio::CharBuffer::equals(::java::lang::Object* ob)");
    return 0;
}

/* private: bool java::nio::CharBuffer::equals(char16_t x, char16_t y) */
java::nio::CharBuffer* java::nio::CharBuffer::get(::char16_tArray* dst)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::get(::char16_tArray* dst)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::get(::char16_tArray* dst, int32_t offset, int32_t length)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::get(::char16_tArray* dst, int32_t offset, int32_t length)");
    return 0;
}

bool java::nio::CharBuffer::hasArray_()
{ /* stub */
    unimplemented_(u"bool java::nio::CharBuffer::hasArray_()");
    return 0;
}

int32_t java::nio::CharBuffer::hashCode()
{ /* stub */
    unimplemented_(u"int32_t java::nio::CharBuffer::hashCode()");
    return 0;
}

int32_t java::nio::CharBuffer::length()
{ /* stub */
    unimplemented_(u"int32_t java::nio::CharBuffer::length()");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::put(CharBuffer* src)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::put(CharBuffer* src)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::put(::char16_tArray* src)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::put(::char16_tArray* src)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::put(::java::lang::String* src)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::put(::java::lang::String* src)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::put(::char16_tArray* src, int32_t offset, int32_t length)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::put(::char16_tArray* src, int32_t offset, int32_t length)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::put(::java::lang::String* src, int32_t start, int32_t end)
{ /* stub */
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::put(::java::lang::String* src, int32_t start, int32_t end)");
    return 0;
}

int32_t java::nio::CharBuffer::read(CharBuffer* target)
{ /* stub */
    unimplemented_(u"int32_t java::nio::CharBuffer::read(CharBuffer* target)");
    return 0;
}

java::lang::String* java::nio::CharBuffer::toString()
{ /* stub */
    unimplemented_(u"java::lang::String* java::nio::CharBuffer::toString()");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::wrap(::char16_tArray* array)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::wrap(::char16_tArray* array)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::wrap(::java::lang::CharSequence* csq)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::wrap(::java::lang::CharSequence* csq)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::wrap(::char16_tArray* array, int32_t offset, int32_t length)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::wrap(::char16_tArray* array, int32_t offset, int32_t length)");
    return 0;
}

java::nio::CharBuffer* java::nio::CharBuffer::wrap(::java::lang::CharSequence* csq, int32_t start, int32_t end)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::CharBuffer* java::nio::CharBuffer::wrap(::java::lang::CharSequence* csq, int32_t start, int32_t end)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::CharBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.CharBuffer", 19);
    return c;
}

java::lang::Class* java::nio::CharBuffer::getClass0()
{
    return class_();
}

