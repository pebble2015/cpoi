// Generated from /POI/java/org/apache/poi/hssf/record/CellRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/CellValueRecordInterface.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::CellRecord
    : public StandardRecord
    , public virtual CellValueRecordInterface
{

public:
    typedef StandardRecord super;

private:
    int32_t _rowIndex {  };
    int32_t _columnIndex {  };
    int32_t _formatIndex {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setRow(int32_t row) override;
    void setColumn(int16_t col) override;
    void setXFIndex(int16_t xf) override;
    int32_t getRow() override;
    int16_t getColumn() override;
    int16_t getXFIndex() override;
    ::java::lang::String* toString() override;

public: /* protected */
    virtual void appendValueText(::java::lang::StringBuilder* sb) = 0;
    virtual ::java::lang::String* getRecordName() = 0;
    virtual void serializeValue(::org::apache::poi::util::LittleEndianOutput* out) = 0;
    virtual int32_t getValueDataSize() = 0;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;
    void copyBaseFields(CellRecord* rec);

    // Generated
    CellRecord();
    CellRecord(RecordInputStream* in);
protected:
    CellRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
