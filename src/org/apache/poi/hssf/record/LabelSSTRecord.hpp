// Generated from /POI/java/org/apache/poi/hssf/record/LabelSSTRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/CellRecord.hpp>
#include <java/lang/Cloneable.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::LabelSSTRecord final
    : public CellRecord
    , public ::java::lang::Cloneable
{

public:
    typedef CellRecord super;
    static constexpr int16_t sid { int16_t(253) };

private:
    int32_t field_4_sst_index {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setSSTIndex(int32_t index);
    int32_t getSSTIndex();

public: /* protected */
    ::java::lang::String* getRecordName() override;
    void appendValueText(::java::lang::StringBuilder* sb) override;
    void serializeValue(::org::apache::poi::util::LittleEndianOutput* out) override;
    int32_t getValueDataSize() override;

public:
    int16_t getSid() override;
    LabelSSTRecord* clone() override;

    // Generated
    LabelSSTRecord();
    LabelSSTRecord(RecordInputStream* in);
protected:
    LabelSSTRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
