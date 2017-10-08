// Generated from /POI/java/org/apache/poi/hssf/record/chart/LineFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::LineFormatRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4103) };

private:
    static ::poi::util::BitField* auto__;
    static ::poi::util::BitField* drawTicks_;
    static ::poi::util::BitField* unknown_;
    int32_t field_1_lineColor {  };
    int16_t field_2_linePattern {  };

public:
    static constexpr int16_t LINE_PATTERN_SOLID { int16_t(0) };
    static constexpr int16_t LINE_PATTERN_DASH { int16_t(1) };
    static constexpr int16_t LINE_PATTERN_DOT { int16_t(2) };
    static constexpr int16_t LINE_PATTERN_DASH_DOT { int16_t(3) };
    static constexpr int16_t LINE_PATTERN_DASH_DOT_DOT { int16_t(4) };
    static constexpr int16_t LINE_PATTERN_NONE { int16_t(5) };
    static constexpr int16_t LINE_PATTERN_DARK_GRAY_PATTERN { int16_t(6) };
    static constexpr int16_t LINE_PATTERN_MEDIUM_GRAY_PATTERN { int16_t(7) };
    static constexpr int16_t LINE_PATTERN_LIGHT_GRAY_PATTERN { int16_t(8) };

private:
    int16_t field_3_weight {  };

public:
    static constexpr int16_t WEIGHT_HAIRLINE { int16_t(-1) };
    static constexpr int16_t WEIGHT_NARROW { int16_t(0) };
    static constexpr int16_t WEIGHT_MEDIUM { int16_t(1) };
    static constexpr int16_t WEIGHT_WIDE { int16_t(2) };

private:
    int16_t field_4_format {  };
    int16_t field_5_colourPaletteIndex {  };
protected:
    void ctor();
    void ctor(::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    LineFormatRecord* clone() override;
    int32_t getLineColor();
    void setLineColor(int32_t field_1_lineColor);
    int16_t getLinePattern();
    void setLinePattern(int16_t field_2_linePattern);
    int16_t getWeight();
    void setWeight(int16_t field_3_weight);
    int16_t getFormat();
    void setFormat(int16_t field_4_format);
    int16_t getColourPaletteIndex();
    void setColourPaletteIndex(int16_t field_5_colourPaletteIndex);
    void setAuto(bool value);
    bool isAuto();
    void setDrawTicks(bool value);
    bool isDrawTicks();
    void setUnknown(bool value);
    bool isUnknown();

    // Generated
    LineFormatRecord();
    LineFormatRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    LineFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& auto_();
    static ::poi::util::BitField*& drawTicks();
    static ::poi::util::BitField*& unknown();
    virtual ::java::lang::Class* getClass0();
};
