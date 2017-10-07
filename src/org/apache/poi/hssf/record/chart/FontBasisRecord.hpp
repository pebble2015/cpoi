// Generated from /POI/java/org/apache/poi/hssf/record/chart/FontBasisRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/chart/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::chart::FontBasisRecord final
    : public ::org::apache::poi::hssf::record::StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef ::org::apache::poi::hssf::record::StandardRecord super;
    static constexpr int16_t sid { int16_t(4192) };

private:
    int16_t field_1_xBasis {  };
    int16_t field_2_yBasis {  };
    int16_t field_3_heightBasis {  };
    int16_t field_4_scale {  };
    int16_t field_5_indexToFontTable {  };
protected:
    void ctor();
    void ctor(::org::apache::poi::hssf::record::RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    FontBasisRecord* clone() override;
    int16_t getXBasis();
    void setXBasis(int16_t field_1_xBasis);
    int16_t getYBasis();
    void setYBasis(int16_t field_2_yBasis);
    int16_t getHeightBasis();
    void setHeightBasis(int16_t field_3_heightBasis);
    int16_t getScale();
    void setScale(int16_t field_4_scale);
    int16_t getIndexToFontTable();
    void setIndexToFontTable(int16_t field_5_indexToFontTable);

    // Generated
    FontBasisRecord();
    FontBasisRecord(::org::apache::poi::hssf::record::RecordInputStream* in);
protected:
    FontBasisRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
