// Generated from /POI/java/org/apache/poi/hssf/record/DefaultColWidthRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::DefaultColWidthRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(85) };

private:
    int32_t field_1_col_width {  };

public:
    static constexpr int32_t DEFAULT_COLUMN_WIDTH { int32_t(8) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setColWidth(int32_t width);
    int32_t getColWidth();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DefaultColWidthRecord* clone() override;

    // Generated
    DefaultColWidthRecord();
    DefaultColWidthRecord(RecordInputStream* in);
protected:
    DefaultColWidthRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
