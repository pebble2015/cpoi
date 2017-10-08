// Generated from /POI/java/org/apache/poi/hssf/record/ExtSSTRecord.java
#include <org/apache/poi/hssf/record/ExtSSTRecord_InfoSubRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::ExtSSTRecord_InfoSubRecord::ExtSSTRecord_InfoSubRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::ExtSSTRecord_InfoSubRecord::ExtSSTRecord_InfoSubRecord(int32_t streamPos, int32_t bucketSstOffset) 
    : ExtSSTRecord_InfoSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(streamPos,bucketSstOffset);
}

poi::hssf::record::ExtSSTRecord_InfoSubRecord::ExtSSTRecord_InfoSubRecord(RecordInputStream* in) 
    : ExtSSTRecord_InfoSubRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::ExtSSTRecord_InfoSubRecord::ENCODED_SIZE;

void poi::hssf::record::ExtSSTRecord_InfoSubRecord::ctor(int32_t streamPos, int32_t bucketSstOffset)
{
    super::ctor();
    field_1_stream_pos = streamPos;
    field_2_bucket_sst_offset = bucketSstOffset;
}

void poi::hssf::record::ExtSSTRecord_InfoSubRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_stream_pos = npc(in)->readInt();
    field_2_bucket_sst_offset = npc(in)->readShort();
    field_3_zero = npc(in)->readShort();
}

int32_t poi::hssf::record::ExtSSTRecord_InfoSubRecord::getStreamPos()
{
    return field_1_stream_pos;
}

int32_t poi::hssf::record::ExtSSTRecord_InfoSubRecord::getBucketSSTOffset()
{
    return field_2_bucket_sst_offset;
}

void poi::hssf::record::ExtSSTRecord_InfoSubRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_1_stream_pos);
    npc(out)->writeShort(field_2_bucket_sst_offset);
    npc(out)->writeShort(field_3_zero);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::ExtSSTRecord_InfoSubRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ExtSSTRecord.InfoSubRecord", 53);
    return c;
}

java::lang::Class* poi::hssf::record::ExtSSTRecord_InfoSubRecord::getClass0()
{
    return class_();
}

