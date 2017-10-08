// Generated from /POI/java/org/apache/poi/hssf/record/CRNCountRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::CRNCountRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(89) };

private:
    static constexpr int16_t DATA_SIZE { int16_t(4) };
    int32_t field_1_number_crn_records {  };
    int32_t field_2_sheet_table_index {  };
protected:
    void ctor();

public:
    int32_t getNumberOfCRNs();
protected:
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    CRNCountRecord();
    CRNCountRecord(RecordInputStream* in);
protected:
    CRNCountRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
