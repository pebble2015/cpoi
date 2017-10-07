// Generated from /POI/java/org/apache/poi/hssf/record/SharedValueRecordBase.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::SharedValueRecordBase
    : public StandardRecord
{

public:
    typedef StandardRecord super;

private:
    ::org::apache::poi::hssf::util::CellRangeAddress8Bit* _range {  };
protected:
    void ctor(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range);
    void ctor();
    void ctor(::org::apache::poi::util::LittleEndianInput* in);

public:
    ::org::apache::poi::hssf::util::CellRangeAddress8Bit* getRange();
    int32_t getFirstRow();
    int32_t getLastRow();
    int32_t getFirstColumn();
    int32_t getLastColumn();

public: /* protected */
    int32_t getDataSize() override;
    virtual int32_t getExtraDataSize() = 0;
    virtual void serializeExtraData(::org::apache::poi::util::LittleEndianOutput* out) = 0;

public:
    void serialize(::org::apache::poi::util::LittleEndianOutput* out) override;
    bool isInRange(int32_t rowIx, int32_t colIx);
    bool isFirstCell(int32_t rowIx, int32_t colIx);

    // Generated

public: /* protected */
    SharedValueRecordBase(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range);
    SharedValueRecordBase();

public:
    SharedValueRecordBase(::org::apache::poi::util::LittleEndianInput* in);
protected:
    SharedValueRecordBase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
