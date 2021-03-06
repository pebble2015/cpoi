// Generated from /POI/java/org/apache/poi/hssf/record/GutsRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::GutsRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(128) };

private:
    int16_t field_1_left_row_gutter {  };
    int16_t field_2_top_col_gutter {  };
    int16_t field_3_row_level_max {  };
    int16_t field_4_col_level_max {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setLeftRowGutter(int16_t gut);
    void setTopColGutter(int16_t gut);
    void setRowLevelMax(int16_t max);
    void setColLevelMax(int16_t max);
    int16_t getLeftRowGutter();
    int16_t getTopColGutter();
    int16_t getRowLevelMax();
    int16_t getColLevelMax();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    GutsRecord* clone() override;

    // Generated
    GutsRecord();
    GutsRecord(RecordInputStream* in);
protected:
    GutsRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
