// Generated from /POI/java/org/apache/poi/hssf/record/CalcModeRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::CalcModeRecord final
    : public StandardRecord
    , public ::java::lang::Cloneable
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(13) };
    static constexpr int16_t MANUAL { int16_t(0) };
    static constexpr int16_t AUTOMATIC { int16_t(1) };
    static constexpr int16_t AUTOMATIC_EXCEPT_TABLES { int16_t(-1) };

private:
    int16_t field_1_calcmode {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setCalcMode(int16_t calcmode);
    int16_t getCalcMode();
    ::java::lang::String* toString() override;
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    int16_t getSid() override;
    CalcModeRecord* clone() override;

    // Generated
    CalcModeRecord();
    CalcModeRecord(RecordInputStream* in);
protected:
    CalcModeRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
