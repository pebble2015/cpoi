// Generated from /POI/java/org/apache/poi/hssf/record/DrawingRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::DrawingRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(236) };

private:
    static ::int8_tArray* EMPTY_BYTE_ARRAY_;
    ::int8_tArray* recordData {  };
    ::int8_tArray* contd {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void processContinueRecord(::int8_tArray* record);
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::int8_tArray* getRecordData();
    void setData(::int8_tArray* thedata);
    DrawingRecord* clone() override;
    ::java::lang::String* toString() override;

    // Generated
    DrawingRecord();
    DrawingRecord(RecordInputStream* in);
protected:
    DrawingRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::int8_tArray*& EMPTY_BYTE_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
