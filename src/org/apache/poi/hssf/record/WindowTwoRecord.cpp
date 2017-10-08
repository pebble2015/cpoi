// Generated from /POI/java/org/apache/poi/hssf/record/WindowTwoRecord.java
#include <org/apache/poi/hssf/record/WindowTwoRecord.hpp>

#include <java/lang/Integer.hpp>
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

poi::hssf::record::WindowTwoRecord::WindowTwoRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::WindowTwoRecord::WindowTwoRecord() 
    : WindowTwoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::WindowTwoRecord::WindowTwoRecord(RecordInputStream* in) 
    : WindowTwoRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::WindowTwoRecord::sid;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::displayFormulas()
{
    clinit();
    return displayFormulas_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::displayFormulas_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::displayGridlines()
{
    clinit();
    return displayGridlines_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::displayGridlines_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::displayRowColHeadings()
{
    clinit();
    return displayRowColHeadings_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::displayRowColHeadings_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::freezePanes()
{
    clinit();
    return freezePanes_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::freezePanes_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::displayZeros()
{
    clinit();
    return displayZeros_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::displayZeros_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::defaultHeader()
{
    clinit();
    return defaultHeader_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::defaultHeader_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::arabic()
{
    clinit();
    return arabic_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::arabic_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::displayGuts()
{
    clinit();
    return displayGuts_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::displayGuts_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::freezePanesNoSplit()
{
    clinit();
    return freezePanesNoSplit_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::freezePanesNoSplit_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::selected()
{
    clinit();
    return selected_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::selected_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::active()
{
    clinit();
    return active_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::active_;

poi::util::BitField*& poi::hssf::record::WindowTwoRecord::savedInPageBreakPreview()
{
    clinit();
    return savedInPageBreakPreview_;
}
poi::util::BitField* poi::hssf::record::WindowTwoRecord::savedInPageBreakPreview_;

void poi::hssf::record::WindowTwoRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::WindowTwoRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto size = npc(in)->remaining();
    field_1_options = npc(in)->readShort();
    field_2_top_row = npc(in)->readShort();
    field_3_left_col = npc(in)->readShort();
    field_4_header_color = npc(in)->readInt();
    if(size > 10) {
        field_5_page_break_zoom = npc(in)->readShort();
        field_6_normal_zoom = npc(in)->readShort();
    }
    if(size > 14) {
        field_7_reserved = npc(in)->readInt();
    }
}

void poi::hssf::record::WindowTwoRecord::setOptions(int16_t options)
{
    field_1_options = options;
}

void poi::hssf::record::WindowTwoRecord::setDisplayFormulas(bool formulas)
{
    field_1_options = npc(displayFormulas_)->setShortBoolean(field_1_options, formulas);
}

void poi::hssf::record::WindowTwoRecord::setDisplayGridlines(bool gridlines)
{
    field_1_options = npc(displayGridlines_)->setShortBoolean(field_1_options, gridlines);
}

void poi::hssf::record::WindowTwoRecord::setDisplayRowColHeadings(bool headings)
{
    field_1_options = npc(displayRowColHeadings_)->setShortBoolean(field_1_options, headings);
}

void poi::hssf::record::WindowTwoRecord::setFreezePanes(bool freezepanes)
{
    field_1_options = npc(freezePanes_)->setShortBoolean(field_1_options, freezepanes);
}

void poi::hssf::record::WindowTwoRecord::setDisplayZeros(bool zeros)
{
    field_1_options = npc(displayZeros_)->setShortBoolean(field_1_options, zeros);
}

void poi::hssf::record::WindowTwoRecord::setDefaultHeader(bool header)
{
    field_1_options = npc(defaultHeader_)->setShortBoolean(field_1_options, header);
}

void poi::hssf::record::WindowTwoRecord::setArabic(bool isarabic)
{
    field_1_options = npc(arabic_)->setShortBoolean(field_1_options, isarabic);
}

void poi::hssf::record::WindowTwoRecord::setDisplayGuts(bool guts)
{
    field_1_options = npc(displayGuts_)->setShortBoolean(field_1_options, guts);
}

void poi::hssf::record::WindowTwoRecord::setFreezePanesNoSplit(bool freeze)
{
    field_1_options = npc(freezePanesNoSplit_)->setShortBoolean(field_1_options, freeze);
}

void poi::hssf::record::WindowTwoRecord::setSelected(bool sel)
{
    field_1_options = npc(selected_)->setShortBoolean(field_1_options, sel);
}

void poi::hssf::record::WindowTwoRecord::setActive(bool p)
{
    field_1_options = npc(active_)->setShortBoolean(field_1_options, p);
}

void poi::hssf::record::WindowTwoRecord::setSavedInPageBreakPreview(bool p)
{
    field_1_options = npc(savedInPageBreakPreview_)->setShortBoolean(field_1_options, p);
}

void poi::hssf::record::WindowTwoRecord::setTopRow(int16_t topRow)
{
    field_2_top_row = topRow;
}

void poi::hssf::record::WindowTwoRecord::setLeftCol(int16_t leftCol)
{
    field_3_left_col = leftCol;
}

void poi::hssf::record::WindowTwoRecord::setHeaderColor(int32_t color)
{
    field_4_header_color = color;
}

void poi::hssf::record::WindowTwoRecord::setPageBreakZoom(int16_t zoom)
{
    field_5_page_break_zoom = zoom;
}

void poi::hssf::record::WindowTwoRecord::setNormalZoom(int16_t zoom)
{
    field_6_normal_zoom = zoom;
}

void poi::hssf::record::WindowTwoRecord::setReserved(int32_t reserved)
{
    field_7_reserved = reserved;
}

int16_t poi::hssf::record::WindowTwoRecord::getOptions()
{
    return field_1_options;
}

bool poi::hssf::record::WindowTwoRecord::getDisplayFormulas()
{
    return npc(displayFormulas_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getDisplayGridlines()
{
    return npc(displayGridlines_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getDisplayRowColHeadings()
{
    return npc(displayRowColHeadings_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getFreezePanes()
{
    return npc(freezePanes_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getDisplayZeros()
{
    return npc(displayZeros_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getDefaultHeader()
{
    return npc(defaultHeader_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getArabic()
{
    return npc(arabic_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getDisplayGuts()
{
    return npc(displayGuts_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getFreezePanesNoSplit()
{
    return npc(freezePanesNoSplit_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getSelected()
{
    return npc(selected_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::isActive()
{
    return npc(active_)->isSet(field_1_options);
}

bool poi::hssf::record::WindowTwoRecord::getSavedInPageBreakPreview()
{
    return npc(savedInPageBreakPreview_)->isSet(field_1_options);
}

int16_t poi::hssf::record::WindowTwoRecord::getTopRow()
{
    return field_2_top_row;
}

int16_t poi::hssf::record::WindowTwoRecord::getLeftCol()
{
    return field_3_left_col;
}

int32_t poi::hssf::record::WindowTwoRecord::getHeaderColor()
{
    return field_4_header_color;
}

int16_t poi::hssf::record::WindowTwoRecord::getPageBreakZoom()
{
    return field_5_page_break_zoom;
}

int16_t poi::hssf::record::WindowTwoRecord::getNormalZoom()
{
    return field_6_normal_zoom;
}

int32_t poi::hssf::record::WindowTwoRecord::getReserved()
{
    return field_7_reserved;
}

java::lang::String* poi::hssf::record::WindowTwoRecord::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"[WINDOW2]\n"_j);
    npc(npc(npc(buffer)->append(u"    .options        = "_j))->append(::java::lang::Integer::toHexString(getOptions())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .dispformulas= "_j))->append(getDisplayFormulas()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .dispgridlins= "_j))->append(getDisplayGridlines()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .disprcheadin= "_j))->append(getDisplayRowColHeadings()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .freezepanes = "_j))->append(getFreezePanes()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .displayzeros= "_j))->append(getDisplayZeros()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .defaultheadr= "_j))->append(getDefaultHeader()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .arabic      = "_j))->append(getArabic()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .displayguts = "_j))->append(getDisplayGuts()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .frzpnsnosplt= "_j))->append(getFreezePanesNoSplit()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .selected    = "_j))->append(getSelected()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .active       = "_j))->append(isActive()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"       .svdinpgbrkpv= "_j))->append(getSavedInPageBreakPreview()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .toprow         = "_j))->append(::java::lang::Integer::toHexString(getTopRow())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .leftcol        = "_j))->append(::java::lang::Integer::toHexString(getLeftCol())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .headercolor    = "_j))->append(::java::lang::Integer::toHexString(getHeaderColor())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .pagebreakzoom  = "_j))->append(::java::lang::Integer::toHexString(getPageBreakZoom())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .normalzoom     = "_j))->append(::java::lang::Integer::toHexString(getNormalZoom())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"    .reserved       = "_j))->append(::java::lang::Integer::toHexString(getReserved())))->append(u"\n"_j);
    npc(buffer)->append(u"[/WINDOW2]\n"_j);
    return npc(buffer)->toString();
}

void poi::hssf::record::WindowTwoRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getOptions());
    npc(out)->writeShort(getTopRow());
    npc(out)->writeShort(getLeftCol());
    npc(out)->writeInt(getHeaderColor());
    npc(out)->writeShort(getPageBreakZoom());
    npc(out)->writeShort(getNormalZoom());
    npc(out)->writeInt(getReserved());
}

int32_t poi::hssf::record::WindowTwoRecord::getDataSize()
{
    return 18;
}

int16_t poi::hssf::record::WindowTwoRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::WindowTwoRecord::clone()
{
    auto rec = new WindowTwoRecord();
    npc(rec)->field_1_options = field_1_options;
    npc(rec)->field_2_top_row = field_2_top_row;
    npc(rec)->field_3_left_col = field_3_left_col;
    npc(rec)->field_4_header_color = field_4_header_color;
    npc(rec)->field_5_page_break_zoom = field_5_page_break_zoom;
    npc(rec)->field_6_normal_zoom = field_6_normal_zoom;
    npc(rec)->field_7_reserved = field_7_reserved;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::WindowTwoRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.WindowTwoRecord", 42);
    return c;
}

void poi::hssf::record::WindowTwoRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        displayFormulas_ = ::poi::util::BitFieldFactory::getInstance(1);
        displayGridlines_ = ::poi::util::BitFieldFactory::getInstance(2);
        displayRowColHeadings_ = ::poi::util::BitFieldFactory::getInstance(4);
        freezePanes_ = ::poi::util::BitFieldFactory::getInstance(8);
        displayZeros_ = ::poi::util::BitFieldFactory::getInstance(16);
        defaultHeader_ = ::poi::util::BitFieldFactory::getInstance(32);
        arabic_ = ::poi::util::BitFieldFactory::getInstance(64);
        displayGuts_ = ::poi::util::BitFieldFactory::getInstance(128);
        freezePanesNoSplit_ = ::poi::util::BitFieldFactory::getInstance(256);
        selected_ = ::poi::util::BitFieldFactory::getInstance(512);
        active_ = ::poi::util::BitFieldFactory::getInstance(1024);
        savedInPageBreakPreview_ = ::poi::util::BitFieldFactory::getInstance(2048);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::WindowTwoRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::WindowTwoRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::WindowTwoRecord::getClass0()
{
    return class_();
}

