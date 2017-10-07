// Generated from /POI/java/org/apache/poi/hssf/record/RecordInputStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RecordInputStream final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::util::LittleEndianInput
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t MAX_RECORD_DATA_SIZE { int16_t(8224) };

private:
    static constexpr int32_t INVALID_SID_VALUE { int32_t(-1) };
    static constexpr int32_t DATA_LEN_NEEDS_TO_BE_READ { int32_t(-1) };
    static ::int8_tArray* EMPTY_BYTE_ARRAY_;
    BiffHeaderInput* _bhi {  };
    ::org::apache::poi::util::LittleEndianInput* _dataInput {  };
    int32_t _currentSid {  };
    int32_t _currentDataLength {  };
    int32_t _nextSid {  };
    int32_t _currentDataOffset {  };
    int32_t _markedDataOffset {  };
protected:
    void ctor(::java::io::InputStream* in) /* throws(RecordFormatException) */;
    void ctor(::java::io::InputStream* in, ::org::apache::poi::poifs::crypt::EncryptionInfo* key, int32_t initialOffset) /* throws(RecordFormatException) */;

public: /* package */
    static ::org::apache::poi::util::LittleEndianInput* getLEI(::java::io::InputStream* is);

public:
    int32_t available() override;
    int32_t read(::int8_tArray* b, int32_t off, int32_t len);
    int16_t getSid();
    bool hasNextRecord() /* throws(LeftoverDataException) */;

private:
    int32_t readNextSid();

public:
    void nextRecord() /* throws(RecordFormatException) */;

private:
    void checkRecordPosition(int32_t requiredByteCount);

public:
    int8_t readByte() override;
    int16_t readShort() override;
    int32_t readInt() override;
    int64_t readLong() override;
    int32_t readUByte() override;
    int32_t readUShort() override;
    double readDouble() override;
    void readPlain(::int8_tArray* buf, int32_t off, int32_t len) override;
    void readFully(::int8_tArray* buf) override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;

public: /* protected */
    void readFully(::int8_tArray* buf, int32_t off, int32_t len, bool isPlain);

public:
    ::java::lang::String* readString();
    ::java::lang::String* readUnicodeLEString(int32_t requestedLength);
    ::java::lang::String* readCompressedUnicode(int32_t requestedLength);

private:
    ::java::lang::String* readStringCommon(int32_t requestedLength, bool pIsCompressedEncoding);

public:
    ::int8_tArray* readRemainder();
    ::int8_tArray* readAllContinuedRemainder();
    int32_t remaining();

private:
    bool isContinueNext();

public:
    int32_t getNextSid();
    void mark(int32_t readlimit);
    void reset() /* throws(IOException) */;

    // Generated
    RecordInputStream(::java::io::InputStream* in);
    RecordInputStream(::java::io::InputStream* in, ::org::apache::poi::poifs::crypt::EncryptionInfo* key, int32_t initialOffset);
protected:
    RecordInputStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::int8_tArray*& EMPTY_BYTE_ARRAY();
    virtual ::java::lang::Class* getClass0();
    friend class RecordInputStream_LeftoverDataException;
    friend class RecordInputStream_SimpleHeaderInput;
};
