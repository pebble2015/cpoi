// Generated from /Library/Java/JavaVirtualMachines/jdk1.8.0_144.jdk/Contents/Home/jre/lib/rt.jar

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <javax/imageio/stream/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <javax/imageio/stream/ImageInputStream.hpp>

struct default_init_tag;

class javax::imageio::stream::ImageInputStreamImpl
    : public virtual ::java::lang::Object
    , public virtual ImageInputStream
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int32_t BYTE_BUF_LENGTH { int32_t(8192) };

public: /* protected */
    int32_t bitOffset {  };

public: /* package */
    ::int8_tArray* byteBuf {  };

public: /* protected */
    ::java::nio::ByteOrder* byteOrder {  };
    int64_t flushedPos {  };

private:
    bool isClosed {  };
    ::java::util::Stack* markBitStack {  };
    ::java::util::Stack* markByteStack {  };

public: /* protected */
    int64_t streamPos {  };

protected:
    void ctor();

public: /* protected */
    void checkClosed();

public:
    void close() override;

public: /* protected */
    void finalize() override;

public:
    void flush() override;
    void flushBefore(int64_t pos) override;
    int32_t getBitOffset() override;
    ::java::nio::ByteOrder* getByteOrder() override;
    int64_t getFlushedPosition() override;
    int64_t getStreamPosition() override;
    bool isCached() override;
    bool isCachedFile() override;
    bool isCachedMemory() override;
    int64_t length() override;
    void mark() override;
    /*int32_t read(); (already declared) */
    int32_t read(::int8_tArray* b) override;
    /*int32_t read(::int8_tArray* b, int32_t off, int32_t len); (already declared) */
    int32_t readBit() override;
    int64_t readBits(int32_t numBits) override;
    bool readBoolean() override;
    int8_t readByte() override;
    void readBytes(IIOByteBuffer* buf, int32_t len) override;
    char16_t readChar() override;
    double readDouble() override;
    float readFloat() override;
    void readFully(::int8_tArray* b) override;
    void readFully(::int8_tArray* b, int32_t off, int32_t len) override;
    void readFully(::int16_tArray* s, int32_t off, int32_t len) override;
    void readFully(::char16_tArray* c, int32_t off, int32_t len) override;
    void readFully(::int32_tArray* i, int32_t off, int32_t len) override;
    void readFully(::int64_tArray* l, int32_t off, int32_t len) override;
    void readFully(::floatArray* f, int32_t off, int32_t len) override;
    void readFully(::doubleArray* d, int32_t off, int32_t len) override;
    int32_t readInt() override;
    ::java::lang::String* readLine() override;
    int64_t readLong() override;
    int16_t readShort() override;
    ::java::lang::String* readUTF() override;
    int32_t readUnsignedByte() override;
    int64_t readUnsignedInt() override;
    int32_t readUnsignedShort() override;
    void reset() override;
    void seek(int64_t pos) override;
    void setBitOffset(int32_t bitOffset) override;
    void setByteOrder(::java::nio::ByteOrder* byteOrder) override;
    int32_t skipBytes(int32_t n) override;
    int64_t skipBytes(int64_t n) override;
    /*void toChars(::int8_tArray* b, ::char16_tArray* c, int32_t off, int32_t len); (private) */
    /*void toDoubles(::int8_tArray* b, ::doubleArray* d, int32_t off, int32_t len); (private) */
    /*void toFloats(::int8_tArray* b, ::floatArray* f, int32_t off, int32_t len); (private) */
    /*void toInts(::int8_tArray* b, ::int32_tArray* i, int32_t off, int32_t len); (private) */
    /*void toLongs(::int8_tArray* b, ::int64_tArray* l, int32_t off, int32_t len); (private) */
    /*void toShorts(::int8_tArray* b, ::int16_tArray* s, int32_t off, int32_t len); (private) */

    // Generated
    ImageInputStreamImpl();
protected:
    ImageInputStreamImpl(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t read() = 0;
    virtual int32_t read(::int8_tArray* b, int32_t off, int32_t len) = 0;

private:
    virtual ::java::lang::Class* getClass0();
};
