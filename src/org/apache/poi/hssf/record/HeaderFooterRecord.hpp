// Generated from /POI/java/org/apache/poi/hssf/record/HeaderFooterRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::HeaderFooterRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;

private:
    static ::int8_tArray* BLANK_GUID_;

public:
    static constexpr int16_t sid { int16_t(2204) };

private:
    ::int8_tArray* _rawData {  };
protected:
    void ctor(::int8_tArray* data);
    void ctor(RecordInputStream* in);

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::int8_tArray* getGuid();
    bool isCurrentSheet();
    ::java::lang::String* toString() override;
    HeaderFooterRecord* clone() override;

    // Generated
    HeaderFooterRecord(::int8_tArray* data);
    HeaderFooterRecord(RecordInputStream* in);
protected:
    HeaderFooterRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::int8_tArray*& BLANK_GUID();
    virtual ::java::lang::Class* getClass0();
};
