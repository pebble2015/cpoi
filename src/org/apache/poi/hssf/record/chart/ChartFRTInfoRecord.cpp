// Generated from /POI/java/org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.java
#include <org/apache/poi/hssf/record/chart/ChartFRTInfoRecord.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/hssf/record/chart/ChartFRTInfoRecord_CFRTID.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace chart
            {
typedef ::SubArray< ::poi::hssf::record::chart::ChartFRTInfoRecord_CFRTID, ::java::lang::ObjectArray > ChartFRTInfoRecord_CFRTIDArray;
            } // chart
        } // record
    } // hssf
} // poi

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::chart::ChartFRTInfoRecord::ChartFRTInfoRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::ChartFRTInfoRecord::ChartFRTInfoRecord(::poi::hssf::record::RecordInputStream* in) 
    : ChartFRTInfoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::ChartFRTInfoRecord::sid;

void poi::hssf::record::chart::ChartFRTInfoRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    rt = npc(in)->readShort();
    grbitFrt = npc(in)->readShort();
    verOriginator = npc(in)->readByte();
    verWriter = npc(in)->readByte();
    int32_t cCFRTID = npc(in)->readShort();
    rgCFRTID = new ChartFRTInfoRecord_CFRTIDArray(cCFRTID);
    for (auto i = int32_t(0); i < cCFRTID; i++) {
        rgCFRTID->set(i, new ChartFRTInfoRecord_CFRTID(in));
    }
}

int32_t poi::hssf::record::chart::ChartFRTInfoRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(1)+ int32_t(1)+ int32_t(2)+ npc(rgCFRTID)->length * ChartFRTInfoRecord_CFRTID::ENCODED_SIZE;
}

int16_t poi::hssf::record::chart::ChartFRTInfoRecord::getSid()
{
    return sid;
}

void poi::hssf::record::chart::ChartFRTInfoRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(rt);
    npc(out)->writeShort(grbitFrt);
    npc(out)->writeByte(verOriginator);
    npc(out)->writeByte(verWriter);
    auto nCFRTIDs = npc(rgCFRTID)->length;
    npc(out)->writeShort(nCFRTIDs);
    for (auto i = int32_t(0); i < nCFRTIDs; i++) {
        npc((*rgCFRTID)[i])->serialize(out);
    }
}

java::lang::String* poi::hssf::record::chart::ChartFRTInfoRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[CHARTFRTINFO]\n"_j);
    npc(npc(npc(buffer)->append(u"    .rt           ="_j))->append(::poi::util::HexDump::shortToHex(rt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .grbitFrt     ="_j))->append(::poi::util::HexDump::shortToHex(grbitFrt)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .verOriginator="_j))->append(::poi::util::HexDump::byteToHex(verOriginator)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .verWriter    ="_j))->append(::poi::util::HexDump::byteToHex(verOriginator)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .nCFRTIDs     ="_j))->append(::poi::util::HexDump::shortToHex(npc(rgCFRTID)->length)))->append(u'\u000a');
    npc(buffer)->append(u"[/CHARTFRTINFO]\n"_j);
    return npc(buffer)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::ChartFRTInfoRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.ChartFRTInfoRecord", 51);
    return c;
}

int32_t poi::hssf::record::chart::ChartFRTInfoRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::ChartFRTInfoRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::ChartFRTInfoRecord::getClass0()
{
    return class_();
}

