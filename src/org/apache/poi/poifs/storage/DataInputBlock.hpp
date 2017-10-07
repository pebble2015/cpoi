// Generated from /POI/java/org/apache/poi/poifs/storage/DataInputBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::poifs::storage::DataInputBlock final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    ::int8_tArray* _buf {  };
    int32_t _readIndex {  };
    int32_t _maxIndex {  };
protected:
    void ctor(::int8_tArray* data, int32_t startOffset);

public:
    int32_t available();
    int32_t readUByte();
    int32_t readUShortLE();
    int32_t readUShortLE(DataInputBlock* prevBlock);
    int32_t readIntLE();
    int32_t readIntLE(DataInputBlock* prevBlock, int32_t prevBlockAvailable);
    int64_t readLongLE();
    int64_t readLongLE(DataInputBlock* prevBlock, int32_t prevBlockAvailable);

private:
    void readSpanning(DataInputBlock* prevBlock, int32_t prevBlockAvailable, ::int8_tArray* buf);

public:
    void readFully(::int8_tArray* buf, int32_t off, int32_t len);

    // Generated

public: /* package */
    DataInputBlock(::int8_tArray* data, int32_t startOffset);
protected:
    DataInputBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
