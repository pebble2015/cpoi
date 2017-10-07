// Generated from /POI/java/org/apache/poi/util/RLEDecompressingInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/InputStream.hpp>

struct default_init_tag;

class org::apache::poi::util::RLEDecompressingInputStream
    : public ::java::io::InputStream
{

public:
    typedef ::java::io::InputStream super;

private:
    static ::int32_tArray* POWER2_;
    ::java::io::InputStream* in {  };
    ::int8_tArray* buf {  };
    int32_t pos {  };
    int32_t len {  };
protected:
    void ctor(::java::io::InputStream* in) /* throws(IOException) */;

public:
    int32_t read() /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b) /* throws(IOException) */ override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t l) /* throws(IOException) */ override;
    int64_t skip(int64_t n) /* throws(IOException) */ override;
    int32_t available() override;
    void close() /* throws(IOException) */ override;

private:
    int32_t readChunk() /* throws(IOException) */;

public: /* package */
    static int32_t getCopyLenBits(int32_t offset);

public:
    virtual int32_t readShort() /* throws(IOException) */;
    virtual int32_t readInt() /* throws(IOException) */;

private:
    int32_t readShort(::java::io::InputStream* stream) /* throws(IOException) */;
    int32_t readInt(::java::io::InputStream* stream) /* throws(IOException) */;

public:
    static ::int8_tArray* decompress(::int8_tArray* compressed) /* throws(IOException) */;
    static ::int8_tArray* decompress(::int8_tArray* compressed, int32_t offset, int32_t length) /* throws(IOException) */;

    // Generated
    RLEDecompressingInputStream(::java::io::InputStream* in);
protected:
    RLEDecompressingInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::int32_tArray*& POWER2();
    virtual ::java::lang::Class* getClass0();
};
