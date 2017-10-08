// Generated from /POI/java/org/apache/poi/hssf/record/ContinueRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class poi::hssf::record::ContinueRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(60) };

private:
    ::int8_tArray* _data {  };
protected:
    void ctor(::int8_tArray* data);

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    ::int8_tArray* getData();
    ::java::lang::String* toString() override;
    int16_t getSid() override;
protected:
    void ctor(RecordInputStream* in);

public:
    ContinueRecord* clone() override;

    // Generated
    ContinueRecord(::int8_tArray* data);
    ContinueRecord(RecordInputStream* in);
protected:
    ContinueRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
