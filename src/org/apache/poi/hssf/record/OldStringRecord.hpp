// Generated from /POI/java/org/apache/poi/hssf/record/OldStringRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::OldStringRecord final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int16_t biff2_sid { int16_t(7) };
    static constexpr int16_t biff345_sid { int16_t(519) };

private:
    int16_t sid {  };
    int16_t field_1_string_len {  };
    ::int8_tArray* field_2_bytes {  };
    CodepageRecord* codepage {  };
protected:
    void ctor(RecordInputStream* in);

public:
    bool isBiff2();
    int16_t getSid();
    void setCodePage(CodepageRecord* codepage);
    ::java::lang::String* getString();

public: /* protected */
    static ::java::lang::String* getString(::int8_tArray* data, CodepageRecord* codepage);

public:
    ::java::lang::String* toString() override;

    // Generated
    OldStringRecord(RecordInputStream* in);
protected:
    OldStringRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
