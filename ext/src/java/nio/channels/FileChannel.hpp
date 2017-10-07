// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <java/nio/file/fwd-POI.hpp>
#include <java/nio/file/attribute/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.hpp>
#include <java/nio/channels/SeekableByteChannel.hpp>
#include <java/nio/channels/GatheringByteChannel.hpp>
#include <java/nio/channels/ScatteringByteChannel.hpp>

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

struct default_init_tag;

class java::nio::channels::FileChannel
    : public ::java::nio::channels::spi::AbstractInterruptibleChannel
    , public virtual SeekableByteChannel
    , public virtual GatheringByteChannel
    , public virtual ScatteringByteChannel
{

public:
    typedef ::java::nio::channels::spi::AbstractInterruptibleChannel super;

private:
    static ::java::nio::file::attribute::FileAttributeArray* NO_ATTRIBUTES_;

protected:
    void ctor();

public:
    virtual void force(bool metaData) = 0;
    FileLock* lock();
    virtual FileLock* lock(int64_t position, int64_t size, bool shared) = 0;
    virtual ::java::nio::MappedByteBuffer* map(FileChannel_MapMode* mode, int64_t position, int64_t size) = 0;
    static FileChannel* open(::java::nio::file::Path* path, ::java::nio::file::OpenOptionArray* options);
    static FileChannel* open(::java::nio::file::Path* path, ::java::util::Set* options, ::java::nio::file::attribute::FileAttributeArray* attrs);
    /*int64_t position(); (already declared) */
    FileChannel* position(int64_t newPosition) = 0;
    /*int32_t read(::java::nio::ByteBuffer* dst); (already declared) */
    int64_t read(::java::nio::ByteBufferArray* dsts) override;
    virtual int32_t read(::java::nio::ByteBuffer* dst, int64_t position) = 0;
    /*int64_t read(::java::nio::ByteBufferArray* dsts, int32_t offset, int32_t length); (already declared) */
    /*int64_t size(); (already declared) */
    virtual int64_t transferFrom(ReadableByteChannel* src, int64_t position, int64_t count) = 0;
    virtual int64_t transferTo(int64_t position, int64_t count, WritableByteChannel* target) = 0;
    FileChannel* truncate(int64_t size) = 0;
    FileLock* tryLock();
    virtual FileLock* tryLock(int64_t position, int64_t size, bool shared) = 0;
    /*int32_t write(::java::nio::ByteBuffer* src); (already declared) */
    int64_t write(::java::nio::ByteBufferArray* srcs) override;
    virtual int32_t write(::java::nio::ByteBuffer* src, int64_t position) = 0;
    /*int64_t write(::java::nio::ByteBufferArray* srcs, int32_t offset, int32_t length); (already declared) */

    // Generated

public: /* protected */
    FileChannel();
protected:
    FileChannel(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    void close();
    virtual bool isOpen();
    virtual int64_t position() = 0;
    int32_t read(::java::nio::ByteBuffer* dst) = 0;
    int32_t write(::java::nio::ByteBuffer* src) = 0;
    virtual int64_t write(::java::nio::ByteBufferArray* srcs, int32_t offset, int32_t length) = 0;
    virtual int64_t read(::java::nio::ByteBufferArray* dsts, int32_t offset, int32_t length) = 0;

private:
    static ::java::nio::file::attribute::FileAttributeArray*& NO_ATTRIBUTES();
    virtual ::java::lang::Class* getClass0();
};
