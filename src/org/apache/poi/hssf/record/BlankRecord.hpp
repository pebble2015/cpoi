// Generated from /POI/java/org/apache/poi/hssf/record/BlankRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::BlankRecord final
    : public StandardRecord
    , public CellValueRecordInterface
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(513) };

private:
    int32_t field_1_row {  };
    int16_t field_2_col {  };
    int16_t field_3_xf {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setRow(int32_t row) override;
    int32_t getRow() override;
    int16_t getColumn() override;
    void setXFIndex(int16_t xf) override;
    int16_t getXFIndex() override;
    void setColumn(int16_t col) override;
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    BlankRecord* clone() override;

    // Generated
    BlankRecord();
    BlankRecord(RecordInputStream* in);
protected:
    BlankRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
