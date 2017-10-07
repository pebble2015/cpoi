// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFColorScaleFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFColorScaleFormatting.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/cf/ColorGradientFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/ColorGradientThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <org/apache/poi/hssf/record/common/ExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/usermodel/Color.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.hpp>
#include <org/apache/poi/ss/usermodel/ExtendedColor.hpp>
#include <SubArray.hpp>
#include <ObjectArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
    } // lang
} // java

namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace hssf
            {
                namespace record
                {
                    namespace cf
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
typedef ::SubArray< ::org::apache::poi::hssf::record::cf::ColorGradientThreshold, ThresholdArray, ::java::lang::CloneableArray > ColorGradientThresholdArray;
                    } // cf

                    namespace common
                    {
typedef ::SubArray< ::org::apache::poi::hssf::record::common::ExtendedColor, ::java::lang::ObjectArray, ::java::lang::CloneableArray > ExtendedColorArray;
                    } // common
                } // record
            } // hssf

            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::ConditionalFormattingThreshold, ::java::lang::ObjectArray > ConditionalFormattingThresholdArray;
                } // usermodel
            } // ss

            namespace hssf
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::hssf::usermodel::HSSFConditionalFormattingThreshold, ::java::lang::ObjectArray, ::org::apache::poi::ss::usermodel::ConditionalFormattingThresholdArray > HSSFConditionalFormattingThresholdArray;
                } // usermodel
            } // hssf

            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::Color, ::java::lang::ObjectArray > ColorArray;
typedef ::SubArray< ::org::apache::poi::ss::usermodel::ExtendedColor, ::java::lang::ObjectArray, ColorArray > ExtendedColorArray;
                } // usermodel
            } // ss

            namespace hssf
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::hssf::usermodel::HSSFExtendedColor, ::org::apache::poi::ss::usermodel::ExtendedColorArray > HSSFExtendedColorArray;
                } // usermodel
            } // hssf
        } // poi
    } // apache
} // org

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

org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::HSSFColorScaleFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::HSSFColorScaleFormatting(::org::apache::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet) 
    : HSSFColorScaleFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(cfRule12Record,sheet);
}

void org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::ctor(::org::apache::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet)
{
    super::ctor();
    this->sheet = sheet;
    this->cfRule12Record = cfRule12Record;
    this->colorFormatting = npc(this->cfRule12Record)->getColorGradientFormatting();
}

int32_t org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::getNumControlPoints()
{
    return npc(colorFormatting)->getNumControlPoints();
}

void org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::setNumControlPoints(int32_t num)
{
    npc(colorFormatting)->setNumControlPoints(num);
}

org::apache::poi::hssf::usermodel::HSSFExtendedColorArray* org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::getColors()
{
    auto colors = npc(colorFormatting)->getColors();
    auto hcolors = new HSSFExtendedColorArray(npc(colors)->length);
    for (auto i = int32_t(0); i < npc(colors)->length; i++) {
        hcolors->set(i, new HSSFExtendedColor((*colors)[i]));
    }
    return hcolors;
}

void org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::setColors(::org::apache::poi::ss::usermodel::ColorArray* colors)
{
    auto cr = new ::org::apache::poi::hssf::record::common::ExtendedColorArray(npc(colors)->length);
    for (auto i = int32_t(0); i < npc(colors)->length; i++) {
        cr->set(i, npc((java_cast< HSSFExtendedColor* >((*colors)[i])))->getExtendedColor());
    }
    npc(colorFormatting)->setColors(cr);
}

org::apache::poi::hssf::usermodel::HSSFConditionalFormattingThresholdArray* org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::getThresholds()
{
    ::org::apache::poi::hssf::record::cf::ThresholdArray* t = npc(colorFormatting)->getThresholds();
    auto ht = new HSSFConditionalFormattingThresholdArray(npc(t)->length);
    for (auto i = int32_t(0); i < npc(t)->length; i++) {
        ht->set(i, new HSSFConditionalFormattingThreshold((*t)[i], sheet));
    }
    return ht;
}

void org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::setThresholds(::org::apache::poi::ss::usermodel::ConditionalFormattingThresholdArray* thresholds)
{
    auto t = new ::org::apache::poi::hssf::record::cf::ColorGradientThresholdArray(npc(thresholds)->length);
    for (auto i = int32_t(0); i < npc(t)->length; i++) {
        auto hssfT = java_cast< HSSFConditionalFormattingThreshold* >((*thresholds)[i]);
        t->set(i, java_cast< ::org::apache::poi::hssf::record::cf::ColorGradientThreshold* >(npc(hssfT)->getThreshold()));
    }
    npc(colorFormatting)->setThresholds(t);
}

org::apache::poi::hssf::usermodel::HSSFConditionalFormattingThreshold* org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::createThreshold()
{
    return new HSSFConditionalFormattingThreshold(new ::org::apache::poi::hssf::record::cf::ColorGradientThreshold(), sheet);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFColorScaleFormatting", 54);
    return c;
}

java::lang::Class* org::apache::poi::hssf::usermodel::HSSFColorScaleFormatting::getClass0()
{
    return class_();
}

