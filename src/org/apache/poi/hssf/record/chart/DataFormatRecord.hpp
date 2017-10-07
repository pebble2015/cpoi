// Generated from /POI/java/org/apache/poi/hssf/record/chart/DataFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::DataFormatRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4102) };

private:
    static ::org::apache::poi::util::BitField* useExcel4Colors_;
    int16_t field_1_pointNumber {  };
    int16_t field_2_seriesIndex {  };
    int16_t field_3_seriesNumber {  };
    int16_t field_4_formatFlags {  };
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
    DataFormatRecord* clone() override;
    int16_t getPointNumber();
    void setPointNumber(int16_t field_1_pointNumber);
    int16_t getSeriesIndex();
    void setSeriesIndex(int16_t field_2_seriesIndex);
    int16_t getSeriesNumber();
    void setSeriesNumber(int16_t field_3_seriesNumber);
    int16_t getFormatFlags();
    void setFormatFlags(int16_t field_4_formatFlags);
    void setUseExcel4Colors(bool value);
    bool isUseExcel4Colors();

    // Generated
    DataFormatRecord();
    DataFormatRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    DataFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& useExcel4Colors();
    virtual ::java::lang::Class* getClass0();
};
