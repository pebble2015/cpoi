// Generated from /POI/java/org/apache/poi/hssf/record/WindowOneRecord.java
#include <org/apache/poi/hssf/record/WindowOneRecord.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>
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

org::apache::poi::hssf::record::WindowOneRecord::WindowOneRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::WindowOneRecord::WindowOneRecord() 
    : WindowOneRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::WindowOneRecord::WindowOneRecord(RecordInputStream* in) 
    : WindowOneRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::WindowOneRecord::sid;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::WindowOneRecord::hidden()
{
    clinit();
    return hidden_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::WindowOneRecord::hidden_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::WindowOneRecord::iconic()
{
    clinit();
    return iconic_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::WindowOneRecord::iconic_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::WindowOneRecord::reserved()
{
    clinit();
    return reserved_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::WindowOneRecord::reserved_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::WindowOneRecord::hscroll()
{
    clinit();
    return hscroll_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::WindowOneRecord::hscroll_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::WindowOneRecord::vscroll()
{
    clinit();
    return vscroll_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::WindowOneRecord::vscroll_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::WindowOneRecord::tabs()
{
    clinit();
    return tabs_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::WindowOneRecord::tabs_;

void org::apache::poi::hssf::record::WindowOneRecord::ctor()
{
    super::ctor();
}

void org::apache::poi::hssf::record::WindowOneRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    field_1_h_hold = npc(in)->readShort();
    field_2_v_hold = npc(in)->readShort();
    field_3_width = npc(in)->readShort();
    field_4_height = npc(in)->readShort();
    field_5_options = npc(in)->readShort();
    field_6_active_sheet = npc(in)->readShort();
    field_7_first_visible_tab = npc(in)->readShort();
    field_8_num_selected_tabs = npc(in)->readShort();
    field_9_tab_width_ratio = npc(in)->readShort();
}

void org::apache::poi::hssf::record::WindowOneRecord::setHorizontalHold(int16_t h)
{
    field_1_h_hold = h;
}

void org::apache::poi::hssf::record::WindowOneRecord::setVerticalHold(int16_t v)
{
    field_2_v_hold = v;
}

void org::apache::poi::hssf::record::WindowOneRecord::setWidth(int16_t w)
{
    field_3_width = w;
}

void org::apache::poi::hssf::record::WindowOneRecord::setHeight(int16_t h)
{
    field_4_height = h;
}

void org::apache::poi::hssf::record::WindowOneRecord::setOptions(int16_t o)
{
    field_5_options = o;
}

void org::apache::poi::hssf::record::WindowOneRecord::setHidden(bool ishidden)
{
    field_5_options = npc(hidden_)->setShortBoolean(field_5_options, ishidden);
}

void org::apache::poi::hssf::record::WindowOneRecord::setIconic(bool isiconic)
{
    field_5_options = npc(iconic_)->setShortBoolean(field_5_options, isiconic);
}

void org::apache::poi::hssf::record::WindowOneRecord::setDisplayHorizonalScrollbar(bool scroll)
{
    field_5_options = npc(hscroll_)->setShortBoolean(field_5_options, scroll);
}

void org::apache::poi::hssf::record::WindowOneRecord::setDisplayVerticalScrollbar(bool scroll)
{
    field_5_options = npc(vscroll_)->setShortBoolean(field_5_options, scroll);
}

void org::apache::poi::hssf::record::WindowOneRecord::setDisplayTabs(bool disptabs)
{
    field_5_options = npc(tabs_)->setShortBoolean(field_5_options, disptabs);
}

void org::apache::poi::hssf::record::WindowOneRecord::setActiveSheetIndex(int32_t index)
{
    field_6_active_sheet = index;
}

void org::apache::poi::hssf::record::WindowOneRecord::setFirstVisibleTab(int32_t t)
{
    field_7_first_visible_tab = t;
}

void org::apache::poi::hssf::record::WindowOneRecord::setNumSelectedTabs(int16_t n)
{
    field_8_num_selected_tabs = n;
}

void org::apache::poi::hssf::record::WindowOneRecord::setTabWidthRatio(int16_t r)
{
    field_9_tab_width_ratio = r;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getHorizontalHold()
{
    return field_1_h_hold;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getVerticalHold()
{
    return field_2_v_hold;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getWidth()
{
    return field_3_width;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getHeight()
{
    return field_4_height;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getOptions()
{
    return field_5_options;
}

bool org::apache::poi::hssf::record::WindowOneRecord::getHidden()
{
    return npc(hidden_)->isSet(field_5_options);
}

bool org::apache::poi::hssf::record::WindowOneRecord::getIconic()
{
    return npc(iconic_)->isSet(field_5_options);
}

bool org::apache::poi::hssf::record::WindowOneRecord::getDisplayHorizontalScrollbar()
{
    return npc(hscroll_)->isSet(field_5_options);
}

bool org::apache::poi::hssf::record::WindowOneRecord::getDisplayVerticalScrollbar()
{
    return npc(vscroll_)->isSet(field_5_options);
}

bool org::apache::poi::hssf::record::WindowOneRecord::getDisplayTabs()
{
    return npc(tabs_)->isSet(field_5_options);
}

int32_t org::apache::poi::hssf::record::WindowOneRecord::getActiveSheetIndex()
{
    return field_6_active_sheet;
}

int32_t org::apache::poi::hssf::record::WindowOneRecord::getFirstVisibleTab()
{
    return field_7_first_visible_tab;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getNumSelectedTabs()
{
    return field_8_num_selected_tabs;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getTabWidthRatio()
{
    return field_9_tab_width_ratio;
}

java::lang::String* org::apache::poi::hssf::record::WindowOneRecord::toString()
{
    return ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"[WINDOW1]\n"_j)->append(u"    .h_hold          = "_j)->toString())->append(::java::lang::Integer::toHexString(getHorizontalHold()))
        ->append(u"\n"_j)
        ->append(u"    .v_hold          = "_j)
        ->append(::java::lang::Integer::toHexString(getVerticalHold()))
        ->append(u"\n"_j)
        ->append(u"    .width           = "_j)
        ->append(::java::lang::Integer::toHexString(getWidth()))
        ->append(u"\n"_j)
        ->append(u"    .height          = "_j)
        ->append(::java::lang::Integer::toHexString(getHeight()))
        ->append(u"\n"_j)
        ->append(u"    .options         = "_j)
        ->append(::java::lang::Integer::toHexString(getOptions()))
        ->append(u"\n"_j)
        ->append(u"        .hidden      = "_j)
        ->append(getHidden())
        ->append(u"\n"_j)
        ->append(u"        .iconic      = "_j)
        ->append(getIconic())
        ->append(u"\n"_j)
        ->append(u"        .hscroll     = "_j)
        ->append(getDisplayHorizontalScrollbar())
        ->append(u"\n"_j)
        ->append(u"        .vscroll     = "_j)
        ->append(getDisplayVerticalScrollbar())
        ->append(u"\n"_j)
        ->append(u"        .tabs        = "_j)
        ->append(getDisplayTabs())
        ->append(u"\n"_j)
        ->append(u"    .activeSheet     = "_j)
        ->append(::java::lang::Integer::toHexString(getActiveSheetIndex()))
        ->append(u"\n"_j)
        ->append(u"    .firstVisibleTab    = "_j)
        ->append(::java::lang::Integer::toHexString(getFirstVisibleTab()))
        ->append(u"\n"_j)
        ->append(u"    .numselectedtabs = "_j)
        ->append(::java::lang::Integer::toHexString(getNumSelectedTabs()))
        ->append(u"\n"_j)
        ->append(u"    .tabwidthratio   = "_j)
        ->append(::java::lang::Integer::toHexString(getTabWidthRatio()))
        ->append(u"\n"_j)
        ->append(u"[/WINDOW1]\n"_j)->toString();
}

void org::apache::poi::hssf::record::WindowOneRecord::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeShort(getHorizontalHold());
    npc(out)->writeShort(getVerticalHold());
    npc(out)->writeShort(getWidth());
    npc(out)->writeShort(getHeight());
    npc(out)->writeShort(getOptions());
    npc(out)->writeShort(getActiveSheetIndex());
    npc(out)->writeShort(getFirstVisibleTab());
    npc(out)->writeShort(getNumSelectedTabs());
    npc(out)->writeShort(getTabWidthRatio());
}

int32_t org::apache::poi::hssf::record::WindowOneRecord::getDataSize()
{
    return 18;
}

int16_t org::apache::poi::hssf::record::WindowOneRecord::getSid()
{
    return sid;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::WindowOneRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.WindowOneRecord", 42);
    return c;
}

void org::apache::poi::hssf::record::WindowOneRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        hidden_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1);
        iconic_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2);
        reserved_ = ::org::apache::poi::util::BitFieldFactory::getInstance(4);
        hscroll_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8);
        vscroll_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16);
        tabs_ = ::org::apache::poi::util::BitFieldFactory::getInstance(32);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t org::apache::poi::hssf::record::WindowOneRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* org::apache::poi::hssf::record::WindowOneRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* org::apache::poi::hssf::record::WindowOneRecord::getClass0()
{
    return class_();
}

