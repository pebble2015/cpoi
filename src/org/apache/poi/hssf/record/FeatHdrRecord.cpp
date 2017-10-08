// Generated from /POI/java/org/apache/poi/hssf/record/FeatHdrRecord.java
#include <org/apache/poi/hssf/record/FeatHdrRecord.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/common/FtrHeader.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
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

poi::hssf::record::FeatHdrRecord::FeatHdrRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::FeatHdrRecord::FeatHdrRecord() 
    : FeatHdrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::FeatHdrRecord::FeatHdrRecord(RecordInputStream* in) 
    : FeatHdrRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int32_t poi::hssf::record::FeatHdrRecord::SHAREDFEATURES_ISFPROTECTION;

constexpr int32_t poi::hssf::record::FeatHdrRecord::SHAREDFEATURES_ISFFEC2;

constexpr int32_t poi::hssf::record::FeatHdrRecord::SHAREDFEATURES_ISFFACTOID;

constexpr int32_t poi::hssf::record::FeatHdrRecord::SHAREDFEATURES_ISFLIST;

constexpr int16_t poi::hssf::record::FeatHdrRecord::sid;

void poi::hssf::record::FeatHdrRecord::ctor()
{
    super::ctor();
    futureHeader = new ::poi::hssf::record::common::FtrHeader();
    npc(futureHeader)->setRecordType(sid);
}

int16_t poi::hssf::record::FeatHdrRecord::getSid()
{
    return sid;
}

void poi::hssf::record::FeatHdrRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    futureHeader = new ::poi::hssf::record::common::FtrHeader(in);
    isf_sharedFeatureType = npc(in)->readShort();
    reserved = npc(in)->readByte();
    cbHdrData = npc(in)->readInt();
    rgbHdrData = npc(in)->readRemainder();
}

java::lang::String* poi::hssf::record::FeatHdrRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FEATURE HEADER]\n"_j);
    npc(buffer)->append(u"[/FEATURE HEADER]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::FeatHdrRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(futureHeader)->serialize(out);
    npc(out)->writeShort(isf_sharedFeatureType);
    npc(out)->writeByte(reserved);
    npc(out)->writeInt(static_cast< int32_t >(cbHdrData));
    npc(out)->write(rgbHdrData);
}

int32_t poi::hssf::record::FeatHdrRecord::getDataSize()
{
    return int32_t(12) + int32_t(2) + int32_t(1)+ int32_t(4)+ npc(rgbHdrData)->length;
}

poi::hssf::record::FeatHdrRecord* poi::hssf::record::FeatHdrRecord::clone()
{
    return java_cast< FeatHdrRecord* >(cloneViaReserialise());
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::FeatHdrRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.FeatHdrRecord", 40);
    return c;
}

int32_t poi::hssf::record::FeatHdrRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::FeatHdrRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::FeatHdrRecord::getClass0()
{
    return class_();
}

