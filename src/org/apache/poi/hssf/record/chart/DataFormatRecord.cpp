// Generated from /POI/java/org/apache/poi/hssf/record/chart/DataFormatRecord.java
#include <org/apache/poi/hssf/record/chart/DataFormatRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/HexDump.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::chart::DataFormatRecord::DataFormatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::DataFormatRecord::DataFormatRecord() 
    : DataFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::DataFormatRecord::DataFormatRecord(::poi::hssf::record::RecordInputStream* in) 
    : DataFormatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::DataFormatRecord::sid;

poi::util::BitField*& poi::hssf::record::chart::DataFormatRecord::useExcel4Colors()
{
    clinit();
    return useExcel4Colors_;
}
poi::util::BitField* poi::hssf::record::chart::DataFormatRecord::useExcel4Colors_;

void poi::hssf::record::chart::DataFormatRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::DataFormatRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_pointNumber = npc(in)->readShort();
    field_2_seriesIndex = npc(in)->readShort();
    field_3_seriesNumber = npc(in)->readShort();
    field_4_formatFlags = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::DataFormatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DATAFORMAT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .pointNumber          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getPointNumber())))->append(u" ("_j))->append(static_cast< int32_t >(getPointNumber())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .seriesIndex          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getSeriesIndex())))->append(u" ("_j))->append(static_cast< int32_t >(getSeriesIndex())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .seriesNumber         = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getSeriesNumber())))->append(u" ("_j))->append(static_cast< int32_t >(getSeriesNumber())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .formatFlags          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getFormatFlags())))->append(u" ("_j))->append(static_cast< int32_t >(getFormatFlags())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .useExcel4Colors          = "_j))->append(isUseExcel4Colors()))->append(u'\u000a');
    npc(buffer)->append(u"[/DATAFORMAT]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::DataFormatRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_pointNumber);
    npc(out)->writeShort(field_2_seriesIndex);
    npc(out)->writeShort(field_3_seriesNumber);
    npc(out)->writeShort(field_4_formatFlags);
}

int32_t poi::hssf::record::chart::DataFormatRecord::getDataSize()
{
    return int32_t(2) + int32_t(2) + int32_t(2)+ int32_t(2);
}

int16_t poi::hssf::record::chart::DataFormatRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::DataFormatRecord* poi::hssf::record::chart::DataFormatRecord::clone()
{
    auto rec = new DataFormatRecord();
    npc(rec)->field_1_pointNumber = field_1_pointNumber;
    npc(rec)->field_2_seriesIndex = field_2_seriesIndex;
    npc(rec)->field_3_seriesNumber = field_3_seriesNumber;
    npc(rec)->field_4_formatFlags = field_4_formatFlags;
    return rec;
}

int16_t poi::hssf::record::chart::DataFormatRecord::getPointNumber()
{
    return field_1_pointNumber;
}

void poi::hssf::record::chart::DataFormatRecord::setPointNumber(int16_t field_1_pointNumber)
{
    this->field_1_pointNumber = field_1_pointNumber;
}

int16_t poi::hssf::record::chart::DataFormatRecord::getSeriesIndex()
{
    return field_2_seriesIndex;
}

void poi::hssf::record::chart::DataFormatRecord::setSeriesIndex(int16_t field_2_seriesIndex)
{
    this->field_2_seriesIndex = field_2_seriesIndex;
}

int16_t poi::hssf::record::chart::DataFormatRecord::getSeriesNumber()
{
    return field_3_seriesNumber;
}

void poi::hssf::record::chart::DataFormatRecord::setSeriesNumber(int16_t field_3_seriesNumber)
{
    this->field_3_seriesNumber = field_3_seriesNumber;
}

int16_t poi::hssf::record::chart::DataFormatRecord::getFormatFlags()
{
    return field_4_formatFlags;
}

void poi::hssf::record::chart::DataFormatRecord::setFormatFlags(int16_t field_4_formatFlags)
{
    this->field_4_formatFlags = field_4_formatFlags;
}

void poi::hssf::record::chart::DataFormatRecord::setUseExcel4Colors(bool value)
{
    field_4_formatFlags = npc(useExcel4Colors_)->setShortBoolean(field_4_formatFlags, value);
}

bool poi::hssf::record::chart::DataFormatRecord::isUseExcel4Colors()
{
    return npc(useExcel4Colors_)->isSet(field_4_formatFlags);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::DataFormatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.DataFormatRecord", 49);
    return c;
}

void poi::hssf::record::chart::DataFormatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        useExcel4Colors_ = ::poi::util::BitFieldFactory::getInstance(1);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::chart::DataFormatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::DataFormatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::DataFormatRecord::getClass0()
{
    return class_();
}

