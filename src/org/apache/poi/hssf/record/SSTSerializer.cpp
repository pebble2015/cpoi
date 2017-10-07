// Generated from /POI/java/org/apache/poi/hssf/record/SSTSerializer.java
#include <org/apache/poi/hssf/record/SSTSerializer.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/hssf/record/ExtSSTRecord.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
#include <org/apache/poi/hssf/record/cont/ContinuableRecordOutput.hpp>
#include <org/apache/poi/util/IntMapper.hpp>
#include <Array.hpp>

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

org::apache::poi::hssf::record::SSTSerializer::SSTSerializer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::SSTSerializer::SSTSerializer(::org::apache::poi::util::IntMapper* strings, int32_t numStrings, int32_t numUniqueStrings) 
    : SSTSerializer(*static_cast< ::default_init_tag* >(0))
{
    ctor(strings,numStrings,numUniqueStrings);
}

void org::apache::poi::hssf::record::SSTSerializer::ctor(::org::apache::poi::util::IntMapper* strings, int32_t numStrings, int32_t numUniqueStrings)
{
    super::ctor();
    this->strings = strings;
    _numStrings = numStrings;
    _numUniqueStrings = numUniqueStrings;
    auto infoRecs = ExtSSTRecord::getNumberOfInfoRecsForStrings(npc(strings)->size());
    this->bucketAbsoluteOffsets = new ::int32_tArray(infoRecs);
    this->bucketRelativeOffsets = new ::int32_tArray(infoRecs);
}

void org::apache::poi::hssf::record::SSTSerializer::serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    npc(out)->writeInt(_numStrings);
    npc(out)->writeInt(_numUniqueStrings);
    for (auto k = int32_t(0); k < npc(strings)->size(); k++) {
        if(k % ExtSSTRecord::DEFAULT_BUCKET_SIZE == 0) {
            auto rOff = npc(out)->getTotalSize();
            auto index = k / ExtSSTRecord::DEFAULT_BUCKET_SIZE;
            if(index < ExtSSTRecord::MAX_BUCKETS) {
                (*bucketAbsoluteOffsets)[index] = rOff;
                (*bucketRelativeOffsets)[index] = rOff;
            }
        }
        auto s = getUnicodeString(k);
        npc(s)->serialize(out);
    }
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::SSTSerializer::getUnicodeString(int32_t index)
{
    return getUnicodeString(strings, index);
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::SSTSerializer::getUnicodeString(::org::apache::poi::util::IntMapper* strings, int32_t index)
{
    clinit();
    return (java_cast< ::org::apache::poi::hssf::record::common::UnicodeString* >(npc(strings)->get(index)));
}

int32_tArray* org::apache::poi::hssf::record::SSTSerializer::getBucketAbsoluteOffsets()
{
    return bucketAbsoluteOffsets;
}

int32_tArray* org::apache::poi::hssf::record::SSTSerializer::getBucketRelativeOffsets()
{
    return bucketRelativeOffsets;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::SSTSerializer::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SSTSerializer", 40);
    return c;
}

java::lang::Class* org::apache::poi::hssf::record::SSTSerializer::getClass0()
{
    return class_();
}

