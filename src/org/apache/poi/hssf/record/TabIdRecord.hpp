// Generated from /POI/java/org/apache/poi/hssf/record/TabIdRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::TabIdRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(317) };

private:
    static ::int16_tArray* EMPTY_SHORT_ARRAY_;

public:
    ::int16_tArray* _tabids {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setTabIdArray_(::int16_tArray* array);
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    TabIdRecord();
    TabIdRecord(RecordInputStream* in);
protected:
    TabIdRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::int16_tArray*& EMPTY_SHORT_ARRAY();
    virtual ::java::lang::Class* getClass0();
};
