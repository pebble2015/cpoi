// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartTitleFormatRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::ChartTitleFormatRecord_CTFormat final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(4) };

private:
    int32_t _offset {  };
    int32_t _fontIndex {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    int32_t getOffset();
    void setOffset(int32_t newOff);
    int32_t getFontIndex();
    void serialize(::org::apache::poi::util::LittleEndianOutput* out);

    // Generated
    ChartTitleFormatRecord_CTFormat(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    ChartTitleFormatRecord_CTFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ChartTitleFormatRecord;
};
