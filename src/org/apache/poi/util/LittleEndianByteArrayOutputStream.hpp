// Generated from /POI/java/org/apache/poi/util/LittleEndianByteArrayOutputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/io/OutputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <org/apache/poi/util/DelayableLittleEndianOutput.hpp>

struct default_init_tag;

class org::apache::poi::util::LittleEndianByteArrayOutputStream final
    : public ::java::io::OutputStream
    , public virtual LittleEndianOutput
    , public DelayableLittleEndianOutput
{

public:
    typedef ::java::io::OutputStream super;

private:
    ::int8_tArray* _buf {  };
    int32_t _endIndex {  };
    int32_t _writeIndex {  };
protected:
    void ctor(::int8_tArray* buf, int32_t startOffset, int32_t maxWriteLen);
    void ctor(::int8_tArray* buf, int32_t startOffset);

private:
    void checkPosition(int32_t i);

public:
    void writeByte(int32_t v) override;
    void writeDouble(double v) override;
    void writeInt(int32_t v) override;
    void writeLong(int64_t v) override;
    void writeShort(int32_t v) override;
    void write(int32_t b) override;
    void write(::int8_tArray* b) override;
    void write(::int8_tArray* b, int32_t offset, int32_t len) override;
    int32_t getWriteIndex();
    LittleEndianOutput* createDelayedOutput(int32_t size) override;

    // Generated
    LittleEndianByteArrayOutputStream(::int8_tArray* buf, int32_t startOffset, int32_t maxWriteLen);
    LittleEndianByteArrayOutputStream(::int8_tArray* buf, int32_t startOffset);
protected:
    LittleEndianByteArrayOutputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
