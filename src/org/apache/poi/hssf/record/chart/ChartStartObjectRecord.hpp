// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartStartObjectRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::chart::ChartStartObjectRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(2132) };

private:
    int16_t rt {  };
    int16_t grbitFrt {  };
    int16_t iObjectKind {  };
    int16_t iObjectContext {  };
    int16_t iObjectInstance1 {  };
    int16_t iObjectInstance2 {  };
protected:
    void ctor(::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toString() override;

    // Generated
    ChartStartObjectRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ChartStartObjectRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
