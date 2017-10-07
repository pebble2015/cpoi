// Generated from /POI/java/org/apache/poi/hssf/record/chart/AxisParentRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::AxisParentRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4161) };

private:
    int16_t field_1_axisType {  };

public:
    static constexpr int16_t AXIS_TYPE_MAIN { int16_t(0) };
    static constexpr int16_t AXIS_TYPE_SECONDARY { int16_t(1) };

private:
    int32_t field_2_x {  };
    int32_t field_3_y {  };
    int32_t field_4_width {  };
    int32_t field_5_height {  };
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
    AxisParentRecord* clone() override;
    int16_t getAxisType();
    void setAxisType(int16_t field_1_axisType);
    int32_t getX();
    void setX(int32_t field_2_x);
    int32_t getY();
    void setY(int32_t field_3_y);
    int32_t getWidth();
    void setWidth(int32_t field_4_width);
    int32_t getHeight();
    void setHeight(int32_t field_5_height);

    // Generated
    AxisParentRecord();
    AxisParentRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    AxisParentRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
