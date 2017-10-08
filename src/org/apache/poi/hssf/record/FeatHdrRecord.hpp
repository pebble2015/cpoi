// Generated from /POI/java/org/apache/poi/hssf/record/FeatHdrRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::FeatHdrRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int32_t SHAREDFEATURES_ISFPROTECTION { int32_t(2) };
    static constexpr int32_t SHAREDFEATURES_ISFFEC2 { int32_t(3) };
    static constexpr int32_t SHAREDFEATURES_ISFFACTOID { int32_t(4) };
    static constexpr int32_t SHAREDFEATURES_ISFLIST { int32_t(5) };
    static constexpr int16_t sid { int16_t(2151) };

private:
    ::poi::hssf::record::common::FtrHeader* futureHeader {  };
    int32_t isf_sharedFeatureType {  };
    int8_t reserved {  };
    int64_t cbHdrData {  };
    ::int8_tArray* rgbHdrData {  };
protected:
    void ctor();

public:
    int16_t getSid() override;
protected:
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    FeatHdrRecord* clone() override;

    // Generated
    FeatHdrRecord();
    FeatHdrRecord(RecordInputStream* in);
protected:
    FeatHdrRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
