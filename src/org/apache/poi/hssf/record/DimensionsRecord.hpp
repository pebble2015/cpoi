// Generated from /POI/java/org/apache/poi/hssf/record/DimensionsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DimensionsRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;

private:
    static ::org::apache::poi::util::POILogger* logger_;

public:
    static constexpr int16_t sid { int16_t(512) };

private:
    int32_t field_1_first_row {  };
    int32_t field_2_last_row {  };
    int16_t field_3_first_col {  };
    int16_t field_4_last_col {  };
    int16_t field_5_zero {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setFirstRow(int32_t row);
    void setLastRow(int32_t row);
    void setFirstCol(int16_t col);
    void setLastCol(int16_t col);
    int32_t getFirstRow();
    int32_t getLastRow();
    int16_t getFirstCol();
    int16_t getLastCol();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DimensionsRecord* clone() override;

    // Generated
    DimensionsRecord();
    DimensionsRecord(RecordInputStream* in);
protected:
    DimensionsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
