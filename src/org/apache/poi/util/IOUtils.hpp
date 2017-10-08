// Generated from /POI/java/org/apache/poi/util/IOUtils.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/nio/channels/fwd-POI.hpp>
#include <org/apache/poi/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::util::IOUtils final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    static POILogger* logger_;
    static constexpr int32_t SKIP_BUFFER_SIZE { int32_t(2048) };
    static ::int8_tArray* SKIP_BYTE_BUFFER_;
protected:
    void ctor();

public:
    static ::int8_tArray* peekFirst8Bytes(::java::io::InputStream* stream) /* throws(IOException, EmptyFileException) */;
    static ::int8_tArray* peekFirstNBytes(::java::io::InputStream* stream, int32_t limit) /* throws(IOException, EmptyFileException) */;
    static ::int8_tArray* toByteArray_(::java::io::InputStream* stream) /* throws(IOException) */;
    static ::int8_tArray* toByteArray_(::java::io::InputStream* stream, int32_t length) /* throws(IOException) */;
    static ::int8_tArray* toByteArray_(::java::nio::ByteBuffer* buffer, int32_t length);
    static int32_t readFully(::java::io::InputStream* in, ::int8_tArray* b) /* throws(IOException) */;
    static int32_t readFully(::java::io::InputStream* in, ::int8_tArray* b, int32_t off, int32_t len) /* throws(IOException) */;
    static int32_t readFully(::java::nio::channels::ReadableByteChannel* channel, ::java::nio::ByteBuffer* b) /* throws(IOException) */;
    static void write(::poi::POIDocument* doc, ::java::io::OutputStream* out) /* throws(IOException) */;
    static void write(::poi::ss::usermodel::Workbook* doc, ::java::io::OutputStream* out) /* throws(IOException) */;
    static void writeAndClose(::poi::POIDocument* doc, ::java::io::OutputStream* out) /* throws(IOException) */;
    static void writeAndClose(::poi::POIDocument* doc, ::java::io::File* out) /* throws(IOException) */;
    static void writeAndClose(::poi::POIDocument* doc) /* throws(IOException) */;
    static void writeAndClose(::poi::ss::usermodel::Workbook* doc, ::java::io::OutputStream* out) /* throws(IOException) */;
    static void copy(::java::io::InputStream* inp, ::java::io::OutputStream* out) /* throws(IOException) */;
    static int64_t calculateChecksum(::int8_tArray* data);
    static int64_t calculateChecksum(::java::io::InputStream* stream) /* throws(IOException) */;
    static void closeQuietly(::java::io::Closeable* closeable);
    static int64_t skipFully(::java::io::InputStream* input, int64_t toSkip) /* throws(IOException) */;
    static ::int8_tArray* safelyAllocate(int64_t length, int32_t maxLength);

    // Generated

private:
    IOUtils();
protected:
    IOUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static POILogger*& logger();
    static ::int8_tArray*& SKIP_BYTE_BUFFER();
    virtual ::java::lang::Class* getClass0();
};
