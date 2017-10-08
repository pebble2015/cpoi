// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFIconMultiStateFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFIconMultiStateFormatting.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/cf/IconMultiStateFormatting.hpp>
#include <org/apache/poi/hssf/record/cf/IconMultiStateThreshold.hpp>
#include <org/apache/poi/hssf/record/cf/Threshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingThreshold.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingThreshold.hpp>
#include <org/apache/poi/ss/usermodel/IconMultiStateFormatting_IconSet.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace hssf
    {
        namespace record
        {
            namespace cf
            {
typedef ::SubArray< ::poi::hssf::record::cf::Threshold, ::java::lang::ObjectArray > ThresholdArray;
            } // cf
        } // record
    } // hssf

    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingThreshold, ::java::lang::ObjectArray > ConditionalFormattingThresholdArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFConditionalFormattingThreshold, ::java::lang::ObjectArray, ::poi::ss::usermodel::ConditionalFormattingThresholdArray > HSSFConditionalFormattingThresholdArray;
        } // usermodel
    } // hssf
} // poi

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

poi::hssf::usermodel::HSSFIconMultiStateFormatting::HSSFIconMultiStateFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFIconMultiStateFormatting::HSSFIconMultiStateFormatting(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet) 
    : HSSFIconMultiStateFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(cfRule12Record,sheet);
}

void poi::hssf::usermodel::HSSFIconMultiStateFormatting::ctor(::poi::hssf::record::CFRule12Record* cfRule12Record, HSSFSheet* sheet)
{
    super::ctor();
    this->sheet = sheet;
    this->cfRule12Record = cfRule12Record;
    this->iconFormatting = npc(this->cfRule12Record)->getMultiStateFormatting();
}

poi::ss::usermodel::IconMultiStateFormatting_IconSet* poi::hssf::usermodel::HSSFIconMultiStateFormatting::getIconSet()
{
    return npc(iconFormatting)->getIconSet();
}

void poi::hssf::usermodel::HSSFIconMultiStateFormatting::setIconSet(::poi::ss::usermodel::IconMultiStateFormatting_IconSet* set)
{
    npc(iconFormatting)->setIconSet(set);
}

bool poi::hssf::usermodel::HSSFIconMultiStateFormatting::isIconOnly()
{
    return npc(iconFormatting)->isIconOnly();
}

void poi::hssf::usermodel::HSSFIconMultiStateFormatting::setIconOnly(bool only)
{
    npc(iconFormatting)->setIconOnly(only);
}

bool poi::hssf::usermodel::HSSFIconMultiStateFormatting::isReversed()
{
    return npc(iconFormatting)->isReversed();
}

void poi::hssf::usermodel::HSSFIconMultiStateFormatting::setReversed(bool reversed)
{
    npc(iconFormatting)->setReversed(reversed);
}

poi::hssf::usermodel::HSSFConditionalFormattingThresholdArray* poi::hssf::usermodel::HSSFIconMultiStateFormatting::getThresholds()
{
    auto t = npc(iconFormatting)->getThresholds();
    auto ht = new HSSFConditionalFormattingThresholdArray(npc(t)->length);
    for (auto i = int32_t(0); i < npc(t)->length; i++) {
        ht->set(i, new HSSFConditionalFormattingThreshold((*t)[i], sheet));
    }
    return ht;
}

void poi::hssf::usermodel::HSSFIconMultiStateFormatting::setThresholds(::poi::ss::usermodel::ConditionalFormattingThresholdArray* thresholds)
{
    auto t = new ::poi::hssf::record::cf::ThresholdArray(npc(thresholds)->length);
    for (auto i = int32_t(0); i < npc(t)->length; i++) {
        t->set(i, npc((java_cast< HSSFConditionalFormattingThreshold* >((*thresholds)[i])))->getThreshold());
    }
    npc(iconFormatting)->setThresholds(t);
}

poi::hssf::usermodel::HSSFConditionalFormattingThreshold* poi::hssf::usermodel::HSSFIconMultiStateFormatting::createThreshold()
{
    return new HSSFConditionalFormattingThreshold(new ::poi::hssf::record::cf::IconMultiStateThreshold(), sheet);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFIconMultiStateFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFIconMultiStateFormatting", 58);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFIconMultiStateFormatting::getClass0()
{
    return class_();
}

