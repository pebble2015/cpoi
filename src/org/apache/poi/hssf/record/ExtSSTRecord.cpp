// Generated from /POI/java/org/apache/poi/hssf/record/ExtSSTRecord.java
#include <org/apache/poi/hssf/record/ExtSSTRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/util/ArrayList.hpp>
#include <org/apache/poi/hssf/record/ContinueRecord.hpp>
#include <org/apache/poi/hssf/record/ExtSSTRecord_InfoSubRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
typedef ::SubArray< ::org::apache::poi::hssf::record::ExtSSTRecord_InfoSubRecord, ::java::lang::ObjectArray > ExtSSTRecord_InfoSubRecordArray;
                } // record
            } // hssf
        } // poi
    } // apache
} // org

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::ExtSSTRecord::ExtSSTRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::ExtSSTRecord::ExtSSTRecord() 
    : ExtSSTRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::ExtSSTRecord::ExtSSTRecord(RecordInputStream* in) 
    : ExtSSTRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::ExtSSTRecord::sid;

constexpr int32_t org::apache::poi::hssf::record::ExtSSTRecord::DEFAULT_BUCKET_SIZE;

constexpr int32_t org::apache::poi::hssf::record::ExtSSTRecord::MAX_BUCKETS;

void org::apache::poi::hssf::record::ExtSSTRecord::ctor()
{
    super::ctor();
    _stringsPerBucket = DEFAULT_BUCKET_SIZE;
    _sstInfos = new ExtSSTRecord_InfoSubRecordArray(int32_t(0));
}

void org::apache::poi::hssf::record::ExtSSTRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    _stringsPerBucket = npc(in)->readShort();
    auto nInfos = npc(in)->remaining() / ExtSSTRecord_InfoSubRecord::ENCODED_SIZE;
    auto lst = new ::java::util::ArrayList(nInfos);
    while (npc(in)->available() > 0) {
        auto info = new ExtSSTRecord_InfoSubRecord(in);
        npc(lst)->add(static_cast< ::java::lang::Object* >(info));
        if(npc(in)->available() == 0 && npc(in)->hasNextRecord() && npc(in)->getNextSid() == ContinueRecord::sid) {
            npc(in)->nextRecord();
        }
    }
    _sstInfos = java_cast< ExtSSTRecord_InfoSubRecordArray* >(npc(lst)->toArray_(static_cast< ::java::lang::ObjectArray* >(new ExtSSTRecord_InfoSubRecordArray(npc(lst)->size()))));
}

void org::apache::poi::hssf::record::ExtSSTRecord::setNumStringsPerBucket(int16_t numStrings)
{
    _stringsPerBucket = numStrings;
}

java::lang::String* org::apache::poi::hssf::record::ExtSSTRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[EXTSST]\n"_j);
    npc(npc(npc(buffer)->append(u"    .dsst           = "_j))->append(::java::lang::Integer::toHexString(_stringsPerBucket)))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .numInfoRecords = "_j))->append(npc(_sstInfos)->length))->append(u"\n"_j);
    for (auto k = int32_t(0); k < npc(_sstInfos)->length; k++) {
        npc(npc(npc(buffer)->append(u"    .inforecord     = "_j))->append(k))->append(u"\n"_j);
        npc(npc(npc(buffer)->append(u"    .streampos      = "_j))->append(::java::lang::Integer::toHexString(npc((*_sstInfos)[k])->getStreamPos())))->append(u"\n"_j);
        npc(npc(npc(buffer)->append(u"    .sstoffset      = "_j))->append(::java::lang::Integer::toHexString(npc((*_sstInfos)[k])->getBucketSSTOffset())))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/EXTSST]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::ExtSSTRecord::serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    npc(out)->writeShort(static_cast< int32_t >(_stringsPerBucket));
    for (auto k = int32_t(0); k < npc(_sstInfos)->length; k++) {
        npc((*_sstInfos)[k])->serialize(out);
    }
}

int32_t org::apache::poi::hssf::record::ExtSSTRecord::getDataSize()
{
    return int32_t(2) + ExtSSTRecord_InfoSubRecord::ENCODED_SIZE * npc(_sstInfos)->length;
}

org::apache::poi::hssf::record::ExtSSTRecord_InfoSubRecordArray* org::apache::poi::hssf::record::ExtSSTRecord::getInfoSubRecords()
{
    return _sstInfos;
}

int32_t org::apache::poi::hssf::record::ExtSSTRecord::getNumberOfInfoRecsForStrings(int32_t numStrings)
{
    clinit();
    auto infoRecs = (numStrings / DEFAULT_BUCKET_SIZE);
    if((numStrings % DEFAULT_BUCKET_SIZE) != 0)
        infoRecs++;

    if(infoRecs > MAX_BUCKETS)
        infoRecs = MAX_BUCKETS;

    return infoRecs;
}

int32_t org::apache::poi::hssf::record::ExtSSTRecord::getRecordSizeForStrings(int32_t numStrings)
{
    clinit();
    return int32_t(4) + int32_t(2) + getNumberOfInfoRecsForStrings(numStrings) * int32_t(8);
}

int16_t org::apache::poi::hssf::record::ExtSSTRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::ExtSSTRecord::setBucketOffsets(::int32_tArray* bucketAbsoluteOffsets, ::int32_tArray* bucketRelativeOffsets)
{
    _sstInfos = new ExtSSTRecord_InfoSubRecordArray(npc(bucketAbsoluteOffsets)->length);
    for (auto i = int32_t(0); i < npc(bucketAbsoluteOffsets)->length; i++) {
        _sstInfos->set(i, new ExtSSTRecord_InfoSubRecord((*bucketAbsoluteOffsets)[i], (*bucketRelativeOffsets)[i]));
    }
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::ExtSSTRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.ExtSSTRecord", 39);
    return c;
}

int32_t org::apache::poi::hssf::record::ExtSSTRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::ExtSSTRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::ExtSSTRecord::getClass0()
{
    return class_();
}

