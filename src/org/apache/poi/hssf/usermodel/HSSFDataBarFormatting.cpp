// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFDataBarFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFDataBarFormatting.hpp>

#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/cf/DataBarFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/DataBarThreshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/usermodel/Color.hpp>

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(nullptr);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* npc(T* t)
{
    if(!t) throw new ::java::lang::NullPointerException();
    return t;
}

org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::HSSFDataBarFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::HSSFDataBarFormatting(::org::apache::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet) 
    : HSSFDataBarFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(cfRule12Record,sheet);
}

void org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::ctor(::org::apache::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet)
{
    super::ctor();
    this->sheet = sheet;
    this->cfRule12Record = cfRule12Record;
    this->databarFormatting = npc(this->cfRule12Record)->getDataBarFormatting();
}

bool org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::isLeftToRight()
{
    return !npc(databarFormatting)->isReversed();
}

void org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::setLeftToRight(bool ltr)
{
    npc(databarFormatting)->setReversed(!ltr);
}

int32_t org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::getWidthMin()
{
    return npc(databarFormatting)->getPercentMin();
}

void org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::setWidthMin(int32_t width)
{
    npc(databarFormatting)->setPercentMin(static_cast< int8_t >(width));
}

int32_t org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::getWidthMax()
{
    return npc(databarFormatting)->getPercentMax();
}

void org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::setWidthMax(int32_t width)
{
    npc(databarFormatting)->setPercentMax(static_cast< int8_t >(width));
}

org::apache::poi::hssf::usermodel::HSSFExtendedColor* org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::getColor()
{
    return new HSSFExtendedColor(npc(databarFormatting)->getColor());
}

void org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::setColor(::org::apache::poi::ss::usermodel::Color* color)
{
    auto hcolor = java_cast< HSSFExtendedColor* >(color);
    npc(databarFormatting)->setColor(npc(hcolor)->getExtendedColor());
}

org::apache::poi::hssf::usermodel::HSSFConditionalFormattingThreshold* org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::getMinThreshold()
{
    return new HSSFConditionalFormattingThreshold(npc(databarFormatting)->getThresholdMin(), sheet);
}

org::apache::poi::hssf::usermodel::HSSFConditionalFormattingThreshold* org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::getMaxThreshold()
{
    return new HSSFConditionalFormattingThreshold(npc(databarFormatting)->getThresholdMax(), sheet);
}

bool org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::isIconOnly()
{
    return npc(databarFormatting)->isIconOnly();
}

void org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::setIconOnly(bool only)
{
    npc(databarFormatting)->setIconOnly(only);
}

org::apache::poi::hssf::usermodel::HSSFConditionalFormattingThreshold* org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::createThreshold()
{
    return new HSSFConditionalFormattingThreshold(new ::org::apache::poi::hssf::record::cf::DataBarThreshold(), sheet);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFDataBarFormatting", 51);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFDataBarFormatting::getClass0()
{
    return class_();
}

