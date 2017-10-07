// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <javax/imageio/stream/fwd-POI.hpp>
#include <java/io/DataInput.hpp>
#include <java/io/Closeable.hpp>

struct javax::imageio::stream::ImageInputStream
    : public virtual ::java::io::DataInput
    , public virtual ::java::io::Closeable
{

    /*void close(); (already declared) */
    virtual void flush() = 0;
    virtual void flushBefore(int64_t pos) = 0;
    virtual int32_t getBitOffset() = 0;
    virtual ::java::nio::ByteOrder* getByteOrder() = 0;
    virtual int64_t getFlushedPosition() = 0;
    virtual int64_t getStreamPosition() = 0;
    virtual bool isCached() = 0;
    virtual bool isCachedFile() = 0;
    virtual bool isCachedMemory() = 0;
    virtual int64_t length() = 0;
    virtual void mark() = 0;
    virtual int32_t read() = 0;
    virtual int32_t read(::int8_tArray* b) = 0;
    virtual int32_t read(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual int32_t readBit() = 0;
    virtual int64_t readBits(int32_t numBits) = 0;
    /*bool readBoolean(); (already declared) */
    /*int8_t readByte(); (already declared) */
    virtual void readBytes(IIOByteBuffer* buf, int32_t len) = 0;
    /*char16_t readChar(); (already declared) */
    /*double readDouble(); (already declared) */
    /*float readFloat(); (already declared) */
    /*void readFully(::int8_tArray* b); (already declared) */
    /*void readFully(::int8_tArray* b, int32_t off, int32_t len); (already declared) */
    virtual void readFully(::int16_tArray* s, int32_t off, int32_t len) = 0;
    virtual void readFully(::char16_tArray* c, int32_t off, int32_t len) = 0;
    virtual void readFully(::int32_tArray* i, int32_t off, int32_t len) = 0;
    virtual void readFully(::int64_tArray* l, int32_t off, int32_t len) = 0;
    virtual void readFully(::floatArray* f, int32_t off, int32_t len) = 0;
    virtual void readFully(::doubleArray* d, int32_t off, int32_t len) = 0;
    /*int32_t readInt(); (already declared) */
    /*::java::lang::String* readLine(); (already declared) */
    /*int64_t readLong(); (already declared) */
    /*int16_t readShort(); (already declared) */
    /*::java::lang::String* readUTF(); (already declared) */
    /*int32_t readUnsignedByte(); (already declared) */
    virtual int64_t readUnsignedInt() = 0;
    /*int32_t readUnsignedShort(); (already declared) */
    virtual void reset() = 0;
    virtual void seek(int64_t pos) = 0;
    virtual void setBitOffset(int32_t bitOffset) = 0;
    virtual void setByteOrder(::java::nio::ByteOrder* byteOrder) = 0;
    /*int32_t skipBytes(int32_t n); (already declared) */
    virtual int64_t skipBytes(int64_t n) = 0;

    // Generated
    static ::java::lang::Class *class_();
    virtual void readFully(::int8_tArray* b) = 0;
    virtual void readFully(::int8_tArray* b, int32_t off, int32_t len) = 0;
    virtual int32_t skipBytes(int32_t n) = 0;
};
