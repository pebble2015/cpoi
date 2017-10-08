// Generated from /POI/java/org/apache/poi/hssf/record/WriteAccessRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::WriteAccessRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(92) };

private:
    static constexpr int8_t PAD_CHAR { int8_t(32) };
    static constexpr int32_t DATA_SIZE { int32_t(112) };
    ::java::lang::String* field_1_username {  };
    static ::int8_tArray* PADDING_;
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setUsername(::java::lang::String* username);
    ::java::lang::String* getUsername();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    WriteAccessRecord();
    WriteAccessRecord(RecordInputStream* in);
protected:
    WriteAccessRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::int8_tArray*& PADDING();
    virtual ::java::lang::Class* getClass0();
};
