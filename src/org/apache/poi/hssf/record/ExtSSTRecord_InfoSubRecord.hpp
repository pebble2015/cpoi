// Generated from /POI/java/org/apache/poi/hssf/record/ExtSSTRecord.java

#pragma once

#include <fwd-POI.hpp>
#include <org/apache/poi/hssf/record/fwd-POI.hpp>
#include <org/apache/poi/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

struct default_init_tag;

class poi::hssf::record::ExtSSTRecord_InfoSubRecord final
    : public ::java::lang::Object
{

public:
    typedef ::java::lang::Object super;
    static constexpr int32_t ENCODED_SIZE { int32_t(8) };

private:
    int32_t field_1_stream_pos {  };
    int32_t field_2_bucket_sst_offset {  };
    int16_t field_3_zero {  };
protected:
    void ctor(int32_t streamPos, int32_t bucketSstOffset);
    void ctor(RecordInputStream* in);

public:
    int32_t getStreamPos();
    int32_t getBucketSSTOffset();
    void serialize(::poi::util::LittleEndianOutput* out);

    // Generated
    ExtSSTRecord_InfoSubRecord(int32_t streamPos, int32_t bucketSstOffset);
    ExtSSTRecord_InfoSubRecord(RecordInputStream* in);
protected:
    ExtSSTRecord_InfoSubRecord(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
    friend class ExtSSTRecord;
};
