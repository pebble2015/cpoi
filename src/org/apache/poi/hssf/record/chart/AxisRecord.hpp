// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::AxisRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4125) };

private:
    int16_t field_1_axisType {  };

public:
    static constexpr int16_t AXIS_TYPE_CATEGORY_OR_X_AXIS { int16_t(0) };
    static constexpr int16_t AXIS_TYPE_VALUE_AXIS { int16_t(1) };
    static constexpr int16_t AXIS_TYPE_SERIES_AXIS { int16_t(2) };

private:
    int32_t field_2_reserved1 {  };
    int32_t field_3_reserved2 {  };
    int32_t field_4_reserved3 {  };
    int32_t field_5_reserved4 {  };
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
    AxisRecord* clone() override;
    int16_t getAxisType();
    void setAxisType(int16_t field_1_axisType);
    int32_t getReserved1();
    void setReserved1(int32_t field_2_reserved1);
    int32_t getReserved2();
    void setReserved2(int32_t field_3_reserved2);
    int32_t getReserved3();
    void setReserved3(int32_t field_4_reserved3);
    int32_t getReserved4();
    void setReserved4(int32_t field_5_reserved4);

    // Generated
    AxisRecord();
    AxisRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    AxisRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
