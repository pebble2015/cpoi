// Generated from /POI/java/org/apache/poi/hssf/record/CRNRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::CRNRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(90) };

private:
    int32_t field_1_last_column_index {  };
    int32_t field_2_first_column_index {  };
    int32_t field_3_row_index {  };
    ::java::lang::ObjectArray* field_4_constant_values {  };
protected:
    void ctor();

public:
    int32_t getNumberOfCRNs();
protected:
    void ctor(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    int16_t getSid() override;

    // Generated
    CRNRecord();
    CRNRecord(RecordInputStream* in);
protected:
    CRNRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
