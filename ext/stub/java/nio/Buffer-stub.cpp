// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/Buffer.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::Buffer::Buffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::Buffer::Buffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
    : Buffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap);
}

constexpr int32_t java::nio::Buffer::SPLITERATOR_CHARACTERISTICS;

void ::java::nio::Buffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::Buffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)");
}

int32_t java::nio::Buffer::capacity()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::capacity()");
    return 0;
}

void java::nio::Buffer::checkBounds(int32_t off, int32_t len, int32_t size)
{ /* stub */
    clinit();
    unimplemented_(u"void java::nio::Buffer::checkBounds(int32_t off, int32_t len, int32_t size)");
}

int32_t java::nio::Buffer::checkIndex(int32_t i)
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::checkIndex(int32_t i)");
    return 0;
}

int32_t java::nio::Buffer::checkIndex(int32_t i, int32_t nb)
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::checkIndex(int32_t i, int32_t nb)");
    return 0;
}

java::nio::Buffer* java::nio::Buffer::clear()
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::clear()");
    return 0;
}

void java::nio::Buffer::discardMark()
{ /* stub */
    unimplemented_(u"void java::nio::Buffer::discardMark()");
}

java::nio::Buffer* java::nio::Buffer::flip()
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::flip()");
    return 0;
}

bool java::nio::Buffer::hasRemaining()
{ /* stub */
    unimplemented_(u"bool java::nio::Buffer::hasRemaining()");
    return 0;
}

int32_t java::nio::Buffer::limit()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::limit()");
    return 0;
}

java::nio::Buffer* java::nio::Buffer::limit(int32_t newLimit)
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::limit(int32_t newLimit)");
    return 0;
}

java::nio::Buffer* java::nio::Buffer::mark()
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::mark()");
    return 0;
}

int32_t java::nio::Buffer::markValue()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::markValue()");
    return 0;
}

int32_t java::nio::Buffer::nextGetIndex()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::nextGetIndex()");
    return 0;
}

int32_t java::nio::Buffer::nextGetIndex(int32_t nb)
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::nextGetIndex(int32_t nb)");
    return 0;
}

int32_t java::nio::Buffer::nextPutIndex()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::nextPutIndex()");
    return 0;
}

int32_t java::nio::Buffer::nextPutIndex(int32_t nb)
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::nextPutIndex(int32_t nb)");
    return 0;
}

int32_t java::nio::Buffer::position()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::position()");
    return 0;
}

java::nio::Buffer* java::nio::Buffer::position(int32_t newPosition)
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::position(int32_t newPosition)");
    return 0;
}

int32_t java::nio::Buffer::remaining()
{ /* stub */
    unimplemented_(u"int32_t java::nio::Buffer::remaining()");
    return 0;
}

java::nio::Buffer* java::nio::Buffer::reset()
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::reset()");
    return 0;
}

java::nio::Buffer* java::nio::Buffer::rewind()
{ /* stub */
    unimplemented_(u"java::nio::Buffer* java::nio::Buffer::rewind()");
    return 0;
}

void java::nio::Buffer::truncate()
{ /* stub */
    unimplemented_(u"void java::nio::Buffer::truncate()");
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::Buffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.Buffer", 15);
    return c;
}

java::lang::Class* java::nio::Buffer::getClass0()
{
    return class_();
}

