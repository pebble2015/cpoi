// Generated from /POI/java/org/apache/poi/hssf/record/ExternSheetRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <java/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::ExternSheetRecord, StandardRecordArray > ExternSheetRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::ExternSheetRecord
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(23) };

private:
    ::java::util::List* _list {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    virtual int32_t getNumOfRefs();
    virtual void addREFRecord(ExternSheetRecord_RefSubRecord* rec);
    virtual int32_t getNumOfREFRecords();
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;

private:
    ExternSheetRecord_RefSubRecord* getRef(int32_t i);

public:
    virtual void removeSheet(int32_t sheetIdx);
    int16_t getSid() override;
    virtual int32_t getExtbookIndexFromRefIndex(int32_t refIndex);
    virtual int32_t findRefIndexFromExtBookIndex(int32_t extBookIndex);
    virtual int32_t getFirstSheetIndexFromRefIndex(int32_t extRefIndex);
    virtual int32_t getLastSheetIndexFromRefIndex(int32_t extRefIndex);
    virtual int32_t addRef(int32_t extBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex);
    virtual int32_t getRefIxForSheet(int32_t externalBookIndex, int32_t firstSheetIndex, int32_t lastSheetIndex);
    static ExternSheetRecord* combine(ExternSheetRecordArray* esrs);

    // Generated
    ExternSheetRecord();
    ExternSheetRecord(RecordInputStream* in);
protected:
    ExternSheetRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ExternSheetRecord_RefSubRecord;
};
