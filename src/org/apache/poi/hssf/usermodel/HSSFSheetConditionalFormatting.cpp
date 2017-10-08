// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSheetConditionalFormatting.java
#include <org/apache/poi/hssf/usermodel/HSSFSheetConditionalFormatting.hpp>

#include <java/lang/ArrayStoreException.hpp>
#include <java/lang/ClassCastException.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/IllegalArgumentException.hpp>
#include <java/lang/NullPointerException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/System.hpp>
#include <org/apache/poi/hssf/model/InternalSheet.hpp>
#include <org/apache/poi/hssf/record/CFRule12Record.hpp>
#include <org/apache/poi/hssf/record/CFRuleBase.hpp>
#include <org/apache/poi/hssf/record/CFRuleRecord.hpp>
#include <org/apache/poi/hssf/record/Record.hpp>
#include <org/apache/poi/hssf/record/RecordBase.hpp>
#include <org/apache/poi/hssf/record/StandardRecord.hpp>
#include <org/apache/poi/hssf/record/aggregates/CFRecordsAggregate.hpp>
#include <org/apache/poi/hssf/record/aggregates/ConditionalFormattingTable.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFExtendedColor.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFSheet.hpp>
#include <org/apache/poi/ss/SpreadsheetVersion.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormatting.hpp>
#include <org/apache/poi/ss/usermodel/ConditionalFormattingRule.hpp>
#include <org/apache/poi/ss/usermodel/DifferentialStyleProvider.hpp>
#include <org/apache/poi/ss/usermodel/ExtendedColor.hpp>
#include <org/apache/poi/ss/util/CellRangeAddress.hpp>
#include <org/apache/poi/ss/util/CellRangeAddressBase.hpp>
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

namespace poi
{
    namespace hssf
    {
        namespace record
        {
typedef ::SubArray< ::poi::hssf::record::RecordBase, ::java::lang::ObjectArray > RecordBaseArray;
typedef ::SubArray< ::poi::hssf::record::Record, RecordBaseArray > RecordArray;
typedef ::SubArray< ::poi::hssf::record::StandardRecord, RecordArray > StandardRecordArray;
typedef ::SubArray< ::poi::hssf::record::CFRuleBase, StandardRecordArray, ::java::lang::CloneableArray > CFRuleBaseArray;
        } // record
    } // hssf

    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::DifferentialStyleProvider, ::java::lang::ObjectArray > DifferentialStyleProviderArray;
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingRule, ::java::lang::ObjectArray, DifferentialStyleProviderArray > ConditionalFormattingRuleArray;
        } // usermodel
    } // ss

    namespace hssf
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::hssf::usermodel::HSSFConditionalFormattingRule, ::java::lang::ObjectArray, ::poi::ss::usermodel::ConditionalFormattingRuleArray > HSSFConditionalFormattingRuleArray;
        } // usermodel
    } // hssf

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

poi::hssf::usermodel::HSSFSheetConditionalFormatting::HSSFSheetConditionalFormatting(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    clinit();
}

poi::hssf::usermodel::HSSFSheetConditionalFormatting::HSSFSheetConditionalFormatting(HSSFSheet* sheet) 
    : HSSFSheetConditionalFormatting(*static_cast< ::default_init_tag* >(0))
{
    ctor(sheet);
}

void poi::hssf::usermodel::HSSFSheetConditionalFormatting::ctor(HSSFSheet* sheet)
{
    super::ctor();
    _sheet = sheet;
    _conditionalFormattingTable = npc(npc(sheet)->getSheet())->getConditionalFormattingTable();
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingRule(int8_t comparisonOperation, ::java::lang::String* formula1, ::java::lang::String* formula2)
{
    auto rr = ::poi::hssf::record::CFRuleRecord::create(_sheet, comparisonOperation, formula1, formula2);
    return new HSSFConditionalFormattingRule(_sheet, rr);
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingRule(int8_t comparisonOperation, ::java::lang::String* formula1)
{
    auto rr = ::poi::hssf::record::CFRuleRecord::create(_sheet, comparisonOperation, formula1, nullptr);
    return new HSSFConditionalFormattingRule(_sheet, rr);
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingRule(::java::lang::String* formula)
{
    auto rr = ::poi::hssf::record::CFRuleRecord::create(_sheet, formula);
    return new HSSFConditionalFormattingRule(_sheet, rr);
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingRule(::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet)
{
    auto rr = ::poi::hssf::record::CFRule12Record::create(_sheet, iconSet);
    return new HSSFConditionalFormattingRule(_sheet, rr);
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingRule(HSSFExtendedColor* color)
{
    auto rr = ::poi::hssf::record::CFRule12Record::create(_sheet, npc(color)->getExtendedColor());
    return new HSSFConditionalFormattingRule(_sheet, rr);
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingRule(::poi::ss::usermodel::ExtendedColor* color)
{
    return createConditionalFormattingRule(java_cast< HSSFExtendedColor* >(color));
}

poi::hssf::usermodel::HSSFConditionalFormattingRule* poi::hssf::usermodel::HSSFSheetConditionalFormatting::createConditionalFormattingColorScaleRule()
{
    auto rr = ::poi::hssf::record::CFRule12Record::createColorScale(_sheet);
    return new HSSFConditionalFormattingRule(_sheet, rr);
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(HSSFConditionalFormatting* cf)
{
    auto cfraClone = npc(npc(cf)->getCFRecordsAggregate())->cloneCFAggregate();
    return npc(_conditionalFormattingTable)->add(cfraClone);
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::usermodel::ConditionalFormatting* cf)
{
    return addConditionalFormatting(java_cast< HSSFConditionalFormatting* >(cf));
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, HSSFConditionalFormattingRuleArray* cfRules)
{
    if(regions == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"regions must not be null"_j);
    }
    for(auto range : *npc(regions)) 
                npc(range)->validate(::poi::ss::SpreadsheetVersion::EXCEL97);

    if(cfRules == nullptr) {
        throw new ::java::lang::IllegalArgumentException(u"cfRules must not be null"_j);
    }
    if(npc(cfRules)->length == 0) {
        throw new ::java::lang::IllegalArgumentException(u"cfRules must not be empty"_j);
    }
    if(npc(cfRules)->length > 3) {
        throw new ::java::lang::IllegalArgumentException(u"Number of rules must not exceed 3"_j);
    }
    auto rules = new ::poi::hssf::record::CFRuleBaseArray(npc(cfRules)->length);
    for (auto i = int32_t(0); i != npc(cfRules)->length; i++) {
        rules->set(i, npc((*cfRules)[i])->getCfRuleRecord());
    }
    auto cfra = new ::poi::hssf::record::aggregates::CFRecordsAggregate(regions, rules);
    return npc(_conditionalFormattingTable)->add(cfra);
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, ::poi::ss::usermodel::ConditionalFormattingRuleArray* cfRules)
{
    HSSFConditionalFormattingRuleArray* hfRules;
    if(dynamic_cast< HSSFConditionalFormattingRuleArray* >(cfRules) != nullptr)
        hfRules = java_cast< HSSFConditionalFormattingRuleArray* >(cfRules);
    else {
        hfRules = new HSSFConditionalFormattingRuleArray(npc(cfRules)->length);
        ::java::lang::System::arraycopy(cfRules, 0, hfRules, 0, npc(hfRules)->length);
    }
    return addConditionalFormatting(regions, hfRules);
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, HSSFConditionalFormattingRule* rule1)
{
    return addConditionalFormatting(regions, rule1 == nullptr ? static_cast< HSSFConditionalFormattingRuleArray* >(nullptr) : new HSSFConditionalFormattingRuleArray({rule1}));
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, ::poi::ss::usermodel::ConditionalFormattingRule* rule1)
{
    return addConditionalFormatting(regions, java_cast< HSSFConditionalFormattingRule* >(rule1));
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, HSSFConditionalFormattingRule* rule1, HSSFConditionalFormattingRule* rule2)
{
    return addConditionalFormatting(regions, new HSSFConditionalFormattingRuleArray({
        rule1
        , rule2
    }));
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, ::poi::ss::usermodel::ConditionalFormattingRule* rule1, ::poi::ss::usermodel::ConditionalFormattingRule* rule2)
{
    return addConditionalFormatting(regions, java_cast< HSSFConditionalFormattingRule* >(rule1), java_cast< HSSFConditionalFormattingRule* >(rule2));
}

poi::hssf::usermodel::HSSFConditionalFormatting* poi::hssf::usermodel::HSSFSheetConditionalFormatting::getConditionalFormattingAt(int32_t index)
{
    auto cf = npc(_conditionalFormattingTable)->get(index);
    if(cf == nullptr) {
        return nullptr;
    }
    return new HSSFConditionalFormatting(_sheet, cf);
}

int32_t poi::hssf::usermodel::HSSFSheetConditionalFormatting::getNumConditionalFormattings()
{
    return npc(_conditionalFormattingTable)->size();
}

void poi::hssf::usermodel::HSSFSheetConditionalFormatting::removeConditionalFormatting(int32_t index)
{
    npc(_conditionalFormattingTable)->remove(index);
}

extern java::lang::Class *class_(const char16_t *c, int n);

java::lang::Class* poi::hssf::usermodel::HSSFSheetConditionalFormatting::class_()
{
    static ::java::lang::Class* c = ::class_(u"org.apache.poi.hssf.usermodel.HSSFSheetConditionalFormatting", 60);
    return c;
}

java::lang::Class* poi::hssf::usermodel::HSSFSheetConditionalFormatting::getClass0()
{
    return class_();
}

