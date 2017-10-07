// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesTextRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::SeriesTextRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4109) };

private:
    static constexpr int32_t MAX_LEN { int32_t(255) };
    int32_t field_1_id {  };
    bool is16bit {  };
    ::java::lang::String* field_4_text {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;
    int32_t getId();
    void setId(int32_t id);
    ::java::lang::String* getText();
    void setText(::java::lang::String* text);

    // Generated
    SeriesTextRecord();
    SeriesTextRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    SeriesTextRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
