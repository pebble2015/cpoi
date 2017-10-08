// Generated from /POI/java/org/apache/poi/hssf/record/ExtSSTRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecord.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::ExtSSTRecord_InfoSubRecord, ::java::lang::ObjectArray > ExtSSTRecord_InfoSubRecordArray;
        } // record
    } // hssf
} // poi

struct default_init_tag;

class poi::hssf::record::ExtSSTRecord final
    : public ::poi::hssf::record::cont::ContinuableRecord
{

public:
    typedef ::poi::hssf::record::cont::ContinuableRecord super;
    static constexpr int16_t sid { int16_t(255) };
    static constexpr int32_t DEFAULT_BUCKET_SIZE { int32_t(8) };
    static constexpr int32_t MAX_BUCKETS { int32_t(128) };

private:
    int16_t _stringsPerBucket {  };
    ExtSSTRecord_InfoSubRecordArray* _sstInfos {  };
protected:
    void ctor();
    void ctor(RecordInputStream* in);

public:
    void setNumStringsPerBucket(int16_t numStrings);
    ::java::lang::String* toString() override;
    void serialize(::poi::hssf::record::cont::ContinuableRecordOutput* out) override;

public: /* protected */
    int32_t getDataSize();
    ExtSSTRecord_InfoSubRecordArray* getInfoSubRecords();

public:
    static int32_t getNumberOfInfoRecsForStrings(int32_t numStrings);
    static int32_t getRecordSizeForStrings(int32_t numStrings);
    int16_t getSid() override;
    void setBucketOffsets(::int32_tArray* bucketAbsoluteOffsets, ::int32_tArray* bucketRelativeOffsets);

    // Generated
    ExtSSTRecord();
    ExtSSTRecord(RecordInputStream* in);
protected:
    ExtSSTRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();
    int32_t serialize(int32_t offset, ::int8_tArray* data);
    ::int8_tArray* serialize();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ExtSSTRecord_InfoSubRecord;
};
