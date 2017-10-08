// Generated from /POI/java/org/apache/poi/hssf/record/LabelRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::LabelRecord final
    : public Record
    , public CellValueRecordInterface
    , public ::java::lang::Cloneable
{

public:
    typedef Record super;

private:
    static ::poi::util::POILogger* logger_;

public:
    static constexpr int16_t sid { int16_t(516) };

private:
    int32_t field_1_row {  };
    int16_t field_2_column {  };
    int16_t field_3_xf_index {  };
    int16_t field_4_string_len {  };
    int8_t field_5_unicode_flag {  };
    ::java::lang::String* field_6_value {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    int32_t getRow() override;
    int16_t getColumn() override;
    int16_t getXFIndex() override;
    int16_t getStringLength();
    bool isUnCompressedUnicode();
    ::java::lang::String* getValue();
    int32_t serialize(int32_t offset, ::int8_tArray* data) override;
    int32_t getRecordSize() override;
    int16_t getSid() override;
    ::java::lang::String* toString() override;
    void setColumn(int16_t col) override;
    void setRow(int32_t row) override;
    void setXFIndex(int16_t xf) override;
    LabelRecord* clone() override;

    // Generated
    LabelRecord();
    LabelRecord(RecordInputStream* in);
protected:
    LabelRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    ::int8_tArray* serialize();

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
