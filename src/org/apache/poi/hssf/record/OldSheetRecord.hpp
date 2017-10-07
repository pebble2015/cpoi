// Generated from /POI/java/org/apache/poi/hssf/record/OldSheetRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::OldSheetRecord final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t sid { int16_t(133) };

private:
    int32_t field_1_position_of_BOF {  };
    int32_t field_2_visibility {  };
    int32_t field_3_type {  };
    ::int8_tArray* field_5_sheetname {  };
    CodepageRecord* codepage {  };
protected:
    void ctor(RecordInputStream* in);

public:
    void setCodePage(CodepageRecord* codepage);
    int16_t getSid();
    int32_t getPositionOfBof();
    ::java::lang::String* getSheetname();
    ::java::lang::String* toString() override;

    // Generated
    OldSheetRecord(RecordInputStream* in);
protected:
    OldSheetRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
