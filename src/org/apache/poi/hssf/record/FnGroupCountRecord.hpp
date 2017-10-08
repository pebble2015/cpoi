// Generated from /POI/java/org/apache/poi/hssf/record/FnGroupCountRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::FnGroupCountRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(156) };
    static constexpr int16_t COUNT { int16_t(14) };

private:
    int16_t field_1_count {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setCount(int16_t count);
    int16_t getCount();
    ::java::lang::String* toString() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    FnGroupCountRecord();
    FnGroupCountRecord(RecordInputStream* in);
protected:
    FnGroupCountRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
