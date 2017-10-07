// Generated from /POI/java/org/apache/poi/hssf/record/chart/SheetPropertiesRecord.java
#include <org/apache/poi/hssf/record/chart/SheetPropertiesRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
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

org::apache::poi::hssf::record::chart::SheetPropertiesRecord::SheetPropertiesRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::SheetPropertiesRecord::SheetPropertiesRecord() 
    : SheetPropertiesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::SheetPropertiesRecord::SheetPropertiesRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : SheetPropertiesRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::SheetPropertiesRecord::chartTypeManuallyFormatted()
{
    clinit();
    return chartTypeManuallyFormatted_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::chartTypeManuallyFormatted_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::SheetPropertiesRecord::plotVisibleOnly()
{
    clinit();
    return plotVisibleOnly_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::plotVisibleOnly_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::SheetPropertiesRecord::doNotSizeWithWindow()
{
    clinit();
    return doNotSizeWithWindow_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::doNotSizeWithWindow_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::SheetPropertiesRecord::defaultPlotDimensions()
{
    clinit();
    return defaultPlotDimensions_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::defaultPlotDimensions_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::SheetPropertiesRecord::autoPlotArea()
{
    clinit();
    return autoPlotArea_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::autoPlotArea_;

constexpr int8_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::EMPTY_NOT_PLOTTED;

constexpr int8_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::EMPTY_ZERO;

constexpr int8_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::EMPTY_INTERPOLATED;

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_flags = npc(in)->readUShort();
    field_2_empty = npc(in)->readUShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[SHTPROPS]\n"_j);
    npc(npc(npc(buffer)->append(u"    .flags                = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_1_flags)))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .chartTypeManuallyFormatted= "_j))->append(isChartTypeManuallyFormatted()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .plotVisibleOnly           = "_j))->append(isPlotVisibleOnly()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .doNotSizeWithWindow       = "_j))->append(isDoNotSizeWithWindow()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .defaultPlotDimensions     = "_j))->append(isDefaultPlotDimensions()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoPlotArea              = "_j))->append(isAutoPlotArea()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"    .empty                = "_j))->append(::org::apache::poi::util::HexDump::shortToHex(field_2_empty)))->append(u'\u000a');
    npc(buffer)->append(u"[/SHTPROPS]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_flags);
    npc(out)->writeShort(field_2_empty);
}

int32_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::getDataSize()
{
    return int32_t(2) + int32_t(2);
}

int16_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::getSid()
{
    return sid;
}

java::lang::Object* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::clone()
{
    auto rec = new SheetPropertiesRecord();
    npc(rec)->field_1_flags = field_1_flags;
    npc(rec)->field_2_empty = field_2_empty;
    return rec;
}

int32_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::getFlags()
{
    return field_1_flags;
}

int32_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::getEmpty()
{
    return field_2_empty;
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::setEmpty(int8_t empty)
{
    this->field_2_empty = empty;
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::setChartTypeManuallyFormatted(bool value)
{
    field_1_flags = npc(chartTypeManuallyFormatted_)->setBoolean(field_1_flags, value);
}

bool org::apache::poi::hssf::record::chart::SheetPropertiesRecord::isChartTypeManuallyFormatted()
{
    return npc(chartTypeManuallyFormatted_)->isSet(field_1_flags);
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::setPlotVisibleOnly(bool value)
{
    field_1_flags = npc(plotVisibleOnly_)->setBoolean(field_1_flags, value);
}

bool org::apache::poi::hssf::record::chart::SheetPropertiesRecord::isPlotVisibleOnly()
{
    return npc(plotVisibleOnly_)->isSet(field_1_flags);
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::setDoNotSizeWithWindow(bool value)
{
    field_1_flags = npc(doNotSizeWithWindow_)->setBoolean(field_1_flags, value);
}

bool org::apache::poi::hssf::record::chart::SheetPropertiesRecord::isDoNotSizeWithWindow()
{
    return npc(doNotSizeWithWindow_)->isSet(field_1_flags);
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::setDefaultPlotDimensions(bool value)
{
    field_1_flags = npc(defaultPlotDimensions_)->setBoolean(field_1_flags, value);
}

bool org::apache::poi::hssf::record::chart::SheetPropertiesRecord::isDefaultPlotDimensions()
{
    return npc(defaultPlotDimensions_)->isSet(field_1_flags);
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::setAutoPlotArea(bool value)
{
    field_1_flags = npc(autoPlotArea_)->setBoolean(field_1_flags, value);
}

bool org::apache::poi::hssf::record::chart::SheetPropertiesRecord::isAutoPlotArea()
{
    return npc(autoPlotArea_)->isSet(field_1_flags);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SheetPropertiesRecord", 54);
    return c;
}

void org::apache::poi::hssf::record::chart::SheetPropertiesRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        chartTypeManuallyFormatted_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        plotVisibleOnly_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        doNotSizeWithWindow_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        defaultPlotDimensions_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        autoPlotArea_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::SheetPropertiesRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::SheetPropertiesRecord::getClass0()
{
    return class_();
}

