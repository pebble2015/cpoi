// Generated from /POI/java/org/apache/poi/hssf/usermodel/HSSFSheetConditionalFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/hssf/record/aggregates/fwd-POI.hpp>
#include <org/apache/poi/hssf/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>
#include <org/apache/poi/ss/usermodel/SheetConditionalFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormatting.hpp>
#include <org/apache/poi/hssf/usermodel/HSSFConditionalFormattingRule.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace apache
    {
        namespace poi
        {
            namespace ss
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::ss::usermodel::DifferentialStyleProvider, ::java::lang::ObjectArray > DifferentialStyleProviderArray;
typedef ::SubArray< ::org::apache::poi::ss::usermodel::ConditionalFormattingRule, ::java::lang::ObjectArray, DifferentialStyleProviderArray > ConditionalFormattingRuleArray;
                } // usermodel
            } // ss

            namespace hssf
            {
                namespace usermodel
                {
typedef ::SubArray< ::org::apache::poi::hssf::usermodel::HSSFConditionalFormattingRule, ::java::lang::ObjectArray, ::org::apache::poi::ss::usermodel::ConditionalFormattingRuleArray > HSSFConditionalFormattingRuleArray;
                } // usermodel
            } // hssf

            namespace ss
            {
                namespace util
                {
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::org::apache::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
                } // util
            } // ss
        } // poi
    } // apache
} // org

struct default_init_tag;

class org::apache::poi::hssf::usermodel::HSSFSheetConditionalFormatting final
    : public virtual ::java::lang::Object
    , public ::org::apache::poi::ss::usermodel::SheetConditionalFormatting
{

public:
    typedef ::java::lang::Object super;

private:
    HSSFSheet* _sheet {  };
    ::org::apache::poi::hssf::record::aggregates::ConditionalFormattingTable* _conditionalFormattingTable {  };
protected:
    void ctor(HSSFSheet* sheet);

public:
    HSSFConditionalFormattingRule* createConditionalFormattingRule(int8_t comparisonOperation, ::java::lang::String* formula1, ::java::lang::String* formula2) override;
    HSSFConditionalFormattingRule* createConditionalFormattingRule(int8_t comparisonOperation, ::java::lang::String* formula1) override;
    HSSFConditionalFormattingRule* createConditionalFormattingRule(::java::lang::String* formula) override;
    HSSFConditionalFormattingRule* createConditionalFormattingRule(::org::apache::poi::ss::usermodel::IconMultiStateFormatting_IconSet* iconSet) override;
    HSSFConditionalFormattingRule* createConditionalFormattingRule(HSSFExtendedColor* color);
    HSSFConditionalFormattingRule* createConditionalFormattingRule(::org::apache::poi::ss::usermodel::ExtendedColor* color) override;
    HSSFConditionalFormattingRule* createConditionalFormattingColorScaleRule() override;
    int32_t addConditionalFormatting(HSSFConditionalFormatting* cf);
    int32_t addConditionalFormatting(::org::apache::poi::ss::usermodel::ConditionalFormatting* cf) override;
    int32_t addConditionalFormatting(::org::apache::poi::ss::util::CellRangeAddressArray* regions, HSSFConditionalFormattingRuleArray* cfRules);
    int32_t addConditionalFormatting(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::ss::usermodel::ConditionalFormattingRuleArray* cfRules) override;
    int32_t addConditionalFormatting(::org::apache::poi::ss::util::CellRangeAddressArray* regions, HSSFConditionalFormattingRule* rule1);
    int32_t addConditionalFormatting(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::ss::usermodel::ConditionalFormattingRule* rule1) override;
    int32_t addConditionalFormatting(::org::apache::poi::ss::util::CellRangeAddressArray* regions, HSSFConditionalFormattingRule* rule1, HSSFConditionalFormattingRule* rule2);
    int32_t addConditionalFormatting(::org::apache::poi::ss::util::CellRangeAddressArray* regions, ::org::apache::poi::ss::usermodel::ConditionalFormattingRule* rule1, ::org::apache::poi::ss::usermodel::ConditionalFormattingRule* rule2) override;
    HSSFConditionalFormatting* getConditionalFormattingAt(int32_t index) override;
    int32_t getNumConditionalFormattings() override;
    void removeConditionalFormatting(int32_t index) override;

    // Generated

public: /* package */
    HSSFSheetConditionalFormatting(HSSFSheet* sheet);
protected:
    HSSFSheetConditionalFormatting(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
