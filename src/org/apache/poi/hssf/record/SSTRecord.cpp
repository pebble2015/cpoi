// Generated from /POI/java/org/apache/poi/hssf/record/SSTRecord.java
#include <org/apache/poi/hssf/record/SSTRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalStateException.hpp>
#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/StringBuilder.hpp>
#include <java/util/Iterator.hpp>
#include <org/apache/poi/hssf/record/ExtSSTRecord.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/SSTDeserializer.hpp>
#include <org/apache/poi/hssf/record/SSTSerializer.hpp>
#include <org/apache/poi/hssf/record/common/UnicodeString.hpp>
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

org::apache::poi::hssf::record::SSTRecord::SSTRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::SSTRecord::SSTRecord() 
    : SSTRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::SSTRecord::SSTRecord(RecordInputStream* in) 
    : SSTRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::SSTRecord::sid;

org::apache::poi::hssf::record::common::UnicodeString*& org::apache::poi::hssf::record::SSTRecord::EMPTY_STRING()
{
    clinit();
    return EMPTY_STRING_;
}
org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::SSTRecord::EMPTY_STRING_;

constexpr int32_t org::apache::poi::hssf::record::SSTRecord::STD_RECORD_OVERHEAD;

constexpr int32_t org::apache::poi::hssf::record::SSTRecord::SST_RECORD_OVERHEAD;

constexpr int32_t org::apache::poi::hssf::record::SSTRecord::MAX_DATA_SPACE;

void org::apache::poi::hssf::record::SSTRecord::ctor()
{
    super::ctor();
    field_1_num_strings = 0;
    field_2_num_unique_strings = 0;
    field_3_strings = new ::org::apache::poi::util::IntMapper();
    deserializer = new SSTDeserializer(field_3_strings);
}

int32_t org::apache::poi::hssf::record::SSTRecord::addString(::org::apache::poi::hssf::record::common::UnicodeString* string)
{
    field_1_num_strings++;
    auto ucs = (string == nullptr) ? EMPTY_STRING_ : string;
    int32_t rval;
    auto index = npc(field_3_strings)->getIndex(ucs);
    if(index != -int32_t(1)) {
        rval = index;
    } else {
        rval = npc(field_3_strings)->size();
        field_2_num_unique_strings++;
        SSTDeserializer::addToStringTable(field_3_strings, ucs);
    }
    return rval;
}

int32_t org::apache::poi::hssf::record::SSTRecord::getNumStrings()
{
    return field_1_num_strings;
}

int32_t org::apache::poi::hssf::record::SSTRecord::getNumUniqueStrings()
{
    return field_2_num_unique_strings;
}

org::apache::poi::hssf::record::common::UnicodeString* org::apache::poi::hssf::record::SSTRecord::getString(int32_t id)
{
    return java_cast< ::org::apache::poi::hssf::record::common::UnicodeString* >(npc(field_3_strings)->get(id));
}

java::lang::String* org::apache::poi::hssf::record::SSTRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SST]\n"_j);
    npc(npc(npc(buffer)->append(u"    .numstrings     = "_j))->append(::java::lang::Integer::toHexString(getNumStrings())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .uniquestrings  = "_j))->append(::java::lang::Integer::toHexString(getNumUniqueStrings())))->append(u"\n"_j);
    for (auto k = int32_t(0); k < npc(field_3_strings)->size(); k++) {
        auto s = java_cast< ::org::apache::poi::hssf::record::common::UnicodeString* >(npc(field_3_strings)->get(k));
        npc(npc(npc(buffer)->append(::java::lang::StringBuilder().append(u"    .string_"_j)->append(k)
            ->append(u"      = "_j)->toString()))->append(npc(s)->getDebugInfo()))->append(u"\n"_j);
    }
    npc(buffer)->append(u"[/SST]\n"_j);
    return npc(buffer)->toString();
}

int16_t org::apache::poi::hssf::record::SSTRecord::getSid()
{
    return sid;
}

void org::apache::poi::hssf::record::SSTRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_num_strings = npc(in)->readInt();
    field_2_num_unique_strings = npc(in)->readInt();
    field_3_strings = new ::org::apache::poi::util::IntMapper();
    deserializer = new SSTDeserializer(field_3_strings);
    if(field_1_num_strings == 0) {
        field_2_num_unique_strings = 0;
        return;
    }
    npc(deserializer)->manufactureStrings(field_2_num_unique_strings, in);
}

java::util::Iterator* org::apache::poi::hssf::record::SSTRecord::getStrings()
{
    return npc(field_3_strings)->iterator();
}

int32_t org::apache::poi::hssf::record::SSTRecord::countStrings()
{
    return npc(field_3_strings)->size();
}

void org::apache::poi::hssf::record::SSTRecord::serialize(::org::apache::poi::hssf::record::cont::ContinuableRecordOutput* out)
{
    auto serializer = new SSTSerializer(field_3_strings, getNumStrings(), getNumUniqueStrings());
    npc(serializer)->serialize(out);
    bucketAbsoluteOffsets = npc(serializer)->getBucketAbsoluteOffsets();
    bucketRelativeOffsets = npc(serializer)->getBucketRelativeOffsets();
}

org::apache::poi::hssf::record::SSTDeserializer* org::apache::poi::hssf::record::SSTRecord::getDeserializer()
{
    return deserializer;
}

org::apache::poi::hssf::record::ExtSSTRecord* org::apache::poi::hssf::record::SSTRecord::createExtSSTRecord(int32_t sstOffset)
{
    if(bucketAbsoluteOffsets == nullptr || bucketRelativeOffsets == nullptr) {
        throw new ::java::lang::IllegalStateException(u"SST record has not yet been serialized."_j);
    }
    auto extSST = new ExtSSTRecord();
    npc(extSST)->setNumStringsPerBucket(static_cast< int16_t >(int32_t(8)));
    auto absoluteOffsets = npc(bucketAbsoluteOffsets)->clone();
    auto relativeOffsets = npc(bucketRelativeOffsets)->clone();
    for (auto i = int32_t(0); i < npc(absoluteOffsets)->length; i++) {
        (*absoluteOffsets)[i] += sstOffset;
    }
    npc(extSST)->setBucketOffsets(absoluteOffsets, relativeOffsets);
    return extSST;
}

int32_t org::apache::poi::hssf::record::SSTRecord::calcExtSSTRecordSize()
{
    return ExtSSTRecord::getRecordSizeForStrings(npc(field_3_strings)->size());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::SSTRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.SSTRecord", 36);
    return c;
}

void org::apache::poi::hssf::record::SSTRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        EMPTY_STRING_ = new ::org::apache::poi::hssf::record::common::UnicodeString(u""_j);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::SSTRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::SSTRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::SSTRecord::getClass0()
{
    return class_();
}

