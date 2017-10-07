// Generated from /POI/java/org/apache/poi/hssf/record/TableRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/util/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/SharedValueRecordBase.hpp>

struct default_init_tag;

class org::apache::poi::hssf::record::TableRecord final
    : public SharedValueRecordBase
{

public:
    typedef SharedValueRecordBase super;
    static constexpr int16_t sid { int16_t(566) };

private:
    static ::org::apache::poi::util::BitField* alwaysCalc_;
    static ::org::apache::poi::util::BitField* calcOnOpen_;
    static ::org::apache::poi::util::BitField* rowOrColInpCell_;
    static ::org::apache::poi::util::BitField* oneOrTwoVar_;
    static ::org::apache::poi::util::BitField* rowDeleted_;
    static ::org::apache::poi::util::BitField* colDeleted_;
    int32_t field_5_flags {  };
    int32_t field_6_res {  };
    int32_t field_7_rowInputRow {  };
    int32_t field_8_colInputRow {  };
    int32_t field_9_rowInputCol {  };
    int32_t field_10_colInputCol {  };
protected:
    void ctor(RecordInputStream* in);
    void ctor(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range);

public:
    int32_t getFlags();
    void setFlags(int32_t flags);
    int32_t getRowInputRow();
    void setRowInputRow(int32_t rowInputRow);
    int32_t getColInputRow();
    void setColInputRow(int32_t colInputRow);
    int32_t getRowInputCol();
    void setRowInputCol(int32_t rowInputCol);
    int32_t getColInputCol();
    void setColInputCol(int32_t colInputCol);
    bool isAlwaysCalc();
    void setAlwaysCalc(bool flag);
    bool isRowOrColInpCell();
    void setRowOrColInpCell(bool flag);
    bool isOneNotTwoVar();
    void setOneNotTwoVar(bool flag);
    bool isColDeleted();
    void setColDeleted(bool flag);
    bool isRowDeleted();
    void setRowDeleted(bool flag);
    int16_t getSid() override;

public: /* protected */
    int32_t getExtraDataSize() override;
    void serializeExtraData(::org::apache::poi::util::LittleEndianOutput* out) override;

public:
    ::java::lang::String* toString() override;

private:
    static ::org::apache::poi::hssf::util::CellReference* cr(int32_t rowIx, int32_t colIxAndFlags);

    // Generated

public:
    TableRecord(RecordInputStream* in);
    TableRecord(::org::apache::poi::hssf::util::CellRangeAddress8Bit* range);
protected:
    TableRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();

private:
    static ::org::apache::poi::util::BitField*& alwaysCalc();
    static ::org::apache::poi::util::BitField*& calcOnOpen();
    static ::org::apache::poi::util::BitField*& rowOrColInpCell();
    static ::org::apache::poi::util::BitField*& oneOrTwoVar();
    static ::org::apache::poi::util::BitField*& rowDeleted();
    static ::org::apache::poi::util::BitField*& colDeleted();
    virtual ::java::lang::Class* getClass0();
};
