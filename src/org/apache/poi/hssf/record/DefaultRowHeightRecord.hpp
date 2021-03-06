// Generated from /POI/java/org/apache/poi/hssf/record/DefaultRowHeightRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::DefaultRowHeightRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(549) };

private:
    int16_t field_1_option_flags {  };
    int16_t field_2_row_height {  };

public:
    static constexpr int16_t DEFAULT_ROW_HEIGHT { int16_t(255) };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setOptionFlags(int16_t flags);
    void setRowHeight(int16_t height);
    int16_t getOptionFlags();
    int16_t getRowHeight();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    DefaultRowHeightRecord* clone() override;

    // Generated
    DefaultRowHeightRecord();
    DefaultRowHeightRecord(RecordInputStream* in);
protected:
    DefaultRowHeightRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
