// Generated from /POI/java/org/apache/poi/hssf/record/HeaderFooterBase.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::HeaderFooterBase
    : public StandardRecord
{

public:
    typedef StandardRecord super;

private:
    bool field_2_hasMultibyte {  };
    ::java::lang::String* field_3_text {  };
protected:
    void ctor(::java::lang::String* text);
    void ctor(RecordInputStream* in);

public:
    void setText(::java::lang::String* text);

private:
    int32_t getTextLength();

public:
    ::java::lang::String* getText();
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

    // Generated
    HeaderFooterBase(::java::lang::String* text);
    HeaderFooterBase(RecordInputStream* in);
protected:
    HeaderFooterBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
