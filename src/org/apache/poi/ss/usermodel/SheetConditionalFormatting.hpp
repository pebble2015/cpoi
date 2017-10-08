// Generated from /POI/java/org/apache/poi/ss/usermodel/SheetConditionalFormatting.java

#pragma once

#include <fwd-POI.hpp>
#include <java/lang/fwd-POI.hpp>
#include <org/apache/poi/ss/usermodel/fwd-POI.hpp>
#include <org/apache/poi/ss/util/fwd-POI.hpp>
#include <java/lang/Object.hpp>

template<typename ComponentType, typename... Bases> struct SubArray;
namespace poi
{
    namespace ss
    {
        namespace usermodel
        {
typedef ::SubArray< ::poi::ss::usermodel::DifferentialStyleProvider, ::java::lang::ObjectArray > DifferentialStyleProviderArray;
typedef ::SubArray< ::poi::ss::usermodel::ConditionalFormattingRule, ::java::lang::ObjectArray, DifferentialStyleProviderArray > ConditionalFormattingRuleArray;
        } // usermodel

        namespace util
        {
typedef ::SubArray< ::poi::ss::util::CellRangeAddressBase, ::java::lang::ObjectArray > CellRangeAddressBaseArray;
typedef ::SubArray< ::poi::ss::util::CellRangeAddress, CellRangeAddressBaseArray > CellRangeAddressArray;
        } // util
    } // ss
} // poi

struct poi::ss::usermodel::SheetConditionalFormatting
    : public virtual ::java::lang::Object
{
    virtual int32_t addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, ConditionalFormattingRule* rule) = 0;
    virtual int32_t addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, ConditionalFormattingRule* rule1, ConditionalFormattingRule* rule2) = 0;
    virtual int32_t addConditionalFormatting(::poi::ss::util::CellRangeAddressArray* regions, ConditionalFormattingRuleArray* cfRules) = 0;
    virtual int32_t addConditionalFormatting(ConditionalFormatting* cf) = 0;
    virtual ConditionalFormattingRule* createConditionalFormattingRule(int8_t comparisonOperation, ::java::lang::String* formula1, ::java::lang::String* formula2) = 0;
    virtual ConditionalFormattingRule* createConditionalFormattingRule(int8_t comparisonOperation, ::java::lang::String* formula) = 0;
    virtual ConditionalFormattingRule* createConditionalFormattingRule(::java::lang::String* formula) = 0;
    virtual ConditionalFormattingRule* createConditionalFormattingRule(ExtendedColor* color) = 0;
    virtual ConditionalFormattingRule* createConditionalFormattingRule(IconMultiStateFormatting_IconSet* iconSet) = 0;
    virtual ConditionalFormattingRule* createConditionalFormattingColorScaleRule() = 0;
    virtual ConditionalFormatting* getConditionalFormattingAt(int32_t index) = 0;
    virtual int32_t getNumConditionalFormattings() = 0;
    virtual void removeConditionalFormatting(int32_t index) = 0;

    // Generated
    static ::java::lang::Class *class_();
};
