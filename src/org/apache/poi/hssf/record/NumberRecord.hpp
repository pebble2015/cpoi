// Generated from /POI/java/org/apache/poi/hssf/record/NumberRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::NumberRecord final
    : public CellRecord
    , public ::java::lang::Cloneable
{

public:
    typedef CellRecord super;
    static constexpr int16_t sid { int16_t(515) };

private:
    double field_4_value {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setValue(double value);
    double getValue();

public: /* protected */
    ::java::lang::String* getRecordName() override;
    void appendValueText(::java::lang::StringBuilder* sb) override;
    void serializeValue(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getValueDataSize() override;

public:
    int16_t getSid() override;
    NumberRecord* clone() override;

    // Generated
    NumberRecord();
    NumberRecord(RecordInputStream* in);
protected:
    NumberRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
