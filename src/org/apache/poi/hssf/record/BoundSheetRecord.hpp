// Generated from /POI/java/org/apache/poi/hssf/record/BoundSheetRecord.java

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
typedef ::SubArray< ::poi::hssf::record::BoundSheetRecord, StandardRecordArray > BoundSheetRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::BoundSheetRecord final
    : public StandardRecord
{

public:
    typedef StandardRecord super;
    static constexpr int16_t sid { int16_t(133) };

private:
    static ::poi::util::BitField* hiddenFlag_;
    static ::poi::util::BitField* veryHiddenFlag_;
    int32_t field_1_position_of_BOF {  };
    int32_t field_2_option_flags {  };
    int32_t field_4_isMultibyteUnicode {  };
    ::java::lang::String* field_5_sheetname {  };
protected:
    void ctor(::java::lang::String* sheetname);
    void ctor(RecordInputStream* in);

public:
    void setPositionOfBof(int32_t pos);
    void setSheetname(::java::lang::String* sheetName);
    int32_t getPositionOfBof();

private:
    bool isMultibyte();

public:
    ::java::lang::String* getSheetname();
    ::java::lang::String* toString() override;

public: /* protected */
    int32_t getDataSize() override;

public:
    void serialize(::poi::util::LittleEndianOutput* out) override;
    int16_t getSid() override;
    bool isHidden();
    void setHidden(bool hidden);
    bool isVeryHidden();
    void setVeryHidden(bool veryHidden);
    static BoundSheetRecordArray* orderByBofPosition(::java::util::List* boundSheetRecords);

private:
    static ::java::util::Comparator* BOFComparator_;

    // Generated

public:
    BoundSheetRecord(::java::lang::String* sheetname);
    BoundSheetRecord(RecordInputStream* in);
protected:
    BoundSheetRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    static void clinit();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    static ::poi::util::BitField*& hiddenFlag();
    static ::poi::util::BitField*& veryHiddenFlag();
    static ::java::util::Comparator*& BOFComparator();
    virtual ::java::lang::Class* getClass0();
    friend class BoundSheetRecord_1;
};
