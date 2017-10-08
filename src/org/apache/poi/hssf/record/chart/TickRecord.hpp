// Generated from /POI/java/org/apache/poi/hssf/record/chart/TickRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::chart::TickRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4126) };

private:
    static ::poi::util::BitField* autoTextColor_;
    static ::poi::util::BitField* autoTextBackground_;
    static ::poi::util::BitField* rotation_;
    static ::poi::util::BitField* autorotate_;
    int8_t field_1_majorTickType {  };
    int8_t field_2_minorTickType {  };
    int8_t field_3_labelPosition {  };
    int8_t field_4_background {  };
    int32_t field_5_labelColorRgb {  };
    int32_t field_6_zero1 {  };
    int32_t field_7_zero2 {  };
    int32_t field_8_zero3 {  };
    int32_t field_9_zero4 {  };
    int16_t field_10_options {  };
    int16_t field_11_tickColor {  };
    int16_t field_12_zero5 {  };
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
    ::java::lang::Object* clone() override;
    int8_t getMajorTickType();
    void setMajorTickType(int8_t field_1_majorTickType);
    int8_t getMinorTickType();
    void setMinorTickType(int8_t field_2_minorTickType);
    int8_t getLabelPosition();
    void setLabelPosition(int8_t field_3_labelPosition);
    int8_t getBackground();
    void setBackground(int8_t field_4_background);
    int32_t getLabelColorRgb();
    void setLabelColorRgb(int32_t field_5_labelColorRgb);
    int32_t getZero1();
    void setZero1(int32_t field_6_zero1);
    int32_t getZero2();
    void setZero2(int32_t field_7_zero2);
    int16_t getOptions();
    void setOptions(int16_t field_10_options);
    int16_t getTickColor();
    void setTickColor(int16_t field_11_tickColor);
    int16_t getZero3();
    void setZero3(int16_t field_12_zero3);
    void setAutoTextColor(bool value);
    bool isAutoTextColor();
    void setAutoTextBackground(bool value);
    bool isAutoTextBackground();
    void setRotation(int16_t value);
    int16_t getRotation();
    void setAutorotate(bool value);
    bool isAutorotate();

    // Generated
    TickRecord();
    TickRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    TickRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& autoTextColor();
    static ::poi::util::BitField*& autoTextBackground();
    static ::poi::util::BitField*& rotation();
    static ::poi::util::BitField*& autorotate();
    virtual ::java::lang::Class* getClass0();
};
