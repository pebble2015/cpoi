// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(4) };

private:
    int32_t rtFirst {  };
    int32_t rtLast {  };
protected:
    void ctor(::poi::util::LittleEndianInput* in);

public:
    void serialize(::poi::util::LittleEndianOutput* out);

    // Generated
    ChartFRTInfoRecord_CFRTID(::poi::util::LittleEndianInput* in);
protected:
    ChartFRTInfoRecord_CFRTID(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ChartFRTInfoRecord;
};
