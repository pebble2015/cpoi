// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/MappedByteBuffer.hpp>

extern void unimplemented_(const char16_t* name);
java::nio::MappedByteBuffer::MappedByteBuffer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::MappedByteBuffer::MappedByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
    : MappedByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap);
}

java::nio::MappedByteBuffer::MappedByteBuffer(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::java::io::FileDescriptor* fd)
    : MappedByteBuffer(*static_cast< ::default_init_tag* >(0))
{
    ctor(mark, pos, lim, cap, fd);
}

int8_t& java::nio::MappedByteBuffer::unused()
{
    clinit();
    return unused_;
}
int8_t java::nio::MappedByteBuffer::unused_;

void ::java::nio::MappedByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::MappedByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap)");
}

void ::java::nio::MappedByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::java::io::FileDescriptor* fd)
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::MappedByteBuffer::ctor(int32_t mark, int32_t pos, int32_t lim, int32_t cap, ::java::io::FileDescriptor* fd)");
}

/* private: void java::nio::MappedByteBuffer::checkMapped() */
java::nio::MappedByteBuffer* java::nio::MappedByteBuffer::force()
{ /* stub */
    unimplemented_(u"java::nio::MappedByteBuffer* java::nio::MappedByteBuffer::force()");
    return 0;
}

bool java::nio::MappedByteBuffer::isLoaded()
{ /* stub */
    unimplemented_(u"bool java::nio::MappedByteBuffer::isLoaded()");
    return 0;
}

java::nio::MappedByteBuffer* java::nio::MappedByteBuffer::load()
{ /* stub */
    unimplemented_(u"java::nio::MappedByteBuffer* java::nio::MappedByteBuffer::load()");
    return 0;
}

/* private: int64_t java::nio::MappedByteBuffer::mappingAddress(int64_t mappingOffset) */
/* private: int64_t java::nio::MappedByteBuffer::mappingLength(int64_t mappingOffset) */
/* private: int64_t java::nio::MappedByteBuffer::mappingOffset() */
extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::MappedByteBuffer::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.MappedByteBuffer", 25);
    return c;
}

java::lang::Class* java::nio::MappedByteBuffer::getClass0()
{
    return class_();
}

