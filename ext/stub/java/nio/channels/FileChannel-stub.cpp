// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar
#include <java/nio/channels/FileChannel.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace nio
    {
typedef ::SubArray< ::java::nio::Buffer, ::java::lang::ObjectArray > BufferArray;
typedef ::SubArray< ::java::nio::ByteBuffer, BufferArray, ::java::lang::ComparableArray > ByteBufferArray;

        namespace file
        {
typedef ::SubArray< ::java::nio::file::OpenOption, ::java::lang::ObjectArray > OpenOptionArray;

            namespace attribute
            {
typedef ::SubArray< ::java::nio::file::attribute::FileAttribute, ::java::lang::ObjectArray > FileAttributeArray;
            } // attribute
        } // file
    } // nio
} // java

extern void unimplemented_(const char16_t* name);
java::nio::channels::FileChannel::FileChannel(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

java::nio::channels::FileChannel::FileChannel()
    : FileChannel(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

java::nio::file::attribute::FileAttributeArray*& java::nio::channels::FileChannel::NO_ATTRIBUTES()
{
    clinit();
    return NO_ATTRIBUTES_;
}
java::nio::file::attribute::FileAttributeArray* java::nio::channels::FileChannel::NO_ATTRIBUTES_;

void ::java::nio::channels::FileChannel::ctor()
{ /* stub */
    /* super::ctor(); */
    unimplemented_(u"void ::java::nio::channels::FileChannel::ctor()");
}

java::nio::channels::FileLock* java::nio::channels::FileChannel::lock()
{ /* stub */
    unimplemented_(u"java::nio::channels::FileLock* java::nio::channels::FileChannel::lock()");
    return 0;
}

java::nio::channels::FileChannel* java::nio::channels::FileChannel::open(::java::nio::file::Path* path, ::java::nio::file::OpenOptionArray* options)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::channels::FileChannel* java::nio::channels::FileChannel::open(::java::nio::file::Path* path, ::java::nio::file::OpenOptionArray* options)");
    return 0;
}

java::nio::channels::FileChannel* java::nio::channels::FileChannel::open(::java::nio::file::Path* path, ::java::util::Set* options, ::java::nio::file::attribute::FileAttributeArray* attrs)
{ /* stub */
    clinit();
    unimplemented_(u"java::nio::channels::FileChannel* java::nio::channels::FileChannel::open(::java::nio::file::Path* path, ::java::util::Set* options, ::java::nio::file::attribute::FileAttributeArray* attrs)");
    return 0;
}

int64_t java::nio::channels::FileChannel::read(::java::nio::ByteBufferArray* dsts)
{ /* stub */
    unimplemented_(u"int64_t java::nio::channels::FileChannel::read(::java::nio::ByteBufferArray* dsts)");
    return 0;
}

java::nio::channels::FileLock* java::nio::channels::FileChannel::tryLock()
{ /* stub */
    unimplemented_(u"java::nio::channels::FileLock* java::nio::channels::FileChannel::tryLock()");
    return 0;
}

int64_t java::nio::channels::FileChannel::write(::java::nio::ByteBufferArray* srcs)
{ /* stub */
    unimplemented_(u"int64_t java::nio::channels::FileChannel::write(::java::nio::ByteBufferArray* srcs)");
    return 0;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* java::nio::channels::FileChannel::class_()
{
    static ::java::lang::Class* c = ::class_(u"java.nio.channels.FileChannel", 29);
    return c;
}

void java::nio::channels::FileChannel::close()
{
    AbstractInterruptibleChannel::close();
}

bool java::nio::channels::FileChannel::isOpen()
{
    return AbstractInterruptibleChannel::isOpen();
}

java::lang::Class* java::nio::channels::FileChannel::getClass0()
{
    return class_();
}

