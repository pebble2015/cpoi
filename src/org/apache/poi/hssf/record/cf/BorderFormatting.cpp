// Generated from /POI/java/org/apache/poi/hssf/record/cf/BorderFormatting.java
#include <org/apache/poi/hssf/record/cf/BorderFormatting.hpp>

#include <java/lang/Integer.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <org/apache/poi/util/BitField.hpp>
#include <org/apache/poi/util/BitFieldFactory.hpp>
#include <org/apache/poi/util/LittleEndian.hpp>
#include <org/apache/poi/util/LittleEndianInput.hpp>
#include <org/apache/poi/util/LittleEndianOutput.hpp>

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::record::cf::BorderFormatting::BorderFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::record::cf::BorderFormatting::BorderFormatting() 
    : BorderFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

org::apache::poi::hssf::record::cf::BorderFormatting::BorderFormatting(::org::apache::poi::util::LittleEndianInput* in) 
    : BorderFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(in);
}

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_NONE;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_THIN;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_MEDIUM;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_DASHED;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_HAIR;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_THICK;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_DOUBLE;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_DOTTED;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_MEDIUM_DASHED;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_DASH_DOT;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_MEDIUM_DASH_DOT;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_DASH_DOT_DOT;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_MEDIUM_DASH_DOT_DOT;

constexpr int16_t org::apache::poi::hssf::record::cf::BorderFormatting::BORDER_SLANTED_DASH_DOT;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordLeftLineStyle()
{
    clinit();
    return bordLeftLineStyle_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordLeftLineStyle_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordRightLineStyle()
{
    clinit();
    return bordRightLineStyle_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordRightLineStyle_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordTopLineStyle()
{
    clinit();
    return bordTopLineStyle_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordTopLineStyle_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordBottomLineStyle()
{
    clinit();
    return bordBottomLineStyle_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordBottomLineStyle_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordLeftLineColor()
{
    clinit();
    return bordLeftLineColor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordLeftLineColor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordRightLineColor()
{
    clinit();
    return bordRightLineColor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordRightLineColor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordTlBrLineOnOff()
{
    clinit();
    return bordTlBrLineOnOff_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordTlBrLineOnOff_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordBlTrtLineOnOff()
{
    clinit();
    return bordBlTrtLineOnOff_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordBlTrtLineOnOff_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordTopLineColor()
{
    clinit();
    return bordTopLineColor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordTopLineColor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordBottomLineColor()
{
    clinit();
    return bordBottomLineColor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordBottomLineColor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordDiagLineColor()
{
    clinit();
    return bordDiagLineColor_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordDiagLineColor_;

org::apache::poi::util::BitField*& org::apache::poi::hssf::record::cf::BorderFormatting::bordDiagLineStyle()
{
    clinit();
    return bordDiagLineStyle_;
}
org::apache::poi::util::BitField* org::apache::poi::hssf::record::cf::BorderFormatting::bordDiagLineStyle_;

void org::apache::poi::hssf::record::cf::BorderFormatting::ctor()
{
    super::ctor();
    field_13_border_styles1 = 0;
    field_14_border_styles2 = 0;
}

void org::apache::poi::hssf::record::cf::BorderFormatting::ctor(::org::apache::poi::util::LittleEndianInput* in)
{
    super::ctor();
    field_13_border_styles1 = npc(in)->readInt();
    field_14_border_styles2 = npc(in)->readInt();
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getDataLength()
{
    return 8;
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBorderLeft(int32_t border)
{
    field_13_border_styles1 = npc(bordLeftLineStyle_)->setValue(field_13_border_styles1, border);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getBorderLeft()
{
    return npc(bordLeftLineStyle_)->getValue(field_13_border_styles1);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBorderRight(int32_t border)
{
    field_13_border_styles1 = npc(bordRightLineStyle_)->setValue(field_13_border_styles1, border);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getBorderRight()
{
    return npc(bordRightLineStyle_)->getValue(field_13_border_styles1);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBorderTop(int32_t border)
{
    field_13_border_styles1 = npc(bordTopLineStyle_)->setValue(field_13_border_styles1, border);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getBorderTop()
{
    return npc(bordTopLineStyle_)->getValue(field_13_border_styles1);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBorderBottom(int32_t border)
{
    field_13_border_styles1 = npc(bordBottomLineStyle_)->setValue(field_13_border_styles1, border);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getBorderBottom()
{
    return npc(bordBottomLineStyle_)->getValue(field_13_border_styles1);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBorderDiagonal(int32_t border)
{
    field_14_border_styles2 = npc(bordDiagLineStyle_)->setValue(field_14_border_styles2, border);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getBorderDiagonal()
{
    return npc(bordDiagLineStyle_)->getValue(field_14_border_styles2);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setLeftBorderColor(int32_t color)
{
    field_13_border_styles1 = npc(bordLeftLineColor_)->setValue(field_13_border_styles1, color);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getLeftBorderColor()
{
    return npc(bordLeftLineColor_)->getValue(field_13_border_styles1);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setRightBorderColor(int32_t color)
{
    field_13_border_styles1 = npc(bordRightLineColor_)->setValue(field_13_border_styles1, color);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getRightBorderColor()
{
    return npc(bordRightLineColor_)->getValue(field_13_border_styles1);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setTopBorderColor(int32_t color)
{
    field_14_border_styles2 = npc(bordTopLineColor_)->setValue(field_14_border_styles2, color);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getTopBorderColor()
{
    return npc(bordTopLineColor_)->getValue(field_14_border_styles2);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBottomBorderColor(int32_t color)
{
    field_14_border_styles2 = npc(bordBottomLineColor_)->setValue(field_14_border_styles2, color);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getBottomBorderColor()
{
    return npc(bordBottomLineColor_)->getValue(field_14_border_styles2);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setDiagonalBorderColor(int32_t color)
{
    field_14_border_styles2 = npc(bordDiagLineColor_)->setValue(field_14_border_styles2, color);
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::getDiagonalBorderColor()
{
    return npc(bordDiagLineColor_)->getValue(field_14_border_styles2);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setForwardDiagonalOn(bool on)
{
    field_13_border_styles1 = npc(bordBlTrtLineOnOff_)->setBoolean(field_13_border_styles1, on);
}

void org::apache::poi::hssf::record::cf::BorderFormatting::setBackwardDiagonalOn(bool on)
{
    field_13_border_styles1 = npc(bordTlBrLineOnOff_)->setBoolean(field_13_border_styles1, on);
}

bool org::apache::poi::hssf::record::cf::BorderFormatting::isForwardDiagonalOn()
{
    return npc(bordBlTrtLineOnOff_)->isSet(field_13_border_styles1);
}

bool org::apache::poi::hssf::record::cf::BorderFormatting::isBackwardDiagonalOn()
{
    return npc(bordTlBrLineOnOff_)->isSet(field_13_border_styles1);
}

java::lang::String* org::apache::poi::hssf::record::cf::BorderFormatting::toString()
{
    auto buffer = new ::java::lang::StringBuffer();
    npc(buffer)->append(u"    [Border Formatting]\n"_j);
    npc(npc(npc(buffer)->append(u"          .lftln     = "_j))->append(::java::lang::Integer::toHexString(getBorderLeft())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .rgtln     = "_j))->append(::java::lang::Integer::toHexString(getBorderRight())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .topln     = "_j))->append(::java::lang::Integer::toHexString(getBorderTop())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .btmln     = "_j))->append(::java::lang::Integer::toHexString(getBorderBottom())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .leftborder= "_j))->append(::java::lang::Integer::toHexString(getLeftBorderColor())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .rghtborder= "_j))->append(::java::lang::Integer::toHexString(getRightBorderColor())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .topborder= "_j))->append(::java::lang::Integer::toHexString(getTopBorderColor())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .bottomborder= "_j))->append(::java::lang::Integer::toHexString(getBottomBorderColor())))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .fwdiag= "_j))->append(isForwardDiagonalOn()))->append(u"\n"_j);
    npc(npc(npc(buffer)->append(u"          .bwdiag= "_j))->append(isBackwardDiagonalOn()))->append(u"\n"_j);
    npc(buffer)->append(u"    [/Border Formatting]\n"_j);
    return npc(buffer)->toString();
}

org::apache::poi::hssf::record::cf::BorderFormatting* org::apache::poi::hssf::record::cf::BorderFormatting::clone()
{
    auto rec = new BorderFormatting();
    npc(rec)->field_13_border_styles1 = field_13_border_styles1;
    npc(rec)->field_14_border_styles2 = field_14_border_styles2;
    return rec;
}

int32_t org::apache::poi::hssf::record::cf::BorderFormatting::serialize(int32_t offset, ::int8_tArray* data)
{
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(0), field_13_border_styles1);
    ::org::apache::poi::util::LittleEndian::putInt(data, offset + int32_t(4), field_14_border_styles2);
    return 8;
}

void org::apache::poi::hssf::record::cf::BorderFormatting::serialize(::org::apache::poi::util::LittleEndianOutput* out)
{
    npc(out)->writeInt(field_13_border_styles1);
    npc(out)->writeInt(field_14_border_styles2);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::record::cf::BorderFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.record.cf.BorderFormatting", 46);
    return c;
}

void org::apache::poi::hssf::record::cf::BorderFormatting::clinit()
{
    super::clinit();
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        bordLeftLineStyle_ = ::org::apache::poi::util::BitFieldFactory::getInstance(15);
        bordRightLineStyle_ = ::org::apache::poi::util::BitFieldFactory::getInstance(240);
        bordTopLineStyle_ = ::org::apache::poi::util::BitFieldFactory::getInstance(3840);
        bordBottomLineStyle_ = ::org::apache::poi::util::BitFieldFactory::getInstance(61440);
        bordLeftLineColor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(8323072);
        bordRightLineColor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1065353216);
        bordTlBrLineOnOff_ = ::org::apache::poi::util::BitFieldFactory::getInstance(1073741824);
        bordBlTrtLineOnOff_ = ::org::apache::poi::util::BitFieldFactory::getInstance(int32_t(-0x7fffffff-1));
        bordTopLineColor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(127);
        bordBottomLineColor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(16256);
        bordDiagLineColor_ = ::org::apache::poi::util::BitFieldFactory::getInstance(2080768);
        bordDiagLineStyle_ = ::org::apache::poi::util::BitFieldFactory::getInstance(31457280);
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* org::apache::poi::hssf::record::cf::BorderFormatting::getClass0()
{
    return class_();
}

