// Generated from /POI/java/org/apache/poi/hssf/record/RKRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::RKRecord final
    : public CellRecord
{

public:
    typedef CellRecord super;
    static constexpr int16_t sid { int16_t(638) };
    static constexpr int16_t RK_IEEE_NUMBER { int16_t(0) };
    static constexpr int16_t RK_IEEE_NUMBER_TIMES_100 { int16_t(1) };
    static constexpr int16_t RK_INTEGER { int16_t(2) };
    static constexpr int16_t RK_INTEGER_TIMES_100 { int16_t(3) };

private:
    int32_t field_4_rk_number {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    double getRKNumber();

public: /* protected */
    ::java::lang::String* getRecordName() override;
    void appendValueText(::java::lang::StringBuilder* sb) override;
    void serializeValue(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getValueDataSize() override;

public:
    int16_t getSid() override;
    ::java::lang::Object* clone() override;

    // Generated

private:
    RKRecord();

public:
    RKRecord(RecordInputStream* in);
protected:
    RKRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
