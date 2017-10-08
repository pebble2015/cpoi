// Generated from /POI/java/org/apache/poi/hssf/record/FeatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/common/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

struct default_init_tag;

class poi::hssf::record::FeatRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;

private:
    static ::poi::util::POILogger* logger_;

public:
    static constexpr int16_t sid { int16_t(2152) };
    static constexpr int16_t v11_sid { int16_t(2162) };
    static constexpr int16_t v12_sid { int16_t(2168) };

private:
    ::poi::hssf::record::common::FtrHeader* futureHeader {  };
    int32_t isf_sharedFeatureType {  };
    int8_t reserved1 {  };
    int64_t reserved2 {  };
    int64_t cbFeatData {  };
    int32_t reserved3 {  };
    ::poi::ss::util::CellRangeAddressArray* cellRefs {  };
    ::poi::hssf::record::common::SharedFeature* sharedFeature {  };
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
    int32_t getIsf_sharedFeatureType();
    int64_t getCbFeatData();
    void setCbFeatData(int64_t cbFeatData);
    ::poi::ss::util::CellRangeAddressArray* getCellRefs();
    void setCellRefs(::poi::ss::util::CellRangeAddressArray* cellRefs);
    ::poi::hssf::record::common::SharedFeature* getSharedFeature();
    void setSharedFeature(::poi::hssf::record::common::SharedFeature* feature);
    FeatRecord* clone() override;

    // Generated
    FeatRecord();
    FeatRecord(RecordInputStream* in);
protected:
    FeatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
