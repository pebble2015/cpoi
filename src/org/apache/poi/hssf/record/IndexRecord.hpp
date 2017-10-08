// Generated from /POI/java/org/apache/poi/hssf/record/IndexRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::IndexRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(523) };

private:
    int32_t field_2_first_row {  };
    int32_t field_3_last_row_add1 {  };
    int32_t field_4_zero {  };
    ::poi::util::IntList* field_5_dbcells {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setFirstRow(int32_t row);
    void setLastRowAdd1(int32_t row);
    void addDbcell(int32_t cell);
    void setDbcell(int32_t cell, int32_t value);
    int32_t getFirstRow();
    int32_t getLastRowAdd1();
    int32_t getNumDbcells();
    int32_t getDbcellAt(int32_t cellnum);
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    static int32_t getRecordSizeForBlockCount(int32_t blockCount);
    int16_t getSid() override;
    IndexRecord* clone() override;

    // Generated
    IndexRecord();
    IndexRecord(RecordInputStream* in);
protected:
    IndexRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
