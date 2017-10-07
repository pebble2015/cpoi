// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::SeriesRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4099) };

private:
    int16_t field_1_categoryDataType {  };

public:
    static constexpr int16_t CATEGORY_DATA_TYPE_DATES { int16_t(0) };
    static constexpr int16_t CATEGORY_DATA_TYPE_NUMERIC { int16_t(1) };
    static constexpr int16_t CATEGORY_DATA_TYPE_SEQUENCE { int16_t(2) };
    static constexpr int16_t CATEGORY_DATA_TYPE_TEXT { int16_t(3) };

private:
    int16_t field_2_valuesDataType {  };

public:
    static constexpr int16_t VALUES_DATA_TYPE_DATES { int16_t(0) };
    static constexpr int16_t VALUES_DATA_TYPE_NUMERIC { int16_t(1) };
    static constexpr int16_t VALUES_DATA_TYPE_SEQUENCE { int16_t(2) };
    static constexpr int16_t VALUES_DATA_TYPE_TEXT { int16_t(3) };

private:
    int16_t field_3_numCategories {  };
    int16_t field_4_numValues {  };
    int16_t field_5_bubbleSeriesType {  };

public:
    static constexpr int16_t BUBBLE_SERIES_TYPE_DATES { int16_t(0) };
    static constexpr int16_t BUBBLE_SERIES_TYPE_NUMERIC { int16_t(1) };
    static constexpr int16_t BUBBLE_SERIES_TYPE_SEQUENCE { int16_t(2) };
    static constexpr int16_t BUBBLE_SERIES_TYPE_TEXT { int16_t(3) };

private:
    int16_t field_6_numBubbleValues {  };
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
    int16_t getCategoryDataType();
    void setCategoryDataType(int16_t field_1_categoryDataType);
    int16_t getValuesDataType();
    void setValuesDataType(int16_t field_2_valuesDataType);
    int16_t getNumCategories();
    void setNumCategories(int16_t field_3_numCategories);
    int16_t getNumValues();
    void setNumValues(int16_t field_4_numValues);
    int16_t getBubbleSeriesType();
    void setBubbleSeriesType(int16_t field_5_bubbleSeriesType);
    int16_t getNumBubbleValues();
    void setNumBubbleValues(int16_t field_6_numBubbleValues);

    // Generated
    SeriesRecord();
    SeriesRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    SeriesRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
