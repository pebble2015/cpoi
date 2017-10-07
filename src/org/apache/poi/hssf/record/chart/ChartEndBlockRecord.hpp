// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartEndBlockRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::ChartEndBlockRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(2131) };

private:
    int16_t rt {  };
    int16_t grbitFrt {  };
    int16_t iObjectKind {  };
    ::int8_tArray* unused {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toString() override;
    ChartEndBlockRecord* clone() override;

    // Generated
    ChartEndBlockRecord();
    ChartEndBlockRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    ChartEndBlockRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
