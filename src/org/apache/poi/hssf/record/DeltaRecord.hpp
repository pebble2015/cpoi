// Generated from /POI/java/org/apache/poi/hssf/record/DeltaRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::DeltaRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(16) };
    static constexpr double DEFAULT_VALUE { 0.001 };

private:
    double field_1_max_change {  };
protected:
    void ctor(double maxChange);
    void ctor(RecordInputStream* in);

public:
    double getMaxChange();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DeltaRecord* clone() override;

    // Generated
    DeltaRecord(double maxChange);
    DeltaRecord(RecordInputStream* in);
protected:
    DeltaRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
