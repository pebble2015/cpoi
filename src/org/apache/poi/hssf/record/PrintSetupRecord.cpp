// Generated from /POI/java/org/apache/poi/hssf/record/PrintSetupRecord.java
#include <org/apache/poi/hssf/record/PrintSetupRecord.hpp>

#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/hssf/record/RecordInputStream.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>
#include <Array.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

poi::hssf::record::PrintSetupRecord::PrintSetupRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::PrintSetupRecord::PrintSetupRecord() 
    : PrintSetupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::PrintSetupRecord::PrintSetupRecord(RecordInputStream* in) 
    : PrintSetupRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::PrintSetupRecord::sid;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::lefttoright()
{
    clinit();
    return lefttoright_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::lefttoright_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::landscape()
{
    clinit();
    return landscape_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::landscape_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::validsettings()
{
    clinit();
    return validsettings_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::validsettings_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::nocolor()
{
    clinit();
    return nocolor_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::nocolor_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::draft()
{
    clinit();
    return draft_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::draft_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::notes()
{
    clinit();
    return notes_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::notes_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::noOrientation()
{
    clinit();
    return noOrientation_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::noOrientation_;

poi::util::BitField*& poi::hssf::record::PrintSetupRecord::usepage()
{
    clinit();
    return usepage_;
}
poi::util::BitField* poi::hssf::record::PrintSetupRecord::usepage_;

void poi::hssf::record::PrintSetupRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::PrintSetupRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_paper_size = npc(in)->readShort();
    field_2_scale = npc(in)->readShort();
    field_3_page_start = npc(in)->readShort();
    field_4_fit_width = npc(in)->readShort();
    field_5_fit_height = npc(in)->readShort();
    field_6_options = npc(in)->readShort();
    field_7_hresolution = npc(in)->readShort();
    field_8_vresolution = npc(in)->readShort();
    field_9_headermargin = npc(in)->readDouble();
    field_10_footermargin = npc(in)->readDouble();
    field_11_copies = npc(in)->readShort();
}

void poi::hssf::record::PrintSetupRecord::setPaperSize(int16_t size)
{
    field_1_paper_size = size;
}

void poi::hssf::record::PrintSetupRecord::setScale(int16_t scale)
{
    field_2_scale = scale;
}

void poi::hssf::record::PrintSetupRecord::setPageStart(int16_t start)
{
    field_3_page_start = start;
}

void poi::hssf::record::PrintSetupRecord::setFitWidth(int16_t width)
{
    field_4_fit_width = width;
}

void poi::hssf::record::PrintSetupRecord::setFitHeight(int16_t height)
{
    field_5_fit_height = height;
}

void poi::hssf::record::PrintSetupRecord::setOptions(int16_t options)
{
    field_6_options = options;
}

void poi::hssf::record::PrintSetupRecord::setLeftToRight(bool ltor)
{
    field_6_options = npc(lefttoright_)->setShortBoolean(field_6_options, ltor);
}

void poi::hssf::record::PrintSetupRecord::setLandscape(bool ls)
{
    field_6_options = npc(landscape_)->setShortBoolean(field_6_options, ls);
}

void poi::hssf::record::PrintSetupRecord::setValidSettings(bool valid)
{
    field_6_options = npc(validsettings_)->setShortBoolean(field_6_options, valid);
}

void poi::hssf::record::PrintSetupRecord::setNoColor(bool mono)
{
    field_6_options = npc(nocolor_)->setShortBoolean(field_6_options, mono);
}

void poi::hssf::record::PrintSetupRecord::setDraft(bool d)
{
    field_6_options = npc(draft_)->setShortBoolean(field_6_options, d);
}

void poi::hssf::record::PrintSetupRecord::setNotes(bool printnotes)
{
    field_6_options = npc(notes_)->setShortBoolean(field_6_options, printnotes);
}

void poi::hssf::record::PrintSetupRecord::setNoOrientation(bool orientation)
{
    field_6_options = npc(noOrientation_)->setShortBoolean(field_6_options, orientation);
}

void poi::hssf::record::PrintSetupRecord::setUsePage(bool page)
{
    field_6_options = npc(usepage_)->setShortBoolean(field_6_options, page);
}

void poi::hssf::record::PrintSetupRecord::setHResolution(int16_t resolution)
{
    field_7_hresolution = resolution;
}

void poi::hssf::record::PrintSetupRecord::setVResolution(int16_t resolution)
{
    field_8_vresolution = resolution;
}

void poi::hssf::record::PrintSetupRecord::setHeaderMargin(double headermargin)
{
    field_9_headermargin = headermargin;
}

void poi::hssf::record::PrintSetupRecord::setFooterMargin(double footermargin)
{
    field_10_footermargin = footermargin;
}

void poi::hssf::record::PrintSetupRecord::setCopies(int16_t copies)
{
    field_11_copies = copies;
}

int16_t poi::hssf::record::PrintSetupRecord::getPaperSize()
{
    return field_1_paper_size;
}

int16_t poi::hssf::record::PrintSetupRecord::getScale()
{
    return field_2_scale;
}

int16_t poi::hssf::record::PrintSetupRecord::getPageStart()
{
    return field_3_page_start;
}

int16_t poi::hssf::record::PrintSetupRecord::getFitWidth()
{
    return field_4_fit_width;
}

int16_t poi::hssf::record::PrintSetupRecord::getFitHeight()
{
    return field_5_fit_height;
}

int16_t poi::hssf::record::PrintSetupRecord::getOptions()
{
    return field_6_options;
}

bool poi::hssf::record::PrintSetupRecord::getLeftToRight()
{
    return npc(lefttoright_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getLandscape()
{
    return npc(landscape_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getValidSettings()
{
    return npc(validsettings_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getNoColor()
{
    return npc(nocolor_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getDraft()
{
    return npc(draft_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getNotes()
{
    return npc(notes_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getNoOrientation()
{
    return npc(noOrientation_)->isSet(field_6_options);
}

bool poi::hssf::record::PrintSetupRecord::getUsePage()
{
    return npc(usepage_)->isSet(field_6_options);
}

int16_t poi::hssf::record::PrintSetupRecord::getHResolution()
{
    return field_7_hresolution;
}

int16_t poi::hssf::record::PrintSetupRecord::getVResolution()
{
    return field_8_vresolution;
}

double poi::hssf::record::PrintSetupRecord::getHeaderMargin()
{
    return field_9_headermargin;
}

double poi::hssf::record::PrintSetupRecord::getFooterMargin()
{
    return field_10_footermargin;
}

int16_t poi::hssf::record::PrintSetupRecord::getCopies()
{
    return field_11_copies;
}

java::lang::String* poi::hssf::record::PrintSetupRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[PRINTSETUP]\n"_j);
    npc(npc(npc(buffer)->append(u"    .papersize      = "_j))->append(static_cast< int32_t >(getPaperSize())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .scale          = "_j))->append(static_cast< int32_t >(getScale())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .pagestart      = "_j))->append(static_cast< int32_t >(getPageStart())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .fitwidth       = "_j))->append(static_cast< int32_t >(getFitWidth())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .fitheight      = "_j))->append(static_cast< int32_t >(getFitHeight())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .options        = "_j))->append(static_cast< int32_t >(getOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .ltor       = "_j))->append(getLeftToRight()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .landscape  = "_j))->append(getLandscape()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .valid      = "_j))->append(getValidSettings()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .mono       = "_j))->append(getNoColor()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .draft      = "_j))->append(getDraft()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .notes      = "_j))->append(getNotes()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .noOrientat = "_j))->append(getNoOrientation()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"        .usepage    = "_j))->append(getUsePage()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .hresolution    = "_j))->append(static_cast< int32_t >(getHResolution())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .vresolution    = "_j))->append(static_cast< int32_t >(getVResolution())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .headermargin   = "_j))->append(getHeaderMargin()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .footermargin   = "_j))->append(getFooterMargin()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .copies         = "_j))->append(static_cast< int32_t >(getCopies())))->append(u"\n"_j);
    npc(buffer)->append(u"[/PRINTSETUP]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::PrintSetupRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getPaperSize());
    npc(out)->writeShort(getScale());
    npc(out)->writeShort(getPageStart());
    npc(out)->writeShort(getFitWidth());
    npc(out)->writeShort(getFitHeight());
    npc(out)->writeShort(getOptions());
    npc(out)->writeShort(getHResolution());
    npc(out)->writeShort(getVResolution());
    npc(out)->writeDouble(getHeaderMargin());
    npc(out)->writeDouble(getFooterMargin());
    npc(out)->writeShort(getCopies());
}

int32_t poi::hssf::record::PrintSetupRecord::getDataSize()
{
    return 34;
}

int16_t poi::hssf::record::PrintSetupRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::PrintSetupRecord::clone()
{
    auto rec = new PrintSetupRecord();
    npc(rec)->field_1_paper_size = field_1_paper_size;
    npc(rec)->field_2_scale = field_2_scale;
    npc(rec)->field_3_page_start = field_3_page_start;
    npc(rec)->field_4_fit_width = field_4_fit_width;
    npc(rec)->field_5_fit_height = field_5_fit_height;
    npc(rec)->field_6_options = field_6_options;
    npc(rec)->field_7_hresolution = field_7_hresolution;
    npc(rec)->field_8_vresolution = field_8_vresolution;
    npc(rec)->field_9_headermargin = field_9_headermargin;
    npc(rec)->field_10_footermargin = field_10_footermargin;
    npc(rec)->field_11_copies = field_11_copies;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::PrintSetupRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.PrintSetupRecord", 43);
    return c;
}

void poi::hssf::record::PrintSetupRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        lefttoright_ = ::poi::util::BitFieldFactory::getInstance(1);
        landscape_ = ::poi::util::BitFieldFactory::getInstance(2);
        validsettings_ = ::poi::util::BitFieldFactory::getInstance(4);
        nocolor_ = ::poi::util::BitFieldFactory::getInstance(8);
        draft_ = ::poi::util::BitFieldFactory::getInstance(16);
        notes_ = ::poi::util::BitFieldFactory::getInstance(32);
        noOrientation_ = ::poi::util::BitFieldFactory::getInstance(64);
        usepage_ = ::poi::util::BitFieldFactory::getInstance(128);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::PrintSetupRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::PrintSetupRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::PrintSetupRecord::getClass0()
{
    return class_();
}

