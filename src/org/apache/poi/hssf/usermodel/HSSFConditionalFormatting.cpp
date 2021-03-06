// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFConditionalFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormatting.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <org/apache/poi/hssf/record/CFHeaderBase.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/aggregates/CFRecordsAggregate.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingRule.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
#include <ObjectArray.hpp>
#include <SubArray.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
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

poi::hssf::usermodel::HSSFConditionalFormatting::HSSFConditionalFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFConditionalFormatting::HSSFConditionalFormatting(HSSFSheet* sheet, ::poi::hssf::record::aggregates::CFRecordsAggregate* cfAggregate) 
    : HSSFConditionalFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet,cfAggregate);
}

void poi::hssf::usermodel::HSSFConditionalFormatting::ctor(HSSFSheet* sheet, ::poi::hssf::record::aggregates::CFRecordsAggregate* cfAggregate)
{
    super::ctor();
    if(sheet == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"sheet must not be null"_j);
    }
    if(cfAggregate == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cfAggregate must not be null"_j);
    }
    this->sheet = sheet;
    this->cfAggregate = cfAggregate;
}

poi::hssf::record::aggregates::CFRecordsAggregate* poi::hssf::usermodel::HSSFConditionalFormatting::getCFRecordsAggregate()
{
    return cfAggregate;
}

poi::ss::util::CellRangeAddressArray* poi::hssf::usermodel::HSSFConditionalFormatting::getFormattingRanges()
{
    return npc(npc(cfAggregate)->getHeader())->getCellRanges();
}

void poi::hssf::usermodel::HSSFConditionalFormatting::setFormattingRanges(::poi::ss::util::CellRangeAddressArray* ranges)
{
    npc(npc(cfAggregate)->getHeader())->setCellRanges(ranges);
}

void poi::hssf::usermodel::HSSFConditionalFormatting::setRule(int32_t idx, HSSFConditionalFormattingRule* cfRule)
{
    npc(cfAggregate)->setRule(idx, npc(cfRule)->getCfRuleRecord());
}

void poi::hssf::usermodel::HSSFConditionalFormatting::setRule(int32_t idx, ::poi::ss::usermodel::ConditionalFormattingRule* cfRule)
{
    setRule(idx, java_cast< HSSFConditionalFormattingRule* >(cfRule));
}

void poi::hssf::usermodel::HSSFConditionalFormatting::addRule(HSSFConditionalFormattingRule* cfRule)
{
    npc(cfAggregate)->addRule(npc(cfRule)->getCfRuleRecord());
}

void poi::hssf::usermodel::HSSFConditionalFormatting::addRule(::poi::ss::usermodel::ConditionalFormattingRule* cfRule)
{
    addRule(java_cast< HSSFConditionalFormattingRule* >(cfRule));
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFConditionalFormatting::getRule(int32_t idx)
{
    auto ruleRecord = npc(cfAggregate)->getRule(idx);
    return new HSSFConditionalFormattingRule(sheet, ruleRecord);
}

int32_t poi::hssf::usermodel::HSSFConditionalFormatting::getNumberOfRules()
{
    return npc(cfAggregate)->getNumberOfRules();
}

java::lang::String* poi::hssf::usermodel::HSSFConditionalFormatting::toString()
{
    return npc(cfAggregate)->toString();
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFConditionalFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFConditionalFormatting", 55);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFConditionalFormatting::getClass0()
{
    return class_();
}

