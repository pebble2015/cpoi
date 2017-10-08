// Generated from /POI/java/org/apache/poi/hssf/record/OldCellRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::OldCellRecord
    : public virtual ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;

private:
    int16_t sid {  };
    bool isBiff2_ {  };
    int32_t field_1_row {  };
    int16_t field_2_column {  };
    int32_t field_3_cell_attrs {  };
    int16_t field_3_xf_index {  };
protected:
    void ctor(RecordInputStream* in, bool isBiff2);

public:
    int32_t getRow();
    int16_t getColumn();
    int16_t getXFIndex();
    virtual int32_t getCellAttrs();
    virtual bool isBiff2();
    virtual int16_t getSid();
    ::java::lang::String* toString() override;

public: /* protected */
    virtual void appendValueText(::java::lang::StringBuilder* sb) = 0;
    virtual ::java::lang::String* getRecordName() = 0;

    // Generated
    OldCellRecord(RecordInputStream* in, bool isBiff2);
protected:
    OldCellRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
