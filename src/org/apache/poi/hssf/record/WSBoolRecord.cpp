// Generated from /POI/java/org/apache/poi/hssf/record/WSBoolRecord.java
#include <org/apache/poi/hssf/record/WSBoolRecord.hpp>

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

poi::hssf::record::WSBoolRecord::WSBoolRecord(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::record::WSBoolRecord::WSBoolRecord() 
    : WSBoolRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

poi::hssf::record::WSBoolRecord::WSBoolRecord(RecordInputStream* in) 
    : WSBoolRecord(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t poi::hssf::record::WSBoolRecord::sid;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::autobreaks()
{
    clinit();
    return autobreaks_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::autobreaks_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::dialog()
{
    clinit();
    return dialog_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::dialog_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::applystyles()
{
    clinit();
    return applystyles_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::applystyles_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::rowsumsbelow()
{
    clinit();
    return rowsumsbelow_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::rowsumsbelow_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::rowsumsright()
{
    clinit();
    return rowsumsright_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::rowsumsright_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::fittopage()
{
    clinit();
    return fittopage_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::fittopage_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::displayguts()
{
    clinit();
    return displayguts_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::displayguts_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::alternateexpression()
{
    clinit();
    return alternateexpression_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::alternateexpression_;

poi::util::BitField*& poi::hssf::record::WSBoolRecord::alternateformula()
{
    clinit();
    return alternateformula_;
}
poi::util::BitField* poi::hssf::record::WSBoolRecord::alternateformula_;

void poi::hssf::record::WSBoolRecord::ctor()
{
    super::ctor();
}

void poi::hssf::record::WSBoolRecord::ctor(RecordInputStream* in)
{
    super::ctor();
    auto data = npc(in)->readRemainder();
    field_1_wsbool = (*data)[int32_t(1)];
    field_2_wsbool = (*data)[int32_t(0)];
}

void poi::hssf::record::WSBoolRecord::setWSBool1(int8_t bool1)
{
    field_1_wsbool = bool1;
}

void poi::hssf::record::WSBoolRecord::setAutobreaks(bool ab)
{
    field_1_wsbool = npc(autobreaks_)->setByteBoolean(field_1_wsbool, ab);
}

void poi::hssf::record::WSBoolRecord::setDialog(bool isDialog)
{
    field_1_wsbool = npc(dialog_)->setByteBoolean(field_1_wsbool, isDialog);
}

void poi::hssf::record::WSBoolRecord::setRowSumsBelow(bool below)
{
    field_1_wsbool = npc(rowsumsbelow_)->setByteBoolean(field_1_wsbool, below);
}

void poi::hssf::record::WSBoolRecord::setRowSumsRight(bool right)
{
    field_1_wsbool = npc(rowsumsright_)->setByteBoolean(field_1_wsbool, right);
}

void poi::hssf::record::WSBoolRecord::setWSBool2(int8_t bool2)
{
    field_2_wsbool = bool2;
}

void poi::hssf::record::WSBoolRecord::setFitToPage(bool fit2page)
{
    field_2_wsbool = npc(fittopage_)->setByteBoolean(field_2_wsbool, fit2page);
}

void poi::hssf::record::WSBoolRecord::setDisplayGuts(bool guts)
{
    field_2_wsbool = npc(displayguts_)->setByteBoolean(field_2_wsbool, guts);
}

void poi::hssf::record::WSBoolRecord::setAlternateExpression(bool altexp)
{
    field_2_wsbool = npc(alternateexpression_)->setByteBoolean(field_2_wsbool, altexp);
}

void poi::hssf::record::WSBoolRecord::setAlternateFormula(bool formula)
{
    field_2_wsbool = npc(alternateformula_)->setByteBoolean(field_2_wsbool, formula);
}

int8_t poi::hssf::record::WSBoolRecord::getWSBool1()
{
    return field_1_wsbool;
}

bool poi::hssf::record::WSBoolRecord::getAutobreaks()
{
    return npc(autobreaks_)->isSet(field_1_wsbool);
}

bool poi::hssf::record::WSBoolRecord::getDialog()
{
    return npc(dialog_)->isSet(field_1_wsbool);
}

bool poi::hssf::record::WSBoolRecord::getRowSumsBelow()
{
    return npc(rowsumsbelow_)->isSet(field_1_wsbool);
}

bool poi::hssf::record::WSBoolRecord::getRowSumsRight()
{
    return npc(rowsumsright_)->isSet(field_1_wsbool);
}

int8_t poi::hssf::record::WSBoolRecord::getWSBool2()
{
    return field_2_wsbool;
}

bool poi::hssf::record::WSBoolRecord::getFitToPage()
{
    return npc(fittopage_)->isSet(field_2_wsbool);
}

bool poi::hssf::record::WSBoolRecord::getDisplayGuts()
{
    return npc(displayguts_)->isSet(field_2_wsbool);
}

bool poi::hssf::record::WSBoolRecord::getAlternateExpression()
{
    return npc(alternateexpression_)->isSet(field_2_wsbool);
}

bool poi::hssf::record::WSBoolRecord::getAlternateFormula()
{
    return npc(alternateformula_)->isSet(field_2_wsbool);
}

java::lang::String* poi::hssf::record::WSBoolRecord::toString()
{
    return ::java::lang::StringBuilder().append(::java::lang::StringBuilder().append(u"[WSBOOL]\n"_j)->append(u"    .wsbool1        = "_j)->toString())->append(::java::lang::Integer::toHexString(getWSBool1()))
        ->append(u"\n"_j)
        ->append(u"        .autobreaks = "_j)
        ->append(getAutobreaks())
        ->append(u"\n"_j)
        ->append(u"        .dialog     = "_j)
        ->append(getDialog())
        ->append(u"\n"_j)
        ->append(u"        .rowsumsbelw= "_j)
        ->append(getRowSumsBelow())
        ->append(u"\n"_j)
        ->append(u"        .rowsumsrigt= "_j)
        ->append(getRowSumsRight())
        ->append(u"\n"_j)
        ->append(u"    .wsbool2        = "_j)
        ->append(::java::lang::Integer::toHexString(getWSBool2()))
        ->append(u"\n"_j)
        ->append(u"        .fittopage  = "_j)
        ->append(getFitToPage())
        ->append(u"\n"_j)
        ->append(u"        .displayguts= "_j)
        ->append(getDisplayGuts())
        ->append(u"\n"_j)
        ->append(u"        .alternateex= "_j)
        ->append(getAlternateExpression())
        ->append(u"\n"_j)
        ->append(u"        .alternatefo= "_j)
        ->append(getAlternateFormula())
        ->append(u"\n"_j)
        ->append(u"[/WSBOOL]\n"_j)->toString();
}

void poi::hssf::record::WSBoolRecord::serialize(::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeByte(getWSBool2());
    npc(out)->writeByte(getWSBool1());
}

int32_t poi::hssf::record::WSBoolRecord::getDataSize()
{
    return 2;
}

int16_t poi::hssf::record::WSBoolRecord::getSid()
{
    return sid;
}

java::lang::Object* poi::hssf::record::WSBoolRecord::clone()
{
    auto rec = new WSBoolRecord();
    npc(rec)->field_1_wsbool = field_1_wsbool;
    npc(rec)->field_2_wsbool = field_2_wsbool;
    return rec;
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::record::WSBoolRecord::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.WSBoolRecord", 39);
    return c;
}

void poi::hssf::record::WSBoolRecord::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        autobreaks_ = ::poi::util::BitFieldFactory::getInstance(1);
        dialog_ = ::poi::util::BitFieldFactory::getInstance(16);
        applystyles_ = ::poi::util::BitFieldFactory::getInstance(32);
        rowsumsbelow_ = ::poi::util::BitFieldFactory::getInstance(64);
        rowsumsright_ = ::poi::util::BitFieldFactory::getInstance(128);
        fittopage_ = ::poi::util::BitFieldFactory::getInstance(1);
        displayguts_ = ::poi::util::BitFieldFactory::getInstance(6);
        alternateexpression_ = ::poi::util::BitFieldFactory::getInstance(64);
        alternateformula_ = ::poi::util::BitFieldFactory::getInstance(128);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

int32_t poi::hssf::record::WSBoolRecord::serialize(int32_t offset, ::int8_tArray* data)
{
    return super::serialize(offset, data);
}

int8_tArray* poi::hssf::record::WSBoolRecord::serialize()
{
    return super::serialize();
}

java::lang::Class* poi::hssf::record::WSBoolRecord::getClass0()
{
    return class_();
}

