// Generated from /POI/java/org/apache/poi/hssf/record/chart/LegendRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::LegendRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4117) };

private:
    static ::org::apache::poi::util::BitField* autoPosition_;
    static ::org::apache::poi::util::BitField* autoSeries_;
    static ::org::apache::poi::util::BitField* autoXPositioning_;
    static ::org::apache::poi::util::BitField* autoYPositioning_;
    static ::org::apache::poi::util::BitField* vertical_;
    static ::org::apache::poi::util::BitField* dataTable_;
    int32_t field_1_xAxisUpperLeft {  };
    int32_t field_2_yAxisUpperLeft {  };
    int32_t field_3_xSize {  };
    int32_t field_4_ySize {  };
    int8_t field_5_type {  };

public:
    static constexpr int8_t TYPE_BOTTOM { int8_t(0) };
    static constexpr int8_t TYPE_CORNER { int8_t(1) };
    static constexpr int8_t TYPE_TOP { int8_t(2) };
    static constexpr int8_t TYPE_RIGHT { int8_t(3) };
    static constexpr int8_t TYPE_LEFT { int8_t(4) };
    static constexpr int8_t TYPE_UNDOCKED { int8_t(7) };

private:
    int8_t field_6_spacing {  };

public:
    static constexpr int8_t SPACING_CLOSE { int8_t(0) };
    static constexpr int8_t SPACING_MEDIUM { int8_t(1) };
    static constexpr int8_t SPACING_OPEN { int8_t(2) };

private:
    int16_t field_7_options {  };
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
    LegendRecord* clone() override;
    int32_t getXAxisUpperLeft();
    void setXAxisUpperLeft(int32_t field_1_xAxisUpperLeft);
    int32_t getYAxisUpperLeft();
    void setYAxisUpperLeft(int32_t field_2_yAxisUpperLeft);
    int32_t getXSize();
    void setXSize(int32_t field_3_xSize);
    int32_t getYSize();
    void setYSize(int32_t field_4_ySize);
    int8_t getType();
    void setType(int8_t field_5_type);
    int8_t getSpacing();
    void setSpacing(int8_t field_6_spacing);
    int16_t getOptions();
    void setOptions(int16_t field_7_options);
    void setAutoPosition(bool value);
    bool isAutoPosition();
    void setAutoSeries(bool value);
    bool isAutoSeries();
    void setAutoXPositioning(bool value);
    bool isAutoXPositioning();
    void setAutoYPositioning(bool value);
    bool isAutoYPositioning();
    void setVertical(bool value);
    bool isVertical();
    void setDataTable(bool value);
    bool isDataTable();

    // Generated
    LegendRecord();
    LegendRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    LegendRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::org::apache::poi::util::BitField*& autoPosition();
    static ::org::apache::poi::util::BitField*& autoSeries();
    static ::org::apache::poi::util::BitField*& autoXPositioning();
    static ::org::apache::poi::util::BitField*& autoYPositioning();
    static ::org::apache::poi::util::BitField*& vertical();
    static ::org::apache::poi::util::BitField*& dataTable();
    virtual ::java::lang::Class* getClass0();
};
