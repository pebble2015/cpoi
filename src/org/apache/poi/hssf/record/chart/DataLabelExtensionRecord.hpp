// Generated from /POI/java/org/apache/poi/hssf/record/chart/DataLabelExtensionRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::DataLabelExtensionRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(2154) };

private:
    int32_t rt {  };
    int32_t grbitFrt {  };
    ::int8_tArray* unused {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

public: /* protected */
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public:
    ::java::lang::String* toString() override;

    // Generated
    DataLabelExtensionRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    DataLabelExtensionRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    void init();

public:
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
