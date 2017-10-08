// Generated from /POI/java/org/apache/poi/hssf/record/crypto/Biff8DecryptingStream.java

#pragma once

#include <fwd-POI.hpp>
#include <java/io/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/crypto/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/BiffHeaderInput.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>

struct default_init_tag;

class poi::hssf::record::crypto::Biff8DecryptingStream final
    : public virtual ::java::lang::Object
    , public ::poi::hssf::record::BiffHeaderInput
    , public ::poi::util::LittleEndianInput
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t RC4_REKEYING_INTERVAL { int32_t(1024) };

private:
    ::poi::poifs::crypt::EncryptionInfo* info {  };
    ::poi::poifs::crypt::ChunkedCipherInputStream* ccis {  };
    ::int8_tArray* buffer {  };
    bool shouldSkipEncryptionOnCurrentRecord {  };
protected:
    void ctor(::java::io::InputStream* in, int32_t initialOffset, ::poi::poifs::crypt::EncryptionInfo* info) /* throws(RecordFormatException) */;

public:
    int32_t available() override;
    int32_t readRecordSID() override;
    int32_t readDataSize() override;
    double readDouble() override;
    void readFully(::int8_tArray* buf) override;
    void readFully(::int8_tArray* buf, int32_t off, int32_t len) override;
    int32_t readUByte() override;
    int8_t readByte() override;
    int32_t readUShort() override;
    int16_t readShort() override;
    int32_t readInt() override;
    int64_t readLong() override;
    int64_t getPosition();
    static bool isNeverEncryptedRecord(int32_t sid);
    void readPlain(::int8_tArray* b, int32_t off, int32_t len) override;

    // Generated
    Biff8DecryptingStream(::java::io::InputStream* in, int32_t initialOffset, ::poi::poifs::crypt::EncryptionInfo* info);
protected:
    Biff8DecryptingStream(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();
    virtual ::java::lang::Class* getClass0();
};
