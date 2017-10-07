// Generated from /POI/java/org/apache/poi/hssf/record/RefModeRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RefModeRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(15) };
    static constexpr int16_t USE_A1_MODE { int16_t(1) };
    static constexpr int16_t USE_R1C1_MODE { int16_t(0) };

private:
    int16_t field_1_mode {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setMode(int16_t mode);
    int16_t getMode();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated
    RefModeRecord();
    RefModeRecord(RecordInputStream* in);
protected:
    RefModeRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
