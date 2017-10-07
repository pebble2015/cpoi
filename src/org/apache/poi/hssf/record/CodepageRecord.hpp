// Generated from /POI/java/org/apache/poi/hssf/record/CodepageRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::CodepageRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(66) };

private:
    int16_t field_1_codepage {  };

public:
    static constexpr int16_t CODEPAGE { int16_t(1200) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setCodepage(int16_t cp);
    int16_t getCodepage();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    CodepageRecord();
    CodepageRecord(RecordInputStream* in);
protected:
    CodepageRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
