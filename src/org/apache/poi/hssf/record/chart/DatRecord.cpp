// Generated from /POI/java/org/apache/poi/hssf/record/chart/DatRecord.java
#include <org/apache/poi/hssf/record/chart/DatRecord.hpp>

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

org::apache::poi::hssf::record::chart::DatRecord::DatRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::chart::DatRecord::DatRecord() 
    : DatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::chart::DatRecord::DatRecord(::org::apache::poi::hssf::record::RecordInputStream* in) 
    : DatRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::chart::DatRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::DatRecord::horizontalBorder()
{
    clinit();
    return horizontalBorder_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::DatRecord::horizontalBorder_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::DatRecord::verticalBorder()
{
    clinit();
    return verticalBorder_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::DatRecord::verticalBorder_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::DatRecord::border()
{
    clinit();
    return border_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::DatRecord::border_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::chart::DatRecord::showSeriesKey()
{
    clinit();
    return showSeriesKey_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::chart::DatRecord::showSeriesKey_;

void org::apache::poi::hssf::record::chart::DatRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::chart::DatRecord::ctor(::org::apache::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_options = npc(in)->readShort();
}

java::lang::String* org::apache::poi::hssf::record::chart::DatRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[DAT]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::org::apache::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .horizontalBorder         = "_j))->append(isHorizontalBorder()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .verticalBorder           = "_j))->append(isVerticalBorder()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .border                   = "_j))->append(isBorder()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .showSeriesKey            = "_j))->append(isShowSeriesKey()))->append(u'\u000a');
    npc(buffer)->append(u"[/DAT]\n"_j);
    return npc(buffer)->toString();
}

void org::apache::poi::hssf::record::chart::DatRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_options);
}

int32_t org::apache::poi::hssf::record::chart::DatRecord::getDataSize()
{
    return 2;
}

int16_t org::apache::poi::hssf::record::chart::DatRecord::getSid()
{
    return sid;
}

org::apache::poi::hssf::record::chart::DatRecord* org::apache::poi::hssf::record::chart::DatRecord::clone()
{
    auto rec = new DatRecord();
    npc(rec)->field_1_options = field_1_options;
    return rec;
}

int16_t org::apache::poi::hssf::record::chart::DatRecord::getOptions()
{
    return field_1_options;
}

void org::apache::poi::hssf::record::chart::DatRecord::setOptions(int16_t field_1_options)
{
    this->field_1_options = field_1_options;
}

void org::apache::poi::hssf::record::chart::DatRecord::setHorizontalBorder(bool value)
{
    field_1_options = npc(horizontalBorder_)->setShortBoolean(field_1_options, value);
}

bool org::apache::poi::hssf::record::chart::DatRecord::isHorizontalBorder()
{
    return npc(horizontalBorder_)->isSet(field_1_options);
}

void org::apache::poi::hssf::record::chart::DatRecord::setVerticalBorder(bool value)
{
    field_1_options = npc(verticalBorder_)->setShortBoolean(field_1_options, value);
}

bool org::apache::poi::hssf::record::chart::DatRecord::isVerticalBorder()
{
    return npc(verticalBorder_)->isSet(field_1_options);
}

void org::apache::poi::hssf::record::chart::DatRecord::setBorder(bool value)
{
    field_1_options = npc(border_)->setShortBoolean(field_1_options, value);
}

bool org::apache::poi::hssf::record::chart::DatRecord::isBorder()
{
    return npc(border_)->isSet(field_1_options);
}

void org::apache::poi::hssf::record::chart::DatRecord::setShowSeriesKey(bool value)
{
    field_1_options = npc(showSeriesKey_)->setShortBoolean(field_1_options, value);
}

bool org::apache::poi::hssf::record::chart::DatRecord::isShowSeriesKey()
{
    return npc(showSeriesKey_)->isSet(field_1_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::chart::DatRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.DatRecord", 42);
    return c;
}

void org::apache::poi::hssf::record::chart::DatRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        horizontalBorder_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        verticalBorder_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        border_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        showSeriesKey_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::chart::DatRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::chart::DatRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::chart::DatRecord::getClass0()
{
    return class_();
}

