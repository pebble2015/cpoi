// Generated from /POI/java/org/apache/poi/hssf/record/MMSRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::MMSRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(193) };

private:
    int8_t field_1_addMenuCount {  };
    int8_t field_2_delMenuCount {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setAddMenuCount(int8_t am);
    void setDelMenuCount(int8_t dm);
    int8_t getAddMenuCount();
    int8_t getDelMenuCount();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;

    // Generated
    MMSRecord();
    MMSRecord(RecordInputStream* in);
protected:
    MMSRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
