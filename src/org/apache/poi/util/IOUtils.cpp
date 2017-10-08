// Generated from /POI/java/org/apache/poi/util/IOUtils.java
#include <org/apache/poi/util/IOUtils.hpp>

#include <java/io/ByteArrayOutputStream.hpp>
#include <java/io/Closeable.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/PushbackInputStream.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/Math.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/util/zip/CRC32.hpp>
#include <java/util/zip/Checksum.hpp>
#include <org/apache/poi/EmptyFileException.hpp>
#include <org/apache/poi/POIDocument.hpp>
#include <org/apache/poi/ss/usermodel/Workbook.hpp>
#include <org/apache/poi/util/BoundedInputStream.hpp>
#include <org/apache/poi/util/POILogFactory.hpp>
#include <org/apache/poi/util/POILogger.hpp>
#include <org/apache/poi/util/RecordFormatException.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
poi::util::IOUtils::IOUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::util::IOUtils::IOUtils() 
    : IOUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::util::POILogger*& poi::util::IOUtils::logger()
{
    clinit();
    return logger_;
}
poi::util::POILogger* poi::util::IOUtils::logger_;

constexpr int32_t poi::util::IOUtils::SKIP_BUFFER_SIZE;

int8_tArray*& poi::util::IOUtils::SKIP_BYTE_BUFFER()
{
    clinit();
    return SKIP_BYTE_BUFFER_;
}
int8_tArray* poi::util::IOUtils::SKIP_BYTE_BUFFER_;

void poi::util::IOUtils::ctor()
{
    super::ctor();
}

int8_tArray* poi::util::IOUtils::peekFirst8Bytes(::java::io::InputStream* stream) /* throws(IOException, EmptyFileException) */
{
    clinit();
    return peekFirstNBytes(stream, 8);
}

int8_tArray* poi::util::IOUtils::peekFirstNBytes(::java::io::InputStream* stream, int32_t limit) /* throws(IOException, EmptyFileException) */
{
    clinit();
    npc(stream)->mark(limit);
    auto bos = new ::java::io::ByteArrayOutputStream(limit);
    copy(new BoundedInputStream(stream, limit), bos);
    auto readBytes = npc(bos)->size();
    if(readBytes == 0) {
        throw new ::poi::EmptyFileException();
    }
    if(readBytes < limit) {
        npc(bos)->write(new ::int8_tArray(limit - readBytes));
    }
    auto peekedBytes = npc(bos)->toByteArray_();
    if(dynamic_cast< ::java::io::PushbackInputStream* >(stream) != nullptr) {
        auto pin = java_cast< ::java::io::PushbackInputStream* >(stream);
        npc(pin)->unread(peekedBytes, 0, readBytes);
    } else {
        npc(stream)->reset();
    }
    return peekedBytes;
}

int8_tArray* poi::util::IOUtils::toByteArray_(::java::io::InputStream* stream) /* throws(IOException) */
{
    clinit();
    return toByteArray_(stream, ::java::lang::Integer::MAX_VALUE);
}

int8_tArray* poi::util::IOUtils::toByteArray_(::java::io::InputStream* stream, int32_t length) /* throws(IOException) */
{
    clinit();
    auto baos = new ::java::io::ByteArrayOutputStream(length == ::java::lang::Integer::MAX_VALUE ? int32_t(4096) : length);
    auto buffer = new ::int8_tArray(int32_t(4096));
    int32_t totalBytes = int32_t(0), readBytes;
    do {
        readBytes = npc(stream)->read(buffer, 0, ::java::lang::Math::min(npc(buffer)->length, length - totalBytes));
        totalBytes += ::java::lang::Math::max(readBytes, int32_t(0));
        if(readBytes > 0) {
            npc(baos)->write(buffer, int32_t(0), readBytes);
        }
    } while (totalBytes < length && readBytes > -int32_t(1));
    if(length != ::java::lang::Integer::MAX_VALUE && totalBytes < length) {
        throw new ::java::io::IOException(u"unexpected EOF"_j);
    }
    return npc(baos)->toByteArray_();
}

int8_tArray* poi::util::IOUtils::toByteArray_(::java::nio::ByteBuffer* buffer, int32_t length)
{
    clinit();
    if(npc(buffer)->hasArray_() && npc(buffer)->arrayOffset() == 0) {
        return npc(buffer)->array();
    }
    auto data = new ::int8_tArray(length);
    npc(buffer)->get(data);
    return data;
}

int32_t poi::util::IOUtils::readFully(::java::io::InputStream* in, ::int8_tArray* b) /* throws(IOException) */
{
    clinit();
    return readFully(in, b, 0, npc(b)->length);
}

int32_t poi::util::IOUtils::readFully(::java::io::InputStream* in, ::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */
{
    clinit();
    auto total = int32_t(0);
    while (true) {
        auto got = npc(in)->read(b, off + total, len - total);
        if(got < 0) {
            return (total == 0) ? -int32_t(1) : total;
        }
        total += got;
        if(total == len) {
            return total;
        }
    }
}

int32_t poi::util::IOUtils::readFully(::java::nio::channels::ReadableByteChannel* channel, ::java::nio::ByteBuffer* b) /* throws(IOException) */
{
    clinit();
    auto total = int32_t(0);
    while (true) {
        auto got = npc(channel)->read(b);
        if(got < 0) {
            return (total == 0) ? -int32_t(1) : total;
        }
        total += got;
        if(total == npc(b)->capacity() || npc(b)->position() == npc(b)->capacity()) {
            return total;
        }
    }
}

void poi::util::IOUtils::write(::poi::POIDocument* doc, ::java::io::OutputStream* out) /* throws(IOException) */
{
    clinit();
    {
        auto finally0 = finally([&] {
            closeQuietly(out);
        });
        {
            npc(doc)->write(out);
        }
    }

}

void poi::util::IOUtils::write(::poi::ss::usermodel::Workbook* doc, ::java::io::OutputStream* out) /* throws(IOException) */
{
    clinit();
    {
        auto finally1 = finally([&] {
            closeQuietly(out);
        });
        {
            npc(doc)->write(out);
        }
    }

}

void poi::util::IOUtils::writeAndClose(::poi::POIDocument* doc, ::java::io::OutputStream* out) /* throws(IOException) */
{
    clinit();
    {
        auto finally2 = finally([&] {
            closeQuietly(doc);
        });
        {
            write(doc, out);
        }
    }

}

void poi::util::IOUtils::writeAndClose(::poi::POIDocument* doc, ::java::io::File* out) /* throws(IOException) */
{
    clinit();
    {
        auto finally3 = finally([&] {
            closeQuietly(doc);
        });
        {
            npc(doc)->write(out);
        }
    }

}

void poi::util::IOUtils::writeAndClose(::poi::POIDocument* doc) /* throws(IOException) */
{
    clinit();
    {
        auto finally4 = finally([&] {
            closeQuietly(doc);
        });
        {
            npc(doc)->write();
        }
    }

}

void poi::util::IOUtils::writeAndClose(::poi::ss::usermodel::Workbook* doc, ::java::io::OutputStream* out) /* throws(IOException) */
{
    clinit();
    {
        auto finally5 = finally([&] {
            closeQuietly(doc);
        });
        {
            npc(doc)->write(out);
        }
    }

}

void poi::util::IOUtils::copy(::java::io::InputStream* inp, ::java::io::OutputStream* out) /* throws(IOException) */
{
    clinit();
    auto buff = new ::int8_tArray(int32_t(4096));
    int32_t count;
    while ((count = npc(inp)->read(buff)) != -int32_t(1)) {
        if(count < -int32_t(1)) {
            throw new RecordFormatException(u"Can't have read < -1 bytes"_j);
        }
        if(count > 0) {
            npc(out)->write(buff, 0, count);
        }
    }
}

int64_t poi::util::IOUtils::calculateChecksum(::int8_tArray* data)
{
    clinit();
    ::java::util::zip::Checksum* sum = new ::java::util::zip::CRC32();
    npc(sum)->update(data, 0, npc(data)->length);
    return npc(sum)->getValue();
}

int64_t poi::util::IOUtils::calculateChecksum(::java::io::InputStream* stream) /* throws(IOException) */
{
    clinit();
    ::java::util::zip::Checksum* sum = new ::java::util::zip::CRC32();
    auto buf = new ::int8_tArray(int32_t(4096));
    int32_t count;
    while ((count = npc(stream)->read(buf)) != -int32_t(1)) {
        if(count > 0) {
            npc(sum)->update(buf, 0, count);
        }
    }
    return npc(sum)->getValue();
}

void poi::util::IOUtils::closeQuietly(::java::io::Closeable* closeable)
{
    clinit();
    if(closeable == nullptr) {
        return;
    }
    try {
        npc(closeable)->close();
    } catch (::java::lang::Exception* exc) {
        npc(logger_)->log(POILogger::ERROR, new ::java::lang::ObjectArray({static_cast< ::java::lang::Object* >(::java::lang::StringBuilder().append(u"Unable to close resource: "_j)->append(static_cast< ::java::lang::Object* >(exc))->toString()), static_cast< ::java::lang::Object* >(exc)}));
    }
}

int64_t poi::util::IOUtils::skipFully(::java::io::InputStream* input, int64_t toSkip) /* throws(IOException) */
{
    clinit();
    if(toSkip < 0) {
        throw new ::java::lang::IllegalArgumentException(::java::lang::StringBuilder().append(u"Skip count must be non-negative, actual: "_j)->append(toSkip)->toString());
    }
    if(toSkip == 0) {
        return 0LL;
    }
    if(SKIP_BYTE_BUFFER_ == nullptr) {
        SKIP_BYTE_BUFFER_ = new ::int8_tArray(SKIP_BUFFER_SIZE);
    }
    auto remain = toSkip;
    while (remain > 0) {
        int64_t const n = npc(input)->read(SKIP_BYTE_BUFFER_, 0, static_cast< int32_t >(::java::lang::Math::min(remain, static_cast< int64_t >(SKIP_BUFFER_SIZE))));
        if(n < 0) {
            break;
        }
        remain -= n;
    }
    if(toSkip == remain) {
        return -int64_t(1LL);
    }
    return toSkip - remain;
}

int8_tArray* poi::util::IOUtils::safelyAllocate(int64_t length, int32_t maxLength)
{
    clinit();
    if(length < 0LL) {
        throw new RecordFormatException(u"Can't allocate an array of length < 0"_j);
    }
    if(length > static_cast< int64_t >(::java::lang::Integer::MAX_VALUE)) {
        throw new RecordFormatException(::java::lang::StringBuilder().append(u"Can't allocate an array > "_j)->append(::java::lang::Integer::MAX_VALUE)->toString());
    }
    if(length > maxLength) {
        throw new RecordFormatException(::java::lang::StringBuilder().append(u"Not allowed to allocate an array > "_j)->append(maxLength)
            ->append(u" for this record type."_j)
            ->append(u"If the file is not corrupt, please open an issue on bugzilla to request "_j)
            ->append(u"increasing the maximum allowable size for this record type"_j)->toString());
    }
    return new ::int8_tArray(static_cast< int32_t >(length));
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::util::IOUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.util.IOUtils", 27);
    return c;
}

void poi::util::IOUtils::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        logger_ = POILogFactory::getLogger(static_cast< ::java::lang::Class* >(IOUtils::class_()));
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* poi::util::IOUtils::getClass0()
{
    return class_();
}

