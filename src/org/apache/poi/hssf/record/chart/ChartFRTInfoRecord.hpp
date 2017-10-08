// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace chart
            {
typedef ::SubArray< ::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID, ::java::lang::ObjectArray > ChartFRTInfoRecord_CFRTIDArray;
            } // chart
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::chart::ChartFRTInfoRecord final
    : public ::poi::hssf::record::StandardRecord
{

public:
    typedef ::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(2128) };

private:
    int16_t rt {  };
    int16_t grbitFrt {  };
    int8_t verOriginator {  };
    int8_t verWriter {  };
    ChartFRTInfoRecord_CFRTIDArray* rgCFRTID {  };
protected:
    void ctor(::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;
    ::java::lang::String* toString() override;

    // Generated
    ChartFRTInfoRecord(::poi::hssf::record::RecordInputStream* in);
protected:
    ChartFRTInfoRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ChartFRTInfoRecord_CFRTID;
};
