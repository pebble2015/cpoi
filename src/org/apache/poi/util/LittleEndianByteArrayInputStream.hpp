// Generated from /POI/java/org/apache/poi/util/LittleEndianByteArrayInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/ByteArrayInputStream.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

struct default_init_tag;

class org::apache::poi::util::LittleEndianByteArrayInputStream
    : public ::java::io::ByteArrayInputStream
    , public virtual LittleEndianInput
{

public:
    typedef ::java::io::ByteArrayInputStream super;
protected:
    void ctor(::int8_tArray* buf, int32_t startOffset, int32_t maxReadLen);
    void ctor(::int8_tArray* buf, int32_t startOffset);
    void ctor(::int8_tArray* buf);

public: /* protected */
    virtual void checkPosition(int32_t i);

public:
    virtual int32_t getReadIndex();
    virtual void setReadIndex(int32_t pos);
    int8_t readByte() override;
    int32_t readInt() override;
    int64_t readLong() override;
    int16_t readShort() override;
    int32_t readUByte() override;
    int32_t readUShort() override;
    virtual int64_t readUInt();
    double readDouble() override;
    void readFully(::int8_tArray* buffer, int32_t off, int32_t len) override;
    void readFully(::int8_tArray* buffer) override;
    void readPlain(::int8_tArray* buf, int32_t off, int32_t len) override;

    // Generated
    LittleEndianByteArrayInputStream(::int8_tArray* buf, int32_t startOffset, int32_t maxReadLen);
    LittleEndianByteArrayInputStream(::int8_tArray* buf, int32_t startOffset);
    LittleEndianByteArrayInputStream(::int8_tArray* buf);
protected:
    LittleEndianByteArrayInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    virtual int32_t available();

private:
    virtual ::java::lang::Class* getClass0();
};
