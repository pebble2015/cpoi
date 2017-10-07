// Generated from /POI/java/org/apache/poi/hssf/record/OldLabelRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/OldCellRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::OldLabelRecord final
    : public OldCellRecord
{

public:
    typedef OldCellRecord super;

private:
    static ::org::apache::poi::util::POILogger* logger_;

public:
    static constexpr int16_t biff2_sid { int16_t(4) };
    static constexpr int16_t biff345_sid { int16_t(516) };

private:
    int16_t field_4_string_len {  };
    ::int8_tArray* field_5_bytes {  };
    CodepageRecord* codepage {  };
protected:
    void ctor(RecordInputStream* in);

public:
    void setCodePage(CodepageRecord* codepage);
    int16_t getStringLength();
    ::java::lang::String* getValue();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    int32_t getRecordSize();

public: /* protected */
    void appendValueText(::java::lang::StringBuilder* sb) override;
    ::java::lang::String* getRecordName() override;

    // Generated

public:
    OldLabelRecord(RecordInputStream* in);
protected:
    OldLabelRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::POILogger*& logger();
    virtual ::java::lang::Class* getClass0();
};
