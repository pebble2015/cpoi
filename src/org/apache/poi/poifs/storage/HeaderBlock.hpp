// Generated from /POI/java/org/apache/poi/poifs/storage/HeaderBlock.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/nio/fwd-POI.hpp>
#include <org/apache/poi/poifs/common/fwd-POI.hpp>
#include <org/apache/poi/poifs/storage/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/poifs/storage/HeaderBlockConstants.hpp>

struct default_init_tag;

class poi::poifs::storage::HeaderBlock final
    : public virtual ::java::lang::Object
    , public HeaderBlockConstants
{

public:
    typedef ::java::lang::Object super;

private:
    static constexpr int8_t _default_value { int8_t(-1) };
    ::poi::poifs::common::POIFSBigBlockSize* bigBlockSize {  };
    int32_t _bat_count {  };
    int32_t _property_start {  };
    int32_t _sbat_start {  };
    int32_t _sbat_count {  };
    int32_t _xbat_start {  };
    int32_t _xbat_count {  };
    ::int8_tArray* _data {  };
protected:
    void ctor(::java::io::InputStream* stream) /* throws(IOException) */;
    void ctor(::java::nio::ByteBuffer* buffer) /* throws(IOException) */;
    void ctor(::int8_tArray* data) /* throws(IOException) */;
    void ctor(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);

private:
    static ::int8_tArray* readFirst512(::java::io::InputStream* stream) /* throws(IOException) */;
    static ::java::io::IOException* alertShortRead(int32_t pRead, int32_t expectedReadSize);

public:
    int32_t getPropertyStart();
    void setPropertyStart(int32_t startBlock);
    int32_t getSBATStart();
    int32_t getSBATCount();
    void setSBATStart(int32_t startBlock);
    void setSBATBlockCount(int32_t count);
    int32_t getBATCount();
    void setBATCount(int32_t count);
    ::int32_tArray* getBATArray_();
    void setBATArray_(::int32_tArray* bat_array);
    int32_t getXBATCount();
    void setXBATCount(int32_t count);
    int32_t getXBATIndex();
    void setXBATStart(int32_t startBlock);
    ::poi::poifs::common::POIFSBigBlockSize* getBigBlockSize();

public: /* package */
    void writeData(::java::io::OutputStream* stream) /* throws(IOException) */;

    // Generated

public:
    HeaderBlock(::java::io::InputStream* stream);
    HeaderBlock(::java::nio::ByteBuffer* buffer);

private:
    HeaderBlock(::int8_tArray* data);

public:
    HeaderBlock(::poi::poifs::common::POIFSBigBlockSize* bigBlockSize);
protected:
    HeaderBlock(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
