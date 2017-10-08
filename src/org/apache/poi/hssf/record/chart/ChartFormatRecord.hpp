// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::chart::ChartFormatRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4116) };

private:
    static ::poi::util::BitField* varyDisplayPattern_;
    int32_t field1_x_position {  };
    int32_t field2_y_position {  };
    int32_t field3_width {  };
    int32_t field4_height {  };
    int32_t field5_grbit {  };
    int32_t field6_unknown {  };
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
    int32_t getXPosition();
    void setXPosition(int32_t xPosition);
    int32_t getYPosition();
    void setYPosition(int32_t yPosition);
    int32_t getWidth();
    void setWidth(int32_t width);
    int32_t getHeight();
    void setHeight(int32_t height);
    bool getVaryDisplayPattern();
    void setVaryDisplayPattern(bool value);

    // Generated
    ChartFormatRecord();
    ChartFormatRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ChartFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& varyDisplayPattern();
    virtual ::java::lang::Class* getClass0();
};
