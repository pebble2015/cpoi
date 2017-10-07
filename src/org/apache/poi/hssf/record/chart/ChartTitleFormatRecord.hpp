// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartTitleFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
                    namespace chart
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat, ::java::lang::ObjectArray > ChartTitleFormatRecord_CTFormatArray;
                    } // chart
                } // record
            } // hssf
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::record::chart::ChartTitleFormatRecord
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4176) };

private:
    ChartTitleFormatRecord_CTFormatArray* _formats {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    virtual int32_t getFormatCount();
    virtual void modifyFormatRun(int16_t oldPos, int16_t newLen);
    ::java::lang::String* toString() override;

    // Generated
    ChartTitleFormatRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    ChartTitleFormatRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ChartTitleFormatRecord_CTFormat;
};
