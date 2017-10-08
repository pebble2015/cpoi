// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::chart::ChartRecord final
    : public ::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4098) };

private:
    int32_t field_1_x {  };
    int32_t field_2_y {  };
    int32_t field_3_width {  };
    int32_t field_4_height {  };
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
    ChartRecord* clone() override;
    int32_t getX();
    void setX(int32_t x);
    int32_t getY();
    void setY(int32_t y);
    int32_t getWidth();
    void setWidth(int32_t width);
    int32_t getHeight();
    void setHeight(int32_t height);

    // Generated
    ChartRecord();
    ChartRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ChartRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
