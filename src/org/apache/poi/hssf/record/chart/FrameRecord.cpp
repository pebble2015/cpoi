// Generated from /POI/java/org/apache/poi/hssf/record/chart/FrameRecord.java
#include <org/apache/poi/hssf/record/chart/FrameRecord.hpp>

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

poi::hssf::record::chart::FrameRecord::FrameRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::FrameRecord::FrameRecord() 
    : FrameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::FrameRecord::FrameRecord(::poi::hssf::record::RecordInputStream* in) 
    : FrameRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::FrameRecord::sid;

poi::util::BitField*& poi::hssf::record::chart::FrameRecord::autoSize()
{
    clinit();
    return autoSize_;
}
poi::util::BitField* poi::hssf::record::chart::FrameRecord::autoSize_;

poi::util::BitField*& poi::hssf::record::chart::FrameRecord::autoPosition()
{
    clinit();
    return autoPosition_;
}
poi::util::BitField* poi::hssf::record::chart::FrameRecord::autoPosition_;

constexpr int16_t poi::hssf::record::chart::FrameRecord::BORDER_TYPE_REGULAR;

constexpr int16_t poi::hssf::record::chart::FrameRecord::BORDER_TYPE_SHADOW;

void poi::hssf::record::chart::FrameRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::FrameRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_borderType = npc(in)->readShort();
    field_2_options = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::FrameRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[FRAME]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .borderType           = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getBorderType())))->append(u" ("_j))->append(static_cast< int32_t >(getBorderType())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .options              = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getOptions())))->append(u" ("_j))->append(static_cast< int32_t >(getOptions())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .autoSize                 = "_j))->append(isAutoSize()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .autoPosition             = "_j))->append(isAutoPosition()))->append(u'\u000a');
    npc(buffer)->append(u"[/FRAME]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::FrameRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_borderType);
    npc(out)->writeShort(field_2_options);
}

int32_t poi::hssf::record::chart::FrameRecord::getDataSize()
{
    return int32_t(2) + int32_t(2);
}

int16_t poi::hssf::record::chart::FrameRecord::getSid()
{
    return sid;
}

poi::hssf::record::chart::FrameRecord* poi::hssf::record::chart::FrameRecord::clone()
{
    auto rec = new FrameRecord();
    npc(rec)->field_1_borderType = field_1_borderType;
    npc(rec)->field_2_options = field_2_options;
    return rec;
}

int16_t poi::hssf::record::chart::FrameRecord::getBorderType()
{
    return field_1_borderType;
}

void poi::hssf::record::chart::FrameRecord::setBorderType(int16_t field_1_borderType)
{
    this->field_1_borderType = field_1_borderType;
}

int16_t poi::hssf::record::chart::FrameRecord::getOptions()
{
    return field_2_options;
}

void poi::hssf::record::chart::FrameRecord::setOptions(int16_t field_2_options)
{
    this->field_2_options = field_2_options;
}

void poi::hssf::record::chart::FrameRecord::setAutoSize(bool value)
{
    field_2_options = npc(autoSize_)->setShortBoolean(field_2_options, value);
}

bool poi::hssf::record::chart::FrameRecord::isAutoSize()
{
    return npc(autoSize_)->isSet(field_2_options);
}

void poi::hssf::record::chart::FrameRecord::setAutoPosition(bool value)
{
    field_2_options = npc(autoPosition_)->setShortBoolean(field_2_options, value);
}

bool poi::hssf::record::chart::FrameRecord::isAutoPosition()
{
    return npc(autoPosition_)->isSet(field_2_options);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::FrameRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.FrameRecord", 44);
    return c;
}

void poi::hssf::record::chart::FrameRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        autoSize_ = ::poi::util::BitFieldFactory::getInstance(1);
        autoPosition_ = ::poi::util::BitFieldFactory::getInstance(2);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::chart::FrameRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::FrameRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::FrameRecord::getClass0()
{
    return class_();
}

