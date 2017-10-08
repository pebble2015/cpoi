// Generated from /POI/java/org/apache/poi/util/LittleEndianInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/FilterInputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

struct default_init_tag;

class poi::util::LittleEndianInputStream
    : public ::java::io::FilterInputStream
    , public virtual LittleEndianInput
{

public:
    typedef ::java::io::FilterInputStream super;

private:
    static constexpr int32_t EOF_ { int32_t(-1) };
protected:
    void ctor(::java::io::InputStream* is);

public:
    int32_t available() override;
    int8_t readByte() override;
    int32_t readUByte() override;
    double readDouble() override;
    int32_t readInt() override;
    virtual int64_t readUInt();
    int64_t readLong() override;
    int16_t readShort() override;
    int32_t readUShort() override;

private:
    static void checkEOF(int32_t actualBytes, int32_t expectedBytes);

public:
    void readFully(::int8_tArray* buf) override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;

private:
    int32_t _read(::int8_tArray* buffer, int32_t offset, int32_t length) /* throws(IOException) */;

public:
    void readPlain(::int8_tArray* buf, int32_t off, int32_t len) override;

    // Generated
    LittleEndianInputStream(::java::io::InputStream* is);
protected:
    LittleEndianInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
