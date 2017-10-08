// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisLineFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::AxisLineFormatRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4129) };

private:
    int16_t field_1_axisType {  };

public:
    static constexpr int16_t AXIS_TYPE_AXIS_LINE { int16_t(0) };
    static constexpr int16_t AXIS_TYPE_MAJOR_GRID_LINE { int16_t(1) };
    static constexpr int16_t AXIS_TYPE_MINOR_GRID_LINE { int16_t(2) };
    static constexpr int16_t AXIS_TYPE_WALLS_OR_FLOOR { int16_t(3) };
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
    AxisLineFormatRecord* clone() override;
    int16_t getAxisType();
    void setAxisType(int16_t field_1_axisType);

    // Generated
    AxisLineFormatRecord();
    AxisLineFormatRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    AxisLineFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
