// Generated from /POI/java/org/apache/poi/hssf/record/chart/PlotGrowthRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::chart::PlotGrowthRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4196) };

private:
    int32_t field_1_horizontalScale {  };
    int32_t field_2_verticalScale {  };
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
    int32_t getHorizontalScale();
    void setHorizontalScale(int32_t field_1_horizontalScale);
    int32_t getVerticalScale();
    void setVerticalScale(int32_t field_2_verticalScale);

    // Generated
    PlotGrowthRecord();
    PlotGrowthRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    PlotGrowthRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
