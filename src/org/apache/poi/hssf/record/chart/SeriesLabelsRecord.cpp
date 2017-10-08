// Generated from /POI/java/org/apache/poi/hssf/record/chart/SeriesLabelsRecord.java
#include <org/apache/poi/hssf/record/chart/SeriesLabelsRecord.hpp>

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

poi::hssf::record::chart::SeriesLabelsRecord::SeriesLabelsRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::chart::SeriesLabelsRecord::SeriesLabelsRecord() 
    : SeriesLabelsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::chart::SeriesLabelsRecord::SeriesLabelsRecord(::poi::hssf::record::RecordInputStream* in) 
    : SeriesLabelsRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::chart::SeriesLabelsRecord::sid;

poi::util::BitField*& poi::hssf::record::chart::SeriesLabelsRecord::showActual()
{
    clinit();
    return showActual_;
}
poi::util::BitField* poi::hssf::record::chart::SeriesLabelsRecord::showActual_;

poi::util::BitField*& poi::hssf::record::chart::SeriesLabelsRecord::showPercent()
{
    clinit();
    return showPercent_;
}
poi::util::BitField* poi::hssf::record::chart::SeriesLabelsRecord::showPercent_;

poi::util::BitField*& poi::hssf::record::chart::SeriesLabelsRecord::labelAsPercentage()
{
    clinit();
    return labelAsPercentage_;
}
poi::util::BitField* poi::hssf::record::chart::SeriesLabelsRecord::labelAsPercentage_;

poi::util::BitField*& poi::hssf::record::chart::SeriesLabelsRecord::smoothedLine()
{
    clinit();
    return smoothedLine_;
}
poi::util::BitField* poi::hssf::record::chart::SeriesLabelsRecord::smoothedLine_;

poi::util::BitField*& poi::hssf::record::chart::SeriesLabelsRecord::showLabel()
{
    clinit();
    return showLabel_;
}
poi::util::BitField* poi::hssf::record::chart::SeriesLabelsRecord::showLabel_;

poi::util::BitField*& poi::hssf::record::chart::SeriesLabelsRecord::showBubbleSizes()
{
    clinit();
    return showBubbleSizes_;
}
poi::util::BitField* poi::hssf::record::chart::SeriesLabelsRecord::showBubbleSizes_;

void poi::hssf::record::chart::SeriesLabelsRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::chart::SeriesLabelsRecord::ctor(::poi::hssf::record::RecordInputStream* in)
{
    super::ctor();
    field_1_formatFlags = npc(in)->readShort();
}

java::lang::String* poi::hssf::record::chart::SeriesLabelsRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[ATTACHEDLABEL]\n"_j);
    npc(npc(npc(npc(npc(npc(buffer)->append(u"    .formatFlags          = "_j))->append(u"0x"_j))->append(::poi::util::HexDump::toHex(getFormatFlags())))->append(u" ("_j))->append(static_cast< int32_t >(getFormatFlags())))->append(u" )"_j);
    npc(buffer)->append(::java::lang::System::getProperty(u"line.separator"_j));
    npc(npc(npc(buffer)->append(u"         .showActual               = "_j))->append(isShowActual()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .showPercent              = "_j))->append(isShowPercent()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .labelAsPercentage        = "_j))->append(isLabelAsPercentage()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .smoothedLine             = "_j))->append(isSmoothedLine()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .showLabel                = "_j))->append(isShowLabel()))->append(u'\u000a');
    npc(npc(npc(buffer)->append(u"         .showBubbleSizes          = "_j))->append(isShowBubbleSizes()))->append(u'\u000a');
    npc(buffer)->append(u"[/ATTACHEDLABEL]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::chart::SeriesLabelsRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(field_1_formatFlags);
}

int32_t poi::hssf::record::chart::SeriesLabelsRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::chart::SeriesLabelsRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::chart::SeriesLabelsRecord::clone()
{
    auto rec = new SeriesLabelsRecord();
    npc(rec)->field_1_formatFlags = field_1_formatFlags;
    return rec;
}

int16_t poi::hssf::record::chart::SeriesLabelsRecord::getFormatFlags()
{
    return field_1_formatFlags;
}

void poi::hssf::record::chart::SeriesLabelsRecord::setFormatFlags(int16_t field_1_formatFlags)
{
    this->field_1_formatFlags = field_1_formatFlags;
}

void poi::hssf::record::chart::SeriesLabelsRecord::setShowActual(bool value)
{
    field_1_formatFlags = npc(showActual_)->setShortBoolean(field_1_formatFlags, value);
}

bool poi::hssf::record::chart::SeriesLabelsRecord::isShowActual()
{
    return npc(showActual_)->isSet(field_1_formatFlags);
}

void poi::hssf::record::chart::SeriesLabelsRecord::setShowPercent(bool value)
{
    field_1_formatFlags = npc(showPercent_)->setShortBoolean(field_1_formatFlags, value);
}

bool poi::hssf::record::chart::SeriesLabelsRecord::isShowPercent()
{
    return npc(showPercent_)->isSet(field_1_formatFlags);
}

void poi::hssf::record::chart::SeriesLabelsRecord::setLabelAsPercentage(bool value)
{
    field_1_formatFlags = npc(labelAsPercentage_)->setShortBoolean(field_1_formatFlags, value);
}

bool poi::hssf::record::chart::SeriesLabelsRecord::isLabelAsPercentage()
{
    return npc(labelAsPercentage_)->isSet(field_1_formatFlags);
}

void poi::hssf::record::chart::SeriesLabelsRecord::setSmoothedLine(bool value)
{
    field_1_formatFlags = npc(smoothedLine_)->setShortBoolean(field_1_formatFlags, value);
}

bool poi::hssf::record::chart::SeriesLabelsRecord::isSmoothedLine()
{
    return npc(smoothedLine_)->isSet(field_1_formatFlags);
}

void poi::hssf::record::chart::SeriesLabelsRecord::setShowLabel(bool value)
{
    field_1_formatFlags = npc(showLabel_)->setShortBoolean(field_1_formatFlags, value);
}

bool poi::hssf::record::chart::SeriesLabelsRecord::isShowLabel()
{
    return npc(showLabel_)->isSet(field_1_formatFlags);
}

void poi::hssf::record::chart::SeriesLabelsRecord::setShowBubbleSizes(bool value)
{
    field_1_formatFlags = npc(showBubbleSizes_)->setShortBoolean(field_1_formatFlags, value);
}

bool poi::hssf::record::chart::SeriesLabelsRecord::isShowBubbleSizes()
{
    return npc(showBubbleSizes_)->isSet(field_1_formatFlags);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::chart::SeriesLabelsRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.chart.SeriesLabelsRecord", 51);
    return c;
}

void poi::hssf::record::chart::SeriesLabelsRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        showActual_ = ::poi::util::BitFieldFactory::getInstance(1);
        showPercent_ = ::poi::util::BitFieldFactory::getInstance(2);
        labelAsPercentage_ = ::poi::util::BitFieldFactory::getInstance(4);
        smoothedLine_ = ::poi::util::BitFieldFactory::getInstance(8);
        showLabel_ = ::poi::util::BitFieldFactory::getInstance(16);
        showBubbleSizes_ = ::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::chart::SeriesLabelsRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::chart::SeriesLabelsRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::chart::SeriesLabelsRecord::getClass0()
{
    return class_();
}

