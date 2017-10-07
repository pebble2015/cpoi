// Generated from /POI/java/org/apache/poi/hssf/record/pivottable/ViewDefinitionRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/pivottable/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::pivottable::ViewDefinitionRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(176) };

private:
    int32_t rwFirst {  };
    int32_t rwLast {  };
    int32_t colFirst {  };
    int32_t colLast {  };
    int32_t rwFirstHead {  };
    int32_t rwFirstData {  };
    int32_t colFirstData {  };
    int32_t iCache {  };
    int32_t reserved {  };
    int32_t sxaxis4Data {  };
    int32_t ipos4Data {  };
    int32_t cDim {  };
    int32_t cDimRw {  };
    int32_t cDimCol {  };
    int32_t cDimPg {  };
    int32_t cDimData {  };
    int32_t cRw {  };
    int32_t cCol {  };
    int32_t grbit {  };
    int32_t itblAutoFmt {  };
    ::java::lang::String* dataField {  };
    ::java::lang::String* name {  };
protected:
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public: /* protected */
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::String* toString() override;

    // Generated
    ViewDefinitionRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    ViewDefinitionRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
