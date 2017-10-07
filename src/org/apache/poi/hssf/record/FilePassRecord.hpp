// Generated from /POI/java/org/apache/poi/hssf/record/FilePassRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/poifs/crypt/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::FilePassRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(47) };

private:
    static constexpr int32_t ENCRYPTION_XOR { int32_t(0) };
    static constexpr int32_t ENCRYPTION_OTHER { int32_t(1) };
    int32_t encryptionType {  };
    ::org::apache::poi::poifs::crypt::EncryptionInfo* encryptionInfo {  };
protected:
    void ctor(FilePassRecord* other);
    void ctor(::org::apache::poi::poifs::crypt::EncryptionMode* encryptionMode);
    void ctor(RecordInputStream* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    ::org::apache::poi::poifs::crypt::EncryptionInfo* getEncryptionInfo();
    int16_t getSid() override;
    FilePassRecord* clone() override;
    ::java::lang::String* toString() override;

    // Generated

private:
    FilePassRecord(FilePassRecord* other);

public:
    FilePassRecord(::org::apache::poi::poifs::crypt::EncryptionMode* encryptionMode);
    FilePassRecord(RecordInputStream* in);
protected:
    FilePassRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
