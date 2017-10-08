// Generated from /POI/java/org/apache/poi/hssf/record/MulBlankRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

struct default_init_tag;

class poi::hssf::record::MulBlankRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(190) };

private:
    int32_t _row {  };
    int32_t _firstCol {  };
    ::int16_tArray* _xfs {  };
    int32_t _lastCol {  };
protected:
    void ctor(int32_t row, int32_t firstCol, ::int16_tArray* xfs);

public:
    int32_t getRow();
    int32_t getFirstColumn();
    int32_t getLastColumn();
    int32_t getNumColumns();
    int16_t getXFAt(int32_t coffset);
protected:
    void ctor(RecordInputStream* in);

private:
    static ::int16_tArray* parseXFs(RecordInputStream* in);

public:
    ::java::lang::String* toString() override;
    int16_t getSid() override;
    void serialize(::poi::util::LittleEndianOutput* out) override;

public: /* protected */
    int32_t getDataSize() override;

public:
    MulBlankRecord* clone() override;

    // Generated
    MulBlankRecord(int32_t row, int32_t firstCol, ::int16_tArray* xfs);
    MulBlankRecord(RecordInputStream* in);
protected:
    MulBlankRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
};
